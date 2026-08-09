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
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* letn3910 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                        Rc_BTree_int_User r2  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (merged );
                        List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = replaceAt_List_Rc_BTree_int_User (r1 , ((Rc_BTree_int_User   )({ /* letnmove3915 */
                          Rc_BTree_int_User moved_var3914  = r2 ;
                          // ----------
                          memset ((&r2 ), 0, sizeof(r2 ));
                          moved_var3914 ;
                        })), pchild_index );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r3 );
                      }));
                  }) : ({ /* letn3921 */
                    // ----------
                    ;
                    ({ /* progn3923 */
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
    return ({ /* letn3954 */
        Maybe_Rc_BTree_int_User match3953  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match3953 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn3956 */
          bool __h_case_result  = (true  &&  (((match3953 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3957 */
                right_child_rc  = (((match3953 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3962 */
              ({ /* letn3969 */
                Maybe_BTree_int_User match3968  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match3968 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn3971 */
                  bool __h_case_result  = (true  &&  (((match3968 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3972 */
                        right_child  = (((match3968 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3977 */
                      ({ /* letn3983 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn3985 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3986 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn3991 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4001 */
                                  typeof((((right_child_items -> __h_data). Cons). __h_0_mem)) first_item ;
                                  typeof((((right_child_items -> __h_data). Cons). __h_1_mem)) tail ;
                                  // ----------
                                  ;
                                  ({ /* letn4003 */
                                    bool __h_case_result  = (true  &&  (((right_child_items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4004 */
                                            first_item  = (((right_child_items -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn4006 */
                                            tail  = (((right_child_items -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4011 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* letn4025 */
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
                                      }) : ({ /* letn4044 */
                                        // ----------
                                        ;
                                        ({ /* progn4046 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4055 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
                                  // ----------
                                  ;
                                  ({ /* letn4057 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4058 */
                                          head  = (((current -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4063 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4076 */
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
                                      }) : ({ /* letn4091 */
                                        // ----------
                                        ;
                                        ({ /* progn4093 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4099 */
                              // ----------
                              ;
                              ({ /* progn4101 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4107 */
                      // ----------
                      ;
                      ({ /* progn4109 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4115 */
              // ----------
              ;
              ({ /* progn4117 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn4131 */
        typeof((((wleft . __h_data). Just). __h_0_mem)) left ;
        typeof((((left -> __h_data). Cons). __h_0_mem)) left_item ;
        // ----------
        ;
        ({ /* letn4133 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4134 */
                  left  = (((wleft . __h_data). Just). __h_0_mem) ;
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4136 */
                      left_item  = (((left -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4141 */
              ({ /* letn4148 */
                Maybe_Rc_BTree_int_User match4147  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4147 . __h_data). Just). __h_0_mem)) left_child_rc ;
                // ----------
                ;
                ({ /* letn4150 */
                  bool __h_case_result  = (true  &&  (((match4147 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4151 */
                        left_child_rc  = (((match4147 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4156 */
                      ({ /* letn4163 */
                        Maybe_BTree_int_User match4162  = deref_Rc_BTree_int_User (left_child_rc );
                        typeof((((match4162 . __h_data). Just). __h_0_mem)) left_child ;
                        // ----------
                        ;
                        ({ /* letn4165 */
                          bool __h_case_result  = (true  &&  (((match4162 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4166 */
                                left_child  = (((match4162 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4171 */
                              ({ /* letn4177 */
                                typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                // ----------
                                ;
                                ({ /* letn4179 */
                                  bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4180 */
                                        left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn4185 */
                                      (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4196 */
                                          List_BTree_int_User_pair_t last  = last_List_BTree_int_User_pair_t (left_child_items );
                                          typeof((((last -> __h_data). Cons). __h_0_mem)) last_item ;
                                          // ----------
                                          ;
                                          ({ /* letn4198 */
                                            bool __h_case_result  = (true  &&  (((last -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4199 */
                                                  last_item  = (((last -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4204 */
                                                ({ /* letn4207 */
                                                  List_BTree_int_User_pair_t last_spent  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = last ;
                                                  // ----------
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* letn4220 */
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
                                              }) : ({ /* letn4238 */
                                                // ----------
                                                ;
                                                ({ /* progn4240 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                });
                                              }));
                                          });
                                        }) : ({ /* letn4248 */
                                          Either_BTree_int_User_Error_BTree_int_User match4247  = borrowRight (child_items );
                                          // ----------
                                          ;
                                          ({ /* letn4250 */
                                            bool __h_case_result  = (true  &&  ((match4247 . __h_ctor) ==  __h_Left_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4254 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* letn4267 */
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
                                              }) : ({ /* letn4282 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4247 ;
                                                // ----------
                                                ;
                                                ({ /* progn4284 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        }));
                                    }) : ({ /* letn4288 */
                                      // ----------
                                      ;
                                      ({ /* progn4290 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn4296 */
                              // ----------
                              ;
                              ({ /* progn4298 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4304 */
                      // ----------
                      ;
                      ({ /* progn4306 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4312 */
              // ----------
              ;
              ({ /* progn4314 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* letn4317 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4322 */
        typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
        // ----------
        ;
        ({ /* letn4324 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn4325 */
                child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4330 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4341 */
                  BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* letn4346 */
              typeof((((nchild -> __h_data). Internal). __h_0_mem)) child_items ;
              // ----------
              ;
              ({ /* letn4348 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn4349 */
                      child_items  = (((nchild -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4354 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4356 */
                        BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* letn4360 */
                    typeof((((nchild -> __h_data). Leaf). __h_0_mem)) child_items ;
                    // ----------
                    ;
                    ({ /* letn4362 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4363 */
                            child_items  = (((nchild -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn4368 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4370 */
                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* letn4374 */
                          // ----------
                          ;
                          ({ /* progn4376 */
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
    return ({ /* letn4405 */
        Maybe_Rc_BTree_int_User match4404  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4404 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4407 */
          bool __h_case_result  = (true  &&  (((match4404 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4408 */
                right_child_rc  = (((match4404 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4413 */
              ({ /* letn4420 */
                Maybe_BTree_int_User match4419  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4419 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4422 */
                  bool __h_case_result  = (true  &&  (((match4419 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4423 */
                        right_child  = (((match4419 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4428 */
                      ({ /* letn4434 */
                        typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_child_items ;
                        typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_child_children ;
                        // ----------
                        ;
                        ({ /* letn4436 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4437 */
                                  right_child_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4439 */
                                  right_child_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4444 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4456 */
                                  Maybe_BTree_int_User_pair_t match4454  = min_BTree_int_User (right_child );
                                  typeof((((match4454 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4458 */
                                    bool __h_case_result  = (true  &&  (((match4454 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4459 */
                                            min  = (((match4454 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4461 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4466 */
                                        ({ /* letn4473 */
                                          Either_BTree_int_User_Error_BTree_int_User match4472  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4472 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4475 */
                                            bool __h_case_result  = (true  &&  (((match4472 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4476 */
                                                  nchild  = (((match4472 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4481 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4489 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4472 ;
                                                // ----------
                                                ;
                                                ({ /* progn4491 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4495 */
                                        // ----------
                                        ;
                                        ({ /* progn4497 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4506 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                  typeof((current_item . __h_0_mem)) current_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4508 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4509 */
                                            current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4511 */
                                              current_key  = (current_item . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4516 */
                                        ({ /* letn4524 */
                                          List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                          BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                          List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                          List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                          // ----------
                                          ({ /* letn4538 */
                                            Either_BTree_int_User_Error_BTree_int_User match4537  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match4537 . __h_data). Right). __h_0_mem)) ntree ;
                                            // ----------
                                            ;
                                            ({ /* letn4540 */
                                              bool __h_case_result  = (true  &&  (((match4537 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4541 */
                                                    ntree  = (((match4537 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn4546 */
                                                  ({ /* letn4553 */
                                                    BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                    typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn4555 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4556 */
                                                              branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn4558 */
                                                              branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn4563 */
                                                          ({ /* letn4569 */
                                                            typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn4571 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4572 */
                                                                    branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn4577 */
                                                                  ({ /* letn4580 */
                                                                    BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                    BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4590 */
                                                                        List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                        List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                        // ----------
                                                                        cloneAll_Rc_BTree_int_User (r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* letn4597 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn4599 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn4605 */
                                                          // ----------
                                                          ;
                                                          ({ /* letn4607 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4611 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4620 */
                                                                    Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                    List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4624 */
                                                                      Rc_BTree_int_User moved_var4623  = r9 ;
                                                                      // ----------
                                                                      memset ((&r9 ), 0, sizeof(r9 ));
                                                                      moved_var4623 ;
                                                                    })), r7 );
                                                                    List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r11 );
                                                                  })));
                                                              }) : ({ /* letn4631 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn4633 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn4639 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match4537 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn4641 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* letn4645 */
                                        // ----------
                                        ;
                                        ({ /* progn4647 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4653 */
                              typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_child_items ;
                              typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_child_children ;
                              // ----------
                              ;
                              ({ /* letn4655 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn4656 */
                                        right_child_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn4658 */
                                        right_child_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn4663 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4665 */
                                        Maybe_BTree_int_User_pair_t match4454  = min_BTree_int_User (right_child );
                                        typeof((((match4454 . __h_data). Just). __h_0_mem)) min ;
                                        typeof((min . __h_0_mem)) min_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4667 */
                                          bool __h_case_result  = (true  &&  (((match4454 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4668 */
                                                  min  = (((match4454 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4670 */
                                                    min_key  = (min . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4675 */
                                              ({ /* letn4677 */
                                                Either_BTree_int_User_Error_BTree_int_User match4472  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match4472 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn4679 */
                                                  bool __h_case_result  = (true  &&  (((match4472 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4680 */
                                                        nchild  = (((match4472 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn4685 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                                    }) : ({ /* letn4687 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match4472 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn4689 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn4691 */
                                              // ----------
                                              ;
                                              ({ /* progn4693 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* letn4695 */
                                        typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                        typeof((current_item . __h_0_mem)) current_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4697 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4698 */
                                                  current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4700 */
                                                    current_key  = (current_item . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4705 */
                                              ({ /* letn4707 */
                                                List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ({ /* letn4709 */
                                                  Either_BTree_int_User_Error_BTree_int_User match4537  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match4537 . __h_data). Right). __h_0_mem)) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn4711 */
                                                    bool __h_case_result  = (true  &&  (((match4537 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4712 */
                                                          ntree  = (((match4537 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn4717 */
                                                        ({ /* letn4719 */
                                                          BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                          typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn4721 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4722 */
                                                                    branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn4724 */
                                                                    branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4729 */
                                                                ({ /* letn4731 */
                                                                  typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn4733 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4734 */
                                                                          branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn4739 */
                                                                        ({ /* letn4741 */
                                                                          BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                          BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4743 */
                                                                              List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                              List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                              // ----------
                                                                              cloneAll_Rc_BTree_int_User (r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* letn4745 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn4747 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn4749 */
                                                                // ----------
                                                                ;
                                                                ({ /* letn4751 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn4755 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4757 */
                                                                          Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                          List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4759 */
                                                                            Rc_BTree_int_User moved_var4758  = r9 ;
                                                                            // ----------
                                                                            memset ((&r9 ), 0, sizeof(r9 ));
                                                                            moved_var4758 ;
                                                                          })), r7 );
                                                                          List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          cloneAll_Rc_BTree_int_User (r11 );
                                                                        })));
                                                                    }) : ({ /* letn4762 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn4764 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn4766 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match4537 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn4768 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* letn4770 */
                                              // ----------
                                              ;
                                              ({ /* progn4772 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* letn4776 */
                                    // ----------
                                    ;
                                    ({ /* progn4778 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4784 */
                      // ----------
                      ;
                      ({ /* progn4786 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4792 */
              // ----------
              ;
              ({ /* progn4794 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* letn4808 */
        Maybe_Rc_BTree_int_User match4807  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4807 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4810 */
          bool __h_case_result  = (true  &&  (((match4807 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4811 */
                right_child_rc  = (((match4807 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4816 */
              ({ /* letn4823 */
                Maybe_BTree_int_User match4822  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4822 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4825 */
                  bool __h_case_result  = (true  &&  (((match4822 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4826 */
                        right_child  = (((match4822 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4831 */
                      ({ /* letn4837 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4839 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4840 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4845 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4857 */
                                  Maybe_BTree_int_User_pair_t match4855  = min_BTree_int_User (right_child );
                                  typeof((((match4855 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4859 */
                                    bool __h_case_result  = (true  &&  (((match4855 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4860 */
                                            min  = (((match4855 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4862 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4867 */
                                        ({ /* letn4874 */
                                          Either_BTree_int_User_Error_BTree_int_User match4873  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4873 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4876 */
                                            bool __h_case_result  = (true  &&  (((match4873 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4877 */
                                                  nchild  = (((match4873 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4882 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4890 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4873 ;
                                                // ----------
                                                ;
                                                ({ /* progn4892 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4896 */
                                        // ----------
                                        ;
                                        ({ /* progn4898 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4911 */
                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* letn4924 */
                              // ----------
                              ;
                              ({ /* progn4926 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4932 */
                      // ----------
                      ;
                      ({ /* progn4934 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4940 */
              // ----------
              ;
              ({ /* progn4942 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* letn4947 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4953 */
        Maybe_Rc_BTree_int_User match4952  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match4952 . __h_data). Just). __h_0_mem)) left_child_rc ;
        // ----------
        ;
        ({ /* letn4955 */
          bool __h_case_result  = (true  &&  (((match4952 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4956 */
                left_child_rc  = (((match4952 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4961 */
              ({ /* letn4968 */
                Maybe_BTree_int_User match4967  = deref_Rc_BTree_int_User (left_child_rc );
                typeof((((match4967 . __h_data). Just). __h_0_mem)) left_child ;
                // ----------
                ;
                ({ /* letn4970 */
                  bool __h_case_result  = (true  &&  (((match4967 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4971 */
                        left_child  = (((match4967 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4976 */
                      ({ /* letn4982 */
                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_child_items ;
                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_child_children ;
                        // ----------
                        ;
                        ({ /* letn4984 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4985 */
                                  left_child_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4987 */
                                  left_child_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4992 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5004 */
                                  Maybe_BTree_int_User_pair_t match5002  = max_BTree_int_User (left_child );
                                  typeof((((match5002 . __h_data). Just). __h_0_mem)) max ;
                                  typeof((max . __h_0_mem)) max_key ;
                                  // ----------
                                  ;
                                  ({ /* letn5006 */
                                    bool __h_case_result  = (true  &&  (((match5002 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5007 */
                                            max  = (((match5002 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn5009 */
                                              max_key  = (max . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5014 */
                                        ({ /* letn5021 */
                                          Either_BTree_int_User_Error_BTree_int_User match5020  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match5020 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn5023 */
                                            bool __h_case_result  = (true  &&  (((match5020 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5024 */
                                                  nchild  = (((match5020 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5029 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                              }) : ({ /* letn5037 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5020 ;
                                                // ----------
                                                ;
                                                ({ /* progn5039 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn5043 */
                                        // ----------
                                        ;
                                        ({ /* progn5045 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* letn5051 */
                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_child_items ;
                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_child_children ;
                              // ----------
                              ;
                              ({ /* letn5053 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5054 */
                                        left_child_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn5056 */
                                        left_child_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn5061 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5063 */
                                        Maybe_BTree_int_User_pair_t match5002  = max_BTree_int_User (left_child );
                                        typeof((((match5002 . __h_data). Just). __h_0_mem)) max ;
                                        typeof((max . __h_0_mem)) max_key ;
                                        // ----------
                                        ;
                                        ({ /* letn5065 */
                                          bool __h_case_result  = (true  &&  (((match5002 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5066 */
                                                  max  = (((match5002 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn5068 */
                                                    max_key  = (max . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn5073 */
                                              ({ /* letn5075 */
                                                Either_BTree_int_User_Error_BTree_int_User match5020  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match5020 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn5077 */
                                                  bool __h_case_result  = (true  &&  (((match5020 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5078 */
                                                        nchild  = (((match5020 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5083 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                    }) : ({ /* letn5085 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match5020 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn5087 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn5089 */
                                              // ----------
                                              ;
                                              ({ /* progn5091 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* letn5095 */
                                    typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* letn5097 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn5098 */
                                            left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5103 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5115 */
                                              Maybe_BTree_int_User_pair_t match5113  = max_BTree_int_User (left_child );
                                              typeof((((match5113 . __h_data). Just). __h_0_mem)) max ;
                                              typeof((max . __h_0_mem)) max_key ;
                                              // ----------
                                              ;
                                              ({ /* letn5117 */
                                                bool __h_case_result  = (true  &&  (((match5113 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5118 */
                                                        max  = (((match5113 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) &&  (true  &&  ({ /* progn5120 */
                                                          max_key  = (max . __h_0_mem) ;
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn5125 */
                                                    ({ /* letn5132 */
                                                      Either_BTree_int_User_Error_BTree_int_User match5131  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match5131 . __h_data). Right). __h_0_mem)) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn5134 */
                                                        bool __h_case_result  = (true  &&  (((match5131 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5135 */
                                                              nchild  = (((match5131 . __h_data). Right). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn5140 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          }) : ({ /* letn5148 */
                                                            Either_BTree_int_User_Error_BTree_int_User passthru  = match5131 ;
                                                            // ----------
                                                            ;
                                                            ({ /* progn5150 */
                                                              passthru ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn5154 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn5156 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* letn5162 */
                                          // ----------
                                          ;
                                          ({ /* progn5164 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5170 */
                      // ----------
                      ;
                      ({ /* progn5172 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5178 */
              // ----------
              ;
              ({ /* progn5180 */
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
    return ({ /* letn5209 */
        Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5215 */
          typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
          typeof((head . __h_0_mem)) key ;
          typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
          // ----------
          ;
          ({ /* letn5217 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn5218 */
                      head  = (((current -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) &&  (true  &&  ({ /* progn5220 */
                        key  = (head . __h_0_mem) ;
                        true ;
                      }) ) ) &&  ({ /* progn5222 */
                    tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn5227 */
                ({ /* letn5233 */
                  Ordering match5232  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* letn5235 */
                    bool __h_case_result  = (true  &&  ((match5232 . __h_ctor) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn5239 */
                        ({ /* letn5246 */
                          Maybe_Rc_BTree_int_User match5245  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match5245 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn5248 */
                            bool __h_case_result  = (true  &&  (((match5245 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5249 */
                                  child  = (((match5245 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn5254 */
                                ({ /* letn5261 */
                                  Maybe_BTree_int_User match5260  = deref_Rc_BTree_int_User (child );
                                  typeof((((match5260 . __h_data). Just). __h_0_mem)) tr ;
                                  // ----------
                                  ;
                                  ({ /* letn5263 */
                                    bool __h_case_result  = (true  &&  (((match5260 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5264 */
                                          tr  = (((match5260 . __h_data). Just). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5269 */
                                        ({ /* letn5275 */
                                          // ----------
                                          ;
                                          ({ /* letn5277 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5281 */
                                                ({ /* letn5288 */
                                                  Either_BTree_int_User_Error_BTree_int_User match5287  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match5287 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn5290 */
                                                    bool __h_case_result  = (true  &&  (((match5287 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5291 */
                                                          nchild  = (((match5287 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn5296 */
                                                        ({ /* letn5302 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5304 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5305 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn5307 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5312 */
                                                                ({ /* letn5319 */
                                                                  Maybe_Rc_BTree_int_User match5318  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5318 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn5321 */
                                                                    bool __h_case_result  = (true  &&  (((match5318 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5322 */
                                                                          wleft  = (((match5318 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn5327 */
                                                                        ({ /* letn5334 */
                                                                          Maybe_BTree_int_User match5333  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5333 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn5336 */
                                                                            bool __h_case_result  = (true  &&  (((match5333 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5337 */
                                                                                  left_child  = (((match5333 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn5342 */
                                                                                ({ /* letn5348 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5350 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5351 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5353 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5358 */
                                                                                        ({ /* letn5361 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5368 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5370 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5371 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5373 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5378 */
                                                                                              ({ /* letn5380 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5384 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn5386 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn5392 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn5394 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn5400 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn5402 */
                                                                          ({ /* letn5409 */
                                                                            Maybe_Rc_BTree_int_User match5408  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5408 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5411 */
                                                                              bool __h_case_result  = (true  &&  (((match5408 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5412 */
                                                                                    wright  = (((match5408 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5417 */
                                                                                  ({ /* letn5424 */
                                                                                    Maybe_BTree_int_User match5423  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5423 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn5426 */
                                                                                      bool __h_case_result  = (true  &&  (((match5423 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5427 */
                                                                                            right_child  = (((match5423 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn5432 */
                                                                                          ({ /* letn5438 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5440 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5441 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5443 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5448 */
                                                                                                  ({ /* letn5451 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5458 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5460 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5461 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5463 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5468 */
                                                                                                        ({ /* letn5470 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5474 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn5476 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn5482 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn5484 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn5490 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn5492 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn5498 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn5500 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn5508 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match5287 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn5510 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn5514 */
                                                // ----------
                                                ;
                                                ({ /* letn5516 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5520 */
                                                      ({ /* letn5526 */
                                                        Either_BTree_int_User_Error_BTree_int_User match5525  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match5525 . __h_data). Right). __h_0_mem)) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn5528 */
                                                          bool __h_case_result  = (true  &&  (((match5525 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5529 */
                                                                nchild  = (((match5525 . __h_data). Right). __h_0_mem) ;
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn5534 */
                                                              ({ /* letn5540 */
                                                                typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                                typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* letn5542 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5543 */
                                                                          child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                          true ;
                                                                        }) &&  ({ /* progn5545 */
                                                                          child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn5550 */
                                                                      ({ /* letn5552 */
                                                                        Maybe_Rc_BTree_int_User match5318  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match5318 . __h_data). Just). __h_0_mem)) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn5554 */
                                                                          bool __h_case_result  = (true  &&  (((match5318 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5555 */
                                                                                wleft  = (((match5318 . __h_data). Just). __h_0_mem) ;
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn5560 */
                                                                              ({ /* letn5562 */
                                                                                Maybe_BTree_int_User match5333  = deref_Rc_BTree_int_User (wleft );
                                                                                typeof((((match5333 . __h_data). Just). __h_0_mem)) left_child ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* letn5564 */
                                                                                  bool __h_case_result  = (true  &&  (((match5333 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5565 */
                                                                                        left_child  = (((match5333 . __h_data). Just). __h_0_mem) ;
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* progn5570 */
                                                                                      ({ /* letn5572 */
                                                                                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5574 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5575 */
                                                                                                  left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5577 */
                                                                                                  left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5582 */
                                                                                              ({ /* letn5584 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5586 */
                                                                                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* letn5588 */
                                                                                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5589 */
                                                                                                        left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                        true ;
                                                                                                      }) &&  ({ /* progn5591 */
                                                                                                        left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* progn5596 */
                                                                                                    ({ /* letn5598 */
                                                                                                      BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* letn5600 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* progn5602 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* letn5604 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* progn5606 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* letn5608 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn5610 */
                                                                                ({ /* letn5612 */
                                                                                  Maybe_Rc_BTree_int_User match5408  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match5408 . __h_data). Just). __h_0_mem)) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5614 */
                                                                                    bool __h_case_result  = (true  &&  (((match5408 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5615 */
                                                                                          wright  = (((match5408 . __h_data). Just). __h_0_mem) ;
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5620 */
                                                                                        ({ /* letn5622 */
                                                                                          Maybe_BTree_int_User match5423  = deref_Rc_BTree_int_User (wright );
                                                                                          typeof((((match5423 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* letn5624 */
                                                                                            bool __h_case_result  = (true  &&  (((match5423 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5625 */
                                                                                                  right_child  = (((match5423 . __h_data). Just). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* progn5630 */
                                                                                                ({ /* letn5632 */
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5634 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5635 */
                                                                                                            right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5637 */
                                                                                                            right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5642 */
                                                                                                        ({ /* letn5644 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5646 */
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* letn5648 */
                                                                                                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5649 */
                                                                                                                  right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* progn5651 */
                                                                                                                  right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* progn5656 */
                                                                                                              ({ /* letn5658 */
                                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* letn5660 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* progn5662 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* letn5664 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* progn5666 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* letn5668 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5670 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* letn5674 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn5676 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* letn5680 */
                                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match5525 ;
                                                              // ----------
                                                              ;
                                                              ({ /* progn5682 */
                                                                passthru ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn5686 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn5688 */
                                                        ({ /* letn5695 */
                                                          Either_BTree_int_User_Error_BTree_int_User match5694  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match5694 . __h_data). Right). __h_0_mem)) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5697 */
                                                            bool __h_case_result  = (true  &&  (((match5694 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5698 */
                                                                  nchild  = (((match5694 . __h_data). Right). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5703 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* letn5708 */
                                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5694 ;
                                                                // ----------
                                                                ;
                                                                ({ /* progn5710 */
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
                                      }) : ({ /* letn5714 */
                                        // ----------
                                        ;
                                        ({ /* progn5716 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn5722 */
                                // ----------
                                ;
                                ({ /* progn5724 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn5730 */
                        // ----------
                        ;
                        ({ /* letn5732 */
                          bool __h_case_result  = (true  &&  ((match5232 . __h_ctor) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5736 */
                              ({ /* letn5739 */
                                Either_BTree_int_User_Error_BTree_int_User result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* let5744 */
                                  // ----------
                                  ;
                                  ({ /* letn5746 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block5752 */
                                        if (callback )
                                          { /* block5757 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* letn5761 */
                              // ----------
                              ;
                              ({ /* progn5763 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* letn5768 */
                // ----------
                ;
                ({ /* progn5770 */
                  ({ /* letn5777 */
                    Maybe_Rc_BTree_int_User match5776  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match5776 . __h_data). Just). __h_0_mem)) child ;
                    // ----------
                    ;
                    ({ /* letn5779 */
                      bool __h_case_result  = (true  &&  (((match5776 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5780 */
                            child  = (((match5776 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn5785 */
                          ({ /* letn5792 */
                            Maybe_BTree_int_User match5791  = deref_Rc_BTree_int_User (child );
                            typeof((((match5791 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn5794 */
                              bool __h_case_result  = (true  &&  (((match5791 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5795 */
                                    tr  = (((match5791 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn5800 */
                                  ({ /* letn5806 */
                                    // ----------
                                    ;
                                    ({ /* letn5808 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5812 */
                                          ({ /* letn5819 */
                                            Either_BTree_int_User_Error_BTree_int_User match5818  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match5818 . __h_data). Right). __h_0_mem)) nchild ;
                                            // ----------
                                            ;
                                            ({ /* letn5821 */
                                              bool __h_case_result  = (true  &&  (((match5818 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5822 */
                                                    nchild  = (((match5818 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn5827 */
                                                  ({ /* letn5833 */
                                                    typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                    typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn5835 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5836 */
                                                              child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn5838 */
                                                              child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn5843 */
                                                          ({ /* letn5850 */
                                                            Maybe_Rc_BTree_int_User match5849  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match5849 . __h_data). Just). __h_0_mem)) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn5852 */
                                                              bool __h_case_result  = (true  &&  (((match5849 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5853 */
                                                                    wleft  = (((match5849 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn5858 */
                                                                  ({ /* letn5865 */
                                                                    Maybe_BTree_int_User match5864  = deref_Rc_BTree_int_User (wleft );
                                                                    typeof((((match5864 . __h_data). Just). __h_0_mem)) left_child ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn5867 */
                                                                      bool __h_case_result  = (true  &&  (((match5864 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5868 */
                                                                            left_child  = (((match5864 . __h_data). Just). __h_0_mem) ;
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn5873 */
                                                                          ({ /* letn5879 */
                                                                            typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                            typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5881 */
                                                                              bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5882 */
                                                                                      left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) &&  ({ /* progn5884 */
                                                                                      left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5889 */
                                                                                  ({ /* letn5892 */
                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                    // ----------
                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                  });
                                                                                }) : ({ /* letn5899 */
                                                                                  typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5901 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5902 */
                                                                                            left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5904 */
                                                                                            left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5909 */
                                                                                        ({ /* letn5911 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5915 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5917 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* letn5923 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn5925 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* letn5931 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn5933 */
                                                                    ({ /* letn5940 */
                                                                      Maybe_Rc_BTree_int_User match5939  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match5939 . __h_data). Just). __h_0_mem)) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* letn5942 */
                                                                        bool __h_case_result  = (true  &&  (((match5939 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5943 */
                                                                              wright  = (((match5939 . __h_data). Just). __h_0_mem) ;
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* progn5948 */
                                                                            ({ /* letn5955 */
                                                                              Maybe_BTree_int_User match5954  = deref_Rc_BTree_int_User (wright );
                                                                              typeof((((match5954 . __h_data). Just). __h_0_mem)) right_child ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* letn5957 */
                                                                                bool __h_case_result  = (true  &&  (((match5954 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5958 */
                                                                                      right_child  = (((match5954 . __h_data). Just). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* progn5963 */
                                                                                    ({ /* letn5969 */
                                                                                      typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                      typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* letn5971 */
                                                                                        bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5972 */
                                                                                                right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                true ;
                                                                                              }) &&  ({ /* progn5974 */
                                                                                                right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                true ;
                                                                                              }) ) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* progn5979 */
                                                                                            ({ /* letn5982 */
                                                                                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                            });
                                                                                          }) : ({ /* letn5989 */
                                                                                            typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5991 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5992 */
                                                                                                      right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5994 */
                                                                                                      right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5999 */
                                                                                                  ({ /* letn6001 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6005 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* progn6007 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* letn6013 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* progn6015 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* letn6021 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* progn6023 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6029 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6031 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6039 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match5818 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn6041 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* letn6045 */
                                          // ----------
                                          ;
                                          ({ /* letn6047 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn6051 */
                                                ({ /* letn6057 */
                                                  Either_BTree_int_User_Error_BTree_int_User match6056  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match6056 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6059 */
                                                    bool __h_case_result  = (true  &&  (((match6056 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6060 */
                                                          nchild  = (((match6056 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6065 */
                                                        ({ /* letn6071 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6073 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6074 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn6076 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6081 */
                                                                ({ /* letn6083 */
                                                                  Maybe_Rc_BTree_int_User match5849  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5849 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6085 */
                                                                    bool __h_case_result  = (true  &&  (((match5849 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6086 */
                                                                          wleft  = (((match5849 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6091 */
                                                                        ({ /* letn6093 */
                                                                          Maybe_BTree_int_User match5864  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5864 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6095 */
                                                                            bool __h_case_result  = (true  &&  (((match5864 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6096 */
                                                                                  left_child  = (((match5864 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6101 */
                                                                                ({ /* letn6103 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn6105 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6106 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn6108 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn6113 */
                                                                                        ({ /* letn6115 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn6117 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn6119 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6120 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn6122 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn6127 */
                                                                                              ({ /* letn6129 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn6131 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn6133 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn6135 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6137 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn6139 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6141 */
                                                                          ({ /* letn6143 */
                                                                            Maybe_Rc_BTree_int_User match5939  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5939 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn6145 */
                                                                              bool __h_case_result  = (true  &&  (((match5939 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6146 */
                                                                                    wright  = (((match5939 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn6151 */
                                                                                  ({ /* letn6153 */
                                                                                    Maybe_BTree_int_User match5954  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5954 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn6155 */
                                                                                      bool __h_case_result  = (true  &&  (((match5954 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6156 */
                                                                                            right_child  = (((match5954 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn6161 */
                                                                                          ({ /* letn6163 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6165 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6166 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6168 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6173 */
                                                                                                  ({ /* letn6175 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6177 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn6179 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6180 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn6182 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn6187 */
                                                                                                        ({ /* letn6189 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn6191 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn6193 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn6195 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn6197 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn6199 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn6201 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn6205 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6207 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6211 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match6056 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn6213 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn6217 */
                                                // ----------
                                                ;
                                                ({ /* progn6219 */
                                                  ({ /* letn6226 */
                                                    Either_BTree_int_User_Error_BTree_int_User match6225  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match6225 . __h_data). Right). __h_0_mem)) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6228 */
                                                      bool __h_case_result  = (true  &&  (((match6225 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6229 */
                                                            nchild  = (((match6225 . __h_data). Right). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6234 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* letn6239 */
                                                          Either_BTree_int_User_Error_BTree_int_User passthru  = match6225 ;
                                                          // ----------
                                                          ;
                                                          ({ /* progn6241 */
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
                                }) : ({ /* letn6245 */
                                  // ----------
                                  ;
                                  ({ /* progn6247 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* letn6254 */
                          // ----------
                          ;
                          ({ /* progn6256 */
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
        ({ /* letn6264 */
          Either_BTree_int_User_Error_BTree_int_User rs  = ({ /* letn6269 */
            typeof((((result . __h_data). Right). __h_0_mem)) ntr ;
            // ----------
            ;
            ({ /* letn6271 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6272 */
                    ntr  = (((result . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn6277 */
                  ({ /* letn6283 */
                    typeof((((ntr -> __h_data). Branch). __h_0_mem)) items ;
                    typeof((((ntr -> __h_data). Branch). __h_1_mem)) children ;
                    // ----------
                    ;
                    ({ /* letn6285 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6286 */
                              items  = (((ntr -> __h_data). Branch). __h_0_mem) ;
                              true ;
                            }) &&  ({ /* progn6288 */
                              children  = (((ntr -> __h_data). Branch). __h_1_mem) ;
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6293 */
                          ({ /* letn6296 */
                            size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6306 */
                                typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                // ----------
                                ;
                                ({ /* letn6308 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6309 */
                                        ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn6314 */
                                      ({ /* letn6320 */
                                        typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                        // ----------
                                        ;
                                        ({ /* letn6322 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6323 */
                                                pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn6328 */
                                              ({ /* letn6335 */
                                                Maybe_BTree_int_User_pair_t match6334  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match6334 . __h_data). Just). __h_0_mem)) bitem ;
                                                // ----------
                                                ;
                                                ({ /* letn6337 */
                                                  bool __h_case_result  = (true  &&  (((match6334 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6338 */
                                                        bitem  = (((match6334 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn6343 */
                                                      ({ /* letn6346 */
                                                        BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6356 */
                                                            Ordering match6355  = compareKey (({ /* letn6361 */
                                                              typeof((bitem . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6363 */
                                                                bool __h_case_result  = (true  &&  ({ /* progn6364 */
                                                                    key  = (bitem . __h_0_mem) ;
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6369 */
                                                                    key ;
                                                                  }) : ({ /* letn6373 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6375 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* letn6382 */
                                                              typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6380_0_arg ;
                                                              typeof((__h_match6380_0_arg . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6384 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6385 */
                                                                        __h_match6380_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* progn6387 */
                                                                          key  = (__h_match6380_0_arg . __h_0_mem) ;
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6392 */
                                                                    key ;
                                                                  }) : ({ /* letn6396 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6398 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* letn6401 */
                                                              bool __h_case_result  = (true  &&  ((match6355 . __h_ctor) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6405 */
                                                                  0;
                                                                }) : ({ /* letn6409 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6411 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), cloneAll_Rc_BTree_int_User (children )));
                                                      });
                                                    }) : ({ /* letn6416 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn6418 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn6424 */
                                              typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6426 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6427 */
                                                      pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6432 */
                                                    ({ /* letn6438 */
                                                      Maybe_BTree_int_User_pair_t match6437  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6437 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6440 */
                                                        bool __h_case_result  = (true  &&  (((match6437 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6441 */
                                                              bitem  = (((match6437 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6446 */
                                                            ({ /* letn6448 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6450 */
                                                                  Ordering match6355  = compareKey (({ /* letn6451 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6453 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6454 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6459 */
                                                                          key ;
                                                                        }) : ({ /* letn6461 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6463 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6465 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6380_0_arg ;
                                                                    typeof((__h_match6380_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6467 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6468 */
                                                                              __h_match6380_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6470 */
                                                                                key  = (__h_match6380_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6475 */
                                                                          key ;
                                                                        }) : ({ /* letn6477 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6479 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6482 */
                                                                    bool __h_case_result  = (true  &&  ((match6355 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6486 */
                                                                        0;
                                                                      }) : ({ /* letn6488 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6490 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6494 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6496 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6500 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn6502 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn6508 */
                                      // ----------
                                      ;
                                      ({ /* progn6510 */
                                        (((items_len  ==  0 )) ? ({ /* letn6517 */
                                            typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                            // ----------
                                            ;
                                            ({ /* letn6519 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6520 */
                                                    head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn6525 */
                                                  ({ /* letn6532 */
                                                    Maybe_BTree_int_User match6531  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                    typeof((((match6531 . __h_data). Just). __h_0_mem)) chtr ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6535 */
                                                      bool __h_case_result  = (true  &&  (((match6531 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6536 */
                                                            chtr  = (((match6531 . __h_data). Just). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6541 */
                                                          ({ /* letn6544 */
                                                            BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                            // ----------
                                                            Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                          });
                                                        }) : ({ /* letn6550 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6552 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6558 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn6560 */
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
                        }) : ({ /* letn6564 */
                          typeof((((ntr -> __h_data). Internal). __h_0_mem)) items ;
                          typeof((((ntr -> __h_data). Internal). __h_1_mem)) children ;
                          // ----------
                          ;
                          ({ /* letn6566 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6567 */
                                    items  = (((ntr -> __h_data). Internal). __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn6569 */
                                    children  = (((ntr -> __h_data). Internal). __h_1_mem) ;
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn6574 */
                                ({ /* letn6576 */
                                  size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6578 */
                                      typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                      // ----------
                                      ;
                                      ({ /* letn6580 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6581 */
                                              ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn6586 */
                                            ({ /* letn6588 */
                                              typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6590 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6591 */
                                                      pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6596 */
                                                    ({ /* letn6598 */
                                                      Maybe_BTree_int_User_pair_t match6334  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6334 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6600 */
                                                        bool __h_case_result  = (true  &&  (((match6334 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6601 */
                                                              bitem  = (((match6334 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6606 */
                                                            ({ /* letn6608 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6610 */
                                                                  Ordering match6355  = compareKey (({ /* letn6611 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6613 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6614 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6619 */
                                                                          key ;
                                                                        }) : ({ /* letn6621 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6623 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6625 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6380_0_arg ;
                                                                    typeof((__h_match6380_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6627 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6628 */
                                                                              __h_match6380_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6630 */
                                                                                key  = (__h_match6380_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6635 */
                                                                          key ;
                                                                        }) : ({ /* letn6637 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6639 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6642 */
                                                                    bool __h_case_result  = (true  &&  ((match6355 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6646 */
                                                                        0;
                                                                      }) : ({ /* letn6648 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6650 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6652 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6654 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6656 */
                                                    typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6658 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6659 */
                                                            pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6664 */
                                                          ({ /* letn6666 */
                                                            Maybe_BTree_int_User_pair_t match6437  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match6437 . __h_data). Just). __h_0_mem)) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn6668 */
                                                              bool __h_case_result  = (true  &&  (((match6437 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6669 */
                                                                    bitem  = (((match6437 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6674 */
                                                                  ({ /* letn6676 */
                                                                    BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6678 */
                                                                        Ordering match6355  = compareKey (({ /* letn6679 */
                                                                          typeof((bitem . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6681 */
                                                                            bool __h_case_result  = (true  &&  ({ /* progn6682 */
                                                                                key  = (bitem . __h_0_mem) ;
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6687 */
                                                                                key ;
                                                                              }) : ({ /* letn6689 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6691 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* letn6693 */
                                                                          typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6380_0_arg ;
                                                                          typeof((__h_match6380_0_arg . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6695 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6696 */
                                                                                    __h_match6380_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* progn6698 */
                                                                                      key  = (__h_match6380_0_arg . __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6703 */
                                                                                key ;
                                                                              }) : ({ /* letn6705 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6707 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn6710 */
                                                                          bool __h_case_result  = (true  &&  ((match6355 . __h_ctor) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn6714 */
                                                                              0;
                                                                            }) : ({ /* letn6716 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn6718 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), cloneAll_Rc_BTree_int_User (children )));
                                                                  });
                                                                }) : ({ /* letn6720 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6722 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6724 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6726 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* letn6728 */
                                            // ----------
                                            ;
                                            ({ /* progn6730 */
                                              (((items_len  ==  0 )) ? ({ /* letn6732 */
                                                  typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6734 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6735 */
                                                          head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6740 */
                                                        ({ /* letn6742 */
                                                          Maybe_BTree_int_User match6531  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                          typeof((((match6531 . __h_data). Just). __h_0_mem)) chtr ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6744 */
                                                            bool __h_case_result  = (true  &&  (((match6531 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6745 */
                                                                  chtr  = (((match6531 . __h_data). Just). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6750 */
                                                                ({ /* letn6752 */
                                                                  BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              }) : ({ /* letn6754 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6756 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6758 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn6760 */
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
                              }) : ({ /* letn6764 */
                                // ----------
                                ;
                                ({ /* progn6766 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* letn6770 */
                  // ----------
                  ;
                  ({ /* progn6772 */
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
    return ({ /* letn6788 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6790 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn6791 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn6793 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn6795 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6800 */
              ({ /* letn6806 */
                Ordering match6805  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn6808 */
                  bool __h_case_result  = (true  &&  ((match6805 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn6812 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* letn6818 */
                      // ----------
                      ;
                      ({ /* letn6820 */
                        bool __h_case_result  = (true  &&  ((match6805 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn6824 */
                            ({ /* letn6827 */
                              Either_BTree_int_User_Error_BTree_int_User result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* let6834 */
                                // ----------
                                ;
                                ({ /* letn6836 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block6842 */
                                      if (callback )
                                        { /* block6847 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* letn6851 */
                            // ----------
                            ;
                            ({ /* progn6853 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn6857 */
              // ----------
              ;
              ({ /* progn6859 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* letn6864 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn6869 */
        typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
        typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
        // ----------
        ;
        ({ /* letn6871 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6872 */
                  items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6874 */
                  children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6879 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* letn6885 */
              typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
              typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
              // ----------
              ;
              ({ /* letn6887 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6888 */
                        items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                        true ;
                      }) &&  ({ /* progn6890 */
                        children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn6895 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* letn6899 */
                    typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                    // ----------
                    ;
                    ({ /* letn6901 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn6902 */
                            items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6907 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* letn6911 */
                          // ----------
                          ;
                          ({ /* progn6913 */
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
  return ({ /* letn6930 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* let6939 */
            Either_BTree_int_User_Error_BTree_int_User match6938  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match6938 . __h_data). Right). __h_0_mem)) new_tree ;
            // ----------
            ;
            ({ /* letn6942 */
              bool __h_case_result  = (true  &&  (((match6938 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6943 */
                    new_tree  = (((match6938 . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block6950 */
                  { /* block6952 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* let6958 */
                  Either_BTree_int_User_Error_BTree_int_User left  = match6938 ;
                  // ----------
                  ;
                  { /* block6960 */
                    { /* block6962 */
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
    return ({ /* letn6975 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6977 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6978 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6980 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6985 */
              (({ /* letn6991 */
                  // ----------
                  ;
                  ({ /* letn6993 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn6997 */
                        ({ /* letn7004 */
                          Maybe_BTree_int_User match7003  = deref_Rc_BTree_int_User (head );
                          typeof((((match7003 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn7006 */
                            bool __h_case_result  = (true  &&  (((match7003 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7007 */
                                  tr  = (((match7003 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7012 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* letn7016 */
                                // ----------
                                ;
                                ({ /* progn7018 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn7022 */
                        // ----------
                        ;
                        ({ /* progn7024 */
                          ({ /* letn7031 */
                            Maybe_BTree_int_User match7030  = deref_Rc_BTree_int_User (head );
                            typeof((((match7030 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn7033 */
                              bool __h_case_result  = (true  &&  (((match7030 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7034 */
                                    tr  = (((match7030 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7039 */
                                  showTree (indent , tr );
                                }) : ({ /* letn7043 */
                                  // ----------
                                  ;
                                  ({ /* progn7045 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* letn7049 */
              // ----------
              ;
              ({ /* progn7051 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* letn7058 */
          typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7060 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7061 */
                    items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7063 */
                    children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn7068 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7075 */
                    // ----------
                    ;
                    ({ /* letn7077 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn7081 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* letn7085 */
                          // ----------
                          ;
                          ({ /* progn7087 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* letn7091 */
                typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
                typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
                // ----------
                ;
                ({ /* letn7093 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7094 */
                          items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                          true ;
                        }) &&  ({ /* progn7096 */
                          children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7101 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7103 */
                          // ----------
                          ;
                          ({ /* letn7105 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7109 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* letn7111 */
                                // ----------
                                ;
                                ({ /* progn7113 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* letn7117 */
                      typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                      // ----------
                      ;
                      ({ /* letn7119 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7120 */
                              items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7125 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* letn7130 */
                            // ----------
                            ;
                            ({ /* progn7132 */
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
    { /* let7145 */
      typeof((((currentChild -> __h_data). Cons). __h_0_mem)) wheadC ;
      typeof((((currentChild -> __h_data). Cons). __h_1_mem)) tailC ;
      // ----------
      ;
      ({ /* letn7147 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7148 */
                wheadC  = (((currentChild -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7150 */
                tailC  = (((currentChild -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7157 */
            { /* let7161 */
              Maybe_BTree_int_User match7160  = deref_Rc_BTree_int_User (wheadC );
              typeof((((match7160 . __h_data). Just). __h_0_mem)) headC ;
              // ----------
              ;
              ({ /* letn7164 */
                bool __h_case_result  = (true  &&  (((match7160 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7165 */
                      headC  = (((match7160 . __h_data). Just). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* block7172 */
                    { /* let7176 */
                      // ----------
                      ;
                      ({ /* letn7178 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block7184 */
                            { /* block7186 */
                              { /* let7190 */
                                typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                // ----------
                                ;
                                ({ /* letn7192 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7193 */
                                          items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7195 */
                                          children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7202 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* let7207 */
                                      typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                      typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                      // ----------
                                      ;
                                      ({ /* letn7209 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7210 */
                                                items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn7212 */
                                                children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* block7219 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* let7224 */
                                            typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7226 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7227 */
                                                    items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* block7234 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* let7238 */
                                typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                // ----------
                                ;
                                ({ /* letn7240 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7241 */
                                          headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7243 */
                                          tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7250 */
                                      { /* block7252 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* let7257 */
                            // ----------
                            ;
                            { /* block7259 */
                              { /* block7261 */
                                { /* let7265 */
                                  typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                  typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                  // ----------
                                  ;
                                  ({ /* letn7267 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7268 */
                                            items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7270 */
                                            children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7277 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* let7282 */
                                        typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                        typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                        // ----------
                                        ;
                                        ({ /* letn7284 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7285 */
                                                  items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn7287 */
                                                  children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block7294 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* let7299 */
                                              typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                              // ----------
                                              ;
                                              ({ /* letn7301 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7302 */
                                                      items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* block7309 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* let7313 */
                                  typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                  typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                  // ----------
                                  ;
                                  ({ /* letn7315 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7316 */
                                            headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7318 */
                                            tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7325 */
                                        { /* block7327 */
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
    { /* let7333 */
      typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn7335 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7336 */
                head  = (((current -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7338 */
                tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7345 */
            { /* block7347 */
              callback (head , ({ /* letn7353 */
                  // ----------
                  ;
                  ({ /* letn7355 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7359 */
                        hasNextLeaf ;
                      }) : ({ /* letn7363 */
                        // ----------
                        ;
                        ({ /* progn7365 */
                          ({ /* letn7371 */
                            // ----------
                            ;
                            ({ /* letn7373 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7377 */
                                  True ();
                                }) : ({ /* letn7381 */
                                  // ----------
                                  ;
                                  ({ /* progn7383 */
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
  { /* let7387 */
    typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
    typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
    // ----------
    ;
    ({ /* letn7389 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7390 */
              items  = (((tree -> __h_data). Branch). __h_0_mem) ;
              true ;
            }) &&  ({ /* progn7392 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block7399 */
          traverseInternal (items , children );
        }
      else
        { /* let7404 */
          typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7406 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7407 */
                    items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7409 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* block7416 */
                traverseInternal (items , children );
              }
            else
              { /* let7421 */
                typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                // ----------
                ;
                ({ /* letn7423 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7424 */
                        items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block7431 */
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
    return ({ /* letn7448 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7450 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7451 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7453 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7458 */
              ({ /* letn7464 */
                // ----------
                ;
                ({ /* letn7466 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7470 */
                      ({ /* letn7477 */
                        Maybe_BTree_int_User match7476  = deref_Rc_BTree_int_User (head );
                        typeof((((match7476 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn7479 */
                          bool __h_case_result  = (true  &&  (((match7476 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7480 */
                                child  = (((match7476 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7485 */
                              ({ /* letn7491 */
                                typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                                // ----------
                                ;
                                ({ /* letn7493 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7494 */
                                        nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7499 */
                                      maxInternal (nchildren );
                                    }) : ({ /* letn7503 */
                                      typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* letn7505 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7506 */
                                              nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn7511 */
                                            maxInternal (nchildren );
                                          }) : ({ /* letn7515 */
                                            typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7517 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7518 */
                                                    items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn7523 */
                                                  maxLeaf (items );
                                                }) : ({ /* letn7527 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn7529 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7534 */
                              // ----------
                              ;
                              ({ /* progn7536 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7541 */
                      // ----------
                      ;
                      ({ /* progn7543 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7547 */
              // ----------
              ;
              ({ /* progn7549 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* letn7559 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7561 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7562 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7564 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7569 */
              ({ /* letn7575 */
                // ----------
                ;
                ({ /* letn7577 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7581 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn7586 */
                      // ----------
                      ;
                      ({ /* progn7588 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7592 */
              // ----------
              ;
              ({ /* progn7594 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7601 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7603 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7604 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7609 */
            maxInternal (children );
          }) : ({ /* letn7613 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7615 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7616 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7621 */
                  maxInternal (children );
                }) : ({ /* letn7625 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7627 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7628 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7633 */
                        maxLeaf (items );
                      }) : ({ /* letn7637 */
                        // ----------
                        ;
                        ({ /* progn7639 */
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
    return ({ /* letn7657 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7659 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7660 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7665 */
              ({ /* letn7672 */
                Maybe_BTree_int_User match7671  = deref_Rc_BTree_int_User (head );
                typeof((((match7671 . __h_data). Just). __h_0_mem)) child ;
                // ----------
                ;
                ({ /* letn7674 */
                  bool __h_case_result  = (true  &&  (((match7671 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7675 */
                        child  = (((match7671 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7680 */
                      ({ /* letn7686 */
                        typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                        // ----------
                        ;
                        ({ /* letn7688 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7689 */
                                nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7694 */
                              minInternal (nchildren );
                            }) : ({ /* letn7698 */
                              typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                              // ----------
                              ;
                              ({ /* letn7700 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7701 */
                                      nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn7706 */
                                    minInternal (nchildren );
                                  }) : ({ /* letn7710 */
                                    typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                    // ----------
                                    ;
                                    ({ /* letn7712 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7713 */
                                            items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn7718 */
                                          minLeaf (items );
                                        }) : ({ /* letn7722 */
                                          // ----------
                                          ;
                                          ({ /* progn7724 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
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
            }) : ({ /* letn7736 */
              // ----------
              ;
              ({ /* progn7738 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* letn7748 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7750 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7751 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7756 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* letn7761 */
              // ----------
              ;
              ({ /* progn7763 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7770 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7772 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7773 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7778 */
            minInternal (children );
          }) : ({ /* letn7782 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7784 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7785 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7790 */
                  minInternal (children );
                }) : ({ /* letn7794 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7796 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7797 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7802 */
                        minLeaf (items );
                      }) : ({ /* letn7806 */
                        // ----------
                        ;
                        ({ /* progn7808 */
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
    return ({ /* letn7830 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7832 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7833 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7835 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7837 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7842 */
              ({ /* letn7848 */
                Ordering match7847  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn7850 */
                  bool __h_case_result  = (true  &&  ((match7847 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7854 */
                      ({ /* letn7861 */
                        Maybe_Rc_BTree_int_User match7860  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match7860 . __h_data). Just). __h_0_mem)) node ;
                        // ----------
                        ;
                        ({ /* letn7863 */
                          bool __h_case_result  = (true  &&  (((match7860 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7864 */
                                node  = (((match7860 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7869 */
                              ({ /* letn7876 */
                                Maybe_BTree_int_User match7875  = deref_Rc_BTree_int_User (node );
                                typeof((((match7875 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn7878 */
                                  bool __h_case_result  = (true  &&  (((match7875 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7879 */
                                        tr  = (((match7875 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7884 */
                                      search_BTree_int_User (tr , skey );
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
                              ({ /* progn7898 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7903 */
                      // ----------
                      ;
                      ({ /* letn7905 */
                        bool __h_case_result  = (true  &&  ((match7847 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7909 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* letn7914 */
                            // ----------
                            ;
                            ({ /* progn7916 */
                              ({ /* letn7922 */
                                // ----------
                                ;
                                ({ /* letn7924 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7928 */
                                      ({ /* letn7935 */
                                        Maybe_Rc_BTree_int_User match7934  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match7934 . __h_data). Just). __h_0_mem)) node ;
                                        // ----------
                                        ;
                                        ({ /* letn7937 */
                                          bool __h_case_result  = (true  &&  (((match7934 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7938 */
                                                node  = (((match7934 . __h_data). Just). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn7943 */
                                              ({ /* letn7950 */
                                                Maybe_BTree_int_User match7949  = deref_Rc_BTree_int_User (node );
                                                typeof((((match7949 . __h_data). Just). __h_0_mem)) tr ;
                                                // ----------
                                                ;
                                                ({ /* letn7952 */
                                                  bool __h_case_result  = (true  &&  (((match7949 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7953 */
                                                        tr  = (((match7949 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn7958 */
                                                      search_BTree_int_User (tr , skey );
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
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn7977 */
                                      // ----------
                                      ;
                                      ({ /* progn7979 */
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
            }) : ({ /* letn7983 */
              // ----------
              ;
              ({ /* progn7985 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn7996 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7998 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7999 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8001 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8003 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8008 */
              ({ /* letn8014 */
                Ordering match8013  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8016 */
                  bool __h_case_result  = (true  &&  ((match8013 . __h_ctor) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8020 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn8025 */
                      // ----------
                      ;
                      ({ /* progn8027 */
                        ({ /* letn8033 */
                          // ----------
                          ;
                          ({ /* letn8035 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8039 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* letn8044 */
                                // ----------
                                ;
                                ({ /* progn8046 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* letn8050 */
              // ----------
              ;
              ({ /* progn8052 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn8059 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8061 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8062 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8064 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8069 */
            searchInternal (children , items , 0);
          }) : ({ /* letn8073 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8075 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8076 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8078 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8083 */
                  searchInternal (children , items , 0);
                }) : ({ /* letn8087 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8089 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8090 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8095 */
                        searchLeaf (items , 0);
                      }) : ({ /* letn8099 */
                        // ----------
                        ;
                        ({ /* progn8101 */
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
    { /* block8114 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8130 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8132 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8133 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8135 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8137 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8142 */
              ({ /* letn8148 */
                Ordering match8147  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8150 */
                  bool __h_case_result  = (true  &&  ((match8147 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8154 */
                      ({ /* letn8161 */
                        Maybe_Rc_BTree_int_User match8160  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match8160 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn8163 */
                          bool __h_case_result  = (true  &&  (((match8160 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8164 */
                                child  = (((match8160 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn8169 */
                              ({ /* letn8176 */
                                Maybe_BTree_int_User match8175  = deref_Rc_BTree_int_User (child );
                                typeof((((match8175 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn8178 */
                                  bool __h_case_result  = (true  &&  (((match8175 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8179 */
                                        tr  = (((match8175 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8184 */
                                      ({ /* letn8191 */
                                        Either_BTree_int_User_Error_BTree_int_User match8190  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match8190 . __h_data). Right). __h_0_mem)) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* letn8193 */
                                          bool __h_case_result  = (true  &&  (((match8190 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8194 */
                                                child_tree  = (((match8190 . __h_data). Right). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8199 */
                                              ({ /* letn8205 */
                                                typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                                typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                                // ----------
                                                ;
                                                ({ /* letn8207 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8208 */
                                                          child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                          true ;
                                                        }) &&  ({ /* progn8210 */
                                                          child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8215 */
                                                      ({ /* letn8222 */
                                                        typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                        typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8220_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn8224 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8225 */
                                                                    single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn8227 */
                                                                    __h_match8220_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match8220_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn8232 */
                                                              ({ /* letn8235 */
                                                                BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8246 */
                                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* letn8255 */
                                                              // ----------
                                                              ;
                                                              ({ /* progn8257 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn8263 */
                                                      // ----------
                                                      ;
                                                      ({ /* letn8265 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn8269 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8280 */
                                                                List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* letn8291 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn8293 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8304 */
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
                                            }) : ({ /* letn8315 */
                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match8190 ;
                                              // ----------
                                              ;
                                              ({ /* progn8317 */
                                                passthru ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8321 */
                                      // ----------
                                      ;
                                      ({ /* progn8323 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn8329 */
                              // ----------
                              ;
                              ({ /* progn8331 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn8339 */
                      // ----------
                      ;
                      ({ /* letn8341 */
                        bool __h_case_result  = (true  &&  ((match8147 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8345 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8351 */
                            // ----------
                            ;
                            ({ /* progn8353 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8357 */
              // ----------
              ;
              ({ /* progn8359 */
                ({ /* letn8366 */
                  Maybe_Rc_BTree_int_User match8365  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match8365 . __h_data). Just). __h_0_mem)) child ;
                  // ----------
                  ;
                  ({ /* letn8368 */
                    bool __h_case_result  = (true  &&  (((match8365 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8369 */
                          child  = (((match8365 . __h_data). Just). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8374 */
                        ({ /* letn8381 */
                          Maybe_BTree_int_User match8380  = deref_Rc_BTree_int_User (child );
                          typeof((((match8380 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8383 */
                            bool __h_case_result  = (true  &&  (((match8380 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8384 */
                                  tr  = (((match8380 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8389 */
                                ({ /* letn8396 */
                                  Either_BTree_int_User_Error_BTree_int_User match8395  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match8395 . __h_data). Right). __h_0_mem)) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* letn8398 */
                                    bool __h_case_result  = (true  &&  (((match8395 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8399 */
                                          child_tree  = (((match8395 . __h_data). Right). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn8404 */
                                        ({ /* letn8410 */
                                          typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                          typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                          // ----------
                                          ;
                                          ({ /* letn8412 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8413 */
                                                    child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                    true ;
                                                  }) &&  ({ /* progn8415 */
                                                    child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn8420 */
                                                ({ /* letn8427 */
                                                  typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                  typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8425_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn8429 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8430 */
                                                              single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn8432 */
                                                              __h_match8425_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match8425_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn8437 */
                                                        ({ /* letn8440 */
                                                          BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8451 */
                                                              List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                              List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                              List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                              List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                              // ----------
                                                              cloneAll_Rc_BTree_int_User (r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* letn8460 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn8462 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn8468 */
                                                // ----------
                                                ;
                                                ({ /* letn8470 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8474 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8483 */
                                                          List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                          List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* letn8492 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8494 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8503 */
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
                                      }) : ({ /* letn8512 */
                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match8395 ;
                                        // ----------
                                        ;
                                        ({ /* progn8514 */
                                          passthru ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn8518 */
                                // ----------
                                ;
                                ({ /* progn8520 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8527 */
                        // ----------
                        ;
                        ({ /* progn8529 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8535 */
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
    return ({ /* letn8551 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8553 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8554 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8556 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8558 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8563 */
              ({ /* letn8569 */
                Ordering match8568  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8571 */
                  bool __h_case_result  = (true  &&  ((match8568 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8575 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* letn8583 */
                      // ----------
                      ;
                      ({ /* letn8585 */
                        bool __h_case_result  = (true  &&  ((match8568 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8589 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8595 */
                            // ----------
                            ;
                            ({ /* progn8597 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8601 */
              // ----------
              ;
              ({ /* progn8603 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8609 */
                    List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* letn8618 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8620 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8621 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8623 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8628 */
            ({ /* letn8634 */
              Either_BTree_int_User_Error_BTree_int_User match8633  = insertInternal (items , children , items , 0);
              typeof((((match8633 . __h_data). Right). __h_0_mem)) tr ;
              // ----------
              ;
              ({ /* letn8636 */
                bool __h_case_result  = (true  &&  (((match8633 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8637 */
                      tr  = (((match8633 . __h_data). Right). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn8642 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* letn8648 */
                    Either_BTree_int_User_Error_BTree_int_User passthru  = match8633 ;
                    // ----------
                    ;
                    ({ /* progn8650 */
                      passthru ;
                    });
                  }));
              });
            });
          }) : ({ /* letn8654 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8656 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8657 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8659 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8664 */
                  ({ /* letn8666 */
                    Either_BTree_int_User_Error_BTree_int_User match8633  = insertInternal (items , children , items , 0);
                    typeof((((match8633 . __h_data). Right). __h_0_mem)) tr ;
                    // ----------
                    ;
                    ({ /* letn8668 */
                      bool __h_case_result  = (true  &&  (((match8633 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8669 */
                            tr  = (((match8633 . __h_data). Right). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn8674 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* letn8676 */
                          Either_BTree_int_User_Error_BTree_int_User passthru  = match8633 ;
                          // ----------
                          ;
                          ({ /* progn8678 */
                            passthru ;
                          });
                        }));
                    });
                  });
                }) : ({ /* letn8682 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8684 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8685 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8690 */
                        ({ /* letn8696 */
                          Either_BTree_int_User_Error_BTree_int_User match8695  = insertLeaf (items , items , 0);
                          typeof((((match8695 . __h_data). Right). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8698 */
                            bool __h_case_result  = (true  &&  (((match8695 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8699 */
                                  tr  = (((match8695 . __h_data). Right). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8704 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* letn8710 */
                                Either_BTree_int_User_Error_BTree_int_User passthru  = match8695 ;
                                // ----------
                                ;
                                ({ /* progn8712 */
                                  passthru ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8716 */
                        // ----------
                        ;
                        ({ /* progn8718 */
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
  { /* let8726 */
    BTree_int_User this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* let8732 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8734 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn8735 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn8737 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* block8744 */
              { /* block8746 */
                free_Rc_BTree_int_User ((&head ));
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* let8751 */
      typeof((((this -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((this -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8753 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8754 */
                items  = (((this -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8756 */
                children  = (((this -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block8763 */
            { /* block8765 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* let8776 */
            typeof((((this -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((this -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8778 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8779 */
                      items  = (((this -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8781 */
                      children  = (((this -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* block8788 */
                  { /* block8790 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* let8797 */
                  typeof((((this -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8799 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8800 */
                          items  = (((this -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block8807 */
                        { /* block8809 */
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
    { /* block8819 */
      free_BTree_int_User ((*this_ptr ));
    }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8829 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8835 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* let8841 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Leaf_t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
BTree_int_User ins (BTree_int_User tree , int key , int salary , int grade ) {
  ({ /* letn8851 */
    Either_BTree_int_User_Error_BTree_int_User match8850  = insert_BTree_int_User (tree , key , ((User){ salary , grade }));
    typeof((((match8850 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8853 */
      bool __h_case_result  = (true  &&  (((match8850 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8854 */
            ntr  = (((match8850 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8859 */
          return ntr ;
        }) : ({ /* letn8863 */
          // ----------
          ;
          ({ /* progn8865 */
            { /* block8867 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
BTree_int_User del (BTree_int_User tree , int key ) {
  ({ /* letn8877 */
    Either_BTree_int_User_Error_BTree_int_User match8876  = delete_BTree_int_User (tree , key , NULL );
    typeof((((match8876 . __h_data). Right). __h_0_mem)) ntr ;
    // ----------
    ;
    ({ /* letn8879 */
      bool __h_case_result  = (true  &&  (((match8876 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8880 */
            ntr  = (((match8876 . __h_data). Right). __h_0_mem) ;
            true ;
          }) ) );
      // ----------
      
      ((__h_case_result ) ? ({ /* progn8885 */
          return ntr ;
        }) : ({ /* letn8889 */
          // ----------
          ;
          ({ /* progn8891 */
            { /* block8893 */
              bad  = (bad  +  1 );
              return Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
            }
          });
        }));
    });
  });
}
long salaryOf (BTree_int_User tree , int key ) {
  return ({ /* letn8905 */
      Maybe_BTree_int_User_pair_t match8902  = search_BTree_int_User (tree , key );
      typeof((((match8902 . __h_data). Just). __h_0_mem)) __h_match8902_0_arg ;
      typeof((__h_match8902_0_arg . __h_1_mem)) __h_match8903_1_arg ;
      typeof((__h_match8903_1_arg . __h_0_mem)) salary ;
      // ----------
      ;
      ({ /* letn8907 */
        bool __h_case_result  = (true  &&  (((match8902 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn8908 */
                __h_match8902_0_arg  = (((match8902 . __h_data). Just). __h_0_mem) ;
                true ;
              }) &&  (true  &&  (({ /* progn8910 */
                    __h_match8903_1_arg  = (__h_match8902_0_arg . __h_1_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8912 */
                      salary  = (__h_match8903_1_arg . __h_0_mem) ;
                      true ;
                    }) ) ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8917 */
            ((long)salary );
          }) : ({ /* letn8921 */
            // ----------
            ;
            ({ /* progn8923 */
              -1;
            });
          }));
      });
    });
}
void __ciciliL_8927 (BTree_int_User_pair_t item , Bool hasNext ) {
  { /* let8933 */
    typeof((item . __h_1_mem)) __h_match8931_1_arg ;
    typeof((__h_match8931_1_arg . __h_0_mem)) salary ;
    // ----------
    ;
    ({ /* letn8935 */
      bool __h_case_result  = (true  &&  (({ /* progn8936 */
            __h_match8931_1_arg  = (item . __h_1_mem) ;
            true ;
          }) &&  (true  &&  ({ /* progn8938 */
              salary  = (__h_match8931_1_arg . __h_0_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block8945 */
          { /* block8947 */
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
  traverse_BTree_int_User (tree , __ciciliL_8927 );
  return seen ;
}
int main () {
  ({ /* letn8953 */
    BTree_int_User t0  __attribute__((__cleanup__(free_BTree_int_User ))) = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    // ----------
    bad  += check ("an empty tree has no minimum", ({ /* letn8962 */
          Maybe_BTree_int_User_pair_t match8961  = min_BTree_int_User (t0 );
          // ----------
          ;
          ({ /* letn8964 */
            bool __h_case_result  = (true  &&  ((match8961 . __h_ctor) ==  __h_Just_t  ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn8968 */
                1;
              }) : ({ /* letn8972 */
                // ----------
                ;
                ({ /* progn8974 */
                  0;
                });
              }));
          });
        }), 0) ;
    bad  += check ("an empty tree traverses to nothing", countAll (t0 ), 0) ;
    ({ /* letn8977 */
      BTree_int_User t1  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t0 , 30, 3000, 1);
      // ----------
      ({ /* letn8981 */
        BTree_int_User t2  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t1 , 20, 2000, 1);
        // ----------
        ({ /* letn8985 */
          BTree_int_User t3  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t2 , 40, 4000, 2);
          // ----------
          ({ /* letn8989 */
            BTree_int_User t4  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t3 , 18, 1800, 2);
            // ----------
            ({ /* letn8993 */
              BTree_int_User t5  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t4 , 28, 2800, 3);
              // ----------
              ({ /* letn8997 */
                BTree_int_User t6  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t5 , 50, 5000, 3);
                // ----------
                ({ /* letn9001 */
                  BTree_int_User t7  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t6 , 10, 1000, 1);
                  // ----------
                  ({ /* letn9005 */
                    BTree_int_User t8  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t7 , 42, 4200, 2);
                    // ----------
                    ({ /* letn9009 */
                      BTree_int_User t9  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t8 , 52, 5200, 3);
                      // ----------
                      ({ /* letn9013 */
                        BTree_int_User ta  __attribute__((__cleanup__(free_BTree_int_User ))) = ins (t9 , 8, 800, 1);
                        // ----------
                        bad  += check ("ten keys traverse in order", countAll (ta ), 10) ;
                        bad  += check ("and their salaries add up", total , 29800) ;
                        bad  += check ("search finds the root key", salaryOf (ta , 30), 3000) ;
                        bad  += check ("search finds a leaf key", salaryOf (ta , 8), 800) ;
                        bad  += check ("search finds the last key", salaryOf (ta , 52), 5200) ;
                        bad  += check ("search misses what is absent", salaryOf (ta , 99), -1) ;
                        bad  += check ("the minimum is the smallest key", ({ /* letn9022 */
                              Maybe_BTree_int_User_pair_t match9020  = min_BTree_int_User (ta );
                              typeof((((match9020 . __h_data). Just). __h_0_mem)) __h_match9020_0_arg ;
                              typeof((__h_match9020_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9024 */
                                bool __h_case_result  = (true  &&  (((match9020 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9025 */
                                        __h_match9020_0_arg  = (((match9020 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9027 */
                                          key  = (__h_match9020_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9032 */
                                    ((long)key );
                                  }) : ({ /* letn9036 */
                                    // ----------
                                    ;
                                    ({ /* progn9038 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 8) ;
                        bad  += check ("the maximum is the largest key", ({ /* letn9046 */
                              Maybe_BTree_int_User_pair_t match9044  = max_BTree_int_User (ta );
                              typeof((((match9044 . __h_data). Just). __h_0_mem)) __h_match9044_0_arg ;
                              typeof((__h_match9044_0_arg . __h_0_mem)) key ;
                              // ----------
                              ;
                              ({ /* letn9048 */
                                bool __h_case_result  = (true  &&  (((match9044 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9049 */
                                        __h_match9044_0_arg  = (((match9044 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) &&  (true  &&  ({ /* progn9051 */
                                          key  = (__h_match9044_0_arg . __h_0_mem) ;
                                          true ;
                                        }) ) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn9056 */
                                    ((long)key );
                                  }) : ({ /* letn9060 */
                                    // ----------
                                    ;
                                    ({ /* progn9062 */
                                      -1;
                                    });
                                  }));
                              });
                            }), 52) ;
                        ({ /* letn9065 */
                          BTree_int_User d1  __attribute__((__cleanup__(free_BTree_int_User ))) = del (ta , 30);
                          // ----------
                          ({ /* letn9069 */
                            BTree_int_User d2  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d1 , 8);
                            // ----------
                            ({ /* letn9073 */
                              BTree_int_User d3  __attribute__((__cleanup__(free_BTree_int_User ))) = del (d2 , 52);
                              // ----------
                              bad  += check ("three deletions leave seven", countAll (d3 ), 7) ;
                              bad  += check ("and the deleted key is gone", salaryOf (d3 , 30), -1) ;
                              bad  += check ("while its neighbour is not", salaryOf (d3 , 28), 2800) ;
                              bad  += check ("the minimum moved up", ({ /* letn9082 */
                                    Maybe_BTree_int_User_pair_t match9080  = min_BTree_int_User (d3 );
                                    typeof((((match9080 . __h_data). Just). __h_0_mem)) __h_match9080_0_arg ;
                                    typeof((__h_match9080_0_arg . __h_0_mem)) key ;
                                    // ----------
                                    ;
                                    ({ /* letn9084 */
                                      bool __h_case_result  = (true  &&  (((match9080 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn9085 */
                                              __h_match9080_0_arg  = (((match9080 . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) &&  (true  &&  ({ /* progn9087 */
                                                key  = (__h_match9080_0_arg . __h_0_mem) ;
                                                true ;
                                              }) ) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn9092 */
                                          ((long)key );
                                        }) : ({ /* letn9096 */
                                          // ----------
                                          ;
                                          ({ /* progn9098 */
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
