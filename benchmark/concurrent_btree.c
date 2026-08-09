#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
typedef struct ciciliJ9iNQqmONnyhDivVh5LB79WhnOY_ {
  int __h_0_mem ;
  int __h_1_mem ;
} ciciliJ9iNQqmONnyhDivVh5LB79WhnOY_;
typedef ciciliJ9iNQqmONnyhDivVh5LB79WhnOY_ User ;
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
  union { /* ciciliUnion120 */
    struct { /* ciciliStruct121 */
    } LT , _2 ;
    struct { /* ciciliStruct122 */
    } EQ , _1 ;
    struct { /* ciciliStruct123 */
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
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
int show_Ordering (FILE * file , Ordering value ) {
  return ({ /* letn150 */
      // ----------
      ;
      ({ /* letn152 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_LT_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn156 */
            fprintf (file , "%s", "LT");
          }) : ({ /* letn160 */
            // ----------
            ;
            ({ /* letn162 */
              bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_EQ_t  ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn166 */
                  fprintf (file , "%s", "EQ");
                }) : ({ /* letn170 */
                  // ----------
                  ;
                  ({ /* progn172 */
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
    { /* block181 */
      free_Ordering ((*this ));
    }
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering , show_Ordering };
  return (&table );
}
Ordering LT () {
  { /* let190 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* let194 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* let198 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_GT_t });
    // ----------
    return instance ;
  }
}
#endif /* __Ordering__H_IMPL__ */ 
Ordering compareKey (int lkey , int rkey ) {
  return (((lkey  <  rkey  )) ? LT () : (((lkey  ==  rkey  )) ? EQ () : GT ()));
}
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicilixqu_NrJJjjGUvYV04z0aV1kSJqI_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicilixqu_NrJJjjGUvYV04z0aV1kSJqI_;
typedef cicilixqu_NrJJjjGUvYV04z0aV1kSJqI_ BTree_int_User_pair_t ;
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
  union { /* ciciliUnion230 */
    struct { /* ciciliStruct231 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct232 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct233 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct234 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct235 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct236 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct237 */
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
  union { /* ciciliUnion285 */
    struct { /* ciciliStruct286 */
    } True , _1 ;
    struct { /* ciciliStruct287 */
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
  union { /* ciciliUnion321 */
    struct { /* ciciliStruct322 */
    } LT , _2 ;
    struct { /* ciciliStruct323 */
    } EQ , _1 ;
    struct { /* ciciliStruct324 */
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
  union { /* ciciliUnion355 */
    struct { /* ciciliStruct356 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct357 */
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
  union { /* ciciliUnion386 */
    struct { /* ciciliStruct387 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct388 */
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
  union { /* ciciliUnion417 */
    struct { /* ciciliStruct418 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct419 */
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
  union { /* ciciliUnion450 */
    struct { /* ciciliStruct451 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct452 */
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
  union { /* ciciliUnion507 */
    struct { /* ciciliStruct508 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct509 */
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
  union { /* ciciliUnion610 */
    struct { /* ciciliStruct611 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct612 */
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
  union { /* ciciliUnion641 */
    struct { /* ciciliStruct642 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct643 */
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
  union { /* ciciliUnion670 */
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
  union { /* ciciliUnion733 */
    struct { /* ciciliStruct734 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct735 */
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
  union { /* ciciliUnion789 */
    struct { /* ciciliStruct790 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct791 */
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
  union { /* ciciliUnion893 */
    struct { /* ciciliStruct894 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct895 */
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
  union { /* ciciliUnion933 */
    struct { /* ciciliStruct934 */
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
  union { /* ciciliUnion997 */
    struct { /* ciciliStruct998 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct999 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1000 */
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
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* let1060 */
    // ----------
    ;
    ({ /* letn1062 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* block1068 */
          printf ("invalid B-Tree object");
        }
      else
        { /* let1073 */
          typeof((((error . __h_data). ERR_INVALID_ORDER). __h_0_mem)) order ;
          // ----------
          ;
          ({ /* letn1075 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* progn1076 */
                  order  = (((error . __h_data). ERR_INVALID_ORDER). __h_0_mem) ;
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* block1083 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* let1088 */
                typeof((((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem)) item ;
                // ----------
                ;
                ({ /* letn1090 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* progn1091 */
                        item  = (((error . __h_data). ERR_UNIQUE_KEY). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block1098 */
                      { /* block1100 */
                        printf ("unique key: ");
                        ({ /* letn1110 */
                          typeof((item . __h_0_mem)) id ;
                          typeof((item . __h_1_mem)) __h_match1108_1_arg ;
                          typeof((__h_match1108_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1108_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1112 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1113 */
                                    id  = (item . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1115 */
                                    __h_match1108_1_arg  = (item . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1117 */
                                      salary  = (__h_match1108_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1119 */
                                      grade  = (__h_match1108_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1124 */
                                fprintf (stdout , "(%d, %d, %d)", id , salary , grade );
                              }) : ({ /* letn1128 */
                                // ----------
                                ;
                                ({ /* progn1130 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* let1135 */
                      typeof((((error . __h_data). ERR_NOT_FOUND). __h_0_mem)) key ;
                      // ----------
                      ;
                      ({ /* letn1137 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* progn1138 */
                              key  = (((error . __h_data). ERR_NOT_FOUND). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block1145 */
                            { /* block1147 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* let1155 */
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem)) item ;
                            typeof((((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem)) index ;
                            // ----------
                            ;
                            ({ /* letn1157 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* progn1158 */
                                      item  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1160 */
                                      index  = (((error . __h_data). ERR_ACCESS_DEAD_CHILD). __h_1_mem) ;
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* block1167 */
                                  { /* block1169 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* letn1179 */
                                      typeof((item . __h_0_mem)) id ;
                                      typeof((item . __h_1_mem)) __h_match1177_1_arg ;
                                      typeof((__h_match1177_1_arg . __h_0_mem)) salary ;
                                      typeof((__h_match1177_1_arg . __h_1_mem)) grade ;
                                      // ----------
                                      ;
                                      ({ /* letn1181 */
                                        bool __h_case_result  = (true  &&  ((({ /* progn1182 */
                                                id  = (item . __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn1184 */
                                                __h_match1177_1_arg  = (item . __h_1_mem) ;
                                                true ;
                                              }) ) &&  (true  &&  (({ /* progn1186 */
                                                  salary  = (__h_match1177_1_arg . __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn1188 */
                                                  grade  = (__h_match1177_1_arg . __h_1_mem) ;
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn1193 */
                                            fprintf (stdout , "(%d, %d, %d)", id , salary , grade );
                                          }) : ({ /* letn1197 */
                                            // ----------
                                            ;
                                            ({ /* progn1199 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* let1204 */
                                  typeof((((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem)) branch ;
                                  // ----------
                                  ;
                                  ({ /* letn1206 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* progn1207 */
                                          branch  = (((error . __h_data). ERR_INVALID_BRANCH). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block1214 */
                                        { /* block1216 */
                                          printf ("invalid branch: ");
                                          show_BTree_int_User (stdout , branch );
                                        }
                                      }
                                    else
                                      { /* let1222 */
                                        typeof((((error . __h_data). ERR_CANT_BORROW). __h_0_mem)) reason ;
                                        // ----------
                                        ;
                                        ({ /* letn1224 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* progn1225 */
                                                reason  = (((error . __h_data). ERR_CANT_BORROW). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block1232 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* let1237 */
                                              // ----------
                                              ;
                                              { /* block1239 */
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
    { /* block1248 */
      free_BTree_int_User_Error ((*this ));
    }
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* let1258 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* let1263 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* let1268 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* let1273 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* let1278 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* let1283 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* let1288 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (FILE * file , Bool value ) {
  return ({ /* letn1299 */
      // ----------
      ;
      ({ /* letn1301 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1305 */
            fprintf (file , "%s", "False");
          }) : ({ /* letn1309 */
            // ----------
            ;
            ({ /* progn1311 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn1319 */
      // ----------
      ;
      ({ /* letn1321 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1325 */
            True ();
          }) : ({ /* letn1329 */
            // ----------
            ;
            ({ /* progn1331 */
              ({ /* letn1337 */
                // ----------
                ;
                ({ /* letn1339 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1343 */
                      True ();
                    }) : ({ /* letn1347 */
                      // ----------
                      ;
                      ({ /* progn1349 */
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
  return ({ /* letn1357 */
      // ----------
      ;
      ({ /* letn1359 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1363 */
            False ();
          }) : ({ /* letn1367 */
            // ----------
            ;
            ({ /* progn1369 */
              ({ /* letn1375 */
                // ----------
                ;
                ({ /* letn1377 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1381 */
                      False ();
                    }) : ({ /* letn1385 */
                      // ----------
                      ;
                      ({ /* progn1387 */
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
    { /* block1396 */
      free_Bool ((*this ));
    }
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool True () {
  { /* let1405 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* let1409 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_False_t });
    // ----------
    return instance ;
  }
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
int show_Ordering (FILE * file , Ordering value ) {
  return ({ /* letn1416 */
      // ----------
      ;
      ({ /* letn1418 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_LT_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1422 */
            fprintf (file , "%s", "LT");
          }) : ({ /* letn1424 */
            // ----------
            ;
            ({ /* letn1426 */
              bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_EQ_t  ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn1430 */
                  fprintf (file , "%s", "EQ");
                }) : ({ /* letn1432 */
                  // ----------
                  ;
                  ({ /* progn1434 */
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
    { /* block1443 */
      free_Ordering ((*this ));
    }
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering , show_Ordering };
  return (&table );
}
Ordering LT () {
  { /* let1452 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* let1456 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* let1460 */
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
    { /* block1474 */
      free_Either_BTree_int_User_Error_BTree_int_User ((*this ));
    }
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* let1484 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* let1489 */
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
    { /* block1503 */
      free_Maybe_BTree_int_User ((*this ));
    }
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* let1513 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* let1518 */
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
    { /* block1532 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1542 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1547 */
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
    { /* block1563 */
      free_Maybe_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* let1573 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* let1578 */
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
    return ({ /* letn1590 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1592 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1593 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1595 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1600 */
              ({ /* letn1602 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn1606 */
              // ----------
              ;
              ({ /* progn1608 */
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
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* letn1619 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (FILE * file , List_BTree_int_User_pair_t list ) {
  return ({ /* letn1631 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1633 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1634 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1636 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1641 */
            (({ /* letn1647 */
                // ----------
                ;
                ({ /* letn1649 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1653 */
                      (({ /* letn1663 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1661_1_arg ;
                          typeof((__h_match1661_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1661_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1665 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1666 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1668 */
                                    __h_match1661_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1670 */
                                      salary  = (__h_match1661_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1672 */
                                      grade  = (__h_match1661_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1677 */
                                fprintf (file , "(%d, %d, %d)", id , salary , grade );
                              }) : ({ /* letn1681 */
                                // ----------
                                ;
                                ({ /* progn1683 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn1687 */
                      // ----------
                      ;
                      ({ /* progn1689 */
                        ({ /* letn1699 */
                          typeof((head . __h_0_mem)) id ;
                          typeof((head . __h_1_mem)) __h_match1697_1_arg ;
                          typeof((__h_match1697_1_arg . __h_0_mem)) salary ;
                          typeof((__h_match1697_1_arg . __h_1_mem)) grade ;
                          // ----------
                          ;
                          ({ /* letn1701 */
                            bool __h_case_result  = (true  &&  ((({ /* progn1702 */
                                    id  = (head . __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn1704 */
                                    __h_match1697_1_arg  = (head . __h_1_mem) ;
                                    true ;
                                  }) ) &&  (true  &&  (({ /* progn1706 */
                                      salary  = (__h_match1697_1_arg . __h_0_mem) ;
                                      true ;
                                    }) &&  ({ /* progn1708 */
                                      grade  = (__h_match1697_1_arg . __h_1_mem) ;
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn1713 */
                                fprintf (file , "(%d, %d, %d)", id , salary , grade );
                              }) : ({ /* letn1717 */
                                // ----------
                                ;
                                ({ /* progn1719 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* letn1724 */
            // ----------
            ;
            ({ /* progn1726 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn1734 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1736 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1737 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1739 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1744 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn1750 */
            // ----------
            ;
            ({ /* progn1752 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* letn1761 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1763 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1764 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1766 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1771 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1777 */
            // ----------
            ;
            ({ /* progn1779 */
              ({ /* letn1785 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1787 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1788 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1793 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1799 */
                      // ----------
                      ;
                      ({ /* progn1801 */
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
  return ({ /* letn1810 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1812 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1813 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1815 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1820 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* letn1826 */
            // ----------
            ;
            ({ /* progn1828 */
              ({ /* letn1834 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1836 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1837 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1842 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1847 */
                      // ----------
                      ;
                      ({ /* progn1849 */
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
  return ({ /* letn1858 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1860 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1861 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1863 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1868 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* letn1874 */
            // ----------
            ;
            ({ /* progn1876 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* letn1886 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1888 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1889 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1891 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1896 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* letn1902 */
            // ----------
            ;
            ({ /* progn1904 */
              ({ /* letn1910 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1912 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1913 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1918 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* letn1924 */
                      // ----------
                      ;
                      ({ /* progn1926 */
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
  return ({ /* letn1935 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1937 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1938 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1940 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1945 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* letn1951 */
            // ----------
            ;
            ({ /* progn1953 */
              ({ /* letn1959 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn1961 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1962 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn1967 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* letn1972 */
                      // ----------
                      ;
                      ({ /* progn1974 */
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
  return ({ /* letn1983 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1985 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1986 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1988 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1993 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* letn1999 */
            // ----------
            ;
            ({ /* progn2001 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* letn2012 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2014 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2015 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2017 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2022 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* letn2027 */
              // ----------
              ;
              ({ /* progn2029 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn2035 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2037 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2038 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2040 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2045 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* letn2051 */
            // ----------
            ;
            ({ /* progn2053 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* letn2061 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2063 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2064 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2066 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2071 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* letn2077 */
            // ----------
            ;
            ({ /* progn2079 */
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
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* letn2094 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2096 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2097 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2099 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2104 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* letn2110 */
              // ----------
              ;
              ({ /* progn2112 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2121 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2123 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2124 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2129 */
            ({ /* letn2135 */
              // ----------
              ;
              ({ /* letn2137 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn2141 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* letn2146 */
                    // ----------
                    ;
                    ({ /* progn2148 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn2153 */
            // ----------
            ;
            ({ /* progn2155 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2165 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2167 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2168 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2170 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2175 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* letn2181 */
            // ----------
            ;
            ({ /* progn2183 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* letn2192 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2194 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2195 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2200 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* letn2206 */
            // ----------
            ;
            ({ /* progn2208 */
              0;
            });
          }));
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2216 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2218 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2219 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2224 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* letn2229 */
            // ----------
            ;
            ({ /* progn2231 */
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
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* letn2244 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2246 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2247 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2252 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* letn2257 */
              // ----------
              ;
              ({ /* progn2259 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* letn2269 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn2271 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2272 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2277 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* letn2282 */
            // ----------
            ;
            ({ /* progn2284 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2293 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2295 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2296 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2301 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* letn2306 */
            // ----------
            ;
            ({ /* progn2308 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* letn2317 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2319 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2320 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2322 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2327 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* letn2336 */
            // ----------
            ;
            ({ /* progn2338 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* let2343 */
    List_BTree_int_User_pair_t this  = (*this_ptr );
    // ----------
    { /* let2347 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2349 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2350 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block2357 */
            { /* block2359 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* let2367 */
            // ----------
            ;
            ({ /* letn2369 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block2375 */
                  { /* block2377 */
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
    { /* block2386 */
      free_List_BTree_int_User_pair_t ((*this_ptr ));
    }
}
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table () {
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* let2396 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* let2402 */
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
    { /* block2417 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2427 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2432 */
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
    { /* block2446 */
      free_Maybe_List_BTree_int_User_pair_t ((*this ));
    }
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* let2456 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* let2461 */
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
    { /* block2496 */
      if ((*(rc -> count)) ==  1 )
        { /* block2502 */
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
    { /* block2517 */
      (++(*(rc -> count)));
      return ((rc_BTree_int_User){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_BTree_int_User){ NULL , NULL });
}
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User obj ) {
  return ({ /* letn2525 */
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
    { /* block2533 */
      return NULL ;
    }
  (++(*(box -> count)));
  return ({ /* letn2535 */
      Rc_BTree_int_User fresh  = malloc (sizeof(rc_BTree_int_User ));
      // ----------
      (fresh -> ptr) = (box -> ptr);
      (fresh -> count) = (box -> count);
      fresh ;
    });
}
__attribute__((weak)) Maybe_ref_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  if (box  ==  NULL  )
    { /* block2544 */
      return ((Maybe_ref_BTree_int_User){ .ctor = NOTHING_CTOR });
    }
  return get_rc_BTree_int_User (box );
}
void free_Rc_BTree_int_User_value (Rc_BTree_int_User box ) {
  if (box )
    { /* block2553 */
      free_rc_BTree_int_User (box );
      free (box );
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User (Rc_BTree_int_User * box ) {
  if (box )
    { /* block2561 */
      free_Rc_BTree_int_User_value ((*box ));
      (*box ) = NULL ;
    }
}
__attribute__((weak)) void free_Rc_BTree_int_User_pointer (Rc_BTree_int_User ** box ) {
  if (box )
    { /* block2569 */
      free_Rc_BTree_int_User ((*box ));
    }
}
Maybe_BTree_int_User deref_Rc_BTree_int_User (Rc_BTree_int_User box ) {
  return ({ /* letn2579 */
      Maybe_ref_BTree_int_User matchn2578  = get_Rc_BTree_int_User (box );
      // ----------
      ((((matchn2578 . ctor) ==  JUST_CTOR  )) ? ({ /* letn2581 */
          BTree_int_User * restrict child  = (((matchn2578 . data). just). value);
          // ----------
          Just_BTree_int_User ((*child ));
        }) : ({ /* progn2584 */
          Nothing_BTree_int_User ();
        }));
    });
}
List_Rc_BTree_int_User cloneAll_Rc_BTree_int_User (List_Rc_BTree_int_User children ) {
  return fmap_Functor_List_Rc_BTree_int_User (({ /* progn2596 */
      Rc_BTree_int_User __ciciliC_2595 (Rc_BTree_int_User __h_value ) {
        return clone_Rc_BTree_int_User (__h_value );
      }
      __ciciliC_2595 ;
    }), children );
}
List_Rc_BTree_int_User replaceChild_Rc_BTree_int_User (List_Rc_BTree_int_User children , BTree_int_User nchild , size_t index ) {
  return ({ /* letn2609 */
      typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2611 */
        bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2612 */
                head  = (((children -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2614 */
                tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2619 */
            (((index  ==  0 )) ? Cons_Rc_BTree_int_User (new_Rc_BTree_int_User (nchild ), cloneAll_Rc_BTree_int_User (tail )) : Cons_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ), replaceChild_Rc_BTree_int_User (tail , nchild , (index  -  1 ))));
          }) : ({ /* letn2630 */
            // ----------
            ;
            ({ /* progn2632 */
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
    { /* block2648 */
      free_Maybe_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
  Rc_BTree_int_User * __moved_value __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& value) ;
  { /* let2659 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { ((Rc_BTree_int_User   )({ /* letnmove2662 */
          Rc_BTree_int_User moved_var2661  = value ;
          // ----------
          memset ((&value ), 0, sizeof(value ));
          moved_var2661 ;
        }))}});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* let2667 */
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
    return ({ /* letn2679 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2681 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2682 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2684 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2689 */
              ({ /* letn2691 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn2695 */
              // ----------
              ;
              ({ /* progn2697 */
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
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* letn2707 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (FILE * file , List_Rc_BTree_int_User list ) {
  return ({ /* letn2719 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2721 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2722 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2724 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2729 */
            (({ /* letn2735 */
                // ----------
                ;
                ({ /* letn2737 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2741 */
                      (({ /* letn2753 */
                          Maybe_BTree_int_User match2752  = deref_Rc_BTree_int_User (head );
                          typeof((((match2752 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2755 */
                            bool __h_case_result  = (true  &&  (((match2752 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2756 */
                                  child  = (((match2752 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2761 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2766 */
                                // ----------
                                ;
                                ({ /* progn2768 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn2772 */
                      // ----------
                      ;
                      ({ /* progn2774 */
                        ({ /* letn2783 */
                          Maybe_BTree_int_User match2782  = deref_Rc_BTree_int_User (head );
                          typeof((((match2782 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn2785 */
                            bool __h_case_result  = (true  &&  (((match2782 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn2786 */
                                  child  = (((match2782 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn2791 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* letn2795 */
                                // ----------
                                ;
                                ({ /* progn2797 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* letn2802 */
            // ----------
            ;
            ({ /* progn2804 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn2812 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2814 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2815 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2817 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2822 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn2828 */
            // ----------
            ;
            ({ /* progn2830 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* letn2839 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2841 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2842 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2844 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2849 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2855 */
            // ----------
            ;
            ({ /* progn2857 */
              ({ /* letn2863 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2865 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2866 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2871 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn2877 */
                      // ----------
                      ;
                      ({ /* progn2879 */
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
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2898 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* letn2904 */
            // ----------
            ;
            ({ /* progn2906 */
              ({ /* letn2912 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2914 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2915 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2920 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn2925 */
                      // ----------
                      ;
                      ({ /* progn2927 */
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
  return ({ /* letn2936 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2938 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2939 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2941 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2946 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* letn2952 */
            // ----------
            ;
            ({ /* progn2954 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* letn2964 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2966 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2967 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2969 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2974 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* letn2980 */
            // ----------
            ;
            ({ /* progn2982 */
              ({ /* letn2988 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2990 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2991 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2996 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* letn3002 */
                      // ----------
                      ;
                      ({ /* progn3004 */
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
  return ({ /* letn3013 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3015 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3016 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3018 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3023 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* letn3029 */
            // ----------
            ;
            ({ /* progn3031 */
              ({ /* letn3037 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3039 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3040 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3045 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* letn3050 */
                      // ----------
                      ;
                      ({ /* progn3052 */
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
  return ({ /* letn3061 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3063 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3064 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3066 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3071 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* letn3077 */
            // ----------
            ;
            ({ /* progn3079 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* letn3090 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3092 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3093 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3095 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3100 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* letn3105 */
              // ----------
              ;
              ({ /* progn3107 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn3113 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3115 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3116 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3118 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3123 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* letn3129 */
            // ----------
            ;
            ({ /* progn3131 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* letn3139 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3141 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3142 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3144 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3149 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* letn3155 */
            // ----------
            ;
            ({ /* progn3157 */
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
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* letn3172 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3174 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3175 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3177 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3182 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* letn3188 */
              // ----------
              ;
              ({ /* progn3190 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3199 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3201 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3202 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3207 */
            ({ /* letn3213 */
              // ----------
              ;
              ({ /* letn3215 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3219 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* letn3224 */
                    // ----------
                    ;
                    ({ /* progn3226 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3231 */
            // ----------
            ;
            ({ /* progn3233 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3243 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3245 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3246 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3248 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3253 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* letn3259 */
            // ----------
            ;
            ({ /* progn3261 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* letn3270 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3272 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3273 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3278 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* letn3284 */
            // ----------
            ;
            ({ /* progn3286 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3294 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3296 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3297 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3302 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* letn3307 */
            // ----------
            ;
            ({ /* progn3309 */
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
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* letn3322 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3324 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3325 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3330 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* letn3335 */
              // ----------
              ;
              ({ /* progn3337 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* letn3347 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn3349 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3350 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3355 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* letn3360 */
            // ----------
            ;
            ({ /* progn3362 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3371 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3373 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3374 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3379 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* letn3384 */
            // ----------
            ;
            ({ /* progn3386 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* letn3395 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3397 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3398 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3400 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3405 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* letn3414 */
            // ----------
            ;
            ({ /* progn3416 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* let3421 */
    List_Rc_BTree_int_User this  = (*this_ptr );
    // ----------
    { /* let3425 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3427 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3428 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block3435 */
            { /* block3437 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* let3445 */
            // ----------
            ;
            ({ /* letn3447 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block3453 */
                  { /* block3455 */
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
    { /* block3463 */
      free_List_Rc_BTree_int_User ((*this_ptr ));
    }
}
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table () {
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  Rc_BTree_int_User * __moved_head __attribute__((__cleanup__( free_Rc_BTree_int_User_pointer))) = (& head) ;
  { /* let3474 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { ((Rc_BTree_int_User   )({ /* letnmove3478 */
              Rc_BTree_int_User moved_var3477  = head ;
              // ----------
              memset ((&head ), 0, sizeof(head ));
              moved_var3477 ;
            })), tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* let3483 */
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
    { /* block3498 */
      free_Maybe_List_Rc_BTree_int_User ((*this ));
    }
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
  { /* let3508 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* let3513 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* letn3531 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3533 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3534 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3536 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3541 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* letn3548 */
            // ----------
            ;
            ({ /* progn3550 */
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
    { /* block3560 */
      free_Functor_List_Rc_BTree_int_User ((*this ));
    }
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
  { /* let3570 */
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
  return ({ /* letn3590 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3592 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3593 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3595 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3600 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3606 */
                BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3617 */
                    Maybe_BTree_int_User_pair_t match3616  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match3616 . __h_data). Just). __h_0_mem)) nitem ;
                    // ----------
                    ;
                    ({ /* letn3620 */
                      bool __h_case_result  = (true  &&  (((match3616 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3621 */
                            nitem  = (((match3616 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn3626 */
                          nitem ;
                        }) : ({ /* letn3630 */
                          // ----------
                          ;
                          ({ /* progn3632 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3644 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3655 */
                      List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                      // ----------
                      cloneAll_Rc_BTree_int_User (r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* letn3662 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3664 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3665 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3667 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3672 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3674 */
                      BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3676 */
                          Maybe_BTree_int_User_pair_t match3616  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match3616 . __h_data). Just). __h_0_mem)) nitem ;
                          // ----------
                          ;
                          ({ /* letn3678 */
                            bool __h_case_result  = (true  &&  (((match3616 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3679 */
                                  nitem  = (((match3616 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn3684 */
                                nitem ;
                              }) : ({ /* letn3686 */
                                // ----------
                                ;
                                ({ /* progn3688 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3690 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3692 */
                            List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                            // ----------
                            cloneAll_Rc_BTree_int_User (r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* letn3696 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3698 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3699 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3704 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* letn3710 */
                            BTree_int_User tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tree ;
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3720 */
                                Maybe_BTree_int_User_pair_t match3719  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match3719 . __h_data). Just). __h_0_mem)) nitem ;
                                // ----------
                                ;
                                ({ /* letn3723 */
                                  bool __h_case_result  = (true  &&  (((match3719 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3724 */
                                        nitem  = (((match3719 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn3729 */
                                      nitem ;
                                    }) : ({ /* letn3733 */
                                      // ----------
                                      ;
                                      ({ /* progn3735 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* letn3751 */
                        // ----------
                        ;
                        ({ /* progn3753 */
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
  return ({ /* letn3761 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn3763 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn3764 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3766 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3771 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3783 */
                Maybe_BTree_int_User_pair_t match3782  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match3782 . __h_data). Just). __h_0_mem)) nitem ;
                // ----------
                ;
                ({ /* letn3786 */
                  bool __h_case_result  = (true  &&  (((match3782 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3787 */
                        nitem  = (((match3782 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3792 */
                      nitem ;
                    }) : ({ /* letn3796 */
                      // ----------
                      ;
                      ({ /* progn3798 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3809 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3820 */
                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                  // ----------
                  cloneAll_Rc_BTree_int_User (r1 );
                })))}), 2)) : tree );
          }) : ({ /* letn3827 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn3829 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn3830 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn3832 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn3837 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3839 */
                      Maybe_BTree_int_User_pair_t match3782  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match3782 . __h_data). Just). __h_0_mem)) nitem ;
                      // ----------
                      ;
                      ({ /* letn3841 */
                        bool __h_case_result  = (true  &&  (((match3782 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3842 */
                              nitem  = (((match3782 . __h_data). Just). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn3847 */
                            nitem ;
                          }) : ({ /* letn3849 */
                            // ----------
                            ;
                            ({ /* progn3851 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* letn3853 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* letn3855 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r1 );
                      })))}), 2)) : tree );
                }) : ({ /* letn3859 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn3861 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn3862 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn3867 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* letn3879 */
                            Maybe_BTree_int_User_pair_t match3878  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match3878 . __h_data). Just). __h_0_mem)) nitem ;
                            // ----------
                            ;
                            ({ /* letn3882 */
                              bool __h_case_result  = (true  &&  (((match3878 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn3883 */
                                    nitem  = (((match3878 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn3888 */
                                  nitem ;
                                }) : ({ /* letn3892 */
                                  // ----------
                                  ;
                                  ({ /* progn3894 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* letn3909 */
                        // ----------
                        ;
                        ({ /* progn3911 */
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
  return ({ /* letn3924 */
      BTree_int_User merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* letn3929 */
        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_children , right_children );
        // ----------
        cloneAll_Rc_BTree_int_User (r1 );
      }));
      // ----------
      ({ /* letn3940 */
        BTree_int_User tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data). Branch). __h_0_mem)) __h_match3938_0_arg ;
        typeof((((__h_match3938_0_arg -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((tmp_child -> __h_data). Branch). __h_1_mem)) tmp_children ;
        // ----------
        ;
        ({ /* letn3942 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor) ==  __h_Branch_t  ) &&  ((({ /* progn3943 */
                    __h_match3938_0_arg  = (((tmp_child -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  (((__h_match3938_0_arg -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3945 */
                        head  = (((__h_match3938_0_arg -> __h_data). Cons). __h_0_mem) ;
                        true ;
                      }) ) ) ) &&  ({ /* progn3947 */
                  tmp_children  = (((tmp_child -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3952 */
              ({ /* letn3955 */
                BTree_int_User merged_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = merged ;
                BTree_int_User tmp_child_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_child ;
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* letn3967 */
                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (pchild_index , r1 );
                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (tmp_children , r3 );
                    List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r2 , r4 );
                    // ----------
                    cloneAll_Rc_BTree_int_User (r5 );
                  }));
              });
            }) : ({ /* letn3977 */
              // ----------
              ;
              ({ /* letn3979 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3983 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* letn3991 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                        Rc_BTree_int_User r2  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (merged );
                        List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = replaceAt_List_Rc_BTree_int_User (r1 , ((Rc_BTree_int_User   )({ /* letnmove3996 */
                          Rc_BTree_int_User moved_var3995  = r2 ;
                          // ----------
                          memset ((&r2 ), 0, sizeof(r2 ));
                          moved_var3995 ;
                        })), pchild_index );
                        // ----------
                        cloneAll_Rc_BTree_int_User (r3 );
                      }));
                  }) : ({ /* letn4002 */
                    // ----------
                    ;
                    ({ /* progn4004 */
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
    return ({ /* letn4035 */
        Maybe_Rc_BTree_int_User match4034  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4034 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4037 */
          bool __h_case_result  = (true  &&  (((match4034 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4038 */
                right_child_rc  = (((match4034 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4043 */
              ({ /* letn4050 */
                Maybe_BTree_int_User match4049  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4049 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4052 */
                  bool __h_case_result  = (true  &&  (((match4049 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4053 */
                        right_child  = (((match4049 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4058 */
                      ({ /* letn4064 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4066 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4067 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4072 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4082 */
                                  typeof((((right_child_items -> __h_data). Cons). __h_0_mem)) first_item ;
                                  typeof((((right_child_items -> __h_data). Cons). __h_1_mem)) tail ;
                                  // ----------
                                  ;
                                  ({ /* letn4084 */
                                    bool __h_case_result  = (true  &&  (((right_child_items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4085 */
                                            first_item  = (((right_child_items -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn4087 */
                                            tail  = (((right_child_items -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4092 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* letn4106 */
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
                                      }) : ({ /* letn4125 */
                                        // ----------
                                        ;
                                        ({ /* progn4127 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4136 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
                                  // ----------
                                  ;
                                  ({ /* letn4138 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4139 */
                                          head  = (((current -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4144 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4157 */
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
                                      }) : ({ /* letn4172 */
                                        // ----------
                                        ;
                                        ({ /* progn4174 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4180 */
                              // ----------
                              ;
                              ({ /* progn4182 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4188 */
                      // ----------
                      ;
                      ({ /* progn4190 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4196 */
              // ----------
              ;
              ({ /* progn4198 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn4212 */
        typeof((((wleft . __h_data). Just). __h_0_mem)) left ;
        typeof((((left -> __h_data). Cons). __h_0_mem)) left_item ;
        // ----------
        ;
        ({ /* letn4214 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4215 */
                  left  = (((wleft . __h_data). Just). __h_0_mem) ;
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4217 */
                      left_item  = (((left -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4222 */
              ({ /* letn4229 */
                Maybe_Rc_BTree_int_User match4228  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4228 . __h_data). Just). __h_0_mem)) left_child_rc ;
                // ----------
                ;
                ({ /* letn4231 */
                  bool __h_case_result  = (true  &&  (((match4228 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4232 */
                        left_child_rc  = (((match4228 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4237 */
                      ({ /* letn4244 */
                        Maybe_BTree_int_User match4243  = deref_Rc_BTree_int_User (left_child_rc );
                        typeof((((match4243 . __h_data). Just). __h_0_mem)) left_child ;
                        // ----------
                        ;
                        ({ /* letn4246 */
                          bool __h_case_result  = (true  &&  (((match4243 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4247 */
                                left_child  = (((match4243 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4252 */
                              ({ /* letn4258 */
                                typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                // ----------
                                ;
                                ({ /* letn4260 */
                                  bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4261 */
                                        left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn4266 */
                                      (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4277 */
                                          List_BTree_int_User_pair_t last  = last_List_BTree_int_User_pair_t (left_child_items );
                                          typeof((((last -> __h_data). Cons). __h_0_mem)) last_item ;
                                          // ----------
                                          ;
                                          ({ /* letn4279 */
                                            bool __h_case_result  = (true  &&  (((last -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4280 */
                                                  last_item  = (((last -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4285 */
                                                ({ /* letn4288 */
                                                  List_BTree_int_User_pair_t last_spent  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = last ;
                                                  // ----------
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* letn4301 */
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
                                              }) : ({ /* letn4319 */
                                                // ----------
                                                ;
                                                ({ /* progn4321 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                });
                                              }));
                                          });
                                        }) : ({ /* letn4329 */
                                          Either_BTree_int_User_Error_BTree_int_User match4328  = borrowRight (child_items );
                                          // ----------
                                          ;
                                          ({ /* letn4331 */
                                            bool __h_case_result  = (true  &&  ((match4328 . __h_ctor) ==  __h_Left_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4335 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* letn4348 */
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
                                              }) : ({ /* letn4363 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4328 ;
                                                // ----------
                                                ;
                                                ({ /* progn4365 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        }));
                                    }) : ({ /* letn4369 */
                                      // ----------
                                      ;
                                      ({ /* progn4371 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn4377 */
                              // ----------
                              ;
                              ({ /* progn4379 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4385 */
                      // ----------
                      ;
                      ({ /* progn4387 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4393 */
              // ----------
              ;
              ({ /* progn4395 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* letn4398 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4403 */
        typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
        // ----------
        ;
        ({ /* letn4405 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn4406 */
                child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4411 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4422 */
                  BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* letn4427 */
              typeof((((nchild -> __h_data). Internal). __h_0_mem)) child_items ;
              // ----------
              ;
              ({ /* letn4429 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn4430 */
                      child_items  = (((nchild -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4435 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4437 */
                        BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* letn4441 */
                    typeof((((nchild -> __h_data). Leaf). __h_0_mem)) child_items ;
                    // ----------
                    ;
                    ({ /* letn4443 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4444 */
                            child_items  = (((nchild -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn4449 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4451 */
                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* letn4455 */
                          // ----------
                          ;
                          ({ /* progn4457 */
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
    return ({ /* letn4486 */
        Maybe_Rc_BTree_int_User match4485  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4485 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4488 */
          bool __h_case_result  = (true  &&  (((match4485 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4489 */
                right_child_rc  = (((match4485 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4494 */
              ({ /* letn4501 */
                Maybe_BTree_int_User match4500  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4500 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4503 */
                  bool __h_case_result  = (true  &&  (((match4500 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4504 */
                        right_child  = (((match4500 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4509 */
                      ({ /* letn4515 */
                        typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_child_items ;
                        typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_child_children ;
                        // ----------
                        ;
                        ({ /* letn4517 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4518 */
                                  right_child_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4520 */
                                  right_child_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4525 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4537 */
                                  Maybe_BTree_int_User_pair_t match4535  = min_BTree_int_User (right_child );
                                  typeof((((match4535 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4539 */
                                    bool __h_case_result  = (true  &&  (((match4535 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4540 */
                                            min  = (((match4535 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4542 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4547 */
                                        ({ /* letn4554 */
                                          Either_BTree_int_User_Error_BTree_int_User match4553  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4553 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4556 */
                                            bool __h_case_result  = (true  &&  (((match4553 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4557 */
                                                  nchild  = (((match4553 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4562 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4570 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4553 ;
                                                // ----------
                                                ;
                                                ({ /* progn4572 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4576 */
                                        // ----------
                                        ;
                                        ({ /* progn4578 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4587 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                  typeof((current_item . __h_0_mem)) current_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4589 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4590 */
                                            current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4592 */
                                              current_key  = (current_item . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4597 */
                                        ({ /* letn4605 */
                                          List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                          BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                          List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                          List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                          // ----------
                                          ({ /* letn4619 */
                                            Either_BTree_int_User_Error_BTree_int_User match4618  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match4618 . __h_data). Right). __h_0_mem)) ntree ;
                                            // ----------
                                            ;
                                            ({ /* letn4621 */
                                              bool __h_case_result  = (true  &&  (((match4618 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4622 */
                                                    ntree  = (((match4618 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn4627 */
                                                  ({ /* letn4634 */
                                                    BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                    typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn4636 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4637 */
                                                              branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn4639 */
                                                              branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn4644 */
                                                          ({ /* letn4650 */
                                                            typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn4652 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4653 */
                                                                    branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn4658 */
                                                                  ({ /* letn4661 */
                                                                    BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                    BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4671 */
                                                                        List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                        List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                        // ----------
                                                                        cloneAll_Rc_BTree_int_User (r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* letn4678 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn4680 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn4686 */
                                                          // ----------
                                                          ;
                                                          ({ /* letn4688 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4692 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4701 */
                                                                    Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                    List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4705 */
                                                                      Rc_BTree_int_User moved_var4704  = r9 ;
                                                                      // ----------
                                                                      memset ((&r9 ), 0, sizeof(r9 ));
                                                                      moved_var4704 ;
                                                                    })), r7 );
                                                                    List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r11 );
                                                                  })));
                                                              }) : ({ /* letn4712 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn4714 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn4720 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match4618 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn4722 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* letn4726 */
                                        // ----------
                                        ;
                                        ({ /* progn4728 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4734 */
                              typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_child_items ;
                              typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_child_children ;
                              // ----------
                              ;
                              ({ /* letn4736 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn4737 */
                                        right_child_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn4739 */
                                        right_child_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn4744 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4746 */
                                        Maybe_BTree_int_User_pair_t match4535  = min_BTree_int_User (right_child );
                                        typeof((((match4535 . __h_data). Just). __h_0_mem)) min ;
                                        typeof((min . __h_0_mem)) min_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4748 */
                                          bool __h_case_result  = (true  &&  (((match4535 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4749 */
                                                  min  = (((match4535 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4751 */
                                                    min_key  = (min . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4756 */
                                              ({ /* letn4758 */
                                                Either_BTree_int_User_Error_BTree_int_User match4553  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match4553 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn4760 */
                                                  bool __h_case_result  = (true  &&  (((match4553 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4761 */
                                                        nchild  = (((match4553 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn4766 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                                    }) : ({ /* letn4768 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match4553 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn4770 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn4772 */
                                              // ----------
                                              ;
                                              ({ /* progn4774 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* letn4776 */
                                        typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                        typeof((current_item . __h_0_mem)) current_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4778 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4779 */
                                                  current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4781 */
                                                    current_key  = (current_item . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4786 */
                                              ({ /* letn4788 */
                                                List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ({ /* letn4790 */
                                                  Either_BTree_int_User_Error_BTree_int_User match4618  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match4618 . __h_data). Right). __h_0_mem)) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn4792 */
                                                    bool __h_case_result  = (true  &&  (((match4618 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4793 */
                                                          ntree  = (((match4618 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn4798 */
                                                        ({ /* letn4800 */
                                                          BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                          typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn4802 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4803 */
                                                                    branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn4805 */
                                                                    branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4810 */
                                                                ({ /* letn4812 */
                                                                  typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn4814 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4815 */
                                                                          branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn4820 */
                                                                        ({ /* letn4822 */
                                                                          BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                          BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4824 */
                                                                              List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                              List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                              // ----------
                                                                              cloneAll_Rc_BTree_int_User (r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* letn4826 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn4828 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn4830 */
                                                                // ----------
                                                                ;
                                                                ({ /* letn4832 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn4836 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4838 */
                                                                          Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                          List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4840 */
                                                                            Rc_BTree_int_User moved_var4839  = r9 ;
                                                                            // ----------
                                                                            memset ((&r9 ), 0, sizeof(r9 ));
                                                                            moved_var4839 ;
                                                                          })), r7 );
                                                                          List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          cloneAll_Rc_BTree_int_User (r11 );
                                                                        })));
                                                                    }) : ({ /* letn4843 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn4845 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn4847 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match4618 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn4849 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* letn4851 */
                                              // ----------
                                              ;
                                              ({ /* progn4853 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* letn4857 */
                                    // ----------
                                    ;
                                    ({ /* progn4859 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4865 */
                      // ----------
                      ;
                      ({ /* progn4867 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4873 */
              // ----------
              ;
              ({ /* progn4875 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* letn4889 */
        Maybe_Rc_BTree_int_User match4888  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4888 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4891 */
          bool __h_case_result  = (true  &&  (((match4888 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4892 */
                right_child_rc  = (((match4888 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4897 */
              ({ /* letn4904 */
                Maybe_BTree_int_User match4903  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4903 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4906 */
                  bool __h_case_result  = (true  &&  (((match4903 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4907 */
                        right_child  = (((match4903 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4912 */
                      ({ /* letn4918 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4920 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4921 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4926 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4938 */
                                  Maybe_BTree_int_User_pair_t match4936  = min_BTree_int_User (right_child );
                                  typeof((((match4936 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4940 */
                                    bool __h_case_result  = (true  &&  (((match4936 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4941 */
                                            min  = (((match4936 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4943 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4948 */
                                        ({ /* letn4955 */
                                          Either_BTree_int_User_Error_BTree_int_User match4954  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4954 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4957 */
                                            bool __h_case_result  = (true  &&  (((match4954 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4958 */
                                                  nchild  = (((match4954 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4963 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4971 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4954 ;
                                                // ----------
                                                ;
                                                ({ /* progn4973 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4977 */
                                        // ----------
                                        ;
                                        ({ /* progn4979 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4992 */
                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* letn5005 */
                              // ----------
                              ;
                              ({ /* progn5007 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5013 */
                      // ----------
                      ;
                      ({ /* progn5015 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5021 */
              // ----------
              ;
              ({ /* progn5023 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* letn5028 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5034 */
        Maybe_Rc_BTree_int_User match5033  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match5033 . __h_data). Just). __h_0_mem)) left_child_rc ;
        // ----------
        ;
        ({ /* letn5036 */
          bool __h_case_result  = (true  &&  (((match5033 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5037 */
                left_child_rc  = (((match5033 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5042 */
              ({ /* letn5049 */
                Maybe_BTree_int_User match5048  = deref_Rc_BTree_int_User (left_child_rc );
                typeof((((match5048 . __h_data). Just). __h_0_mem)) left_child ;
                // ----------
                ;
                ({ /* letn5051 */
                  bool __h_case_result  = (true  &&  (((match5048 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5052 */
                        left_child  = (((match5048 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn5057 */
                      ({ /* letn5063 */
                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_child_items ;
                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_child_children ;
                        // ----------
                        ;
                        ({ /* letn5065 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5066 */
                                  left_child_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn5068 */
                                  left_child_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5073 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5085 */
                                  Maybe_BTree_int_User_pair_t match5083  = max_BTree_int_User (left_child );
                                  typeof((((match5083 . __h_data). Just). __h_0_mem)) max ;
                                  typeof((max . __h_0_mem)) max_key ;
                                  // ----------
                                  ;
                                  ({ /* letn5087 */
                                    bool __h_case_result  = (true  &&  (((match5083 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5088 */
                                            max  = (((match5083 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn5090 */
                                              max_key  = (max . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5095 */
                                        ({ /* letn5102 */
                                          Either_BTree_int_User_Error_BTree_int_User match5101  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match5101 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn5104 */
                                            bool __h_case_result  = (true  &&  (((match5101 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5105 */
                                                  nchild  = (((match5101 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5110 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                              }) : ({ /* letn5118 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5101 ;
                                                // ----------
                                                ;
                                                ({ /* progn5120 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn5124 */
                                        // ----------
                                        ;
                                        ({ /* progn5126 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* letn5132 */
                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_child_items ;
                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_child_children ;
                              // ----------
                              ;
                              ({ /* letn5134 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5135 */
                                        left_child_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn5137 */
                                        left_child_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn5142 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5144 */
                                        Maybe_BTree_int_User_pair_t match5083  = max_BTree_int_User (left_child );
                                        typeof((((match5083 . __h_data). Just). __h_0_mem)) max ;
                                        typeof((max . __h_0_mem)) max_key ;
                                        // ----------
                                        ;
                                        ({ /* letn5146 */
                                          bool __h_case_result  = (true  &&  (((match5083 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5147 */
                                                  max  = (((match5083 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn5149 */
                                                    max_key  = (max . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn5154 */
                                              ({ /* letn5156 */
                                                Either_BTree_int_User_Error_BTree_int_User match5101  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match5101 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn5158 */
                                                  bool __h_case_result  = (true  &&  (((match5101 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5159 */
                                                        nchild  = (((match5101 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5164 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                    }) : ({ /* letn5166 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match5101 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn5168 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn5170 */
                                              // ----------
                                              ;
                                              ({ /* progn5172 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* letn5176 */
                                    typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* letn5178 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn5179 */
                                            left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5184 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5196 */
                                              Maybe_BTree_int_User_pair_t match5194  = max_BTree_int_User (left_child );
                                              typeof((((match5194 . __h_data). Just). __h_0_mem)) max ;
                                              typeof((max . __h_0_mem)) max_key ;
                                              // ----------
                                              ;
                                              ({ /* letn5198 */
                                                bool __h_case_result  = (true  &&  (((match5194 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5199 */
                                                        max  = (((match5194 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) &&  (true  &&  ({ /* progn5201 */
                                                          max_key  = (max . __h_0_mem) ;
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn5206 */
                                                    ({ /* letn5213 */
                                                      Either_BTree_int_User_Error_BTree_int_User match5212  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match5212 . __h_data). Right). __h_0_mem)) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn5215 */
                                                        bool __h_case_result  = (true  &&  (((match5212 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5216 */
                                                              nchild  = (((match5212 . __h_data). Right). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn5221 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          }) : ({ /* letn5229 */
                                                            Either_BTree_int_User_Error_BTree_int_User passthru  = match5212 ;
                                                            // ----------
                                                            ;
                                                            ({ /* progn5231 */
                                                              passthru ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn5235 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn5237 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* letn5243 */
                                          // ----------
                                          ;
                                          ({ /* progn5245 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5251 */
                      // ----------
                      ;
                      ({ /* progn5253 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5259 */
              // ----------
              ;
              ({ /* progn5261 */
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
    return ({ /* letn5290 */
        Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5296 */
          typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
          typeof((head . __h_0_mem)) key ;
          typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
          // ----------
          ;
          ({ /* letn5298 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn5299 */
                      head  = (((current -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) &&  (true  &&  ({ /* progn5301 */
                        key  = (head . __h_0_mem) ;
                        true ;
                      }) ) ) &&  ({ /* progn5303 */
                    tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn5308 */
                ({ /* letn5314 */
                  Ordering match5313  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* letn5316 */
                    bool __h_case_result  = (true  &&  ((match5313 . __h_ctor) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn5320 */
                        ({ /* letn5327 */
                          Maybe_Rc_BTree_int_User match5326  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match5326 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn5329 */
                            bool __h_case_result  = (true  &&  (((match5326 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5330 */
                                  child  = (((match5326 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn5335 */
                                ({ /* letn5342 */
                                  Maybe_BTree_int_User match5341  = deref_Rc_BTree_int_User (child );
                                  typeof((((match5341 . __h_data). Just). __h_0_mem)) tr ;
                                  // ----------
                                  ;
                                  ({ /* letn5344 */
                                    bool __h_case_result  = (true  &&  (((match5341 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5345 */
                                          tr  = (((match5341 . __h_data). Just). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5350 */
                                        ({ /* letn5356 */
                                          // ----------
                                          ;
                                          ({ /* letn5358 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5362 */
                                                ({ /* letn5369 */
                                                  Either_BTree_int_User_Error_BTree_int_User match5368  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match5368 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn5371 */
                                                    bool __h_case_result  = (true  &&  (((match5368 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5372 */
                                                          nchild  = (((match5368 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn5377 */
                                                        ({ /* letn5383 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5385 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5386 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn5388 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5393 */
                                                                ({ /* letn5400 */
                                                                  Maybe_Rc_BTree_int_User match5399  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5399 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn5402 */
                                                                    bool __h_case_result  = (true  &&  (((match5399 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5403 */
                                                                          wleft  = (((match5399 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn5408 */
                                                                        ({ /* letn5415 */
                                                                          Maybe_BTree_int_User match5414  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5414 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn5417 */
                                                                            bool __h_case_result  = (true  &&  (((match5414 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5418 */
                                                                                  left_child  = (((match5414 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn5423 */
                                                                                ({ /* letn5429 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5431 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5432 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5434 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5439 */
                                                                                        ({ /* letn5442 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5449 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5451 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5452 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5454 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5459 */
                                                                                              ({ /* letn5461 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5465 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn5467 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn5473 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn5475 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn5481 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn5483 */
                                                                          ({ /* letn5490 */
                                                                            Maybe_Rc_BTree_int_User match5489  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5489 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5492 */
                                                                              bool __h_case_result  = (true  &&  (((match5489 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5493 */
                                                                                    wright  = (((match5489 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5498 */
                                                                                  ({ /* letn5505 */
                                                                                    Maybe_BTree_int_User match5504  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5504 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn5507 */
                                                                                      bool __h_case_result  = (true  &&  (((match5504 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5508 */
                                                                                            right_child  = (((match5504 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn5513 */
                                                                                          ({ /* letn5519 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5521 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5522 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5524 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5529 */
                                                                                                  ({ /* letn5532 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5539 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5541 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5542 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5544 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5549 */
                                                                                                        ({ /* letn5551 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5555 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn5557 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn5563 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn5565 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn5571 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn5573 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn5579 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn5581 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn5589 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match5368 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn5591 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn5595 */
                                                // ----------
                                                ;
                                                ({ /* letn5597 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5601 */
                                                      ({ /* letn5607 */
                                                        Either_BTree_int_User_Error_BTree_int_User match5606  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match5606 . __h_data). Right). __h_0_mem)) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn5609 */
                                                          bool __h_case_result  = (true  &&  (((match5606 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5610 */
                                                                nchild  = (((match5606 . __h_data). Right). __h_0_mem) ;
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn5615 */
                                                              ({ /* letn5621 */
                                                                typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                                typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* letn5623 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5624 */
                                                                          child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                          true ;
                                                                        }) &&  ({ /* progn5626 */
                                                                          child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn5631 */
                                                                      ({ /* letn5633 */
                                                                        Maybe_Rc_BTree_int_User match5399  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match5399 . __h_data). Just). __h_0_mem)) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn5635 */
                                                                          bool __h_case_result  = (true  &&  (((match5399 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5636 */
                                                                                wleft  = (((match5399 . __h_data). Just). __h_0_mem) ;
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn5641 */
                                                                              ({ /* letn5643 */
                                                                                Maybe_BTree_int_User match5414  = deref_Rc_BTree_int_User (wleft );
                                                                                typeof((((match5414 . __h_data). Just). __h_0_mem)) left_child ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* letn5645 */
                                                                                  bool __h_case_result  = (true  &&  (((match5414 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5646 */
                                                                                        left_child  = (((match5414 . __h_data). Just). __h_0_mem) ;
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* progn5651 */
                                                                                      ({ /* letn5653 */
                                                                                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5655 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5656 */
                                                                                                  left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5658 */
                                                                                                  left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5663 */
                                                                                              ({ /* letn5665 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5667 */
                                                                                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* letn5669 */
                                                                                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5670 */
                                                                                                        left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                        true ;
                                                                                                      }) &&  ({ /* progn5672 */
                                                                                                        left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* progn5677 */
                                                                                                    ({ /* letn5679 */
                                                                                                      BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* letn5681 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* progn5683 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* letn5685 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* progn5687 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* letn5689 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn5691 */
                                                                                ({ /* letn5693 */
                                                                                  Maybe_Rc_BTree_int_User match5489  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match5489 . __h_data). Just). __h_0_mem)) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5695 */
                                                                                    bool __h_case_result  = (true  &&  (((match5489 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5696 */
                                                                                          wright  = (((match5489 . __h_data). Just). __h_0_mem) ;
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5701 */
                                                                                        ({ /* letn5703 */
                                                                                          Maybe_BTree_int_User match5504  = deref_Rc_BTree_int_User (wright );
                                                                                          typeof((((match5504 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* letn5705 */
                                                                                            bool __h_case_result  = (true  &&  (((match5504 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5706 */
                                                                                                  right_child  = (((match5504 . __h_data). Just). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* progn5711 */
                                                                                                ({ /* letn5713 */
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5715 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5716 */
                                                                                                            right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5718 */
                                                                                                            right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5723 */
                                                                                                        ({ /* letn5725 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5727 */
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* letn5729 */
                                                                                                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5730 */
                                                                                                                  right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* progn5732 */
                                                                                                                  right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* progn5737 */
                                                                                                              ({ /* letn5739 */
                                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* letn5741 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* progn5743 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* letn5745 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* progn5747 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* letn5749 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5751 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* letn5755 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn5757 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* letn5761 */
                                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match5606 ;
                                                              // ----------
                                                              ;
                                                              ({ /* progn5763 */
                                                                passthru ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn5767 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn5769 */
                                                        ({ /* letn5776 */
                                                          Either_BTree_int_User_Error_BTree_int_User match5775  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match5775 . __h_data). Right). __h_0_mem)) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5778 */
                                                            bool __h_case_result  = (true  &&  (((match5775 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5779 */
                                                                  nchild  = (((match5775 . __h_data). Right). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5784 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* letn5789 */
                                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5775 ;
                                                                // ----------
                                                                ;
                                                                ({ /* progn5791 */
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
                                      }) : ({ /* letn5795 */
                                        // ----------
                                        ;
                                        ({ /* progn5797 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn5803 */
                                // ----------
                                ;
                                ({ /* progn5805 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn5811 */
                        // ----------
                        ;
                        ({ /* letn5813 */
                          bool __h_case_result  = (true  &&  ((match5313 . __h_ctor) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5817 */
                              ({ /* letn5820 */
                                Either_BTree_int_User_Error_BTree_int_User result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* let5825 */
                                  // ----------
                                  ;
                                  ({ /* letn5827 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block5833 */
                                        if (callback )
                                          { /* block5838 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* letn5842 */
                              // ----------
                              ;
                              ({ /* progn5844 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* letn5849 */
                // ----------
                ;
                ({ /* progn5851 */
                  ({ /* letn5858 */
                    Maybe_Rc_BTree_int_User match5857  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match5857 . __h_data). Just). __h_0_mem)) child ;
                    // ----------
                    ;
                    ({ /* letn5860 */
                      bool __h_case_result  = (true  &&  (((match5857 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5861 */
                            child  = (((match5857 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn5866 */
                          ({ /* letn5873 */
                            Maybe_BTree_int_User match5872  = deref_Rc_BTree_int_User (child );
                            typeof((((match5872 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn5875 */
                              bool __h_case_result  = (true  &&  (((match5872 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5876 */
                                    tr  = (((match5872 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn5881 */
                                  ({ /* letn5887 */
                                    // ----------
                                    ;
                                    ({ /* letn5889 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5893 */
                                          ({ /* letn5900 */
                                            Either_BTree_int_User_Error_BTree_int_User match5899  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match5899 . __h_data). Right). __h_0_mem)) nchild ;
                                            // ----------
                                            ;
                                            ({ /* letn5902 */
                                              bool __h_case_result  = (true  &&  (((match5899 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5903 */
                                                    nchild  = (((match5899 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn5908 */
                                                  ({ /* letn5914 */
                                                    typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                    typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn5916 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5917 */
                                                              child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn5919 */
                                                              child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn5924 */
                                                          ({ /* letn5931 */
                                                            Maybe_Rc_BTree_int_User match5930  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match5930 . __h_data). Just). __h_0_mem)) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn5933 */
                                                              bool __h_case_result  = (true  &&  (((match5930 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5934 */
                                                                    wleft  = (((match5930 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn5939 */
                                                                  ({ /* letn5946 */
                                                                    Maybe_BTree_int_User match5945  = deref_Rc_BTree_int_User (wleft );
                                                                    typeof((((match5945 . __h_data). Just). __h_0_mem)) left_child ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn5948 */
                                                                      bool __h_case_result  = (true  &&  (((match5945 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5949 */
                                                                            left_child  = (((match5945 . __h_data). Just). __h_0_mem) ;
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn5954 */
                                                                          ({ /* letn5960 */
                                                                            typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                            typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5962 */
                                                                              bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5963 */
                                                                                      left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) &&  ({ /* progn5965 */
                                                                                      left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5970 */
                                                                                  ({ /* letn5973 */
                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                    // ----------
                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                  });
                                                                                }) : ({ /* letn5980 */
                                                                                  typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5982 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5983 */
                                                                                            left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5985 */
                                                                                            left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5990 */
                                                                                        ({ /* letn5992 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5996 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5998 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* letn6004 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6006 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* letn6012 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6014 */
                                                                    ({ /* letn6021 */
                                                                      Maybe_Rc_BTree_int_User match6020  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match6020 . __h_data). Just). __h_0_mem)) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* letn6023 */
                                                                        bool __h_case_result  = (true  &&  (((match6020 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6024 */
                                                                              wright  = (((match6020 . __h_data). Just). __h_0_mem) ;
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* progn6029 */
                                                                            ({ /* letn6036 */
                                                                              Maybe_BTree_int_User match6035  = deref_Rc_BTree_int_User (wright );
                                                                              typeof((((match6035 . __h_data). Just). __h_0_mem)) right_child ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* letn6038 */
                                                                                bool __h_case_result  = (true  &&  (((match6035 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6039 */
                                                                                      right_child  = (((match6035 . __h_data). Just). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* progn6044 */
                                                                                    ({ /* letn6050 */
                                                                                      typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                      typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* letn6052 */
                                                                                        bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6053 */
                                                                                                right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                true ;
                                                                                              }) &&  ({ /* progn6055 */
                                                                                                right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                true ;
                                                                                              }) ) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* progn6060 */
                                                                                            ({ /* letn6063 */
                                                                                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                            });
                                                                                          }) : ({ /* letn6070 */
                                                                                            typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6072 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6073 */
                                                                                                      right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6075 */
                                                                                                      right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6080 */
                                                                                                  ({ /* letn6082 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6086 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* progn6088 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* letn6094 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* progn6096 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* letn6102 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* progn6104 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6110 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6112 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6120 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match5899 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn6122 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* letn6126 */
                                          // ----------
                                          ;
                                          ({ /* letn6128 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn6132 */
                                                ({ /* letn6138 */
                                                  Either_BTree_int_User_Error_BTree_int_User match6137  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match6137 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6140 */
                                                    bool __h_case_result  = (true  &&  (((match6137 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6141 */
                                                          nchild  = (((match6137 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6146 */
                                                        ({ /* letn6152 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6154 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6155 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn6157 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6162 */
                                                                ({ /* letn6164 */
                                                                  Maybe_Rc_BTree_int_User match5930  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5930 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6166 */
                                                                    bool __h_case_result  = (true  &&  (((match5930 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6167 */
                                                                          wleft  = (((match5930 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6172 */
                                                                        ({ /* letn6174 */
                                                                          Maybe_BTree_int_User match5945  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5945 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6176 */
                                                                            bool __h_case_result  = (true  &&  (((match5945 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6177 */
                                                                                  left_child  = (((match5945 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6182 */
                                                                                ({ /* letn6184 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn6186 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6187 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn6189 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn6194 */
                                                                                        ({ /* letn6196 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn6198 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn6200 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6201 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn6203 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn6208 */
                                                                                              ({ /* letn6210 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn6212 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn6214 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn6216 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6218 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn6220 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6222 */
                                                                          ({ /* letn6224 */
                                                                            Maybe_Rc_BTree_int_User match6020  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6020 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn6226 */
                                                                              bool __h_case_result  = (true  &&  (((match6020 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6227 */
                                                                                    wright  = (((match6020 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn6232 */
                                                                                  ({ /* letn6234 */
                                                                                    Maybe_BTree_int_User match6035  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match6035 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn6236 */
                                                                                      bool __h_case_result  = (true  &&  (((match6035 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6237 */
                                                                                            right_child  = (((match6035 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn6242 */
                                                                                          ({ /* letn6244 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6246 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6247 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6249 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6254 */
                                                                                                  ({ /* letn6256 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6258 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn6260 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6261 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn6263 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn6268 */
                                                                                                        ({ /* letn6270 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn6272 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn6274 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn6276 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn6278 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn6280 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn6282 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn6286 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6288 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6292 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match6137 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn6294 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn6298 */
                                                // ----------
                                                ;
                                                ({ /* progn6300 */
                                                  ({ /* letn6307 */
                                                    Either_BTree_int_User_Error_BTree_int_User match6306  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match6306 . __h_data). Right). __h_0_mem)) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6309 */
                                                      bool __h_case_result  = (true  &&  (((match6306 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6310 */
                                                            nchild  = (((match6306 . __h_data). Right). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6315 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* letn6320 */
                                                          Either_BTree_int_User_Error_BTree_int_User passthru  = match6306 ;
                                                          // ----------
                                                          ;
                                                          ({ /* progn6322 */
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
                                }) : ({ /* letn6326 */
                                  // ----------
                                  ;
                                  ({ /* progn6328 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* letn6335 */
                          // ----------
                          ;
                          ({ /* progn6337 */
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
        ({ /* letn6345 */
          Either_BTree_int_User_Error_BTree_int_User rs  = ({ /* letn6350 */
            typeof((((result . __h_data). Right). __h_0_mem)) ntr ;
            // ----------
            ;
            ({ /* letn6352 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6353 */
                    ntr  = (((result . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn6358 */
                  ({ /* letn6364 */
                    typeof((((ntr -> __h_data). Branch). __h_0_mem)) items ;
                    typeof((((ntr -> __h_data). Branch). __h_1_mem)) children ;
                    // ----------
                    ;
                    ({ /* letn6366 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6367 */
                              items  = (((ntr -> __h_data). Branch). __h_0_mem) ;
                              true ;
                            }) &&  ({ /* progn6369 */
                              children  = (((ntr -> __h_data). Branch). __h_1_mem) ;
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6374 */
                          ({ /* letn6377 */
                            size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6387 */
                                typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                // ----------
                                ;
                                ({ /* letn6389 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6390 */
                                        ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn6395 */
                                      ({ /* letn6401 */
                                        typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                        // ----------
                                        ;
                                        ({ /* letn6403 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6404 */
                                                pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn6409 */
                                              ({ /* letn6416 */
                                                Maybe_BTree_int_User_pair_t match6415  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match6415 . __h_data). Just). __h_0_mem)) bitem ;
                                                // ----------
                                                ;
                                                ({ /* letn6418 */
                                                  bool __h_case_result  = (true  &&  (((match6415 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6419 */
                                                        bitem  = (((match6415 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn6424 */
                                                      ({ /* letn6427 */
                                                        BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6437 */
                                                            Ordering match6436  = compareKey (({ /* letn6442 */
                                                              typeof((bitem . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6444 */
                                                                bool __h_case_result  = (true  &&  ({ /* progn6445 */
                                                                    key  = (bitem . __h_0_mem) ;
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6450 */
                                                                    key ;
                                                                  }) : ({ /* letn6454 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6456 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* letn6463 */
                                                              typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6461_0_arg ;
                                                              typeof((__h_match6461_0_arg . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6465 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6466 */
                                                                        __h_match6461_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* progn6468 */
                                                                          key  = (__h_match6461_0_arg . __h_0_mem) ;
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6473 */
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
                                                              bool __h_case_result  = (true  &&  ((match6436 . __h_ctor) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6486 */
                                                                  0;
                                                                }) : ({ /* letn6490 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6492 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), cloneAll_Rc_BTree_int_User (children )));
                                                      });
                                                    }) : ({ /* letn6497 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn6499 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn6505 */
                                              typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6507 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6508 */
                                                      pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6513 */
                                                    ({ /* letn6519 */
                                                      Maybe_BTree_int_User_pair_t match6518  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6518 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6521 */
                                                        bool __h_case_result  = (true  &&  (((match6518 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6522 */
                                                              bitem  = (((match6518 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6527 */
                                                            ({ /* letn6529 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6531 */
                                                                  Ordering match6436  = compareKey (({ /* letn6532 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6534 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6535 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6540 */
                                                                          key ;
                                                                        }) : ({ /* letn6542 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6544 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6546 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6461_0_arg ;
                                                                    typeof((__h_match6461_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6548 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6549 */
                                                                              __h_match6461_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6551 */
                                                                                key  = (__h_match6461_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6556 */
                                                                          key ;
                                                                        }) : ({ /* letn6558 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6560 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6563 */
                                                                    bool __h_case_result  = (true  &&  ((match6436 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6567 */
                                                                        0;
                                                                      }) : ({ /* letn6569 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6571 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6575 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6577 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6581 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn6583 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn6589 */
                                      // ----------
                                      ;
                                      ({ /* progn6591 */
                                        (((items_len  ==  0 )) ? ({ /* letn6598 */
                                            typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                            // ----------
                                            ;
                                            ({ /* letn6600 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6601 */
                                                    head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn6606 */
                                                  ({ /* letn6613 */
                                                    Maybe_BTree_int_User match6612  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                    typeof((((match6612 . __h_data). Just). __h_0_mem)) chtr ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6616 */
                                                      bool __h_case_result  = (true  &&  (((match6612 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6617 */
                                                            chtr  = (((match6612 . __h_data). Just). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6622 */
                                                          ({ /* letn6625 */
                                                            BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                            // ----------
                                                            Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                          });
                                                        }) : ({ /* letn6631 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6633 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6639 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn6641 */
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
                        }) : ({ /* letn6645 */
                          typeof((((ntr -> __h_data). Internal). __h_0_mem)) items ;
                          typeof((((ntr -> __h_data). Internal). __h_1_mem)) children ;
                          // ----------
                          ;
                          ({ /* letn6647 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6648 */
                                    items  = (((ntr -> __h_data). Internal). __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn6650 */
                                    children  = (((ntr -> __h_data). Internal). __h_1_mem) ;
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn6655 */
                                ({ /* letn6657 */
                                  size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6659 */
                                      typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                      // ----------
                                      ;
                                      ({ /* letn6661 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6662 */
                                              ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn6667 */
                                            ({ /* letn6669 */
                                              typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6671 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6672 */
                                                      pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6677 */
                                                    ({ /* letn6679 */
                                                      Maybe_BTree_int_User_pair_t match6415  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6415 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6681 */
                                                        bool __h_case_result  = (true  &&  (((match6415 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6682 */
                                                              bitem  = (((match6415 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6687 */
                                                            ({ /* letn6689 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6691 */
                                                                  Ordering match6436  = compareKey (({ /* letn6692 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6694 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6695 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6700 */
                                                                          key ;
                                                                        }) : ({ /* letn6702 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6704 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6706 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6461_0_arg ;
                                                                    typeof((__h_match6461_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6708 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6709 */
                                                                              __h_match6461_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6711 */
                                                                                key  = (__h_match6461_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6716 */
                                                                          key ;
                                                                        }) : ({ /* letn6718 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6720 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6723 */
                                                                    bool __h_case_result  = (true  &&  ((match6436 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6727 */
                                                                        0;
                                                                      }) : ({ /* letn6729 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6731 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6733 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6735 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6737 */
                                                    typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6739 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6740 */
                                                            pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6745 */
                                                          ({ /* letn6747 */
                                                            Maybe_BTree_int_User_pair_t match6518  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match6518 . __h_data). Just). __h_0_mem)) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn6749 */
                                                              bool __h_case_result  = (true  &&  (((match6518 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6750 */
                                                                    bitem  = (((match6518 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6755 */
                                                                  ({ /* letn6757 */
                                                                    BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6759 */
                                                                        Ordering match6436  = compareKey (({ /* letn6760 */
                                                                          typeof((bitem . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6762 */
                                                                            bool __h_case_result  = (true  &&  ({ /* progn6763 */
                                                                                key  = (bitem . __h_0_mem) ;
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6768 */
                                                                                key ;
                                                                              }) : ({ /* letn6770 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6772 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* letn6774 */
                                                                          typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6461_0_arg ;
                                                                          typeof((__h_match6461_0_arg . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6776 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6777 */
                                                                                    __h_match6461_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* progn6779 */
                                                                                      key  = (__h_match6461_0_arg . __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6784 */
                                                                                key ;
                                                                              }) : ({ /* letn6786 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6788 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn6791 */
                                                                          bool __h_case_result  = (true  &&  ((match6436 . __h_ctor) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn6795 */
                                                                              0;
                                                                            }) : ({ /* letn6797 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn6799 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), cloneAll_Rc_BTree_int_User (children )));
                                                                  });
                                                                }) : ({ /* letn6801 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6803 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6805 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6807 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* letn6809 */
                                            // ----------
                                            ;
                                            ({ /* progn6811 */
                                              (((items_len  ==  0 )) ? ({ /* letn6813 */
                                                  typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6815 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6816 */
                                                          head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6821 */
                                                        ({ /* letn6823 */
                                                          Maybe_BTree_int_User match6612  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                          typeof((((match6612 . __h_data). Just). __h_0_mem)) chtr ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6825 */
                                                            bool __h_case_result  = (true  &&  (((match6612 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6826 */
                                                                  chtr  = (((match6612 . __h_data). Just). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6831 */
                                                                ({ /* letn6833 */
                                                                  BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              }) : ({ /* letn6835 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6837 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6839 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn6841 */
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
                              }) : ({ /* letn6845 */
                                // ----------
                                ;
                                ({ /* progn6847 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* letn6851 */
                  // ----------
                  ;
                  ({ /* progn6853 */
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
    return ({ /* letn6869 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6871 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn6872 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn6874 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn6876 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6881 */
              ({ /* letn6887 */
                Ordering match6886  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn6889 */
                  bool __h_case_result  = (true  &&  ((match6886 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn6893 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* letn6899 */
                      // ----------
                      ;
                      ({ /* letn6901 */
                        bool __h_case_result  = (true  &&  ((match6886 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn6905 */
                            ({ /* letn6908 */
                              Either_BTree_int_User_Error_BTree_int_User result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* let6915 */
                                // ----------
                                ;
                                ({ /* letn6917 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block6923 */
                                      if (callback )
                                        { /* block6928 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* letn6932 */
                            // ----------
                            ;
                            ({ /* progn6934 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn6938 */
              // ----------
              ;
              ({ /* progn6940 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* letn6945 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn6950 */
        typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
        typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
        // ----------
        ;
        ({ /* letn6952 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6953 */
                  items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6955 */
                  children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6960 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* letn6966 */
              typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
              typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
              // ----------
              ;
              ({ /* letn6968 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6969 */
                        items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                        true ;
                      }) &&  ({ /* progn6971 */
                        children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn6976 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* letn6980 */
                    typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                    // ----------
                    ;
                    ({ /* letn6982 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn6983 */
                            items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6988 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* letn6992 */
                          // ----------
                          ;
                          ({ /* progn6994 */
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
  return ({ /* letn7011 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* let7020 */
            Either_BTree_int_User_Error_BTree_int_User match7019  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match7019 . __h_data). Right). __h_0_mem)) new_tree ;
            // ----------
            ;
            ({ /* letn7023 */
              bool __h_case_result  = (true  &&  (((match7019 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn7024 */
                    new_tree  = (((match7019 . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block7031 */
                  { /* block7033 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* let7039 */
                  Either_BTree_int_User_Error_BTree_int_User left  = match7019 ;
                  // ----------
                  ;
                  { /* block7041 */
                    { /* block7043 */
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
    return ({ /* letn7056 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7058 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7059 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7061 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7066 */
              (({ /* letn7072 */
                  // ----------
                  ;
                  ({ /* letn7074 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7078 */
                        ({ /* letn7085 */
                          Maybe_BTree_int_User match7084  = deref_Rc_BTree_int_User (head );
                          typeof((((match7084 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn7087 */
                            bool __h_case_result  = (true  &&  (((match7084 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7088 */
                                  tr  = (((match7084 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7093 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* letn7097 */
                                // ----------
                                ;
                                ({ /* progn7099 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn7103 */
                        // ----------
                        ;
                        ({ /* progn7105 */
                          ({ /* letn7112 */
                            Maybe_BTree_int_User match7111  = deref_Rc_BTree_int_User (head );
                            typeof((((match7111 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn7114 */
                              bool __h_case_result  = (true  &&  (((match7111 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7115 */
                                    tr  = (((match7111 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7120 */
                                  showTree (indent , tr );
                                }) : ({ /* letn7124 */
                                  // ----------
                                  ;
                                  ({ /* progn7126 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* letn7130 */
              // ----------
              ;
              ({ /* progn7132 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* letn7139 */
          typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7141 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7142 */
                    items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7144 */
                    children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn7149 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7156 */
                    // ----------
                    ;
                    ({ /* letn7158 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn7162 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* letn7166 */
                          // ----------
                          ;
                          ({ /* progn7168 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* letn7172 */
                typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
                typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
                // ----------
                ;
                ({ /* letn7174 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7175 */
                          items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                          true ;
                        }) &&  ({ /* progn7177 */
                          children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7182 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7184 */
                          // ----------
                          ;
                          ({ /* letn7186 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7190 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* letn7192 */
                                // ----------
                                ;
                                ({ /* progn7194 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* letn7198 */
                      typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                      // ----------
                      ;
                      ({ /* letn7200 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7201 */
                              items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7206 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* letn7211 */
                            // ----------
                            ;
                            ({ /* progn7213 */
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
    { /* let7226 */
      typeof((((currentChild -> __h_data). Cons). __h_0_mem)) wheadC ;
      typeof((((currentChild -> __h_data). Cons). __h_1_mem)) tailC ;
      // ----------
      ;
      ({ /* letn7228 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7229 */
                wheadC  = (((currentChild -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7231 */
                tailC  = (((currentChild -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7238 */
            { /* let7242 */
              Maybe_BTree_int_User match7241  = deref_Rc_BTree_int_User (wheadC );
              typeof((((match7241 . __h_data). Just). __h_0_mem)) headC ;
              // ----------
              ;
              ({ /* letn7245 */
                bool __h_case_result  = (true  &&  (((match7241 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7246 */
                      headC  = (((match7241 . __h_data). Just). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* block7253 */
                    { /* let7257 */
                      // ----------
                      ;
                      ({ /* letn7259 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block7265 */
                            { /* block7267 */
                              { /* let7271 */
                                typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                // ----------
                                ;
                                ({ /* letn7273 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7274 */
                                          items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7276 */
                                          children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7283 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* let7288 */
                                      typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                      typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                      // ----------
                                      ;
                                      ({ /* letn7290 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7291 */
                                                items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn7293 */
                                                children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* block7300 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* let7305 */
                                            typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7307 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7308 */
                                                    items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* block7315 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* let7319 */
                                typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                // ----------
                                ;
                                ({ /* letn7321 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7322 */
                                          headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7324 */
                                          tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7331 */
                                      { /* block7333 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* let7338 */
                            // ----------
                            ;
                            { /* block7340 */
                              { /* block7342 */
                                { /* let7346 */
                                  typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                  typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                  // ----------
                                  ;
                                  ({ /* letn7348 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7349 */
                                            items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7351 */
                                            children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7358 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* let7363 */
                                        typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                        typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                        // ----------
                                        ;
                                        ({ /* letn7365 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7366 */
                                                  items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn7368 */
                                                  children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block7375 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* let7380 */
                                              typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                              // ----------
                                              ;
                                              ({ /* letn7382 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7383 */
                                                      items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* block7390 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* let7394 */
                                  typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                  typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                  // ----------
                                  ;
                                  ({ /* letn7396 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7397 */
                                            headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7399 */
                                            tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7406 */
                                        { /* block7408 */
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
    { /* let7414 */
      typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn7416 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7417 */
                head  = (((current -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7419 */
                tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7426 */
            { /* block7428 */
              callback (head , ({ /* letn7434 */
                  // ----------
                  ;
                  ({ /* letn7436 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7440 */
                        hasNextLeaf ;
                      }) : ({ /* letn7444 */
                        // ----------
                        ;
                        ({ /* progn7446 */
                          ({ /* letn7452 */
                            // ----------
                            ;
                            ({ /* letn7454 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7458 */
                                  True ();
                                }) : ({ /* letn7462 */
                                  // ----------
                                  ;
                                  ({ /* progn7464 */
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
  { /* let7468 */
    typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
    typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
    // ----------
    ;
    ({ /* letn7470 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7471 */
              items  = (((tree -> __h_data). Branch). __h_0_mem) ;
              true ;
            }) &&  ({ /* progn7473 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block7480 */
          traverseInternal (items , children );
        }
      else
        { /* let7485 */
          typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7487 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7488 */
                    items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7490 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* block7497 */
                traverseInternal (items , children );
              }
            else
              { /* let7502 */
                typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                // ----------
                ;
                ({ /* letn7504 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7505 */
                        items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block7512 */
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
    return ({ /* letn7529 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7531 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7532 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7534 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7539 */
              ({ /* letn7545 */
                // ----------
                ;
                ({ /* letn7547 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7551 */
                      ({ /* letn7558 */
                        Maybe_BTree_int_User match7557  = deref_Rc_BTree_int_User (head );
                        typeof((((match7557 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn7560 */
                          bool __h_case_result  = (true  &&  (((match7557 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7561 */
                                child  = (((match7557 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7566 */
                              ({ /* letn7572 */
                                typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                                // ----------
                                ;
                                ({ /* letn7574 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7575 */
                                        nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7580 */
                                      maxInternal (nchildren );
                                    }) : ({ /* letn7584 */
                                      typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* letn7586 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7587 */
                                              nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn7592 */
                                            maxInternal (nchildren );
                                          }) : ({ /* letn7596 */
                                            typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7598 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7599 */
                                                    items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn7604 */
                                                  maxLeaf (items );
                                                }) : ({ /* letn7608 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn7610 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7615 */
                              // ----------
                              ;
                              ({ /* progn7617 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7622 */
                      // ----------
                      ;
                      ({ /* progn7624 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7628 */
              // ----------
              ;
              ({ /* progn7630 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* letn7640 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7642 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7643 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7645 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7650 */
              ({ /* letn7656 */
                // ----------
                ;
                ({ /* letn7658 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7662 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn7667 */
                      // ----------
                      ;
                      ({ /* progn7669 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7673 */
              // ----------
              ;
              ({ /* progn7675 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7682 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7684 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7685 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7690 */
            maxInternal (children );
          }) : ({ /* letn7694 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7696 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7697 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7702 */
                  maxInternal (children );
                }) : ({ /* letn7706 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7708 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7709 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7714 */
                        maxLeaf (items );
                      }) : ({ /* letn7718 */
                        // ----------
                        ;
                        ({ /* progn7720 */
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
    return ({ /* letn7738 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7740 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7741 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7746 */
              ({ /* letn7753 */
                Maybe_BTree_int_User match7752  = deref_Rc_BTree_int_User (head );
                typeof((((match7752 . __h_data). Just). __h_0_mem)) child ;
                // ----------
                ;
                ({ /* letn7755 */
                  bool __h_case_result  = (true  &&  (((match7752 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7756 */
                        child  = (((match7752 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7761 */
                      ({ /* letn7767 */
                        typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                        // ----------
                        ;
                        ({ /* letn7769 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7770 */
                                nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7775 */
                              minInternal (nchildren );
                            }) : ({ /* letn7779 */
                              typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                              // ----------
                              ;
                              ({ /* letn7781 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7782 */
                                      nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn7787 */
                                    minInternal (nchildren );
                                  }) : ({ /* letn7791 */
                                    typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                    // ----------
                                    ;
                                    ({ /* letn7793 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7794 */
                                            items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn7799 */
                                          minLeaf (items );
                                        }) : ({ /* letn7803 */
                                          // ----------
                                          ;
                                          ({ /* progn7805 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7810 */
                      // ----------
                      ;
                      ({ /* progn7812 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* letn7817 */
              // ----------
              ;
              ({ /* progn7819 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* letn7829 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7831 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7832 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7837 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* letn7842 */
              // ----------
              ;
              ({ /* progn7844 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7851 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7853 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7854 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7859 */
            minInternal (children );
          }) : ({ /* letn7863 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7865 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7866 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7871 */
                  minInternal (children );
                }) : ({ /* letn7875 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7877 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7878 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7883 */
                        minLeaf (items );
                      }) : ({ /* letn7887 */
                        // ----------
                        ;
                        ({ /* progn7889 */
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
    return ({ /* letn7911 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7913 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7914 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7916 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7918 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7923 */
              ({ /* letn7929 */
                Ordering match7928  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn7931 */
                  bool __h_case_result  = (true  &&  ((match7928 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7935 */
                      ({ /* letn7942 */
                        Maybe_Rc_BTree_int_User match7941  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match7941 . __h_data). Just). __h_0_mem)) node ;
                        // ----------
                        ;
                        ({ /* letn7944 */
                          bool __h_case_result  = (true  &&  (((match7941 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7945 */
                                node  = (((match7941 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7950 */
                              ({ /* letn7957 */
                                Maybe_BTree_int_User match7956  = deref_Rc_BTree_int_User (node );
                                typeof((((match7956 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn7959 */
                                  bool __h_case_result  = (true  &&  (((match7956 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7960 */
                                        tr  = (((match7956 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7965 */
                                      search_BTree_int_User (tr , skey );
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
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7984 */
                      // ----------
                      ;
                      ({ /* letn7986 */
                        bool __h_case_result  = (true  &&  ((match7928 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7990 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* letn7995 */
                            // ----------
                            ;
                            ({ /* progn7997 */
                              ({ /* letn8003 */
                                // ----------
                                ;
                                ({ /* letn8005 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8009 */
                                      ({ /* letn8016 */
                                        Maybe_Rc_BTree_int_User match8015  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match8015 . __h_data). Just). __h_0_mem)) node ;
                                        // ----------
                                        ;
                                        ({ /* letn8018 */
                                          bool __h_case_result  = (true  &&  (((match8015 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8019 */
                                                node  = (((match8015 . __h_data). Just). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8024 */
                                              ({ /* letn8031 */
                                                Maybe_BTree_int_User match8030  = deref_Rc_BTree_int_User (node );
                                                typeof((((match8030 . __h_data). Just). __h_0_mem)) tr ;
                                                // ----------
                                                ;
                                                ({ /* letn8033 */
                                                  bool __h_case_result  = (true  &&  (((match8030 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8034 */
                                                        tr  = (((match8030 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8039 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* letn8044 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8046 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn8051 */
                                              // ----------
                                              ;
                                              ({ /* progn8053 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8058 */
                                      // ----------
                                      ;
                                      ({ /* progn8060 */
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
            }) : ({ /* letn8064 */
              // ----------
              ;
              ({ /* progn8066 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8077 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8079 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8080 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8082 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8084 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8089 */
              ({ /* letn8095 */
                Ordering match8094  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8097 */
                  bool __h_case_result  = (true  &&  ((match8094 . __h_ctor) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8101 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn8106 */
                      // ----------
                      ;
                      ({ /* progn8108 */
                        ({ /* letn8114 */
                          // ----------
                          ;
                          ({ /* letn8116 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8120 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* letn8125 */
                                // ----------
                                ;
                                ({ /* progn8127 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* letn8131 */
              // ----------
              ;
              ({ /* progn8133 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn8140 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8142 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8143 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8145 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8150 */
            searchInternal (children , items , 0);
          }) : ({ /* letn8154 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8156 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8157 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8159 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8164 */
                  searchInternal (children , items , 0);
                }) : ({ /* letn8168 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8170 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8171 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8176 */
                        searchLeaf (items , 0);
                      }) : ({ /* letn8180 */
                        // ----------
                        ;
                        ({ /* progn8182 */
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
    { /* block8195 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8211 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8213 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8214 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8216 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8218 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8223 */
              ({ /* letn8229 */
                Ordering match8228  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8231 */
                  bool __h_case_result  = (true  &&  ((match8228 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8235 */
                      ({ /* letn8242 */
                        Maybe_Rc_BTree_int_User match8241  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match8241 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn8244 */
                          bool __h_case_result  = (true  &&  (((match8241 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8245 */
                                child  = (((match8241 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn8250 */
                              ({ /* letn8257 */
                                Maybe_BTree_int_User match8256  = deref_Rc_BTree_int_User (child );
                                typeof((((match8256 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn8259 */
                                  bool __h_case_result  = (true  &&  (((match8256 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8260 */
                                        tr  = (((match8256 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8265 */
                                      ({ /* letn8272 */
                                        Either_BTree_int_User_Error_BTree_int_User match8271  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match8271 . __h_data). Right). __h_0_mem)) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* letn8274 */
                                          bool __h_case_result  = (true  &&  (((match8271 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8275 */
                                                child_tree  = (((match8271 . __h_data). Right). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8280 */
                                              ({ /* letn8286 */
                                                typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                                typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                                // ----------
                                                ;
                                                ({ /* letn8288 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8289 */
                                                          child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                          true ;
                                                        }) &&  ({ /* progn8291 */
                                                          child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8296 */
                                                      ({ /* letn8303 */
                                                        typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                        typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8301_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn8305 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8306 */
                                                                    single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn8308 */
                                                                    __h_match8301_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match8301_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn8313 */
                                                              ({ /* letn8316 */
                                                                BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8327 */
                                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* letn8336 */
                                                              // ----------
                                                              ;
                                                              ({ /* progn8338 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn8344 */
                                                      // ----------
                                                      ;
                                                      ({ /* letn8346 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn8350 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8361 */
                                                                List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* letn8372 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn8374 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8385 */
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
                                            }) : ({ /* letn8396 */
                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match8271 ;
                                              // ----------
                                              ;
                                              ({ /* progn8398 */
                                                passthru ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8402 */
                                      // ----------
                                      ;
                                      ({ /* progn8404 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn8410 */
                              // ----------
                              ;
                              ({ /* progn8412 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn8420 */
                      // ----------
                      ;
                      ({ /* letn8422 */
                        bool __h_case_result  = (true  &&  ((match8228 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8426 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8432 */
                            // ----------
                            ;
                            ({ /* progn8434 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8438 */
              // ----------
              ;
              ({ /* progn8440 */
                ({ /* letn8447 */
                  Maybe_Rc_BTree_int_User match8446  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match8446 . __h_data). Just). __h_0_mem)) child ;
                  // ----------
                  ;
                  ({ /* letn8449 */
                    bool __h_case_result  = (true  &&  (((match8446 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8450 */
                          child  = (((match8446 . __h_data). Just). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8455 */
                        ({ /* letn8462 */
                          Maybe_BTree_int_User match8461  = deref_Rc_BTree_int_User (child );
                          typeof((((match8461 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8464 */
                            bool __h_case_result  = (true  &&  (((match8461 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8465 */
                                  tr  = (((match8461 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8470 */
                                ({ /* letn8477 */
                                  Either_BTree_int_User_Error_BTree_int_User match8476  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match8476 . __h_data). Right). __h_0_mem)) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* letn8479 */
                                    bool __h_case_result  = (true  &&  (((match8476 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8480 */
                                          child_tree  = (((match8476 . __h_data). Right). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn8485 */
                                        ({ /* letn8491 */
                                          typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                          typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                          // ----------
                                          ;
                                          ({ /* letn8493 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8494 */
                                                    child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                    true ;
                                                  }) &&  ({ /* progn8496 */
                                                    child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn8501 */
                                                ({ /* letn8508 */
                                                  typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                  typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8506_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn8510 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8511 */
                                                              single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn8513 */
                                                              __h_match8506_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match8506_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn8518 */
                                                        ({ /* letn8521 */
                                                          BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8532 */
                                                              List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                              List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                              List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                              List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                              // ----------
                                                              cloneAll_Rc_BTree_int_User (r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* letn8541 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn8543 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn8549 */
                                                // ----------
                                                ;
                                                ({ /* letn8551 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8555 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8564 */
                                                          List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                          List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* letn8573 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8575 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8584 */
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
                                      }) : ({ /* letn8593 */
                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match8476 ;
                                        // ----------
                                        ;
                                        ({ /* progn8595 */
                                          passthru ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn8599 */
                                // ----------
                                ;
                                ({ /* progn8601 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8608 */
                        // ----------
                        ;
                        ({ /* progn8610 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8616 */
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
    return ({ /* letn8632 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8634 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8635 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8637 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8639 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8644 */
              ({ /* letn8650 */
                Ordering match8649  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8652 */
                  bool __h_case_result  = (true  &&  ((match8649 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8656 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* letn8664 */
                      // ----------
                      ;
                      ({ /* letn8666 */
                        bool __h_case_result  = (true  &&  ((match8649 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8670 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8676 */
                            // ----------
                            ;
                            ({ /* progn8678 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8682 */
              // ----------
              ;
              ({ /* progn8684 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8690 */
                    List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* letn8699 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8701 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8702 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8704 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8709 */
            ({ /* letn8715 */
              Either_BTree_int_User_Error_BTree_int_User match8714  = insertInternal (items , children , items , 0);
              typeof((((match8714 . __h_data). Right). __h_0_mem)) tr ;
              // ----------
              ;
              ({ /* letn8717 */
                bool __h_case_result  = (true  &&  (((match8714 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8718 */
                      tr  = (((match8714 . __h_data). Right). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn8723 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* letn8729 */
                    Either_BTree_int_User_Error_BTree_int_User passthru  = match8714 ;
                    // ----------
                    ;
                    ({ /* progn8731 */
                      passthru ;
                    });
                  }));
              });
            });
          }) : ({ /* letn8735 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8737 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8738 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8740 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8745 */
                  ({ /* letn8747 */
                    Either_BTree_int_User_Error_BTree_int_User match8714  = insertInternal (items , children , items , 0);
                    typeof((((match8714 . __h_data). Right). __h_0_mem)) tr ;
                    // ----------
                    ;
                    ({ /* letn8749 */
                      bool __h_case_result  = (true  &&  (((match8714 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8750 */
                            tr  = (((match8714 . __h_data). Right). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn8755 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* letn8757 */
                          Either_BTree_int_User_Error_BTree_int_User passthru  = match8714 ;
                          // ----------
                          ;
                          ({ /* progn8759 */
                            passthru ;
                          });
                        }));
                    });
                  });
                }) : ({ /* letn8763 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8765 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8766 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8771 */
                        ({ /* letn8777 */
                          Either_BTree_int_User_Error_BTree_int_User match8776  = insertLeaf (items , items , 0);
                          typeof((((match8776 . __h_data). Right). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8779 */
                            bool __h_case_result  = (true  &&  (((match8776 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8780 */
                                  tr  = (((match8776 . __h_data). Right). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8785 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* letn8791 */
                                Either_BTree_int_User_Error_BTree_int_User passthru  = match8776 ;
                                // ----------
                                ;
                                ({ /* progn8793 */
                                  passthru ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8797 */
                        // ----------
                        ;
                        ({ /* progn8799 */
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
  { /* let8807 */
    BTree_int_User this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* let8813 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8815 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn8816 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn8818 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* block8825 */
              { /* block8827 */
                free_Rc_BTree_int_User ((&head ));
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* let8832 */
      typeof((((this -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((this -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8834 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8835 */
                items  = (((this -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8837 */
                children  = (((this -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block8844 */
            { /* block8846 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* let8857 */
            typeof((((this -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((this -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8859 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8860 */
                      items  = (((this -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8862 */
                      children  = (((this -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* block8869 */
                  { /* block8871 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* let8878 */
                  typeof((((this -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8880 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8881 */
                          items  = (((this -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block8888 */
                        { /* block8890 */
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
    { /* block8900 */
      free_BTree_int_User ((*this_ptr ));
    }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8910 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8916 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* let8922 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Leaf_t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
Bool doQuit ;
pthread_mutex_t treeArc ;
pthread_mutex_t outlock  = PTHREAD_MUTEX_INITIALIZER ;
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
  union { /* ciciliUnion8942 */
    struct { /* ciciliStruct8943 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct8944 */
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
#ifndef __Arc_BTree_int_User__H_DECL__
#define __Arc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Arc_BTree_int_User Arc_BTree_int_User ;
typedef std_data Arc_BTree_int_User_type_t ;
typedef void (*free_Arc_BTree_int_User_t) (Arc_BTree_int_User * this );
typedef struct Arc_BTree_int_User__H_Table {
  free_Arc_BTree_int_User_t freeData ;
    void (*lock) (Arc_BTree_int_User arc ,   void (*alive_callback) (BTree_int_User pointer ),   void (*dead_callback) ());
    Arc_BTree_int_User (*new) (BTree_int_User pointer , pthread_mutex_t * mutex );
    Arc_BTree_int_User (*clone) (Arc_BTree_int_User arc );
    Maybe_BTree_int_User (*take) (Arc_BTree_int_User * this );
    Maybe_BTree_int_User (*get) (Arc_BTree_int_User arc );
} Arc_BTree_int_User__H_Table;
typedef struct Arc_BTree_int_User {
  const Arc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion8986 */
    struct { /* ciciliStruct8987 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
      pthread_mutex_t * __h_3_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct8988 */
    } Gone , _ ;
  } __h_data ;
} Arc_BTree_int_User;
Arc_BTree_int_User __h_AtomicHold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address , pthread_mutex_t * mutex );
Arc_BTree_int_User AtomicGone_BTree_int_User ();
__attribute__((weak)) Arc_BTree_int_User Default_Arc_BTree_int_User () {
  return AtomicGone_BTree_int_User ();
}
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ());
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex );
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc );
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this );
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc );
const Arc_BTree_int_User__H_Table * const get_Arc_BTree_int_User__H_Table ();
void free_Arc_BTree_int_User (Arc_BTree_int_User * this );
void free_Arc_BTree_int_User_pointer (Arc_BTree_int_User ** this );
#endif /* __Arc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
__attribute__((weak)) void free_Maybe_BTree_int_User_pointer (Maybe_BTree_int_User ** this ) {
  if (this )
    { /* block9035 */
      free_Maybe_BTree_int_User ((*this ));
    }
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* let9045 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* let9050 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Arc_BTree_int_User__H_IMPL__
#define __Arc_BTree_int_User__H_IMPL__
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ()) {
  { /* let9062 */
    typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
    typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
    typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
    typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
    // ----------
    ;
    ({ /* letn9064 */
      bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9065 */
                  pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn9067 */
                  count  = (((arc . __h_data). Hold). __h_1_mem) ;
                  true ;
                }) ) &&  ({ /* progn9069 */
                address  = (((arc . __h_data). Hold). __h_2_mem) ;
                true ;
              }) ) &&  ({ /* progn9071 */
              mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9078 */
          { /* block9081 */
            pthread_mutex_lock (mutex );
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )
              alive_callback ((*pointer ));
            else
              dead_callback ();
            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* let9089 */
          // ----------
          ;
          ({ /* letn9091 */
            bool __h_case_result  = (true  &&  ((arc . __h_ctor) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* block9097 */
                dead_callback ();
              }
          });
        }
    });
  }
}
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex ) {
  return ({ /* letn9102 */
      int * count  = ((int *)malloc (sizeof(int)));
      BTree_int_User * holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_AtomicHold_BTree_int_User (holder , count , ((size_t)pointer ), mutex );
    });
}
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* letn9113 */
      typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
      typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
      typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9115 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9116 */
                    pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9118 */
                    count  = (((arc . __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9120 */
                  address  = (((arc . __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9122 */
                mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9127 */
            ({ /* progn9130 */
              pthread_mutex_lock (mutex );
              Arc_BTree_int_User lock_result  = ({ /* progn9132 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* progn9135 */
                        (++(*count ));
                        __h_AtomicHold_BTree_int_User (pointer , count , address , mutex );
                      }) : AtomicGone_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* letn9141 */
            // ----------
            ;
            ({ /* progn9143 */
              AtomicGone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  return ({ /* letn9154 */
      typeof((((this -> __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((this -> __h_data). Hold). __h_1_mem)) count ;
      typeof((((this -> __h_data). Hold). __h_2_mem)) address ;
      typeof((((this -> __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9156 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9157 */
                    pointer  = (((this -> __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9159 */
                    count  = (((this -> __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9161 */
                  address  = (((this -> __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9163 */
                mutex  = (((this -> __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9168 */
            ({ /* progn9171 */
              pthread_mutex_lock (mutex );
              Maybe_BTree_int_User lock_result  = ({ /* progn9173 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* letn9177 */
                        Maybe_BTree_int_User result  = Just_BTree_int_User ((*pointer ));
                        // ----------
                        (*count ) = 0;
                        (*pointer ) = NULL ;
                        result ;
                      }) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* letn9185 */
            // ----------
            ;
            ({ /* progn9187 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* letn9198 */
      typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
      typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
      typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9200 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9201 */
                    pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9203 */
                    count  = (((arc . __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9205 */
                  address  = (((arc . __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9207 */
                mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9212 */
            ({ /* progn9215 */
              pthread_mutex_lock (mutex );
              Maybe_BTree_int_User lock_result  = ({ /* progn9217 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* letn9224 */
            // ----------
            ;
            ({ /* progn9226 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  { /* let9235 */
    typeof((((this -> __h_data). Hold). __h_0_mem)) pointer ;
    typeof((((this -> __h_data). Hold). __h_1_mem)) count ;
    typeof((((this -> __h_data). Hold). __h_2_mem)) address ;
    typeof((((this -> __h_data). Hold). __h_3_mem)) mutex ;
    // ----------
    ;
    ({ /* letn9237 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9238 */
                  pointer  = (((this -> __h_data). Hold). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn9240 */
                  count  = (((this -> __h_data). Hold). __h_1_mem) ;
                  true ;
                }) ) &&  ({ /* progn9242 */
                address  = (((this -> __h_data). Hold). __h_2_mem) ;
                true ;
              }) ) &&  ({ /* progn9244 */
              mutex  = (((this -> __h_data). Hold). __h_3_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9251 */
          { /* block9254 */
            pthread_mutex_lock (mutex );
            if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
              { /* block9258 */
                free (((void *)count ));
                free (((void *)pointer ));
                (*this ) = AtomicGone_BTree_int_User ();
              }
            else
              {
              if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
                { /* block9267 */
                  if ((*count ) ==  1 )
                    { /* block9271 */
                      free_BTree_int_User (pointer );
                      (*count ) = 0;
                      free (((void *)count ));
                      (*pointer ) = NULL ;
                      free (((void *)pointer ));
                      (*this ) = AtomicGone_BTree_int_User ();
                    }
                  else
                    (--(*count ));
                }
                }            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* let9281 */
          // ----------
          ;
          ({ /* letn9283 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* block9289 */
              }
          });
        }
    });
  }
}
__attribute__((weak)) void free_Arc_BTree_int_User_pointer (Arc_BTree_int_User ** this ) {
  if (this )
    { /* block9298 */
      free_Arc_BTree_int_User ((*this ));
    }
}
const Arc_BTree_int_User__H_Table * const get_Arc_BTree_int_User__H_Table () {
  static const Arc_BTree_int_User__H_Table table  = { free_Arc_BTree_int_User , lock_Arc_BTree_int_User , new_Arc_BTree_int_User , clone_Arc_BTree_int_User , take_Arc_BTree_int_User , get_Arc_BTree_int_User };
  return (&table );
}
Arc_BTree_int_User __h_AtomicHold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address , pthread_mutex_t * mutex ) {
  { /* let9308 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address , mutex }});
    // ----------
    return instance ;
  }
}
Arc_BTree_int_User AtomicGone_BTree_int_User () {
  { /* let9313 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Gone_t });
    // ----------
    return instance ;
  }
}
#endif /* __Arc_BTree_int_User__H_IMPL__ */ 
void __ciciliL_9379 () {
  ({ /* letn9382 */
    FILE * tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer i)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void insertMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* block9318 */
    for (int i  = from ; (i  <=  to  ); (++i )) {
        { /* block9323 */
          lock_Arc_BTree_int_User ((*pwtree ), ({ /* progn9327 */
              void __ciciliC_9326 (BTree_int_User tree ) {
                { /* let9332 */
                  Either_BTree_int_User_Error_BTree_int_User match9331  = insert_BTree_int_User (tree , i , ((User){ (i  +  2000 ), 1}));
                  typeof((((match9331 . __h_data). Right). __h_0_mem)) new_tree ;
                  // ----------
                  ;
                  ({ /* letn9335 */
                    bool __h_case_result  = (true  &&  (((match9331 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn9336 */
                          new_tree  = (((match9331 . __h_data). Right). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block9343 */
                        { /* block9345 */
                          { /* block9348 */
                            pthread_mutex_lock ((&outlock ));
                            fprintf (stdout , "Inserted: %d", i );
                            putchar ('\n');
                            pthread_mutex_unlock ((&outlock ));
                          }
                          free_Arc_BTree_int_User (pwtree );
                          (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                        }
                      }
                    else
                      { /* let9360 */
                        typeof((((match9331 . __h_data). Left). __h_0_mem)) err ;
                        // ----------
                        ;
                        ({ /* letn9362 */
                          bool __h_case_result  = (true  &&  (((match9331 . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn9363 */
                                err  = (((match9331 . __h_data). Left). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* block9370 */
                              { /* block9373 */
                                pthread_mutex_lock ((&outlock ));
                                ({ /* letn9376 */
                                  FILE * tmp_stdout  = stdout ;
                                  // ----------
                                  stdout  = stderr ;
                                  printf ("Error during insertion: ");
                                  show_BTree_int_User_Error (err );
                                  putchar ('\n');
                                  exit (-1);
                                  stdout  = tmp_stdout ;
                                });
                                pthread_mutex_unlock ((&outlock ));
                              }
                            }
                        });
                      }
                  });
                }
              }
              __ciciliC_9326 ;
            }), __ciciliL_9379 );
          usleep (5);
        }
    }
  }
}
void __ciciliL_9387 (BTree_int_User_pair_t item ) {
  { /* let9393 */
    typeof((item . __h_0_mem)) key ;
    typeof((item . __h_1_mem)) __h_match9391_1_arg ;
    typeof((__h_match9391_1_arg . __h_0_mem)) salary ;
    // ----------
    ;
    ({ /* letn9395 */
      bool __h_case_result  = (true  &&  ((({ /* progn9396 */
              key  = (item . __h_0_mem) ;
              true ;
            }) &&  ({ /* progn9398 */
              __h_match9391_1_arg  = (item . __h_1_mem) ;
              true ;
            }) ) &&  (true  &&  ({ /* progn9400 */
              salary  = (__h_match9391_1_arg . __h_0_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9407 */
          { /* block9410 */
            pthread_mutex_lock ((&outlock ));
            printf ("Deleted: %d, %d", key , salary );
            putchar ('\n');
            pthread_mutex_unlock ((&outlock ));
          }
        }
    });
  }
}
void __ciciliL_9467 () {
  ({ /* letn9470 */
    FILE * tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer d)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void deleteMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* let9386 */
      void (*item_deallocator) (BTree_int_User_pair_t item ) = __ciciliL_9387 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        lock_Arc_BTree_int_User ((*pwtree ), ({ /* progn9419 */
            void __ciciliC_9418 (BTree_int_User tree ) {
              { /* let9424 */
                Either_BTree_int_User_Error_BTree_int_User match9423  = delete_BTree_int_User (tree , i , item_deallocator );
                typeof((((match9423 . __h_data). Right). __h_0_mem)) new_tree ;
                // ----------
                ;
                ({ /* letn9427 */
                  bool __h_case_result  = (true  &&  (((match9423 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn9428 */
                        new_tree  = (((match9423 . __h_data). Right). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block9435 */
                      { /* block9437 */
                        free_Arc_BTree_int_User (pwtree );
                        (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                      }
                    }
                  else
                    { /* let9448 */
                      typeof((((match9423 . __h_data). Left). __h_0_mem)) err ;
                      // ----------
                      ;
                      ({ /* letn9450 */
                        bool __h_case_result  = (true  &&  (((match9423 . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn9451 */
                              err  = (((match9423 . __h_data). Left). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block9458 */
                            { /* block9461 */
                              pthread_mutex_lock ((&outlock ));
                              ({ /* letn9464 */
                                FILE * tmp_stdout  = stdout ;
                                // ----------
                                stdout  = stderr ;
                                printf ("Error during deletion: ");
                                show_BTree_int_User_Error (err );
                                putchar ('\n');
                                exit (-1);
                                stdout  = tmp_stdout ;
                              });
                              pthread_mutex_unlock ((&outlock ));
                            }
                          }
                      });
                    }
                });
              }
            }
            __ciciliC_9418 ;
          }), __ciciliL_9467 );
        usleep (5);
    }
  }
}
void freeRcTree (Arc_BTree_int_User * pnwtree ) {
  free_Arc_BTree_int_User (pnwtree );
}
void searchMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  while (true ) {
      { /* let9483 */
        // ----------
        ;
        ({ /* letn9485 */
          bool __h_case_result  = (true  &&  ((doQuit . __h_ctor) ==  __h_True_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* block9491 */
              return ;
            }
        });
      }
      ({ /* letn9494 */
        Arc_BTree_int_User nwtree  __attribute__((__cleanup__(freeRcTree ))) = ({ /* progn9496 */
          pthread_mutex_lock ((&treeArc ));
          Arc_BTree_int_User lock_result  = ({ /* progn9498 */
                clone_Arc_BTree_int_User ((*pwtree ));
              });
          pthread_mutex_unlock ((&treeArc ));
          lock_result ;
        });
        // ----------
        { /* let9504 */
          Maybe_BTree_int_User match9503  = get_Arc_BTree_int_User (nwtree );
          typeof((((match9503 . __h_data). Just). __h_0_mem)) tree ;
          // ----------
          ;
          ({ /* letn9507 */
            bool __h_case_result  = (true  &&  (((match9503 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn9508 */
                  tree  = (((match9503 . __h_data). Just). __h_0_mem) ;
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* block9515 */
                for (int i  = from ; (i  <=  to  ); (++i )) {
                    { /* let9522 */
                      Maybe_BTree_int_User_pair_t match9521  = search_BTree_int_User (tree , i );
                      typeof((((match9521 . __h_data). Just). __h_0_mem)) item ;
                      // ----------
                      ;
                      ({ /* letn9525 */
                        bool __h_case_result  = (true  &&  (((match9521 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn9526 */
                              item  = (((match9521 . __h_data). Just). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block9533 */
                            { /* block9536 */
                              pthread_mutex_lock ((&outlock ));
                              fprintf (stdout , "thread: %lu, Search Found: ", ((unsigned)pthread_self ()));
                              ({ /* letn9548 */
                                typeof((item . __h_0_mem)) id ;
                                typeof((item . __h_1_mem)) __h_match9546_1_arg ;
                                typeof((__h_match9546_1_arg . __h_0_mem)) salary ;
                                typeof((__h_match9546_1_arg . __h_1_mem)) grade ;
                                // ----------
                                ;
                                ({ /* letn9550 */
                                  bool __h_case_result  = (true  &&  ((({ /* progn9551 */
                                          id  = (item . __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn9553 */
                                          __h_match9546_1_arg  = (item . __h_1_mem) ;
                                          true ;
                                        }) ) &&  (true  &&  (({ /* progn9555 */
                                            salary  = (__h_match9546_1_arg . __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn9557 */
                                            grade  = (__h_match9546_1_arg . __h_1_mem) ;
                                            true ;
                                          }) ) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn9562 */
                                      fprintf (stdout , "(%d, %d, %d)", id , salary , grade );
                                    }) : ({ /* letn9566 */
                                      // ----------
                                      ;
                                      ({ /* progn9568 */
                                        0;
                                      });
                                    }));
                                });
                              });
                              putchar ('\n');
                              pthread_mutex_unlock ((&outlock ));
                            }
                          }
                        else
                          { /* let9573 */
                            // ----------
                            ;
                            ({ /* letn9575 */
                              bool __h_case_result  = (true  &&  ((match9521 . __h_ctor) ==  __h_Nothing_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* block9581 */
                                  { /* block9584 */
                                    pthread_mutex_lock ((&outlock ));
                                    ({ /* letn9587 */
                                      FILE * tmp_stdout  = stdout ;
                                      // ----------
                                      stdout  = stderr ;
                                      printf ("thread: %lu, Search Not Found: %d", ((unsigned)pthread_self ()), i );
                                      putchar ('\n');
                                      stdout  = tmp_stdout ;
                                    });
                                    pthread_mutex_unlock ((&outlock ));
                                  }
                                }
                            });
                          }
                      });
                    }
                }
              }
          });
        }
      });
  }
}
typedef struct __ciciliC_Context_9610 {
    void (*routine) (struct __ciciliC_Context_9610 * context );
  struct { /* ciciliStruct9613 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9610;
typedef struct ciciliwxfIsl0_vVsaqG9gYYj9oXXIdXQ_ {
  void * context ;
} ciciliwxfIsl0_vVsaqG9gYYj9oXXIdXQ_;
void __ciciliL_9620 (struct ciciliwxfIsl0_vVsaqG9gYYj9oXXIdXQ_ * ciciliDefer9617 ) {
  void * context  = (ciciliDefer9617 -> context);
  free (context );
}
void __ciciliC_Context_9610___ciciliC_Routine_9611 (struct __ciciliC_Context_9610 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct ciciliwxfIsl0_vVsaqG9gYYj9oXXIdXQ_ ciciliDefer9617  __attribute__((__cleanup__(__ciciliL_9620 ))) = { context };
  searchMany (pwtree , 200, 200);
}
typedef struct __ciciliC_Context_9630 {
    void (*routine) (struct __ciciliC_Context_9630 * context );
  struct { /* ciciliStruct9633 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9630;
typedef struct ciciliRT1710IyxCxuXceH7SHKOCjyGEE_ {
  void * context ;
} ciciliRT1710IyxCxuXceH7SHKOCjyGEE_;
void __ciciliL_9638 (struct ciciliRT1710IyxCxuXceH7SHKOCjyGEE_ * ciciliDefer9617 ) {
  void * context  = (ciciliDefer9617 -> context);
  free (context );
}
void __ciciliC_Context_9630___ciciliC_Routine_9631 (struct __ciciliC_Context_9630 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct ciciliRT1710IyxCxuXceH7SHKOCjyGEE_ ciciliDefer9617  __attribute__((__cleanup__(__ciciliL_9638 ))) = { context };
  searchMany (pwtree , 500, 500);
}
typedef struct __ciciliC_Context_9648 {
    void (*routine) (struct __ciciliC_Context_9648 * context );
  struct { /* ciciliStruct9651 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9648;
typedef struct cicili6gVpG2_vh137ydx6hcLOh14n1xk_ {
  void * context ;
} cicili6gVpG2_vh137ydx6hcLOh14n1xk_;
void __ciciliL_9656 (struct cicili6gVpG2_vh137ydx6hcLOh14n1xk_ * ciciliDefer9617 ) {
  void * context  = (ciciliDefer9617 -> context);
  free (context );
}
void __ciciliC_Context_9648___ciciliC_Routine_9649 (struct __ciciliC_Context_9648 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct cicili6gVpG2_vh137ydx6hcLOh14n1xk_ ciciliDefer9617  __attribute__((__cleanup__(__ciciliL_9656 ))) = { context };
  searchMany (pwtree , 700, 700);
}
typedef struct __ciciliC_Context_9666 {
    void (*routine) (struct __ciciliC_Context_9666 * context );
  struct { /* ciciliStruct9669 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9666;
typedef struct cicili0tWpg0QYKVMZMfD_RBtuskRpi3w_ {
  void * context ;
} cicili0tWpg0QYKVMZMfD_RBtuskRpi3w_;
void __ciciliL_9674 (struct cicili0tWpg0QYKVMZMfD_RBtuskRpi3w_ * ciciliDefer9617 ) {
  void * context  = (ciciliDefer9617 -> context);
  free (context );
}
void __ciciliC_Context_9666___ciciliC_Routine_9667 (struct __ciciliC_Context_9666 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct cicili0tWpg0QYKVMZMfD_RBtuskRpi3w_ ciciliDefer9617  __attribute__((__cleanup__(__ciciliL_9674 ))) = { context };
  searchMany (pwtree , 1000, 1000);
}
int main () {
  fprintf (stdout , "Multi-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n", "User", "BTree_int_User", "int");
  doQuit  = False ();
  { /* let9596 */
    pthread_mutexattr_t attr ;
    // ----------
    pthread_mutexattr_init ((&attr ));
    pthread_mutexattr_settype ((&attr ), PTHREAD_MUTEX_RECURSIVE );
    pthread_mutex_init ((&treeArc ), (&attr ));
  }
  { /* let9598 */
    Arc_BTree_int_User wtree  = new_Arc_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()), (&treeArc ));
    Arc_BTree_int_User * pwtree  = (&wtree );
    pthread_t reader1  = ({ /* letn9607 */
      struct __ciciliC_Context_9610 closure9606  = ((struct __ciciliC_Context_9610){ __ciciliC_Context_9610___ciciliC_Routine_9611 , { pwtree }});
      void * data  = malloc (sizeof(closure9606));
      pthread_t thread9605 ;
      // ----------
      memcpy (data , (&closure9606 ), sizeof(closure9606));
      pthread_create ((&thread9605 ), NULL , ((        void * (*)(void *))(closure9606 . routine)), data );
      ;
      thread9605 ;
    });
    pthread_t reader2  = ({ /* letn9627 */
      struct __ciciliC_Context_9630 closure9626  = ((struct __ciciliC_Context_9630){ __ciciliC_Context_9630___ciciliC_Routine_9631 , { pwtree }});
      void * data  = malloc (sizeof(closure9626));
      pthread_t thread9625 ;
      // ----------
      memcpy (data , (&closure9626 ), sizeof(closure9626));
      pthread_create ((&thread9625 ), NULL , ((        void * (*)(void *))(closure9626 . routine)), data );
      ;
      thread9625 ;
    });
    pthread_t reader3  = ({ /* letn9645 */
      struct __ciciliC_Context_9648 closure9644  = ((struct __ciciliC_Context_9648){ __ciciliC_Context_9648___ciciliC_Routine_9649 , { pwtree }});
      void * data  = malloc (sizeof(closure9644));
      pthread_t thread9643 ;
      // ----------
      memcpy (data , (&closure9644 ), sizeof(closure9644));
      pthread_create ((&thread9643 ), NULL , ((        void * (*)(void *))(closure9644 . routine)), data );
      ;
      thread9643 ;
    });
    pthread_t reader4  = ({ /* letn9663 */
      struct __ciciliC_Context_9666 closure9662  = ((struct __ciciliC_Context_9666){ __ciciliC_Context_9666___ciciliC_Routine_9667 , { pwtree }});
      void * data  = malloc (sizeof(closure9662));
      pthread_t thread9661 ;
      // ----------
      memcpy (data , (&closure9662 ), sizeof(closure9662));
      pthread_create ((&thread9661 ), NULL , ((        void * (*)(void *))(closure9662 . routine)), data );
      ;
      thread9661 ;
    });
    // ----------
    insertMany (pwtree , 1, 250);
    insertMany (pwtree , 501, 750);
    insertMany (pwtree , 251, 500);
    insertMany (pwtree , 751, 1000);
    deleteMany (pwtree , 1, 250);
    deleteMany (pwtree , 501, 750);
    deleteMany (pwtree , 251, 500);
    deleteMany (pwtree , 751, 1000);
    usleep (100);
    doQuit  = True ();
    pthread_join (reader1 , NULL );
    pthread_join (reader2 , NULL );
    pthread_join (reader3 , NULL );
    pthread_join (reader4 , NULL );
    free_Arc_BTree_int_User (pwtree );
    fprintf (stdout , "Done\n");
  }
}
