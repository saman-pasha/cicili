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
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* letn3989 */
                        List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                        // ----------
                        replaceChild_Rc_BTree_int_User (r1 , merged , pchild_index );
                      }));
                  }) : ({ /* letn3995 */
                    // ----------
                    ;
                    ({ /* progn3997 */
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
    return ({ /* letn4028 */
        Maybe_Rc_BTree_int_User match4027  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4027 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4030 */
          bool __h_case_result  = (true  &&  (((match4027 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4031 */
                right_child_rc  = (((match4027 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4036 */
              ({ /* letn4043 */
                Maybe_BTree_int_User match4042  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4042 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4045 */
                  bool __h_case_result  = (true  &&  (((match4042 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4046 */
                        right_child  = (((match4042 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4051 */
                      ({ /* letn4057 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4059 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4060 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4065 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4075 */
                                  typeof((((right_child_items -> __h_data). Cons). __h_0_mem)) first_item ;
                                  typeof((((right_child_items -> __h_data). Cons). __h_1_mem)) tail ;
                                  // ----------
                                  ;
                                  ({ /* letn4077 */
                                    bool __h_case_result  = (true  &&  (((right_child_items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4078 */
                                            first_item  = (((right_child_items -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn4080 */
                                            tail  = (((right_child_items -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4085 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* letn4099 */
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
                                      }) : ({ /* letn4118 */
                                        // ----------
                                        ;
                                        ({ /* progn4120 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4129 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
                                  // ----------
                                  ;
                                  ({ /* letn4131 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4132 */
                                          head  = (((current -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4137 */
                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4150 */
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
                                      }) : ({ /* letn4165 */
                                        // ----------
                                        ;
                                        ({ /* progn4167 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4173 */
                              // ----------
                              ;
                              ({ /* progn4175 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4181 */
                      // ----------
                      ;
                      ({ /* progn4183 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4189 */
              // ----------
              ;
              ({ /* progn4191 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* letn4205 */
        typeof((((wleft . __h_data). Just). __h_0_mem)) left ;
        typeof((((left -> __h_data). Cons). __h_0_mem)) left_item ;
        // ----------
        ;
        ({ /* letn4207 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4208 */
                  left  = (((wleft . __h_data). Just). __h_0_mem) ;
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4210 */
                      left_item  = (((left -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4215 */
              ({ /* letn4222 */
                Maybe_Rc_BTree_int_User match4221  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4221 . __h_data). Just). __h_0_mem)) left_child_rc ;
                // ----------
                ;
                ({ /* letn4224 */
                  bool __h_case_result  = (true  &&  (((match4221 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4225 */
                        left_child_rc  = (((match4221 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4230 */
                      ({ /* letn4237 */
                        Maybe_BTree_int_User match4236  = deref_Rc_BTree_int_User (left_child_rc );
                        typeof((((match4236 . __h_data). Just). __h_0_mem)) left_child ;
                        // ----------
                        ;
                        ({ /* letn4239 */
                          bool __h_case_result  = (true  &&  (((match4236 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4240 */
                                left_child  = (((match4236 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4245 */
                              ({ /* letn4251 */
                                typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                // ----------
                                ;
                                ({ /* letn4253 */
                                  bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4254 */
                                        left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn4259 */
                                      (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4270 */
                                          List_BTree_int_User_pair_t last  = last_List_BTree_int_User_pair_t (left_child_items );
                                          typeof((((last -> __h_data). Cons). __h_0_mem)) last_item ;
                                          // ----------
                                          ;
                                          ({ /* letn4272 */
                                            bool __h_case_result  = (true  &&  (((last -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4273 */
                                                  last_item  = (((last -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4278 */
                                                ({ /* letn4281 */
                                                  List_BTree_int_User_pair_t last_spent  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = last ;
                                                  // ----------
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* letn4294 */
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
                                              }) : ({ /* letn4312 */
                                                // ----------
                                                ;
                                                ({ /* progn4314 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                });
                                              }));
                                          });
                                        }) : ({ /* letn4322 */
                                          Either_BTree_int_User_Error_BTree_int_User match4321  = borrowRight (child_items );
                                          // ----------
                                          ;
                                          ({ /* letn4324 */
                                            bool __h_case_result  = (true  &&  ((match4321 . __h_ctor) ==  __h_Left_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4328 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* letn4341 */
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
                                              }) : ({ /* letn4356 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4321 ;
                                                // ----------
                                                ;
                                                ({ /* progn4358 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        }));
                                    }) : ({ /* letn4362 */
                                      // ----------
                                      ;
                                      ({ /* progn4364 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn4370 */
                              // ----------
                              ;
                              ({ /* progn4372 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4378 */
                      // ----------
                      ;
                      ({ /* progn4380 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4386 */
              // ----------
              ;
              ({ /* progn4388 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* letn4391 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn4396 */
        typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
        // ----------
        ;
        ({ /* letn4398 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn4399 */
                child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4404 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4415 */
                  BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* letn4420 */
              typeof((((nchild -> __h_data). Internal). __h_0_mem)) child_items ;
              // ----------
              ;
              ({ /* letn4422 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn4423 */
                      child_items  = (((nchild -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4428 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4430 */
                        BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* letn4434 */
                    typeof((((nchild -> __h_data). Leaf). __h_0_mem)) child_items ;
                    // ----------
                    ;
                    ({ /* letn4436 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4437 */
                            child_items  = (((nchild -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn4442 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index ))) : ({ /* letn4444 */
                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* letn4448 */
                          // ----------
                          ;
                          ({ /* progn4450 */
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
    return ({ /* letn4479 */
        Maybe_Rc_BTree_int_User match4478  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4478 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4481 */
          bool __h_case_result  = (true  &&  (((match4478 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4482 */
                right_child_rc  = (((match4478 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4487 */
              ({ /* letn4494 */
                Maybe_BTree_int_User match4493  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4493 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4496 */
                  bool __h_case_result  = (true  &&  (((match4493 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4497 */
                        right_child  = (((match4493 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4502 */
                      ({ /* letn4508 */
                        typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_child_items ;
                        typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_child_children ;
                        // ----------
                        ;
                        ({ /* letn4510 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4511 */
                                  right_child_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn4513 */
                                  right_child_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4518 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4530 */
                                  Maybe_BTree_int_User_pair_t match4528  = min_BTree_int_User (right_child );
                                  typeof((((match4528 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4532 */
                                    bool __h_case_result  = (true  &&  (((match4528 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4533 */
                                            min  = (((match4528 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4535 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4540 */
                                        ({ /* letn4547 */
                                          Either_BTree_int_User_Error_BTree_int_User match4546  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4546 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4549 */
                                            bool __h_case_result  = (true  &&  (((match4546 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4550 */
                                                  nchild  = (((match4546 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4555 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4563 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4546 ;
                                                // ----------
                                                ;
                                                ({ /* progn4565 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4569 */
                                        // ----------
                                        ;
                                        ({ /* progn4571 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* letn4580 */
                                  typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                  typeof((current_item . __h_0_mem)) current_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4582 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4583 */
                                            current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4585 */
                                              current_key  = (current_item . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4590 */
                                        ({ /* letn4598 */
                                          List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                          BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                          List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                          List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                          // ----------
                                          ({ /* letn4612 */
                                            Either_BTree_int_User_Error_BTree_int_User match4611  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match4611 . __h_data). Right). __h_0_mem)) ntree ;
                                            // ----------
                                            ;
                                            ({ /* letn4614 */
                                              bool __h_case_result  = (true  &&  (((match4611 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4615 */
                                                    ntree  = (((match4611 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn4620 */
                                                  ({ /* letn4627 */
                                                    BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                    typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn4629 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4630 */
                                                              branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn4632 */
                                                              branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn4637 */
                                                          ({ /* letn4643 */
                                                            typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn4645 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4646 */
                                                                    branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn4651 */
                                                                  ({ /* letn4654 */
                                                                    BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                    BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4664 */
                                                                        List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                        List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                        // ----------
                                                                        cloneAll_Rc_BTree_int_User (r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* letn4671 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn4673 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn4679 */
                                                          // ----------
                                                          ;
                                                          ({ /* letn4681 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4685 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4694 */
                                                                    Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                    List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4698 */
                                                                      Rc_BTree_int_User moved_var4697  = r9 ;
                                                                      // ----------
                                                                      memset ((&r9 ), 0, sizeof(r9 ));
                                                                      moved_var4697 ;
                                                                    })), r7 );
                                                                    List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r11 );
                                                                  })));
                                                              }) : ({ /* letn4705 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn4707 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn4713 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match4611 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn4715 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* letn4719 */
                                        // ----------
                                        ;
                                        ({ /* progn4721 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* letn4727 */
                              typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_child_items ;
                              typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_child_children ;
                              // ----------
                              ;
                              ({ /* letn4729 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn4730 */
                                        right_child_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn4732 */
                                        right_child_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn4737 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4739 */
                                        Maybe_BTree_int_User_pair_t match4528  = min_BTree_int_User (right_child );
                                        typeof((((match4528 . __h_data). Just). __h_0_mem)) min ;
                                        typeof((min . __h_0_mem)) min_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4741 */
                                          bool __h_case_result  = (true  &&  (((match4528 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4742 */
                                                  min  = (((match4528 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4744 */
                                                    min_key  = (min . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4749 */
                                              ({ /* letn4751 */
                                                Either_BTree_int_User_Error_BTree_int_User match4546  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match4546 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn4753 */
                                                  bool __h_case_result  = (true  &&  (((match4546 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4754 */
                                                        nchild  = (((match4546 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn4759 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                                    }) : ({ /* letn4761 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match4546 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn4763 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn4765 */
                                              // ----------
                                              ;
                                              ({ /* progn4767 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* letn4769 */
                                        typeof((((current -> __h_data). Cons). __h_0_mem)) current_item ;
                                        typeof((current_item . __h_0_mem)) current_key ;
                                        // ----------
                                        ;
                                        ({ /* letn4771 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4772 */
                                                  current_item  = (((current -> __h_data). Cons). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn4774 */
                                                    current_key  = (current_item . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn4779 */
                                              ({ /* letn4781 */
                                                List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                BTree_int_User r4  __attribute__((__cleanup__(free_BTree_int_User ))) = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), cloneAll_Rc_BTree_int_User (r2 ));
                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                List_Rc_BTree_int_User r7  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ({ /* letn4783 */
                                                  Either_BTree_int_User_Error_BTree_int_User match4611  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match4611 . __h_data). Right). __h_0_mem)) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn4785 */
                                                    bool __h_case_result  = (true  &&  (((match4611 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4786 */
                                                          ntree  = (((match4611 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn4791 */
                                                        ({ /* letn4793 */
                                                          BTree_int_User tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data). Branch). __h_0_mem)) branch_items ;
                                                          typeof((((tmp_result -> __h_data). Branch). __h_1_mem)) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn4795 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn4796 */
                                                                    branch_items  = (((tmp_result -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn4798 */
                                                                    branch_children  = (((tmp_result -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn4803 */
                                                                ({ /* letn4805 */
                                                                  typeof((((branch_items -> __h_data). Cons). __h_0_mem)) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn4807 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4808 */
                                                                          branch_head  = (((branch_items -> __h_data). Cons). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn4813 */
                                                                        ({ /* letn4815 */
                                                                          BTree_int_User ntree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntree ;
                                                                          BTree_int_User tmp_result_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = tmp_result ;
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* letn4817 */
                                                                              List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                              List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                              // ----------
                                                                              cloneAll_Rc_BTree_int_User (r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* letn4819 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn4821 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn4823 */
                                                                // ----------
                                                                ;
                                                                ({ /* letn4825 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn4829 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4831 */
                                                                          Rc_BTree_int_User r9  __attribute__((__cleanup__(free_Rc_BTree_int_User ))) = new_Rc_BTree_int_User (ntree );
                                                                          List_Rc_BTree_int_User r10  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (((Rc_BTree_int_User   )({ /* letnmove4833 */
                                                                            Rc_BTree_int_User moved_var4832  = r9 ;
                                                                            // ----------
                                                                            memset ((&r9 ), 0, sizeof(r9 ));
                                                                            moved_var4832 ;
                                                                          })), r7 );
                                                                          List_Rc_BTree_int_User r11  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          cloneAll_Rc_BTree_int_User (r11 );
                                                                        })));
                                                                    }) : ({ /* letn4836 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn4838 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn4840 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match4611 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn4842 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* letn4844 */
                                              // ----------
                                              ;
                                              ({ /* progn4846 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* letn4850 */
                                    // ----------
                                    ;
                                    ({ /* progn4852 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn4858 */
                      // ----------
                      ;
                      ({ /* progn4860 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* letn4866 */
              // ----------
              ;
              ({ /* progn4868 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* letn4882 */
        Maybe_Rc_BTree_int_User match4881  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4881 . __h_data). Just). __h_0_mem)) right_child_rc ;
        // ----------
        ;
        ({ /* letn4884 */
          bool __h_case_result  = (true  &&  (((match4881 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4885 */
                right_child_rc  = (((match4881 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4890 */
              ({ /* letn4897 */
                Maybe_BTree_int_User match4896  = deref_Rc_BTree_int_User (right_child_rc );
                typeof((((match4896 . __h_data). Just). __h_0_mem)) right_child ;
                // ----------
                ;
                ({ /* letn4899 */
                  bool __h_case_result  = (true  &&  (((match4896 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn4900 */
                        right_child  = (((match4896 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4905 */
                      ({ /* letn4911 */
                        typeof((((right_child -> __h_data). Leaf). __h_0_mem)) right_child_items ;
                        // ----------
                        ;
                        ({ /* letn4913 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn4914 */
                                right_child_items  = (((right_child -> __h_data). Leaf). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn4919 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn4931 */
                                  Maybe_BTree_int_User_pair_t match4929  = min_BTree_int_User (right_child );
                                  typeof((((match4929 . __h_data). Just). __h_0_mem)) min ;
                                  typeof((min . __h_0_mem)) min_key ;
                                  // ----------
                                  ;
                                  ({ /* letn4933 */
                                    bool __h_case_result  = (true  &&  (((match4929 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn4934 */
                                            min  = (((match4929 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn4936 */
                                              min_key  = (min . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn4941 */
                                        ({ /* letn4948 */
                                          Either_BTree_int_User_Error_BTree_int_User match4947  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match4947 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn4950 */
                                            bool __h_case_result  = (true  &&  (((match4947 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn4951 */
                                                  nchild  = (((match4947 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn4956 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), replaceChild_Rc_BTree_int_User (children , nchild , (index  +  1 ))));
                                              }) : ({ /* letn4964 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match4947 ;
                                                // ----------
                                                ;
                                                ({ /* progn4966 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn4970 */
                                        // ----------
                                        ;
                                        ({ /* progn4972 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* letn4985 */
                                  List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                  List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                  List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                  List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                  List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* letn4998 */
                              // ----------
                              ;
                              ({ /* progn5000 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5006 */
                      // ----------
                      ;
                      ({ /* progn5008 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5014 */
              // ----------
              ;
              ({ /* progn5016 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* letn5021 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5027 */
        Maybe_Rc_BTree_int_User match5026  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match5026 . __h_data). Just). __h_0_mem)) left_child_rc ;
        // ----------
        ;
        ({ /* letn5029 */
          bool __h_case_result  = (true  &&  (((match5026 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5030 */
                left_child_rc  = (((match5026 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5035 */
              ({ /* letn5042 */
                Maybe_BTree_int_User match5041  = deref_Rc_BTree_int_User (left_child_rc );
                typeof((((match5041 . __h_data). Just). __h_0_mem)) left_child ;
                // ----------
                ;
                ({ /* letn5044 */
                  bool __h_case_result  = (true  &&  (((match5041 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5045 */
                        left_child  = (((match5041 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn5050 */
                      ({ /* letn5056 */
                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_child_items ;
                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_child_children ;
                        // ----------
                        ;
                        ({ /* letn5058 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5059 */
                                  left_child_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                  true ;
                                }) &&  ({ /* progn5061 */
                                  left_child_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5066 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5078 */
                                  Maybe_BTree_int_User_pair_t match5076  = max_BTree_int_User (left_child );
                                  typeof((((match5076 . __h_data). Just). __h_0_mem)) max ;
                                  typeof((max . __h_0_mem)) max_key ;
                                  // ----------
                                  ;
                                  ({ /* letn5080 */
                                    bool __h_case_result  = (true  &&  (((match5076 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5081 */
                                            max  = (((match5076 . __h_data). Just). __h_0_mem) ;
                                            true ;
                                          }) &&  (true  &&  ({ /* progn5083 */
                                              max_key  = (max . __h_0_mem) ;
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5088 */
                                        ({ /* letn5095 */
                                          Either_BTree_int_User_Error_BTree_int_User match5094  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match5094 . __h_data). Right). __h_0_mem)) nchild ;
                                          // ----------
                                          ;
                                          ({ /* letn5097 */
                                            bool __h_case_result  = (true  &&  (((match5094 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5098 */
                                                  nchild  = (((match5094 . __h_data). Right). __h_0_mem) ;
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5103 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                              }) : ({ /* letn5111 */
                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5094 ;
                                                // ----------
                                                ;
                                                ({ /* progn5113 */
                                                  passthru ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* letn5117 */
                                        // ----------
                                        ;
                                        ({ /* progn5119 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* letn5125 */
                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_child_items ;
                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_child_children ;
                              // ----------
                              ;
                              ({ /* letn5127 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5128 */
                                        left_child_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                        true ;
                                      }) &&  ({ /* progn5130 */
                                        left_child_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn5135 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5137 */
                                        Maybe_BTree_int_User_pair_t match5076  = max_BTree_int_User (left_child );
                                        typeof((((match5076 . __h_data). Just). __h_0_mem)) max ;
                                        typeof((max . __h_0_mem)) max_key ;
                                        // ----------
                                        ;
                                        ({ /* letn5139 */
                                          bool __h_case_result  = (true  &&  (((match5076 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5140 */
                                                  max  = (((match5076 . __h_data). Just). __h_0_mem) ;
                                                  true ;
                                                }) &&  (true  &&  ({ /* progn5142 */
                                                    max_key  = (max . __h_0_mem) ;
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn5147 */
                                              ({ /* letn5149 */
                                                Either_BTree_int_User_Error_BTree_int_User match5094  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match5094 . __h_data). Right). __h_0_mem)) nchild ;
                                                // ----------
                                                ;
                                                ({ /* letn5151 */
                                                  bool __h_case_result  = (true  &&  (((match5094 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5152 */
                                                        nchild  = (((match5094 . __h_data). Right). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5157 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                    }) : ({ /* letn5159 */
                                                      Either_BTree_int_User_Error_BTree_int_User passthru  = match5094 ;
                                                      // ----------
                                                      ;
                                                      ({ /* progn5161 */
                                                        passthru ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn5163 */
                                              // ----------
                                              ;
                                              ({ /* progn5165 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* letn5169 */
                                    typeof((((left_child -> __h_data). Leaf). __h_0_mem)) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* letn5171 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn5172 */
                                            left_child_items  = (((left_child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5177 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* letn5189 */
                                              Maybe_BTree_int_User_pair_t match5187  = max_BTree_int_User (left_child );
                                              typeof((((match5187 . __h_data). Just). __h_0_mem)) max ;
                                              typeof((max . __h_0_mem)) max_key ;
                                              // ----------
                                              ;
                                              ({ /* letn5191 */
                                                bool __h_case_result  = (true  &&  (((match5187 . __h_ctor) ==  __h_Just_t  ) &&  (({ /* progn5192 */
                                                        max  = (((match5187 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) &&  (true  &&  ({ /* progn5194 */
                                                          max_key  = (max . __h_0_mem) ;
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn5199 */
                                                    ({ /* letn5206 */
                                                      Either_BTree_int_User_Error_BTree_int_User match5205  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match5205 . __h_data). Right). __h_0_mem)) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn5208 */
                                                        bool __h_case_result  = (true  &&  (((match5205 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5209 */
                                                              nchild  = (((match5205 . __h_data). Right). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn5214 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          }) : ({ /* letn5222 */
                                                            Either_BTree_int_User_Error_BTree_int_User passthru  = match5205 ;
                                                            // ----------
                                                            ;
                                                            ({ /* progn5224 */
                                                              passthru ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn5228 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn5230 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* letn5236 */
                                          // ----------
                                          ;
                                          ({ /* progn5238 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn5244 */
                      // ----------
                      ;
                      ({ /* progn5246 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* letn5252 */
              // ----------
              ;
              ({ /* progn5254 */
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
    return ({ /* letn5283 */
        Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn5289 */
          typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
          typeof((head . __h_0_mem)) key ;
          typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
          // ----------
          ;
          ({ /* letn5291 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn5292 */
                      head  = (((current -> __h_data). Cons). __h_0_mem) ;
                      true ;
                    }) &&  (true  &&  ({ /* progn5294 */
                        key  = (head . __h_0_mem) ;
                        true ;
                      }) ) ) &&  ({ /* progn5296 */
                    tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn5301 */
                ({ /* letn5307 */
                  Ordering match5306  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* letn5309 */
                    bool __h_case_result  = (true  &&  ((match5306 . __h_ctor) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn5313 */
                        ({ /* letn5320 */
                          Maybe_Rc_BTree_int_User match5319  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match5319 . __h_data). Just). __h_0_mem)) child ;
                          // ----------
                          ;
                          ({ /* letn5322 */
                            bool __h_case_result  = (true  &&  (((match5319 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5323 */
                                  child  = (((match5319 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn5328 */
                                ({ /* letn5335 */
                                  Maybe_BTree_int_User match5334  = deref_Rc_BTree_int_User (child );
                                  typeof((((match5334 . __h_data). Just). __h_0_mem)) tr ;
                                  // ----------
                                  ;
                                  ({ /* letn5337 */
                                    bool __h_case_result  = (true  &&  (((match5334 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5338 */
                                          tr  = (((match5334 . __h_data). Just). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn5343 */
                                        ({ /* letn5349 */
                                          // ----------
                                          ;
                                          ({ /* letn5351 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn5355 */
                                                ({ /* letn5362 */
                                                  Either_BTree_int_User_Error_BTree_int_User match5361  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match5361 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn5364 */
                                                    bool __h_case_result  = (true  &&  (((match5361 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5365 */
                                                          nchild  = (((match5361 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn5370 */
                                                        ({ /* letn5376 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5378 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5379 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn5381 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5386 */
                                                                ({ /* letn5393 */
                                                                  Maybe_Rc_BTree_int_User match5392  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5392 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn5395 */
                                                                    bool __h_case_result  = (true  &&  (((match5392 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5396 */
                                                                          wleft  = (((match5392 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn5401 */
                                                                        ({ /* letn5408 */
                                                                          Maybe_BTree_int_User match5407  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5407 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn5410 */
                                                                            bool __h_case_result  = (true  &&  (((match5407 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5411 */
                                                                                  left_child  = (((match5407 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn5416 */
                                                                                ({ /* letn5422 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5424 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5425 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5427 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5432 */
                                                                                        ({ /* letn5435 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5442 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5444 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5445 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5447 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5452 */
                                                                                              ({ /* letn5454 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5458 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn5460 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn5466 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn5468 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn5474 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn5476 */
                                                                          ({ /* letn5483 */
                                                                            Maybe_Rc_BTree_int_User match5482  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match5482 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5485 */
                                                                              bool __h_case_result  = (true  &&  (((match5482 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5486 */
                                                                                    wright  = (((match5482 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5491 */
                                                                                  ({ /* letn5498 */
                                                                                    Maybe_BTree_int_User match5497  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match5497 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn5500 */
                                                                                      bool __h_case_result  = (true  &&  (((match5497 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5501 */
                                                                                            right_child  = (((match5497 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn5506 */
                                                                                          ({ /* letn5512 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn5514 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5515 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn5517 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn5522 */
                                                                                                  ({ /* letn5525 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn5532 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5534 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5535 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5537 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5542 */
                                                                                                        ({ /* letn5544 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5548 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn5550 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn5556 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn5558 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn5564 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn5566 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn5572 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn5574 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn5582 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match5361 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn5584 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn5588 */
                                                // ----------
                                                ;
                                                ({ /* letn5590 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn5594 */
                                                      ({ /* letn5600 */
                                                        Either_BTree_int_User_Error_BTree_int_User match5599  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match5599 . __h_data). Right). __h_0_mem)) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn5602 */
                                                          bool __h_case_result  = (true  &&  (((match5599 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5603 */
                                                                nchild  = (((match5599 . __h_data). Right). __h_0_mem) ;
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn5608 */
                                                              ({ /* letn5614 */
                                                                typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                                typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* letn5616 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5617 */
                                                                          child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                          true ;
                                                                        }) &&  ({ /* progn5619 */
                                                                          child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* progn5624 */
                                                                      ({ /* letn5626 */
                                                                        Maybe_Rc_BTree_int_User match5392  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match5392 . __h_data). Just). __h_0_mem)) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn5628 */
                                                                          bool __h_case_result  = (true  &&  (((match5392 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5629 */
                                                                                wleft  = (((match5392 . __h_data). Just). __h_0_mem) ;
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn5634 */
                                                                              ({ /* letn5636 */
                                                                                Maybe_BTree_int_User match5407  = deref_Rc_BTree_int_User (wleft );
                                                                                typeof((((match5407 . __h_data). Just). __h_0_mem)) left_child ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* letn5638 */
                                                                                  bool __h_case_result  = (true  &&  (((match5407 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5639 */
                                                                                        left_child  = (((match5407 . __h_data). Just). __h_0_mem) ;
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* progn5644 */
                                                                                      ({ /* letn5646 */
                                                                                        typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn5648 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5649 */
                                                                                                  left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn5651 */
                                                                                                  left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn5656 */
                                                                                              ({ /* letn5658 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn5660 */
                                                                                              typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                              typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* letn5662 */
                                                                                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5663 */
                                                                                                        left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                        true ;
                                                                                                      }) &&  ({ /* progn5665 */
                                                                                                        left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* progn5670 */
                                                                                                    ({ /* letn5672 */
                                                                                                      BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* letn5674 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* progn5676 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* letn5678 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* progn5680 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* letn5682 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn5684 */
                                                                                ({ /* letn5686 */
                                                                                  Maybe_Rc_BTree_int_User match5482  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match5482 . __h_data). Just). __h_0_mem)) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5688 */
                                                                                    bool __h_case_result  = (true  &&  (((match5482 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5689 */
                                                                                          wright  = (((match5482 . __h_data). Just). __h_0_mem) ;
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5694 */
                                                                                        ({ /* letn5696 */
                                                                                          Maybe_BTree_int_User match5497  = deref_Rc_BTree_int_User (wright );
                                                                                          typeof((((match5497 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* letn5698 */
                                                                                            bool __h_case_result  = (true  &&  (((match5497 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5699 */
                                                                                                  right_child  = (((match5497 . __h_data). Just). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* progn5704 */
                                                                                                ({ /* letn5706 */
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn5708 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5709 */
                                                                                                            right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn5711 */
                                                                                                            right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn5716 */
                                                                                                        ({ /* letn5718 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn5720 */
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                        typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* letn5722 */
                                                                                                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5723 */
                                                                                                                  right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* progn5725 */
                                                                                                                  right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* progn5730 */
                                                                                                              ({ /* letn5732 */
                                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* letn5734 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* progn5736 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* letn5738 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* progn5740 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* letn5742 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5744 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* letn5748 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* progn5750 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* letn5754 */
                                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match5599 ;
                                                              // ----------
                                                              ;
                                                              ({ /* progn5756 */
                                                                passthru ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn5760 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn5762 */
                                                        ({ /* letn5769 */
                                                          Either_BTree_int_User_Error_BTree_int_User match5768  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match5768 . __h_data). Right). __h_0_mem)) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn5771 */
                                                            bool __h_case_result  = (true  &&  (((match5768 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5772 */
                                                                  nchild  = (((match5768 . __h_data). Right). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn5777 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* letn5782 */
                                                                Either_BTree_int_User_Error_BTree_int_User passthru  = match5768 ;
                                                                // ----------
                                                                ;
                                                                ({ /* progn5784 */
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
                                      }) : ({ /* letn5788 */
                                        // ----------
                                        ;
                                        ({ /* progn5790 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn5796 */
                                // ----------
                                ;
                                ({ /* progn5798 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn5804 */
                        // ----------
                        ;
                        ({ /* letn5806 */
                          bool __h_case_result  = (true  &&  ((match5306 . __h_ctor) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn5810 */
                              ({ /* letn5813 */
                                Either_BTree_int_User_Error_BTree_int_User result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* let5818 */
                                  // ----------
                                  ;
                                  ({ /* letn5820 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block5826 */
                                        if (callback )
                                          { /* block5831 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* letn5835 */
                              // ----------
                              ;
                              ({ /* progn5837 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* letn5842 */
                // ----------
                ;
                ({ /* progn5844 */
                  ({ /* letn5851 */
                    Maybe_Rc_BTree_int_User match5850  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match5850 . __h_data). Just). __h_0_mem)) child ;
                    // ----------
                    ;
                    ({ /* letn5853 */
                      bool __h_case_result  = (true  &&  (((match5850 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5854 */
                            child  = (((match5850 . __h_data). Just). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn5859 */
                          ({ /* letn5866 */
                            Maybe_BTree_int_User match5865  = deref_Rc_BTree_int_User (child );
                            typeof((((match5865 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn5868 */
                              bool __h_case_result  = (true  &&  (((match5865 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5869 */
                                    tr  = (((match5865 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn5874 */
                                  ({ /* letn5880 */
                                    // ----------
                                    ;
                                    ({ /* letn5882 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn5886 */
                                          ({ /* letn5893 */
                                            Either_BTree_int_User_Error_BTree_int_User match5892  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match5892 . __h_data). Right). __h_0_mem)) nchild ;
                                            // ----------
                                            ;
                                            ({ /* letn5895 */
                                              bool __h_case_result  = (true  &&  (((match5892 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn5896 */
                                                    nchild  = (((match5892 . __h_data). Right). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn5901 */
                                                  ({ /* letn5907 */
                                                    typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                    typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn5909 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5910 */
                                                              child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn5912 */
                                                              child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn5917 */
                                                          ({ /* letn5924 */
                                                            Maybe_Rc_BTree_int_User match5923  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match5923 . __h_data). Just). __h_0_mem)) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn5926 */
                                                              bool __h_case_result  = (true  &&  (((match5923 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5927 */
                                                                    wleft  = (((match5923 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn5932 */
                                                                  ({ /* letn5939 */
                                                                    Maybe_BTree_int_User match5938  = deref_Rc_BTree_int_User (wleft );
                                                                    typeof((((match5938 . __h_data). Just). __h_0_mem)) left_child ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn5941 */
                                                                      bool __h_case_result  = (true  &&  (((match5938 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5942 */
                                                                            left_child  = (((match5938 . __h_data). Just). __h_0_mem) ;
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn5947 */
                                                                          ({ /* letn5953 */
                                                                            typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                            typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn5955 */
                                                                              bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn5956 */
                                                                                      left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) &&  ({ /* progn5958 */
                                                                                      left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn5963 */
                                                                                  ({ /* letn5966 */
                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                    // ----------
                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                  });
                                                                                }) : ({ /* letn5973 */
                                                                                  typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn5975 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn5976 */
                                                                                            left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn5978 */
                                                                                            left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn5983 */
                                                                                        ({ /* letn5985 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn5989 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* progn5991 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* letn5997 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn5999 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* letn6005 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6007 */
                                                                    ({ /* letn6014 */
                                                                      Maybe_Rc_BTree_int_User match6013  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match6013 . __h_data). Just). __h_0_mem)) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* letn6016 */
                                                                        bool __h_case_result  = (true  &&  (((match6013 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6017 */
                                                                              wright  = (((match6013 . __h_data). Just). __h_0_mem) ;
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* progn6022 */
                                                                            ({ /* letn6029 */
                                                                              Maybe_BTree_int_User match6028  = deref_Rc_BTree_int_User (wright );
                                                                              typeof((((match6028 . __h_data). Just). __h_0_mem)) right_child ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* letn6031 */
                                                                                bool __h_case_result  = (true  &&  (((match6028 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6032 */
                                                                                      right_child  = (((match6028 . __h_data). Just). __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* progn6037 */
                                                                                    ({ /* letn6043 */
                                                                                      typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                      typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* letn6045 */
                                                                                        bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6046 */
                                                                                                right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                true ;
                                                                                              }) &&  ({ /* progn6048 */
                                                                                                right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                true ;
                                                                                              }) ) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* progn6053 */
                                                                                            ({ /* letn6056 */
                                                                                              BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                            });
                                                                                          }) : ({ /* letn6063 */
                                                                                            typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6065 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6066 */
                                                                                                      right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6068 */
                                                                                                      right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6073 */
                                                                                                  ({ /* letn6075 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6079 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* progn6081 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* letn6087 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* progn6089 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* letn6095 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* progn6097 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6103 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6105 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6113 */
                                                  Either_BTree_int_User_Error_BTree_int_User passthru  = match5892 ;
                                                  // ----------
                                                  ;
                                                  ({ /* progn6115 */
                                                    passthru ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* letn6119 */
                                          // ----------
                                          ;
                                          ({ /* letn6121 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn6125 */
                                                ({ /* letn6131 */
                                                  Either_BTree_int_User_Error_BTree_int_User match6130  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match6130 . __h_data). Right). __h_0_mem)) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6133 */
                                                    bool __h_case_result  = (true  &&  (((match6130 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6134 */
                                                          nchild  = (((match6130 . __h_data). Right). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6139 */
                                                        ({ /* letn6145 */
                                                          typeof((((nchild -> __h_data). Branch). __h_0_mem)) child_items ;
                                                          typeof((((nchild -> __h_data). Branch). __h_1_mem)) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6147 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6148 */
                                                                    child_items  = (((nchild -> __h_data). Branch). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn6150 */
                                                                    child_children  = (((nchild -> __h_data). Branch). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6155 */
                                                                ({ /* letn6157 */
                                                                  Maybe_Rc_BTree_int_User match5923  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match5923 . __h_data). Just). __h_0_mem)) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6159 */
                                                                    bool __h_case_result  = (true  &&  (((match5923 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6160 */
                                                                          wleft  = (((match5923 . __h_data). Just). __h_0_mem) ;
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6165 */
                                                                        ({ /* letn6167 */
                                                                          Maybe_BTree_int_User match5938  = deref_Rc_BTree_int_User (wleft );
                                                                          typeof((((match5938 . __h_data). Just). __h_0_mem)) left_child ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6169 */
                                                                            bool __h_case_result  = (true  &&  (((match5938 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6170 */
                                                                                  left_child  = (((match5938 . __h_data). Just). __h_0_mem) ;
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6175 */
                                                                                ({ /* letn6177 */
                                                                                  typeof((((left_child -> __h_data). Branch). __h_0_mem)) left_items ;
                                                                                  typeof((((left_child -> __h_data). Branch). __h_1_mem)) left_children ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* letn6179 */
                                                                                    bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6180 */
                                                                                            left_items  = (((left_child -> __h_data). Branch). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) &&  ({ /* progn6182 */
                                                                                            left_children  = (((left_child -> __h_data). Branch). __h_1_mem) ;
                                                                                            true ;
                                                                                          }) ) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* progn6187 */
                                                                                        ({ /* letn6189 */
                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                          // ----------
                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                        });
                                                                                      }) : ({ /* letn6191 */
                                                                                        typeof((((left_child -> __h_data). Internal). __h_0_mem)) left_items ;
                                                                                        typeof((((left_child -> __h_data). Internal). __h_1_mem)) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* letn6193 */
                                                                                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6194 */
                                                                                                  left_items  = (((left_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                  true ;
                                                                                                }) &&  ({ /* progn6196 */
                                                                                                  left_children  = (((left_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* progn6201 */
                                                                                              ({ /* letn6203 */
                                                                                                BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* letn6205 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* progn6207 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* letn6209 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6211 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* letn6213 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6215 */
                                                                          ({ /* letn6217 */
                                                                            Maybe_Rc_BTree_int_User match6013  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6013 . __h_data). Just). __h_0_mem)) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* letn6219 */
                                                                              bool __h_case_result  = (true  &&  (((match6013 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6220 */
                                                                                    wright  = (((match6013 . __h_data). Just). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* progn6225 */
                                                                                  ({ /* letn6227 */
                                                                                    Maybe_BTree_int_User match6028  = deref_Rc_BTree_int_User (wright );
                                                                                    typeof((((match6028 . __h_data). Just). __h_0_mem)) right_child ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* letn6229 */
                                                                                      bool __h_case_result  = (true  &&  (((match6028 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6230 */
                                                                                            right_child  = (((match6028 . __h_data). Just). __h_0_mem) ;
                                                                                            true ;
                                                                                          }) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* progn6235 */
                                                                                          ({ /* letn6237 */
                                                                                            typeof((((right_child -> __h_data). Branch). __h_0_mem)) right_items ;
                                                                                            typeof((((right_child -> __h_data). Branch). __h_1_mem)) right_children ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* letn6239 */
                                                                                              bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6240 */
                                                                                                      right_items  = (((right_child -> __h_data). Branch). __h_0_mem) ;
                                                                                                      true ;
                                                                                                    }) &&  ({ /* progn6242 */
                                                                                                      right_children  = (((right_child -> __h_data). Branch). __h_1_mem) ;
                                                                                                      true ;
                                                                                                    }) ) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* progn6247 */
                                                                                                  ({ /* letn6249 */
                                                                                                    BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                    // ----------
                                                                                                    Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                  });
                                                                                                }) : ({ /* letn6251 */
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_0_mem)) right_items ;
                                                                                                  typeof((((right_child -> __h_data). Internal). __h_1_mem)) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* letn6253 */
                                                                                                    bool __h_case_result  = (true  &&  (((right_child -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6254 */
                                                                                                            right_items  = (((right_child -> __h_data). Internal). __h_0_mem) ;
                                                                                                            true ;
                                                                                                          }) &&  ({ /* progn6256 */
                                                                                                            right_children  = (((right_child -> __h_data). Internal). __h_1_mem) ;
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* progn6261 */
                                                                                                        ({ /* letn6263 */
                                                                                                          BTree_int_User nchild_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = nchild ;
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* letn6265 */
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* progn6267 */
                                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        }) : ({ /* letn6269 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* progn6271 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* letn6273 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* progn6275 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* letn6279 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6281 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), replaceChild_Rc_BTree_int_User (children , nchild , index )));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6285 */
                                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match6130 ;
                                                        // ----------
                                                        ;
                                                        ({ /* progn6287 */
                                                          passthru ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn6291 */
                                                // ----------
                                                ;
                                                ({ /* progn6293 */
                                                  ({ /* letn6300 */
                                                    Either_BTree_int_User_Error_BTree_int_User match6299  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match6299 . __h_data). Right). __h_0_mem)) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6302 */
                                                      bool __h_case_result  = (true  &&  (((match6299 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6303 */
                                                            nchild  = (((match6299 . __h_data). Right). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6308 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* letn6313 */
                                                          Either_BTree_int_User_Error_BTree_int_User passthru  = match6299 ;
                                                          // ----------
                                                          ;
                                                          ({ /* progn6315 */
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
                                }) : ({ /* letn6319 */
                                  // ----------
                                  ;
                                  ({ /* progn6321 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* letn6328 */
                          // ----------
                          ;
                          ({ /* progn6330 */
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
        ({ /* letn6338 */
          Either_BTree_int_User_Error_BTree_int_User rs  = ({ /* letn6343 */
            typeof((((result . __h_data). Right). __h_0_mem)) ntr ;
            // ----------
            ;
            ({ /* letn6345 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn6346 */
                    ntr  = (((result . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn6351 */
                  ({ /* letn6357 */
                    typeof((((ntr -> __h_data). Branch). __h_0_mem)) items ;
                    typeof((((ntr -> __h_data). Branch). __h_1_mem)) children ;
                    // ----------
                    ;
                    ({ /* letn6359 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6360 */
                              items  = (((ntr -> __h_data). Branch). __h_0_mem) ;
                              true ;
                            }) &&  ({ /* progn6362 */
                              children  = (((ntr -> __h_data). Branch). __h_1_mem) ;
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6367 */
                          ({ /* letn6370 */
                            size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6380 */
                                typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                // ----------
                                ;
                                ({ /* letn6382 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6383 */
                                        ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn6388 */
                                      ({ /* letn6394 */
                                        typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                        // ----------
                                        ;
                                        ({ /* letn6396 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6397 */
                                                pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn6402 */
                                              ({ /* letn6409 */
                                                Maybe_BTree_int_User_pair_t match6408  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match6408 . __h_data). Just). __h_0_mem)) bitem ;
                                                // ----------
                                                ;
                                                ({ /* letn6411 */
                                                  bool __h_case_result  = (true  &&  (((match6408 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6412 */
                                                        bitem  = (((match6408 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn6417 */
                                                      ({ /* letn6420 */
                                                        BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6430 */
                                                            Ordering match6429  = compareKey (({ /* letn6435 */
                                                              typeof((bitem . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6437 */
                                                                bool __h_case_result  = (true  &&  ({ /* progn6438 */
                                                                    key  = (bitem . __h_0_mem) ;
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6443 */
                                                                    key ;
                                                                  }) : ({ /* letn6447 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* progn6449 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* letn6456 */
                                                              typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6454_0_arg ;
                                                              typeof((__h_match6454_0_arg . __h_0_mem)) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* letn6458 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6459 */
                                                                        __h_match6454_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* progn6461 */
                                                                          key  = (__h_match6454_0_arg . __h_0_mem) ;
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* progn6466 */
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
                                                              bool __h_case_result  = (true  &&  ((match6429 . __h_ctor) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6479 */
                                                                  0;
                                                                }) : ({ /* letn6483 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6485 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), cloneAll_Rc_BTree_int_User (children )));
                                                      });
                                                    }) : ({ /* letn6490 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn6492 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* letn6498 */
                                              typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6500 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6501 */
                                                      pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6506 */
                                                    ({ /* letn6512 */
                                                      Maybe_BTree_int_User_pair_t match6511  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6511 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6514 */
                                                        bool __h_case_result  = (true  &&  (((match6511 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6515 */
                                                              bitem  = (((match6511 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6520 */
                                                            ({ /* letn6522 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6524 */
                                                                  Ordering match6429  = compareKey (({ /* letn6525 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6527 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6528 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6533 */
                                                                          key ;
                                                                        }) : ({ /* letn6535 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6537 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6539 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6454_0_arg ;
                                                                    typeof((__h_match6454_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6541 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6542 */
                                                                              __h_match6454_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6544 */
                                                                                key  = (__h_match6454_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6549 */
                                                                          key ;
                                                                        }) : ({ /* letn6551 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6553 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6556 */
                                                                    bool __h_case_result  = (true  &&  ((match6429 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6560 */
                                                                        0;
                                                                      }) : ({ /* letn6562 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6564 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6568 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6570 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6574 */
                                                    // ----------
                                                    ;
                                                    ({ /* progn6576 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn6582 */
                                      // ----------
                                      ;
                                      ({ /* progn6584 */
                                        (((items_len  ==  0 )) ? ({ /* letn6591 */
                                            typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                            // ----------
                                            ;
                                            ({ /* letn6593 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6594 */
                                                    head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn6599 */
                                                  ({ /* letn6606 */
                                                    Maybe_BTree_int_User match6605  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                    typeof((((match6605 . __h_data). Just). __h_0_mem)) chtr ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6609 */
                                                      bool __h_case_result  = (true  &&  (((match6605 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6610 */
                                                            chtr  = (((match6605 . __h_data). Just). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6615 */
                                                          ({ /* letn6618 */
                                                            BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                            // ----------
                                                            Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                          });
                                                        }) : ({ /* letn6624 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6626 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* letn6632 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn6634 */
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
                        }) : ({ /* letn6638 */
                          typeof((((ntr -> __h_data). Internal). __h_0_mem)) items ;
                          typeof((((ntr -> __h_data). Internal). __h_1_mem)) children ;
                          // ----------
                          ;
                          ({ /* letn6640 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6641 */
                                    items  = (((ntr -> __h_data). Internal). __h_0_mem) ;
                                    true ;
                                  }) &&  ({ /* progn6643 */
                                    children  = (((ntr -> __h_data). Internal). __h_1_mem) ;
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn6648 */
                                ({ /* letn6650 */
                                  size_t items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* letn6652 */
                                      typeof((((wparent . __h_data). Just). __h_0_mem)) ptree ;
                                      // ----------
                                      ;
                                      ({ /* letn6654 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6655 */
                                              ptree  = (((wparent . __h_data). Just). __h_0_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn6660 */
                                            ({ /* letn6662 */
                                              typeof((((ptree -> __h_data). Branch). __h_0_mem)) pitems ;
                                              // ----------
                                              ;
                                              ({ /* letn6664 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn6665 */
                                                      pitems  = (((ptree -> __h_data). Branch). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* progn6670 */
                                                    ({ /* letn6672 */
                                                      Maybe_BTree_int_User_pair_t match6408  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match6408 . __h_data). Just). __h_0_mem)) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* letn6674 */
                                                        bool __h_case_result  = (true  &&  (((match6408 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6675 */
                                                              bitem  = (((match6408 . __h_data). Just). __h_0_mem) ;
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn6680 */
                                                            ({ /* letn6682 */
                                                              BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6684 */
                                                                  Ordering match6429  = compareKey (({ /* letn6685 */
                                                                    typeof((bitem . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6687 */
                                                                      bool __h_case_result  = (true  &&  ({ /* progn6688 */
                                                                          key  = (bitem . __h_0_mem) ;
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6693 */
                                                                          key ;
                                                                        }) : ({ /* letn6695 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6697 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* letn6699 */
                                                                    typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6454_0_arg ;
                                                                    typeof((__h_match6454_0_arg . __h_0_mem)) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* letn6701 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6702 */
                                                                              __h_match6454_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* progn6704 */
                                                                                key  = (__h_match6454_0_arg . __h_0_mem) ;
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* progn6709 */
                                                                          key ;
                                                                        }) : ({ /* letn6711 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* progn6713 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* letn6716 */
                                                                    bool __h_case_result  = (true  &&  ((match6429 . __h_ctor) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* progn6720 */
                                                                        0;
                                                                      }) : ({ /* letn6722 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* progn6724 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), cloneAll_Rc_BTree_int_User (children )));
                                                            });
                                                          }) : ({ /* letn6726 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn6728 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* letn6730 */
                                                    typeof((((ptree -> __h_data). Internal). __h_0_mem)) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* letn6732 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn6733 */
                                                            pitems  = (((ptree -> __h_data). Internal). __h_0_mem) ;
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* progn6738 */
                                                          ({ /* letn6740 */
                                                            Maybe_BTree_int_User_pair_t match6511  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match6511 . __h_data). Just). __h_0_mem)) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* letn6742 */
                                                              bool __h_case_result  = (true  &&  (((match6511 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6743 */
                                                                    bitem  = (((match6511 . __h_data). Just). __h_0_mem) ;
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* progn6748 */
                                                                  ({ /* letn6750 */
                                                                    BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* letn6752 */
                                                                        Ordering match6429  = compareKey (({ /* letn6753 */
                                                                          typeof((bitem . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6755 */
                                                                            bool __h_case_result  = (true  &&  ({ /* progn6756 */
                                                                                key  = (bitem . __h_0_mem) ;
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6761 */
                                                                                key ;
                                                                              }) : ({ /* letn6763 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6765 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* letn6767 */
                                                                          typeof((((items -> __h_data). Cons). __h_0_mem)) __h_match6454_0_arg ;
                                                                          typeof((__h_match6454_0_arg . __h_0_mem)) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* letn6769 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn6770 */
                                                                                    __h_match6454_0_arg  = (((items -> __h_data). Cons). __h_0_mem) ;
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* progn6772 */
                                                                                      key  = (__h_match6454_0_arg . __h_0_mem) ;
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* progn6777 */
                                                                                key ;
                                                                              }) : ({ /* letn6779 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* progn6781 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* letn6784 */
                                                                          bool __h_case_result  = (true  &&  ((match6429 . __h_ctor) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* progn6788 */
                                                                              0;
                                                                            }) : ({ /* letn6790 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* progn6792 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), cloneAll_Rc_BTree_int_User (children )));
                                                                  });
                                                                }) : ({ /* letn6794 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* progn6796 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* letn6798 */
                                                          // ----------
                                                          ;
                                                          ({ /* progn6800 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* letn6802 */
                                            // ----------
                                            ;
                                            ({ /* progn6804 */
                                              (((items_len  ==  0 )) ? ({ /* letn6806 */
                                                  typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn6808 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn6809 */
                                                          head  = (((children -> __h_data). Cons). __h_0_mem) ;
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn6814 */
                                                        ({ /* letn6816 */
                                                          Maybe_BTree_int_User match6605  = deref_Rc_BTree_int_User (clone_Rc_BTree_int_User (head ));
                                                          typeof((((match6605 . __h_data). Just). __h_0_mem)) chtr ;
                                                          // ----------
                                                          ;
                                                          ({ /* letn6818 */
                                                            bool __h_case_result  = (true  &&  (((match6605 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn6819 */
                                                                  chtr  = (((match6605 . __h_data). Just). __h_0_mem) ;
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* progn6824 */
                                                                ({ /* letn6826 */
                                                                  BTree_int_User ntr_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = ntr ;
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              }) : ({ /* letn6828 */
                                                                // ----------
                                                                ;
                                                                ({ /* progn6830 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* letn6832 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn6834 */
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
                              }) : ({ /* letn6838 */
                                // ----------
                                ;
                                ({ /* progn6840 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* letn6844 */
                  // ----------
                  ;
                  ({ /* progn6846 */
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
    return ({ /* letn6862 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn6864 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn6865 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn6867 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn6869 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6874 */
              ({ /* letn6880 */
                Ordering match6879  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn6882 */
                  bool __h_case_result  = (true  &&  ((match6879 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn6886 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* letn6892 */
                      // ----------
                      ;
                      ({ /* letn6894 */
                        bool __h_case_result  = (true  &&  ((match6879 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn6898 */
                            ({ /* letn6901 */
                              Either_BTree_int_User_Error_BTree_int_User result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* let6908 */
                                // ----------
                                ;
                                ({ /* letn6910 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block6916 */
                                      if (callback )
                                        { /* block6921 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* letn6925 */
                            // ----------
                            ;
                            ({ /* progn6927 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn6931 */
              // ----------
              ;
              ({ /* progn6933 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* letn6938 */
      Either_BTree_int_User_Error_BTree_int_User result  = ({ /* letn6943 */
        typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
        typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
        // ----------
        ;
        ({ /* letn6945 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn6946 */
                  items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn6948 */
                  children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn6953 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* letn6959 */
              typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
              typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
              // ----------
              ;
              ({ /* letn6961 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn6962 */
                        items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                        true ;
                      }) &&  ({ /* progn6964 */
                        children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn6969 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* letn6973 */
                    typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                    // ----------
                    ;
                    ({ /* letn6975 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn6976 */
                            items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn6981 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* letn6985 */
                          // ----------
                          ;
                          ({ /* progn6987 */
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
  return ({ /* letn7004 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* let7013 */
            Either_BTree_int_User_Error_BTree_int_User match7012  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match7012 . __h_data). Right). __h_0_mem)) new_tree ;
            // ----------
            ;
            ({ /* letn7016 */
              bool __h_case_result  = (true  &&  (((match7012 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn7017 */
                    new_tree  = (((match7012 . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block7024 */
                  { /* block7026 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* let7032 */
                  Either_BTree_int_User_Error_BTree_int_User left  = match7012 ;
                  // ----------
                  ;
                  { /* block7034 */
                    { /* block7036 */
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
    return ({ /* letn7049 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7051 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7052 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7054 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7059 */
              (({ /* letn7065 */
                  // ----------
                  ;
                  ({ /* letn7067 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7071 */
                        ({ /* letn7078 */
                          Maybe_BTree_int_User match7077  = deref_Rc_BTree_int_User (head );
                          typeof((((match7077 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn7080 */
                            bool __h_case_result  = (true  &&  (((match7077 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7081 */
                                  tr  = (((match7077 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7086 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* letn7090 */
                                // ----------
                                ;
                                ({ /* progn7092 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn7096 */
                        // ----------
                        ;
                        ({ /* progn7098 */
                          ({ /* letn7105 */
                            Maybe_BTree_int_User match7104  = deref_Rc_BTree_int_User (head );
                            typeof((((match7104 . __h_data). Just). __h_0_mem)) tr ;
                            // ----------
                            ;
                            ({ /* letn7107 */
                              bool __h_case_result  = (true  &&  (((match7104 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7108 */
                                    tr  = (((match7104 . __h_data). Just). __h_0_mem) ;
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7113 */
                                  showTree (indent , tr );
                                }) : ({ /* letn7117 */
                                  // ----------
                                  ;
                                  ({ /* progn7119 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* letn7123 */
              // ----------
              ;
              ({ /* progn7125 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* letn7132 */
          typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7134 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7135 */
                    items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7137 */
                    children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* progn7142 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7149 */
                    // ----------
                    ;
                    ({ /* letn7151 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn7155 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* letn7159 */
                          // ----------
                          ;
                          ({ /* progn7161 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* letn7165 */
                typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
                typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
                // ----------
                ;
                ({ /* letn7167 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7168 */
                          items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                          true ;
                        }) &&  ({ /* progn7170 */
                          children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7175 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* letn7177 */
                          // ----------
                          ;
                          ({ /* letn7179 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn7183 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* letn7185 */
                                // ----------
                                ;
                                ({ /* progn7187 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* letn7191 */
                      typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                      // ----------
                      ;
                      ({ /* letn7193 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7194 */
                              items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7199 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* letn7204 */
                            // ----------
                            ;
                            ({ /* progn7206 */
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
    { /* let7219 */
      typeof((((currentChild -> __h_data). Cons). __h_0_mem)) wheadC ;
      typeof((((currentChild -> __h_data). Cons). __h_1_mem)) tailC ;
      // ----------
      ;
      ({ /* letn7221 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7222 */
                wheadC  = (((currentChild -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7224 */
                tailC  = (((currentChild -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7231 */
            { /* let7235 */
              Maybe_BTree_int_User match7234  = deref_Rc_BTree_int_User (wheadC );
              typeof((((match7234 . __h_data). Just). __h_0_mem)) headC ;
              // ----------
              ;
              ({ /* letn7238 */
                bool __h_case_result  = (true  &&  (((match7234 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7239 */
                      headC  = (((match7234 . __h_data). Just). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* block7246 */
                    { /* let7250 */
                      // ----------
                      ;
                      ({ /* letn7252 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block7258 */
                            { /* block7260 */
                              { /* let7264 */
                                typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                // ----------
                                ;
                                ({ /* letn7266 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7267 */
                                          items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7269 */
                                          children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7276 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* let7281 */
                                      typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                      typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                      // ----------
                                      ;
                                      ({ /* letn7283 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7284 */
                                                items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                true ;
                                              }) &&  ({ /* progn7286 */
                                                children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* block7293 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* let7298 */
                                            typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7300 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7301 */
                                                    items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* block7308 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* let7312 */
                                typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                // ----------
                                ;
                                ({ /* letn7314 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7315 */
                                          headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn7317 */
                                          tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* block7324 */
                                      { /* block7326 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* let7331 */
                            // ----------
                            ;
                            { /* block7333 */
                              { /* block7335 */
                                { /* let7339 */
                                  typeof((((headC -> __h_data). Branch). __h_0_mem)) items ;
                                  typeof((((headC -> __h_data). Branch). __h_1_mem)) children ;
                                  // ----------
                                  ;
                                  ({ /* letn7341 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7342 */
                                            items  = (((headC -> __h_data). Branch). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7344 */
                                            children  = (((headC -> __h_data). Branch). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7351 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* let7356 */
                                        typeof((((headC -> __h_data). Internal). __h_0_mem)) items ;
                                        typeof((((headC -> __h_data). Internal). __h_1_mem)) children ;
                                        // ----------
                                        ;
                                        ({ /* letn7358 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7359 */
                                                  items  = (((headC -> __h_data). Internal). __h_0_mem) ;
                                                  true ;
                                                }) &&  ({ /* progn7361 */
                                                  children  = (((headC -> __h_data). Internal). __h_1_mem) ;
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* block7368 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* let7373 */
                                              typeof((((headC -> __h_data). Leaf). __h_0_mem)) items ;
                                              // ----------
                                              ;
                                              ({ /* letn7375 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7376 */
                                                      items  = (((headC -> __h_data). Leaf). __h_0_mem) ;
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* block7383 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* let7387 */
                                  typeof((((currentItem -> __h_data). Cons). __h_0_mem)) headI ;
                                  typeof((((currentItem -> __h_data). Cons). __h_1_mem)) tailI ;
                                  // ----------
                                  ;
                                  ({ /* letn7389 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7390 */
                                            headI  = (((currentItem -> __h_data). Cons). __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn7392 */
                                            tailI  = (((currentItem -> __h_data). Cons). __h_1_mem) ;
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* block7399 */
                                        { /* block7401 */
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
    { /* let7407 */
      typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn7409 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7410 */
                head  = (((current -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn7412 */
                tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block7419 */
            { /* block7421 */
              callback (head , ({ /* letn7427 */
                  // ----------
                  ;
                  ({ /* letn7429 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7433 */
                        hasNextLeaf ;
                      }) : ({ /* letn7437 */
                        // ----------
                        ;
                        ({ /* progn7439 */
                          ({ /* letn7445 */
                            // ----------
                            ;
                            ({ /* letn7447 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* progn7451 */
                                  True ();
                                }) : ({ /* letn7455 */
                                  // ----------
                                  ;
                                  ({ /* progn7457 */
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
  { /* let7461 */
    typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
    typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
    // ----------
    ;
    ({ /* letn7463 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn7464 */
              items  = (((tree -> __h_data). Branch). __h_0_mem) ;
              true ;
            }) &&  ({ /* progn7466 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block7473 */
          traverseInternal (items , children );
        }
      else
        { /* let7478 */
          typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
          typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
          // ----------
          ;
          ({ /* letn7480 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn7481 */
                    items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn7483 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* block7490 */
                traverseInternal (items , children );
              }
            else
              { /* let7495 */
                typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                // ----------
                ;
                ({ /* letn7497 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7498 */
                        items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block7505 */
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
    return ({ /* letn7522 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7524 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7525 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7527 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7532 */
              ({ /* letn7538 */
                // ----------
                ;
                ({ /* letn7540 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7544 */
                      ({ /* letn7551 */
                        Maybe_BTree_int_User match7550  = deref_Rc_BTree_int_User (head );
                        typeof((((match7550 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn7553 */
                          bool __h_case_result  = (true  &&  (((match7550 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7554 */
                                child  = (((match7550 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7559 */
                              ({ /* letn7565 */
                                typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                                // ----------
                                ;
                                ({ /* letn7567 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7568 */
                                        nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn7573 */
                                      maxInternal (nchildren );
                                    }) : ({ /* letn7577 */
                                      typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* letn7579 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7580 */
                                              nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* progn7585 */
                                            maxInternal (nchildren );
                                          }) : ({ /* letn7589 */
                                            typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                            // ----------
                                            ;
                                            ({ /* letn7591 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7592 */
                                                    items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* progn7597 */
                                                  maxLeaf (items );
                                                }) : ({ /* letn7601 */
                                                  // ----------
                                                  ;
                                                  ({ /* progn7603 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn7608 */
                              // ----------
                              ;
                              ({ /* progn7610 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7615 */
                      // ----------
                      ;
                      ({ /* progn7617 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7621 */
              // ----------
              ;
              ({ /* progn7623 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* letn7633 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7635 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn7636 */
                  head  = (((current -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn7638 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7643 */
              ({ /* letn7649 */
                // ----------
                ;
                ({ /* letn7651 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7655 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn7660 */
                      // ----------
                      ;
                      ({ /* progn7662 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* letn7666 */
              // ----------
              ;
              ({ /* progn7668 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7675 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7677 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7678 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7683 */
            maxInternal (children );
          }) : ({ /* letn7687 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7689 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7690 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7695 */
                  maxInternal (children );
                }) : ({ /* letn7699 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7701 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7702 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7707 */
                        maxLeaf (items );
                      }) : ({ /* letn7711 */
                        // ----------
                        ;
                        ({ /* progn7713 */
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
    return ({ /* letn7731 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7733 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7734 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7739 */
              ({ /* letn7746 */
                Maybe_BTree_int_User match7745  = deref_Rc_BTree_int_User (head );
                typeof((((match7745 . __h_data). Just). __h_0_mem)) child ;
                // ----------
                ;
                ({ /* letn7748 */
                  bool __h_case_result  = (true  &&  (((match7745 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn7749 */
                        child  = (((match7745 . __h_data). Just). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7754 */
                      ({ /* letn7760 */
                        typeof((((child -> __h_data). Branch). __h_1_mem)) nchildren ;
                        // ----------
                        ;
                        ({ /* letn7762 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7763 */
                                nchildren  = (((child -> __h_data). Branch). __h_1_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn7768 */
                              minInternal (nchildren );
                            }) : ({ /* letn7772 */
                              typeof((((child -> __h_data). Internal). __h_1_mem)) nchildren ;
                              // ----------
                              ;
                              ({ /* letn7774 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7775 */
                                      nchildren  = (((child -> __h_data). Internal). __h_1_mem) ;
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* progn7780 */
                                    minInternal (nchildren );
                                  }) : ({ /* letn7784 */
                                    typeof((((child -> __h_data). Leaf). __h_0_mem)) items ;
                                    // ----------
                                    ;
                                    ({ /* letn7786 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7787 */
                                            items  = (((child -> __h_data). Leaf). __h_0_mem) ;
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* progn7792 */
                                          minLeaf (items );
                                        }) : ({ /* letn7796 */
                                          // ----------
                                          ;
                                          ({ /* progn7798 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn7803 */
                      // ----------
                      ;
                      ({ /* progn7805 */
                        Nothing_BTree_int_User_pair_t ();
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
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* letn7822 */
        typeof((((first -> __h_data). Cons). __h_0_mem)) head ;
        // ----------
        ;
        ({ /* letn7824 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn7825 */
                head  = (((first -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7830 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* letn7835 */
              // ----------
              ;
              ({ /* progn7837 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn7844 */
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn7846 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  ({ /* progn7847 */
              children  = (((tree -> __h_data). Branch). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn7852 */
            minInternal (children );
          }) : ({ /* letn7856 */
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn7858 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  ({ /* progn7859 */
                    children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn7864 */
                  minInternal (children );
                }) : ({ /* letn7868 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn7870 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn7871 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn7876 */
                        minLeaf (items );
                      }) : ({ /* letn7880 */
                        // ----------
                        ;
                        ({ /* progn7882 */
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
    return ({ /* letn7904 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn7906 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn7907 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn7909 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn7911 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn7916 */
              ({ /* letn7922 */
                Ordering match7921  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn7924 */
                  bool __h_case_result  = (true  &&  ((match7921 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn7928 */
                      ({ /* letn7935 */
                        Maybe_Rc_BTree_int_User match7934  = nth_List_Rc_BTree_int_User (index , children );
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
                      ({ /* letn7979 */
                        bool __h_case_result  = (true  &&  ((match7921 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn7983 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* letn7988 */
                            // ----------
                            ;
                            ({ /* progn7990 */
                              ({ /* letn7996 */
                                // ----------
                                ;
                                ({ /* letn7998 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8002 */
                                      ({ /* letn8009 */
                                        Maybe_Rc_BTree_int_User match8008  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match8008 . __h_data). Just). __h_0_mem)) node ;
                                        // ----------
                                        ;
                                        ({ /* letn8011 */
                                          bool __h_case_result  = (true  &&  (((match8008 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8012 */
                                                node  = (((match8008 . __h_data). Just). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8017 */
                                              ({ /* letn8024 */
                                                Maybe_BTree_int_User match8023  = deref_Rc_BTree_int_User (node );
                                                typeof((((match8023 . __h_data). Just). __h_0_mem)) tr ;
                                                // ----------
                                                ;
                                                ({ /* letn8026 */
                                                  bool __h_case_result  = (true  &&  (((match8023 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8027 */
                                                        tr  = (((match8023 . __h_data). Just). __h_0_mem) ;
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8032 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* letn8037 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8039 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
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
            }) : ({ /* letn8057 */
              // ----------
              ;
              ({ /* progn8059 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8070 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8072 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8073 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8075 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8077 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8082 */
              ({ /* letn8088 */
                Ordering match8087  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8090 */
                  bool __h_case_result  = (true  &&  ((match8087 . __h_ctor) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8094 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* letn8099 */
                      // ----------
                      ;
                      ({ /* progn8101 */
                        ({ /* letn8107 */
                          // ----------
                          ;
                          ({ /* letn8109 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8113 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* letn8118 */
                                // ----------
                                ;
                                ({ /* progn8120 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* letn8124 */
              // ----------
              ;
              ({ /* progn8126 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* letn8133 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8135 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8136 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8138 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8143 */
            searchInternal (children , items , 0);
          }) : ({ /* letn8147 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8149 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8150 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8152 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8157 */
                  searchInternal (children , items , 0);
                }) : ({ /* letn8161 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8163 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8164 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8169 */
                        searchLeaf (items , 0);
                      }) : ({ /* letn8173 */
                        // ----------
                        ;
                        ({ /* progn8175 */
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
    { /* block8188 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8204 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8206 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8207 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8209 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8211 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8216 */
              ({ /* letn8222 */
                Ordering match8221  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8224 */
                  bool __h_case_result  = (true  &&  ((match8221 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8228 */
                      ({ /* letn8235 */
                        Maybe_Rc_BTree_int_User match8234  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match8234 . __h_data). Just). __h_0_mem)) child ;
                        // ----------
                        ;
                        ({ /* letn8237 */
                          bool __h_case_result  = (true  &&  (((match8234 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8238 */
                                child  = (((match8234 . __h_data). Just). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* progn8243 */
                              ({ /* letn8250 */
                                Maybe_BTree_int_User match8249  = deref_Rc_BTree_int_User (child );
                                typeof((((match8249 . __h_data). Just). __h_0_mem)) tr ;
                                // ----------
                                ;
                                ({ /* letn8252 */
                                  bool __h_case_result  = (true  &&  (((match8249 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8253 */
                                        tr  = (((match8249 . __h_data). Just). __h_0_mem) ;
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn8258 */
                                      ({ /* letn8265 */
                                        Either_BTree_int_User_Error_BTree_int_User match8264  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match8264 . __h_data). Right). __h_0_mem)) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* letn8267 */
                                          bool __h_case_result  = (true  &&  (((match8264 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8268 */
                                                child_tree  = (((match8264 . __h_data). Right). __h_0_mem) ;
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* progn8273 */
                                              ({ /* letn8279 */
                                                typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                                typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                                // ----------
                                                ;
                                                ({ /* letn8281 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8282 */
                                                          child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                          true ;
                                                        }) &&  ({ /* progn8284 */
                                                          child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8289 */
                                                      ({ /* letn8296 */
                                                        typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                        typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8294_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* letn8298 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8299 */
                                                                    single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                                    true ;
                                                                  }) &&  ({ /* progn8301 */
                                                                    __h_match8294_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match8294_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* progn8306 */
                                                              ({ /* letn8309 */
                                                                BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8320 */
                                                                    List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                    List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                    List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                    // ----------
                                                                    cloneAll_Rc_BTree_int_User (r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* letn8329 */
                                                              // ----------
                                                              ;
                                                              ({ /* progn8331 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* letn8337 */
                                                      // ----------
                                                      ;
                                                      ({ /* letn8339 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* progn8343 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8354 */
                                                                List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                                List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                                List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r3 );
                                                                List_Rc_BTree_int_User r5  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* letn8365 */
                                                            // ----------
                                                            ;
                                                            ({ /* progn8367 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8378 */
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
                                            }) : ({ /* letn8389 */
                                              Either_BTree_int_User_Error_BTree_int_User passthru  = match8264 ;
                                              // ----------
                                              ;
                                              ({ /* progn8391 */
                                                passthru ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* letn8395 */
                                      // ----------
                                      ;
                                      ({ /* progn8397 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* letn8403 */
                              // ----------
                              ;
                              ({ /* progn8405 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* letn8413 */
                      // ----------
                      ;
                      ({ /* letn8415 */
                        bool __h_case_result  = (true  &&  ((match8221 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8419 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8425 */
                            // ----------
                            ;
                            ({ /* progn8427 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8431 */
              // ----------
              ;
              ({ /* progn8433 */
                ({ /* letn8440 */
                  Maybe_Rc_BTree_int_User match8439  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match8439 . __h_data). Just). __h_0_mem)) child ;
                  // ----------
                  ;
                  ({ /* letn8442 */
                    bool __h_case_result  = (true  &&  (((match8439 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8443 */
                          child  = (((match8439 . __h_data). Just). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8448 */
                        ({ /* letn8455 */
                          Maybe_BTree_int_User match8454  = deref_Rc_BTree_int_User (child );
                          typeof((((match8454 . __h_data). Just). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8457 */
                            bool __h_case_result  = (true  &&  (((match8454 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn8458 */
                                  tr  = (((match8454 . __h_data). Just). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8463 */
                                ({ /* letn8470 */
                                  Either_BTree_int_User_Error_BTree_int_User match8469  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match8469 . __h_data). Right). __h_0_mem)) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* letn8472 */
                                    bool __h_case_result  = (true  &&  (((match8469 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8473 */
                                          child_tree  = (((match8469 . __h_data). Right). __h_0_mem) ;
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* progn8478 */
                                        ({ /* letn8484 */
                                          typeof((((child_tree -> __h_data). Branch). __h_0_mem)) child_items ;
                                          typeof((((child_tree -> __h_data). Branch). __h_1_mem)) child_children ;
                                          // ----------
                                          ;
                                          ({ /* letn8486 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8487 */
                                                    child_items  = (((child_tree -> __h_data). Branch). __h_0_mem) ;
                                                    true ;
                                                  }) &&  ({ /* progn8489 */
                                                    child_children  = (((child_tree -> __h_data). Branch). __h_1_mem) ;
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* progn8494 */
                                                ({ /* letn8501 */
                                                  typeof((((child_items -> __h_data). Cons). __h_0_mem)) single_item ;
                                                  typeof((((child_items -> __h_data). Cons). __h_1_mem)) __h_match8499_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* letn8503 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8504 */
                                                              single_item  = (((child_items -> __h_data). Cons). __h_0_mem) ;
                                                              true ;
                                                            }) &&  ({ /* progn8506 */
                                                              __h_match8499_1_arg  = (((child_items -> __h_data). Cons). __h_1_mem) ;
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match8499_1_arg -> __h_ctor) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* progn8511 */
                                                        ({ /* letn8514 */
                                                          BTree_int_User child_tree_spent  __attribute__((__cleanup__(free_BTree_int_User ))) = child_tree ;
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* letn8525 */
                                                              List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                              List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                              List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (child_children , r2 );
                                                              List_Rc_BTree_int_User r4  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = append_List_Rc_BTree_int_User (r1 , r3 );
                                                              // ----------
                                                              cloneAll_Rc_BTree_int_User (r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* letn8534 */
                                                        // ----------
                                                        ;
                                                        ({ /* progn8536 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* letn8542 */
                                                // ----------
                                                ;
                                                ({ /* letn8544 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* progn8548 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8557 */
                                                          List_Rc_BTree_int_User r1  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = take_List_Rc_BTree_int_User (index , children );
                                                          List_Rc_BTree_int_User r2  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = cloneAll_Rc_BTree_int_User (r1 );
                                                          List_Rc_BTree_int_User r3  __attribute__((__cleanup__(free_List_Rc_BTree_int_User ))) = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* letn8566 */
                                                      // ----------
                                                      ;
                                                      ({ /* progn8568 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* letn8577 */
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
                                      }) : ({ /* letn8586 */
                                        Either_BTree_int_User_Error_BTree_int_User passthru  = match8469 ;
                                        // ----------
                                        ;
                                        ({ /* progn8588 */
                                          passthru ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* letn8592 */
                                // ----------
                                ;
                                ({ /* progn8594 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (((BTree_int_User_pair_t){ }), index ));
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
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* letn8625 */
        typeof((((current -> __h_data). Cons). __h_0_mem)) head ;
        typeof((head . __h_0_mem)) key ;
        typeof((((current -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8627 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn8628 */
                    head  = (((current -> __h_data). Cons). __h_0_mem) ;
                    true ;
                  }) &&  (true  &&  ({ /* progn8630 */
                      key  = (head . __h_0_mem) ;
                      true ;
                    }) ) ) &&  ({ /* progn8632 */
                  tail  = (((current -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn8637 */
              ({ /* letn8643 */
                Ordering match8642  = compareKey (skey , key );
                // ----------
                ;
                ({ /* letn8645 */
                  bool __h_case_result  = (true  &&  ((match8642 . __h_ctor) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn8649 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* letn8657 */
                      // ----------
                      ;
                      ({ /* letn8659 */
                        bool __h_case_result  = (true  &&  ((match8642 . __h_ctor) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* progn8663 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* letn8669 */
                            // ----------
                            ;
                            ({ /* progn8671 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* letn8675 */
              // ----------
              ;
              ({ /* progn8677 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* letn8683 */
                    List_BTree_int_User_pair_t r1  __attribute__((__cleanup__(free_List_BTree_int_User_pair_t ))) = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* letn8692 */
      typeof((((tree -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((tree -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8694 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8695 */
                items  = (((tree -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8697 */
                children  = (((tree -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn8702 */
            ({ /* letn8708 */
              Either_BTree_int_User_Error_BTree_int_User match8707  = insertInternal (items , children , items , 0);
              typeof((((match8707 . __h_data). Right). __h_0_mem)) tr ;
              // ----------
              ;
              ({ /* letn8710 */
                bool __h_case_result  = (true  &&  (((match8707 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8711 */
                      tr  = (((match8707 . __h_data). Right). __h_0_mem) ;
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn8716 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* letn8722 */
                    Either_BTree_int_User_Error_BTree_int_User passthru  = match8707 ;
                    // ----------
                    ;
                    ({ /* progn8724 */
                      passthru ;
                    });
                  }));
              });
            });
          }) : ({ /* letn8728 */
            typeof((((tree -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((tree -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8730 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8731 */
                      items  = (((tree -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8733 */
                      children  = (((tree -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* progn8738 */
                  ({ /* letn8740 */
                    Either_BTree_int_User_Error_BTree_int_User match8707  = insertInternal (items , children , items , 0);
                    typeof((((match8707 . __h_data). Right). __h_0_mem)) tr ;
                    // ----------
                    ;
                    ({ /* letn8742 */
                      bool __h_case_result  = (true  &&  (((match8707 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8743 */
                            tr  = (((match8707 . __h_data). Right). __h_0_mem) ;
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* progn8748 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* letn8750 */
                          Either_BTree_int_User_Error_BTree_int_User passthru  = match8707 ;
                          // ----------
                          ;
                          ({ /* progn8752 */
                            passthru ;
                          });
                        }));
                    });
                  });
                }) : ({ /* letn8756 */
                  typeof((((tree -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8758 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8759 */
                          items  = (((tree -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* progn8764 */
                        ({ /* letn8770 */
                          Either_BTree_int_User_Error_BTree_int_User match8769  = insertLeaf (items , items , 0);
                          typeof((((match8769 . __h_data). Right). __h_0_mem)) tr ;
                          // ----------
                          ;
                          ({ /* letn8772 */
                            bool __h_case_result  = (true  &&  (((match8769 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn8773 */
                                  tr  = (((match8769 . __h_data). Right). __h_0_mem) ;
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* progn8778 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* letn8784 */
                                Either_BTree_int_User_Error_BTree_int_User passthru  = match8769 ;
                                // ----------
                                ;
                                ({ /* progn8786 */
                                  passthru ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* letn8790 */
                        // ----------
                        ;
                        ({ /* progn8792 */
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
  { /* let8800 */
    BTree_int_User this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* let8806 */
        typeof((((children -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((children -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn8808 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn8809 */
                  head  = (((children -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn8811 */
                  tail  = (((children -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* block8818 */
              { /* block8820 */
                free_Rc_BTree_int_User ((&head ));
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* let8825 */
      typeof((((this -> __h_data). Branch). __h_0_mem)) items ;
      typeof((((this -> __h_data). Branch). __h_1_mem)) children ;
      // ----------
      ;
      ({ /* letn8827 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Branch_t  ) &&  (({ /* progn8828 */
                items  = (((this -> __h_data). Branch). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn8830 */
                children  = (((this -> __h_data). Branch). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block8837 */
            { /* block8839 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* let8850 */
            typeof((((this -> __h_data). Internal). __h_0_mem)) items ;
            typeof((((this -> __h_data). Internal). __h_1_mem)) children ;
            // ----------
            ;
            ({ /* letn8852 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Internal_t  ) &&  (({ /* progn8853 */
                      items  = (((this -> __h_data). Internal). __h_0_mem) ;
                      true ;
                    }) &&  ({ /* progn8855 */
                      children  = (((this -> __h_data). Internal). __h_1_mem) ;
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* block8862 */
                  { /* block8864 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* let8871 */
                  typeof((((this -> __h_data). Leaf). __h_0_mem)) items ;
                  // ----------
                  ;
                  ({ /* letn8873 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Leaf_t  ) &&  ({ /* progn8874 */
                          items  = (((this -> __h_data). Leaf). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block8881 */
                        { /* block8883 */
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
    { /* block8893 */
      free_BTree_int_User ((*this_ptr ));
    }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8903 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* let8909 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* let8915 */
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
  union { /* ciciliUnion8935 */
    struct { /* ciciliStruct8936 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct8937 */
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
  union { /* ciciliUnion8979 */
    struct { /* ciciliStruct8980 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
      pthread_mutex_t * __h_3_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct8981 */
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
    { /* block9028 */
      free_Maybe_BTree_int_User ((*this ));
    }
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* let9038 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* let9043 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Arc_BTree_int_User__H_IMPL__
#define __Arc_BTree_int_User__H_IMPL__
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ()) {
  { /* let9055 */
    typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
    typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
    typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
    typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
    // ----------
    ;
    ({ /* letn9057 */
      bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9058 */
                  pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn9060 */
                  count  = (((arc . __h_data). Hold). __h_1_mem) ;
                  true ;
                }) ) &&  ({ /* progn9062 */
                address  = (((arc . __h_data). Hold). __h_2_mem) ;
                true ;
              }) ) &&  ({ /* progn9064 */
              mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9071 */
          { /* block9074 */
            pthread_mutex_lock (mutex );
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )
              alive_callback ((*pointer ));
            else
              dead_callback ();
            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* let9082 */
          // ----------
          ;
          ({ /* letn9084 */
            bool __h_case_result  = (true  &&  ((arc . __h_ctor) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* block9090 */
                dead_callback ();
              }
          });
        }
    });
  }
}
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex ) {
  return ({ /* letn9095 */
      int * count  = ((int *)malloc (sizeof(int)));
      BTree_int_User * holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_AtomicHold_BTree_int_User (holder , count , ((size_t)pointer ), mutex );
    });
}
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* letn9106 */
      typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
      typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
      typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9108 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9109 */
                    pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9111 */
                    count  = (((arc . __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9113 */
                  address  = (((arc . __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9115 */
                mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9120 */
            ({ /* progn9123 */
              pthread_mutex_lock (mutex );
              Arc_BTree_int_User lock_result  = ({ /* progn9125 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* progn9128 */
                        (++(*count ));
                        __h_AtomicHold_BTree_int_User (pointer , count , address , mutex );
                      }) : AtomicGone_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* letn9134 */
            // ----------
            ;
            ({ /* progn9136 */
              AtomicGone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  return ({ /* letn9147 */
      typeof((((this -> __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((this -> __h_data). Hold). __h_1_mem)) count ;
      typeof((((this -> __h_data). Hold). __h_2_mem)) address ;
      typeof((((this -> __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9149 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9150 */
                    pointer  = (((this -> __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9152 */
                    count  = (((this -> __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9154 */
                  address  = (((this -> __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9156 */
                mutex  = (((this -> __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9161 */
            ({ /* progn9164 */
              pthread_mutex_lock (mutex );
              Maybe_BTree_int_User lock_result  = ({ /* progn9166 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* letn9170 */
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
          }) : ({ /* letn9178 */
            // ----------
            ;
            ({ /* progn9180 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* letn9191 */
      typeof((((arc . __h_data). Hold). __h_0_mem)) pointer ;
      typeof((((arc . __h_data). Hold). __h_1_mem)) count ;
      typeof((((arc . __h_data). Hold). __h_2_mem)) address ;
      typeof((((arc . __h_data). Hold). __h_3_mem)) mutex ;
      // ----------
      ;
      ({ /* letn9193 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9194 */
                    pointer  = (((arc . __h_data). Hold). __h_0_mem) ;
                    true ;
                  }) &&  ({ /* progn9196 */
                    count  = (((arc . __h_data). Hold). __h_1_mem) ;
                    true ;
                  }) ) &&  ({ /* progn9198 */
                  address  = (((arc . __h_data). Hold). __h_2_mem) ;
                  true ;
                }) ) &&  ({ /* progn9200 */
                mutex  = (((arc . __h_data). Hold). __h_3_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn9205 */
            ({ /* progn9208 */
              pthread_mutex_lock (mutex );
              Maybe_BTree_int_User lock_result  = ({ /* progn9210 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* letn9217 */
            // ----------
            ;
            ({ /* progn9219 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  { /* let9228 */
    typeof((((this -> __h_data). Hold). __h_0_mem)) pointer ;
    typeof((((this -> __h_data). Hold). __h_1_mem)) count ;
    typeof((((this -> __h_data). Hold). __h_2_mem)) address ;
    typeof((((this -> __h_data). Hold). __h_3_mem)) mutex ;
    // ----------
    ;
    ({ /* letn9230 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Hold_t  ) &&  (((({ /* progn9231 */
                  pointer  = (((this -> __h_data). Hold). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn9233 */
                  count  = (((this -> __h_data). Hold). __h_1_mem) ;
                  true ;
                }) ) &&  ({ /* progn9235 */
                address  = (((this -> __h_data). Hold). __h_2_mem) ;
                true ;
              }) ) &&  ({ /* progn9237 */
              mutex  = (((this -> __h_data). Hold). __h_3_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9244 */
          { /* block9247 */
            pthread_mutex_lock (mutex );
            if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
              { /* block9251 */
                free (((void *)count ));
                free (((void *)pointer ));
                (*this ) = AtomicGone_BTree_int_User ();
              }
            else
              {
              if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
                { /* block9260 */
                  if ((*count ) ==  1 )
                    { /* block9264 */
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
        { /* let9274 */
          // ----------
          ;
          ({ /* letn9276 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* block9282 */
              }
          });
        }
    });
  }
}
__attribute__((weak)) void free_Arc_BTree_int_User_pointer (Arc_BTree_int_User ** this ) {
  if (this )
    { /* block9291 */
      free_Arc_BTree_int_User ((*this ));
    }
}
const Arc_BTree_int_User__H_Table * const get_Arc_BTree_int_User__H_Table () {
  static const Arc_BTree_int_User__H_Table table  = { free_Arc_BTree_int_User , lock_Arc_BTree_int_User , new_Arc_BTree_int_User , clone_Arc_BTree_int_User , take_Arc_BTree_int_User , get_Arc_BTree_int_User };
  return (&table );
}
Arc_BTree_int_User __h_AtomicHold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address , pthread_mutex_t * mutex ) {
  { /* let9301 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address , mutex }});
    // ----------
    return instance ;
  }
}
Arc_BTree_int_User AtomicGone_BTree_int_User () {
  { /* let9306 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Gone_t });
    // ----------
    return instance ;
  }
}
#endif /* __Arc_BTree_int_User__H_IMPL__ */ 
void __ciciliL_9372 () {
  ({ /* letn9375 */
    FILE * tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer i)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void insertMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* block9311 */
    for (int i  = from ; (i  <=  to  ); (++i )) {
        { /* block9316 */
          lock_Arc_BTree_int_User ((*pwtree ), ({ /* progn9320 */
              void __ciciliC_9319 (BTree_int_User tree ) {
                { /* let9325 */
                  Either_BTree_int_User_Error_BTree_int_User match9324  = insert_BTree_int_User (tree , i , ((User){ (i  +  2000 ), 1}));
                  typeof((((match9324 . __h_data). Right). __h_0_mem)) new_tree ;
                  // ----------
                  ;
                  ({ /* letn9328 */
                    bool __h_case_result  = (true  &&  (((match9324 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn9329 */
                          new_tree  = (((match9324 . __h_data). Right). __h_0_mem) ;
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* block9336 */
                        { /* block9338 */
                          { /* block9341 */
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
                      { /* let9353 */
                        typeof((((match9324 . __h_data). Left). __h_0_mem)) err ;
                        // ----------
                        ;
                        ({ /* letn9355 */
                          bool __h_case_result  = (true  &&  (((match9324 . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn9356 */
                                err  = (((match9324 . __h_data). Left). __h_0_mem) ;
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* block9363 */
                              { /* block9366 */
                                pthread_mutex_lock ((&outlock ));
                                ({ /* letn9369 */
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
              __ciciliC_9319 ;
            }), __ciciliL_9372 );
          usleep (5);
        }
    }
  }
}
void __ciciliL_9380 (BTree_int_User_pair_t item ) {
  { /* let9386 */
    typeof((item . __h_0_mem)) key ;
    typeof((item . __h_1_mem)) __h_match9384_1_arg ;
    typeof((__h_match9384_1_arg . __h_0_mem)) salary ;
    // ----------
    ;
    ({ /* letn9388 */
      bool __h_case_result  = (true  &&  ((({ /* progn9389 */
              key  = (item . __h_0_mem) ;
              true ;
            }) &&  ({ /* progn9391 */
              __h_match9384_1_arg  = (item . __h_1_mem) ;
              true ;
            }) ) &&  (true  &&  ({ /* progn9393 */
              salary  = (__h_match9384_1_arg . __h_0_mem) ;
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* block9400 */
          { /* block9403 */
            pthread_mutex_lock ((&outlock ));
            printf ("Deleted: %d, %d", key , salary );
            putchar ('\n');
            pthread_mutex_unlock ((&outlock ));
          }
        }
    });
  }
}
void __ciciliL_9460 () {
  ({ /* letn9463 */
    FILE * tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer d)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void deleteMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* let9379 */
      void (*item_deallocator) (BTree_int_User_pair_t item ) = __ciciliL_9380 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        lock_Arc_BTree_int_User ((*pwtree ), ({ /* progn9412 */
            void __ciciliC_9411 (BTree_int_User tree ) {
              { /* let9417 */
                Either_BTree_int_User_Error_BTree_int_User match9416  = delete_BTree_int_User (tree , i , item_deallocator );
                typeof((((match9416 . __h_data). Right). __h_0_mem)) new_tree ;
                // ----------
                ;
                ({ /* letn9420 */
                  bool __h_case_result  = (true  &&  (((match9416 . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn9421 */
                        new_tree  = (((match9416 . __h_data). Right). __h_0_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* block9428 */
                      { /* block9430 */
                        free_Arc_BTree_int_User (pwtree );
                        (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                      }
                    }
                  else
                    { /* let9441 */
                      typeof((((match9416 . __h_data). Left). __h_0_mem)) err ;
                      // ----------
                      ;
                      ({ /* letn9443 */
                        bool __h_case_result  = (true  &&  (((match9416 . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn9444 */
                              err  = (((match9416 . __h_data). Left). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block9451 */
                            { /* block9454 */
                              pthread_mutex_lock ((&outlock ));
                              ({ /* letn9457 */
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
            __ciciliC_9411 ;
          }), __ciciliL_9460 );
        usleep (5);
    }
  }
}
void freeRcTree (Arc_BTree_int_User * pnwtree ) {
  free_Arc_BTree_int_User (pnwtree );
}
void searchMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  while (true ) {
      { /* let9476 */
        // ----------
        ;
        ({ /* letn9478 */
          bool __h_case_result  = (true  &&  ((doQuit . __h_ctor) ==  __h_True_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* block9484 */
              return ;
            }
        });
      }
      ({ /* letn9487 */
        Arc_BTree_int_User nwtree  __attribute__((__cleanup__(freeRcTree ))) = ({ /* progn9489 */
          pthread_mutex_lock ((&treeArc ));
          Arc_BTree_int_User lock_result  = ({ /* progn9491 */
                clone_Arc_BTree_int_User ((*pwtree ));
              });
          pthread_mutex_unlock ((&treeArc ));
          lock_result ;
        });
        // ----------
        { /* let9497 */
          Maybe_BTree_int_User match9496  = get_Arc_BTree_int_User (nwtree );
          typeof((((match9496 . __h_data). Just). __h_0_mem)) tree ;
          // ----------
          ;
          ({ /* letn9500 */
            bool __h_case_result  = (true  &&  (((match9496 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn9501 */
                  tree  = (((match9496 . __h_data). Just). __h_0_mem) ;
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* block9508 */
                for (int i  = from ; (i  <=  to  ); (++i )) {
                    { /* let9515 */
                      Maybe_BTree_int_User_pair_t match9514  = search_BTree_int_User (tree , i );
                      typeof((((match9514 . __h_data). Just). __h_0_mem)) item ;
                      // ----------
                      ;
                      ({ /* letn9518 */
                        bool __h_case_result  = (true  &&  (((match9514 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn9519 */
                              item  = (((match9514 . __h_data). Just). __h_0_mem) ;
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* block9526 */
                            { /* block9529 */
                              pthread_mutex_lock ((&outlock ));
                              fprintf (stdout , "thread: %lu, Search Found: ", ((unsigned)pthread_self ()));
                              ({ /* letn9541 */
                                typeof((item . __h_0_mem)) id ;
                                typeof((item . __h_1_mem)) __h_match9539_1_arg ;
                                typeof((__h_match9539_1_arg . __h_0_mem)) salary ;
                                typeof((__h_match9539_1_arg . __h_1_mem)) grade ;
                                // ----------
                                ;
                                ({ /* letn9543 */
                                  bool __h_case_result  = (true  &&  ((({ /* progn9544 */
                                          id  = (item . __h_0_mem) ;
                                          true ;
                                        }) &&  ({ /* progn9546 */
                                          __h_match9539_1_arg  = (item . __h_1_mem) ;
                                          true ;
                                        }) ) &&  (true  &&  (({ /* progn9548 */
                                            salary  = (__h_match9539_1_arg . __h_0_mem) ;
                                            true ;
                                          }) &&  ({ /* progn9550 */
                                            grade  = (__h_match9539_1_arg . __h_1_mem) ;
                                            true ;
                                          }) ) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* progn9555 */
                                      fprintf (stdout , "(%d, %d, %d)", id , salary , grade );
                                    }) : ({ /* letn9559 */
                                      // ----------
                                      ;
                                      ({ /* progn9561 */
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
                          { /* let9566 */
                            // ----------
                            ;
                            ({ /* letn9568 */
                              bool __h_case_result  = (true  &&  ((match9514 . __h_ctor) ==  __h_Nothing_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* block9574 */
                                  { /* block9577 */
                                    pthread_mutex_lock ((&outlock ));
                                    ({ /* letn9580 */
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
typedef struct __ciciliC_Context_9603 {
    void (*routine) (struct __ciciliC_Context_9603 * context );
  struct { /* ciciliStruct9606 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9603;
typedef struct ciciliiL1ol_cMBZKCZUx__gLqrhCL05M_ {
  void * context ;
} ciciliiL1ol_cMBZKCZUx__gLqrhCL05M_;
void __ciciliL_9613 (struct ciciliiL1ol_cMBZKCZUx__gLqrhCL05M_ * ciciliDefer9610 ) {
  void * context  = (ciciliDefer9610 -> context);
  free (context );
}
void __ciciliC_Context_9603___ciciliC_Routine_9604 (struct __ciciliC_Context_9603 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct ciciliiL1ol_cMBZKCZUx__gLqrhCL05M_ ciciliDefer9610  __attribute__((__cleanup__(__ciciliL_9613 ))) = { context };
  searchMany (pwtree , 200, 200);
}
typedef struct __ciciliC_Context_9623 {
    void (*routine) (struct __ciciliC_Context_9623 * context );
  struct { /* ciciliStruct9626 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9623;
typedef struct cicilitLDhKw9A1JTI0tNORnH4od_MOVE_ {
  void * context ;
} cicilitLDhKw9A1JTI0tNORnH4od_MOVE_;
void __ciciliL_9631 (struct cicilitLDhKw9A1JTI0tNORnH4od_MOVE_ * ciciliDefer9610 ) {
  void * context  = (ciciliDefer9610 -> context);
  free (context );
}
void __ciciliC_Context_9623___ciciliC_Routine_9624 (struct __ciciliC_Context_9623 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct cicilitLDhKw9A1JTI0tNORnH4od_MOVE_ ciciliDefer9610  __attribute__((__cleanup__(__ciciliL_9631 ))) = { context };
  searchMany (pwtree , 500, 500);
}
typedef struct __ciciliC_Context_9641 {
    void (*routine) (struct __ciciliC_Context_9641 * context );
  struct { /* ciciliStruct9644 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9641;
typedef struct ciciliKsrP5duCiKHpPZmdJg7d_zXEdR0_ {
  void * context ;
} ciciliKsrP5duCiKHpPZmdJg7d_zXEdR0_;
void __ciciliL_9649 (struct ciciliKsrP5duCiKHpPZmdJg7d_zXEdR0_ * ciciliDefer9610 ) {
  void * context  = (ciciliDefer9610 -> context);
  free (context );
}
void __ciciliC_Context_9641___ciciliC_Routine_9642 (struct __ciciliC_Context_9641 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct ciciliKsrP5duCiKHpPZmdJg7d_zXEdR0_ ciciliDefer9610  __attribute__((__cleanup__(__ciciliL_9649 ))) = { context };
  searchMany (pwtree , 700, 700);
}
typedef struct __ciciliC_Context_9659 {
    void (*routine) (struct __ciciliC_Context_9659 * context );
  struct { /* ciciliStruct9662 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_9659;
typedef struct cicili6leU2MkzSxYp1BO8rzFGEF2RzHA_ {
  void * context ;
} cicili6leU2MkzSxYp1BO8rzFGEF2RzHA_;
void __ciciliL_9667 (struct cicili6leU2MkzSxYp1BO8rzFGEF2RzHA_ * ciciliDefer9610 ) {
  void * context  = (ciciliDefer9610 -> context);
  free (context );
}
void __ciciliC_Context_9659___ciciliC_Routine_9660 (struct __ciciliC_Context_9659 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context). pwtree);
  struct cicili6leU2MkzSxYp1BO8rzFGEF2RzHA_ ciciliDefer9610  __attribute__((__cleanup__(__ciciliL_9667 ))) = { context };
  searchMany (pwtree , 1000, 1000);
}
int main () {
  fprintf (stdout , "Multi-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n", "User", "BTree_int_User", "int");
  doQuit  = False ();
  { /* let9589 */
    pthread_mutexattr_t attr ;
    // ----------
    pthread_mutexattr_init ((&attr ));
    pthread_mutexattr_settype ((&attr ), PTHREAD_MUTEX_RECURSIVE );
    pthread_mutex_init ((&treeArc ), (&attr ));
  }
  { /* let9591 */
    Arc_BTree_int_User wtree  = new_Arc_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()), (&treeArc ));
    Arc_BTree_int_User * pwtree  = (&wtree );
    pthread_t reader1  = ({ /* letn9600 */
      struct __ciciliC_Context_9603 closure9599  = ((struct __ciciliC_Context_9603){ __ciciliC_Context_9603___ciciliC_Routine_9604 , { pwtree }});
      void * data  = malloc (sizeof(closure9599));
      pthread_t thread9598 ;
      // ----------
      memcpy (data , (&closure9599 ), sizeof(closure9599));
      pthread_create ((&thread9598 ), NULL , ((        void * (*)(void *))(closure9599 . routine)), data );
      ;
      thread9598 ;
    });
    pthread_t reader2  = ({ /* letn9620 */
      struct __ciciliC_Context_9623 closure9619  = ((struct __ciciliC_Context_9623){ __ciciliC_Context_9623___ciciliC_Routine_9624 , { pwtree }});
      void * data  = malloc (sizeof(closure9619));
      pthread_t thread9618 ;
      // ----------
      memcpy (data , (&closure9619 ), sizeof(closure9619));
      pthread_create ((&thread9618 ), NULL , ((        void * (*)(void *))(closure9619 . routine)), data );
      ;
      thread9618 ;
    });
    pthread_t reader3  = ({ /* letn9638 */
      struct __ciciliC_Context_9641 closure9637  = ((struct __ciciliC_Context_9641){ __ciciliC_Context_9641___ciciliC_Routine_9642 , { pwtree }});
      void * data  = malloc (sizeof(closure9637));
      pthread_t thread9636 ;
      // ----------
      memcpy (data , (&closure9637 ), sizeof(closure9637));
      pthread_create ((&thread9636 ), NULL , ((        void * (*)(void *))(closure9637 . routine)), data );
      ;
      thread9636 ;
    });
    pthread_t reader4  = ({ /* letn9656 */
      struct __ciciliC_Context_9659 closure9655  = ((struct __ciciliC_Context_9659){ __ciciliC_Context_9659___ciciliC_Routine_9660 , { pwtree }});
      void * data  = malloc (sizeof(closure9655));
      pthread_t thread9654 ;
      // ----------
      memcpy (data , (&closure9655 ), sizeof(closure9655));
      pthread_create ((&thread9654 ), NULL , ((        void * (*)(void *))(closure9655 . routine)), data );
      ;
      thread9654 ;
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
