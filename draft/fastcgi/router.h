#include <fcgiapp.h>
#include <pthread.h>
typedef enum RouteMethod {
  METHOD_GET = 1,
  METHOD_POST = 2,
  METHOD_PUT = 4,
  METHOD_DELETE = 8,
  METHOD_PATCH = 16,
  METHOD_HEAD = 32,
  METHOD_OPTIONS = 64
} RouteMethod;
typedef struct ciciliUT1fEkrXeUxQKjU_hLg490QV9Y8_ {
  CStr __h_0_mem ;
  int __h_1_mem ;
} ciciliUT1fEkrXeUxQKjU_hLg490QV9Y8_;
typedef ciciliUT1fEkrXeUxQKjU_hLg490QV9Y8_ ParamResult ;
#ifndef __Maybe_ParamResult__H_DECL__
#define __Maybe_ParamResult__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_ParamResult Maybe_ParamResult ;
typedef void (*free_Maybe_ParamResult_t) (Maybe_ParamResult * this );
typedef struct Maybe_ParamResult__H_Table {
  free_Maybe_ParamResult_t freeData ;
} Maybe_ParamResult__H_Table;
typedef struct Maybe_ParamResult {
  const Maybe_ParamResult__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion117 */
    struct { /* ciciliStruct118 */
      ParamResult __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct119 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_ParamResult;
Maybe_ParamResult Just_ParamResult (ParamResult value );
Maybe_ParamResult Nothing_ParamResult ();
__attribute__((weak)) Maybe_ParamResult Default_Maybe_ParamResult () {
  return Nothing_ParamResult ();
}
const Maybe_ParamResult__H_Table * const get_Maybe_ParamResult__H_Table ();
void free_Maybe_ParamResult (Maybe_ParamResult * this );
#endif /* __Maybe_ParamResult__H_DECL__ */ 
#ifndef __Request__H_DECL__
#define __Request__H_DECL__
#ifndef __H___h_Request_ctor_t__
#define __H___h_Request_ctor_t__
typedef enum __h_Request_ctor_t {
  __h_MakeRequest_t = 0
} __h_Request_ctor_t;
#endif /* __H___h_Request_ctor_t__ */ 
typedef struct class_Request class_Request ;
typedef class_Request * Request ;
typedef void (*free_Request_t) (Request * this_ptr );
typedef struct Request__H_Table {
  free_Request_t freeClass ;
    Maybe_ParamResult (*form) (Request rr , CStr param );
    Maybe_ParamResult (*query) (Request rr , CStr param );
    Maybe_CStr (*param) (Request rr , CStr param );
} Request__H_Table;
typedef struct class_Request {
  const Request__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion149 */
    struct { /* ciciliStruct150 */
      FCGX_Request * __h_0_mem ;
      CStr __h_1_mem ;
      CStr __h_2_mem ;
      CStr __h_3_mem ;
      CStr __h_4_mem ;
    } MakeRequest , _ ;
  } __h_data ;
} class_Request;
Request MakeRequest (FCGX_Request * req , CStr uri , CStr method , CStr queryString , CStr postData );
__attribute__((weak)) Request Default_Request (FCGX_Request * req , CStr uri , CStr method , CStr queryString , CStr postData ) {
  return MakeRequest (req , uri , method , queryString , postData );
}
Maybe_ParamResult form_Request (Request rr , CStr param );
Maybe_ParamResult query_Request (Request rr , CStr param );
Maybe_CStr param_Request (Request rr , CStr param );
Request__H_Table * const get_Request__H_Table ();
void free_Request (Request * this_ptr );
#endif /* __Request__H_DECL__ */ 
typedef void (*RouteHandler) (Request rr );
typedef struct ciciliDRA52tLW4JzbWOBVVTOBLSpBDE8_ {
  CStr __h_0_mem ;
  int __h_1_mem ;
  RouteHandler __h_2_mem ;
} ciciliDRA52tLW4JzbWOBVVTOBLSpBDE8_;
typedef ciciliDRA52tLW4JzbWOBVVTOBLSpBDE8_ Route ;
#ifndef __Maybe_Route__H_DECL__
#define __Maybe_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Route Maybe_Route ;
typedef void (*free_Maybe_Route_t) (Maybe_Route * this );
typedef struct Maybe_Route__H_Table {
  free_Maybe_Route_t freeData ;
} Maybe_Route__H_Table;
typedef struct Maybe_Route {
  const Maybe_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion188 */
    struct { /* ciciliStruct189 */
      Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct190 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Route;
Maybe_Route Just_Route (Route value );
Maybe_Route Nothing_Route ();
__attribute__((weak)) Maybe_Route Default_Maybe_Route () {
  return Nothing_Route ();
}
const Maybe_Route__H_Table * const get_Maybe_Route__H_Table ();
void free_Maybe_Route (Maybe_Route * this );
#endif /* __Maybe_Route__H_DECL__ */ 
#ifndef __List_Route__H_DECL__
#define __List_Route__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Route class_List_Route ;
typedef class_List_Route * List_Route ;
typedef void (*free_List_Route_t) (List_Route * this_ptr );
typedef struct List_Route__H_Table {
  free_List_Route_t freeClass ;
    Route * (*toArray) (List_Route list , Route term );
    List_Route (*wrap) (const Route item );
    List_Route (*pure) (const Route * buf , int len );
    int (*show) (CFile file , List_Route list );
    List_Route (*copy) (List_Route list );
    List_Route (*replaceAt) (List_Route list , Route item , int index );
    List_Route (*deleteAt) (List_Route list , int index );
    List_Route (*insertAt) (List_Route llist , Route item , int index );
    List_Route (*replace) (List_Route list , Route item , List_Route aimed );
    List_Route (*delete) (List_Route list , List_Route aimed );
    List_Route (*insert) (List_Route llist , Route item , List_Route rlist );
    List_Route (*reverse) (List_Route list );
    List_Route (*append) (List_Route llist , List_Route rlist );
    List_Route (*push) (Route item , List_Route list );
    List_Route (*take) (int len , List_Route list );
    List_Route (*last) (List_Route list );
    List_Route (*init) (List_Route list );
    int (*hasLen) (List_Route list , int desired );
    int (*len) (List_Route list );
    List_Route (*tail) (List_Route list );
    List_Route (*drop) (int index , List_Route list );
    Maybe_Route (*head) (List_Route list );
    List_Route (*nthcdr) (int index , List_Route list );
    Maybe_Route (*nth) (int index , List_Route list );
} List_Route__H_Table;
typedef struct class_List_Route {
  const List_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion240 */
    struct { /* ciciliStruct241 */
      Route __h_0_mem ;
      List_Route __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct242 */
    } Nil , _ ;
  } __h_data ;
} class_List_Route;
List_Route Cons_Route (Route head , List_Route tail );
List_Route Nil_Route ();
__attribute__((weak)) List_Route Default_List_Route () {
  return Nil_Route ();
}
Route * toArray_List_Route (List_Route list , Route term );
List_Route wrap_List_Route (const Route item );
List_Route pure_List_Route (const Route * buf , int len );
int show_List_Route (CFile file , List_Route list );
List_Route copy_List_Route (List_Route list );
List_Route replaceAt_List_Route (List_Route list , Route item , int index );
List_Route deleteAt_List_Route (List_Route list , int index );
List_Route insertAt_List_Route (List_Route llist , Route item , int index );
List_Route replace_List_Route (List_Route list , Route item , List_Route aimed );
List_Route delete_List_Route (List_Route list , List_Route aimed );
List_Route insert_List_Route (List_Route llist , Route item , List_Route rlist );
List_Route reverse_List_Route (List_Route list );
List_Route append_List_Route (List_Route llist , List_Route rlist );
List_Route push_List_Route (Route item , List_Route list );
List_Route take_List_Route (int len , List_Route list );
List_Route last_List_Route (List_Route list );
List_Route init_List_Route (List_Route list );
int hasLen_List_Route (List_Route list , int desired );
int len_List_Route (List_Route list );
List_Route tail_List_Route (List_Route list );
List_Route drop_List_Route (int index , List_Route list );
Maybe_Route head_List_Route (List_Route list );
List_Route nthcdr_List_Route (int index , List_Route list );
Maybe_Route nth_List_Route (int index , List_Route list );
List_Route__H_Table * const get_List_Route__H_Table ();
void free_List_Route (List_Route * this_ptr );
#endif /* __List_Route__H_DECL__ */ 
#ifndef __Maybe_List_Route__H_DECL__
#define __Maybe_List_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Route Maybe_List_Route ;
typedef void (*free_Maybe_List_Route_t) (Maybe_List_Route * this );
typedef struct Maybe_List_Route__H_Table {
  free_Maybe_List_Route_t freeData ;
} Maybe_List_Route__H_Table;
typedef struct Maybe_List_Route {
  const Maybe_List_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion342 */
    struct { /* ciciliStruct343 */
      List_Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct344 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Route;
Maybe_List_Route Just_List_Route (List_Route value );
Maybe_List_Route Nothing_List_Route ();
__attribute__((weak)) Maybe_List_Route Default_Maybe_List_Route () {
  return Nothing_List_Route ();
}
const Maybe_List_Route__H_Table * const get_Maybe_List_Route__H_Table ();
void free_Maybe_List_Route (Maybe_List_Route * this );
#endif /* __Maybe_List_Route__H_DECL__ */ 
typedef struct class_BTree_CStr_Route * BTree_CStr_Route ;
typedef struct cicilimMrkzsxOmHY0ffP_jRaIgJMVZrA_ {
  CStr __h_0_mem ;
  Route __h_1_mem ;
} cicilimMrkzsxOmHY0ffP_jRaIgJMVZrA_;
typedef cicilimMrkzsxOmHY0ffP_jRaIgJMVZrA_ BTree_CStr_Route_pair_t ;
#ifndef __BTree_CStr_Route_Error__H_DECL__
#define __BTree_CStr_Route_Error__H_DECL__
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
typedef struct BTree_CStr_Route_Error BTree_CStr_Route_Error ;
typedef void (*free_BTree_CStr_Route_Error_t) (BTree_CStr_Route_Error * this );
typedef struct BTree_CStr_Route_Error__H_Table {
  free_BTree_CStr_Route_Error_t freeData ;
    void (*show) (BTree_CStr_Route_Error error );
} BTree_CStr_Route_Error__H_Table;
typedef struct BTree_CStr_Route_Error {
  const BTree_CStr_Route_Error__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion378 */
    struct { /* ciciliStruct379 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct380 */
      int __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct381 */
      BTree_CStr_Route_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct382 */
      CStr __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct383 */
      BTree_CStr_Route_pair_t __h_0_mem ;
      int __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct384 */
      BTree_CStr_Route __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct385 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _ ;
  } __h_data ;
} BTree_CStr_Route_Error;
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_OBJECT ();
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_ORDER (int order );
BTree_CStr_Route_Error BTree_CStr_Route_ERR_UNIQUE_KEY (BTree_CStr_Route_pair_t item );
BTree_CStr_Route_Error BTree_CStr_Route_ERR_NOT_FOUND (CStr key );
BTree_CStr_Route_Error BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (BTree_CStr_Route_pair_t item , int index );
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_BRANCH (BTree_CStr_Route branch );
BTree_CStr_Route_Error BTree_CStr_Route_ERR_CANT_BORROW (char * reason );
__attribute__((weak)) BTree_CStr_Route_Error Default_BTree_CStr_Route_Error (char * reason ) {
  return BTree_CStr_Route_ERR_CANT_BORROW (reason );
}
void show_BTree_CStr_Route_Error (BTree_CStr_Route_Error error );
const BTree_CStr_Route_Error__H_Table * const get_BTree_CStr_Route_Error__H_Table ();
void free_BTree_CStr_Route_Error (BTree_CStr_Route_Error * this );
#endif /* __BTree_CStr_Route_Error__H_DECL__ */ 
#ifndef __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_DECL__
#define __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_CStr_Route_Error_BTree_CStr_Route Either_BTree_CStr_Route_Error_BTree_CStr_Route ;
typedef void (*free_Either_BTree_CStr_Route_Error_BTree_CStr_Route_t) (Either_BTree_CStr_Route_Error_BTree_CStr_Route * this );
typedef struct Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table {
  free_Either_BTree_CStr_Route_Error_BTree_CStr_Route_t freeData ;
} Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table;
typedef struct Either_BTree_CStr_Route_Error_BTree_CStr_Route {
  const Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion432 */
    struct { /* ciciliStruct433 */
      BTree_CStr_Route __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct434 */
      BTree_CStr_Route_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_CStr_Route_Error_BTree_CStr_Route;
Either_BTree_CStr_Route_Error_BTree_CStr_Route Right_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route value );
Either_BTree_CStr_Route_Error_BTree_CStr_Route Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_Error error );
__attribute__((weak)) Either_BTree_CStr_Route_Error_BTree_CStr_Route Default_Either_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_Error error ) {
  return Left_BTree_CStr_Route_Error_BTree_CStr_Route (error );
}
const Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table * const get_Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table ();
void free_Either_BTree_CStr_Route_Error_BTree_CStr_Route (Either_BTree_CStr_Route_Error_BTree_CStr_Route * this );
#endif /* __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_Route__H_DECL__
#define __Maybe_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_Route Maybe_BTree_CStr_Route ;
typedef void (*free_Maybe_BTree_CStr_Route_t) (Maybe_BTree_CStr_Route * this );
typedef struct Maybe_BTree_CStr_Route__H_Table {
  free_Maybe_BTree_CStr_Route_t freeData ;
} Maybe_BTree_CStr_Route__H_Table;
typedef struct Maybe_BTree_CStr_Route {
  const Maybe_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion460 */
    struct { /* ciciliStruct461 */
      BTree_CStr_Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct462 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_Route;
Maybe_BTree_CStr_Route Just_BTree_CStr_Route (BTree_CStr_Route value );
Maybe_BTree_CStr_Route Nothing_BTree_CStr_Route ();
__attribute__((weak)) Maybe_BTree_CStr_Route Default_Maybe_BTree_CStr_Route () {
  return Nothing_BTree_CStr_Route ();
}
const Maybe_BTree_CStr_Route__H_Table * const get_Maybe_BTree_CStr_Route__H_Table ();
void free_Maybe_BTree_CStr_Route (Maybe_BTree_CStr_Route * this );
#endif /* __Maybe_BTree_CStr_Route__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_Route_pair_t__H_DECL__
#define __Maybe_BTree_CStr_Route_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_Route_pair_t Maybe_BTree_CStr_Route_pair_t ;
typedef void (*free_Maybe_BTree_CStr_Route_pair_t_t) (Maybe_BTree_CStr_Route_pair_t * this );
typedef struct Maybe_BTree_CStr_Route_pair_t__H_Table {
  free_Maybe_BTree_CStr_Route_pair_t_t freeData ;
} Maybe_BTree_CStr_Route_pair_t__H_Table;
typedef struct Maybe_BTree_CStr_Route_pair_t {
  const Maybe_BTree_CStr_Route_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion490 */
    struct { /* ciciliStruct491 */
      BTree_CStr_Route_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct492 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_Route_pair_t;
Maybe_BTree_CStr_Route_pair_t Just_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t value );
Maybe_BTree_CStr_Route_pair_t Nothing_BTree_CStr_Route_pair_t ();
__attribute__((weak)) Maybe_BTree_CStr_Route_pair_t Default_Maybe_BTree_CStr_Route_pair_t () {
  return Nothing_BTree_CStr_Route_pair_t ();
}
const Maybe_BTree_CStr_Route_pair_t__H_Table * const get_Maybe_BTree_CStr_Route_pair_t__H_Table ();
void free_Maybe_BTree_CStr_Route_pair_t (Maybe_BTree_CStr_Route_pair_t * this );
#endif /* __Maybe_BTree_CStr_Route_pair_t__H_DECL__ */ 
#ifndef __List_BTree_CStr_Route_pair_t__H_DECL__
#define __List_BTree_CStr_Route_pair_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_BTree_CStr_Route_pair_t class_List_BTree_CStr_Route_pair_t ;
typedef class_List_BTree_CStr_Route_pair_t * List_BTree_CStr_Route_pair_t ;
typedef void (*free_List_BTree_CStr_Route_pair_t_t) (List_BTree_CStr_Route_pair_t * this_ptr );
typedef struct List_BTree_CStr_Route_pair_t__H_Table {
  free_List_BTree_CStr_Route_pair_t_t freeClass ;
    BTree_CStr_Route_pair_t * (*toArray) (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t term );
    List_BTree_CStr_Route_pair_t (*wrap) (const BTree_CStr_Route_pair_t item );
    List_BTree_CStr_Route_pair_t (*pure) (const BTree_CStr_Route_pair_t * buf , int len );
    int (*show) (CFile file , List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*copy) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*replaceAt) (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , int index );
    List_BTree_CStr_Route_pair_t (*deleteAt) (List_BTree_CStr_Route_pair_t list , int index );
    List_BTree_CStr_Route_pair_t (*insertAt) (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , int index );
    List_BTree_CStr_Route_pair_t (*replace) (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t aimed );
    List_BTree_CStr_Route_pair_t (*delete) (List_BTree_CStr_Route_pair_t list , List_BTree_CStr_Route_pair_t aimed );
    List_BTree_CStr_Route_pair_t (*insert) (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t rlist );
    List_BTree_CStr_Route_pair_t (*reverse) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*append) (List_BTree_CStr_Route_pair_t llist , List_BTree_CStr_Route_pair_t rlist );
    List_BTree_CStr_Route_pair_t (*push) (BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*take) (int len , List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*last) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*init) (List_BTree_CStr_Route_pair_t list );
    int (*hasLen) (List_BTree_CStr_Route_pair_t list , int desired );
    int (*len) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*tail) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*drop) (int index , List_BTree_CStr_Route_pair_t list );
    Maybe_BTree_CStr_Route_pair_t (*head) (List_BTree_CStr_Route_pair_t list );
    List_BTree_CStr_Route_pair_t (*nthcdr) (int index , List_BTree_CStr_Route_pair_t list );
    Maybe_BTree_CStr_Route_pair_t (*nth) (int index , List_BTree_CStr_Route_pair_t list );
} List_BTree_CStr_Route_pair_t__H_Table;
typedef struct class_List_BTree_CStr_Route_pair_t {
  const List_BTree_CStr_Route_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion542 */
    struct { /* ciciliStruct543 */
      BTree_CStr_Route_pair_t __h_0_mem ;
      List_BTree_CStr_Route_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct544 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_CStr_Route_pair_t;
List_BTree_CStr_Route_pair_t Cons_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t head , List_BTree_CStr_Route_pair_t tail );
List_BTree_CStr_Route_pair_t Nil_BTree_CStr_Route_pair_t ();
__attribute__((weak)) List_BTree_CStr_Route_pair_t Default_List_BTree_CStr_Route_pair_t () {
  return Nil_BTree_CStr_Route_pair_t ();
}
BTree_CStr_Route_pair_t * toArray_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t term );
List_BTree_CStr_Route_pair_t wrap_List_BTree_CStr_Route_pair_t (const BTree_CStr_Route_pair_t item );
List_BTree_CStr_Route_pair_t pure_List_BTree_CStr_Route_pair_t (const BTree_CStr_Route_pair_t * buf , int len );
int show_List_BTree_CStr_Route_pair_t (CFile file , List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t copy_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t replaceAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , int index );
List_BTree_CStr_Route_pair_t deleteAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , int index );
List_BTree_CStr_Route_pair_t insertAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , int index );
List_BTree_CStr_Route_pair_t replace_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t aimed );
List_BTree_CStr_Route_pair_t delete_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , List_BTree_CStr_Route_pair_t aimed );
List_BTree_CStr_Route_pair_t insert_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t rlist );
List_BTree_CStr_Route_pair_t reverse_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t append_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , List_BTree_CStr_Route_pair_t rlist );
List_BTree_CStr_Route_pair_t push_List_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t take_List_BTree_CStr_Route_pair_t (int len , List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t last_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t init_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
int hasLen_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , int desired );
int len_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t tail_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t drop_List_BTree_CStr_Route_pair_t (int index , List_BTree_CStr_Route_pair_t list );
Maybe_BTree_CStr_Route_pair_t head_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t nthcdr_List_BTree_CStr_Route_pair_t (int index , List_BTree_CStr_Route_pair_t list );
Maybe_BTree_CStr_Route_pair_t nth_List_BTree_CStr_Route_pair_t (int index , List_BTree_CStr_Route_pair_t list );
List_BTree_CStr_Route_pair_t__H_Table * const get_List_BTree_CStr_Route_pair_t__H_Table ();
void free_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t * this_ptr );
#endif /* __List_BTree_CStr_Route_pair_t__H_DECL__ */ 
#ifndef __Maybe_List_BTree_CStr_Route_pair_t__H_DECL__
#define __Maybe_List_BTree_CStr_Route_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_CStr_Route_pair_t Maybe_List_BTree_CStr_Route_pair_t ;
typedef void (*free_Maybe_List_BTree_CStr_Route_pair_t_t) (Maybe_List_BTree_CStr_Route_pair_t * this );
typedef struct Maybe_List_BTree_CStr_Route_pair_t__H_Table {
  free_Maybe_List_BTree_CStr_Route_pair_t_t freeData ;
} Maybe_List_BTree_CStr_Route_pair_t__H_Table;
typedef struct Maybe_List_BTree_CStr_Route_pair_t {
  const Maybe_List_BTree_CStr_Route_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion644 */
    struct { /* ciciliStruct645 */
      List_BTree_CStr_Route_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct646 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_CStr_Route_pair_t;
Maybe_List_BTree_CStr_Route_pair_t Just_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t value );
Maybe_List_BTree_CStr_Route_pair_t Nothing_List_BTree_CStr_Route_pair_t ();
__attribute__((weak)) Maybe_List_BTree_CStr_Route_pair_t Default_Maybe_List_BTree_CStr_Route_pair_t () {
  return Nothing_List_BTree_CStr_Route_pair_t ();
}
const Maybe_List_BTree_CStr_Route_pair_t__H_Table * const get_Maybe_List_BTree_CStr_Route_pair_t__H_Table ();
void free_Maybe_List_BTree_CStr_Route_pair_t (Maybe_List_BTree_CStr_Route_pair_t * this );
#endif /* __Maybe_List_BTree_CStr_Route_pair_t__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_Route__H_DECL__
#define __Maybe_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_Route Maybe_BTree_CStr_Route ;
typedef void (*free_Maybe_BTree_CStr_Route_t) (Maybe_BTree_CStr_Route * this );
typedef struct Maybe_BTree_CStr_Route__H_Table {
  free_Maybe_BTree_CStr_Route_t freeData ;
} Maybe_BTree_CStr_Route__H_Table;
typedef struct Maybe_BTree_CStr_Route {
  const Maybe_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion676 */
    struct { /* ciciliStruct677 */
      BTree_CStr_Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct678 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_Route;
Maybe_BTree_CStr_Route Just_BTree_CStr_Route (BTree_CStr_Route value );
Maybe_BTree_CStr_Route Nothing_BTree_CStr_Route ();
__attribute__((weak)) Maybe_BTree_CStr_Route Default_Maybe_BTree_CStr_Route () {
  return Nothing_BTree_CStr_Route ();
}
const Maybe_BTree_CStr_Route__H_Table * const get_Maybe_BTree_CStr_Route__H_Table ();
void free_Maybe_BTree_CStr_Route (Maybe_BTree_CStr_Route * this );
#endif /* __Maybe_BTree_CStr_Route__H_DECL__ */ 
#ifndef __Rc_BTree_CStr_Route__H_DECL__
#define __Rc_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_BTree_CStr_Route Rc_BTree_CStr_Route ;
typedef void (*free_Rc_BTree_CStr_Route_t) (Rc_BTree_CStr_Route * this );
typedef struct Rc_BTree_CStr_Route__H_Table {
  free_Rc_BTree_CStr_Route_t freeData ;
    Rc_BTree_CStr_Route (*new) (BTree_CStr_Route pointer );
    Rc_BTree_CStr_Route (*clone) (Rc_BTree_CStr_Route rc );
    Maybe_BTree_CStr_Route (*take) (Rc_BTree_CStr_Route * this );
    Maybe_BTree_CStr_Route (*get) (Rc_BTree_CStr_Route rc );
} Rc_BTree_CStr_Route__H_Table;
typedef struct Rc_BTree_CStr_Route {
  const Rc_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion708 */
    struct { /* ciciliStruct709 */
      BTree_CStr_Route * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct710 */
    } Gone , _ ;
  } __h_data ;
} Rc_BTree_CStr_Route;
Rc_BTree_CStr_Route __h_Hold_BTree_CStr_Route (BTree_CStr_Route * pointer , int * count , size_t address );
Rc_BTree_CStr_Route Gone_BTree_CStr_Route ();
__attribute__((weak)) Rc_BTree_CStr_Route Default_Rc_BTree_CStr_Route () {
  return Gone_BTree_CStr_Route ();
}
Rc_BTree_CStr_Route new_Rc_BTree_CStr_Route (BTree_CStr_Route pointer );
Rc_BTree_CStr_Route clone_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route rc );
Maybe_BTree_CStr_Route take_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route * this );
Maybe_BTree_CStr_Route get_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route rc );
const Rc_BTree_CStr_Route__H_Table * const get_Rc_BTree_CStr_Route__H_Table ();
void free_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route * this );
#endif /* __Rc_BTree_CStr_Route__H_DECL__ */ 
#ifndef __Maybe_Rc_BTree_CStr_Route__H_DECL__
#define __Maybe_Rc_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Rc_BTree_CStr_Route Maybe_Rc_BTree_CStr_Route ;
typedef void (*free_Maybe_Rc_BTree_CStr_Route_t) (Maybe_Rc_BTree_CStr_Route * this );
typedef struct Maybe_Rc_BTree_CStr_Route__H_Table {
  free_Maybe_Rc_BTree_CStr_Route_t freeData ;
} Maybe_Rc_BTree_CStr_Route__H_Table;
typedef struct Maybe_Rc_BTree_CStr_Route {
  const Maybe_Rc_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion752 */
    struct { /* ciciliStruct753 */
      Rc_BTree_CStr_Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct754 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Rc_BTree_CStr_Route;
Maybe_Rc_BTree_CStr_Route Just_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route value );
Maybe_Rc_BTree_CStr_Route Nothing_Rc_BTree_CStr_Route ();
__attribute__((weak)) Maybe_Rc_BTree_CStr_Route Default_Maybe_Rc_BTree_CStr_Route () {
  return Nothing_Rc_BTree_CStr_Route ();
}
const Maybe_Rc_BTree_CStr_Route__H_Table * const get_Maybe_Rc_BTree_CStr_Route__H_Table ();
void free_Maybe_Rc_BTree_CStr_Route (Maybe_Rc_BTree_CStr_Route * this );
#endif /* __Maybe_Rc_BTree_CStr_Route__H_DECL__ */ 
#ifndef __List_Rc_BTree_CStr_Route__H_DECL__
#define __List_Rc_BTree_CStr_Route__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Rc_BTree_CStr_Route class_List_Rc_BTree_CStr_Route ;
typedef class_List_Rc_BTree_CStr_Route * List_Rc_BTree_CStr_Route ;
typedef void (*free_List_Rc_BTree_CStr_Route_t) (List_Rc_BTree_CStr_Route * this_ptr );
typedef struct List_Rc_BTree_CStr_Route__H_Table {
  free_List_Rc_BTree_CStr_Route_t freeClass ;
    Rc_BTree_CStr_Route * (*toArray) (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route term );
    List_Rc_BTree_CStr_Route (*wrap) (const Rc_BTree_CStr_Route item );
    List_Rc_BTree_CStr_Route (*pure) (const Rc_BTree_CStr_Route * buf , int len );
    int (*show) (CFile file , List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*copy) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*replaceAt) (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , int index );
    List_Rc_BTree_CStr_Route (*deleteAt) (List_Rc_BTree_CStr_Route list , int index );
    List_Rc_BTree_CStr_Route (*insertAt) (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , int index );
    List_Rc_BTree_CStr_Route (*replace) (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route aimed );
    List_Rc_BTree_CStr_Route (*delete) (List_Rc_BTree_CStr_Route list , List_Rc_BTree_CStr_Route aimed );
    List_Rc_BTree_CStr_Route (*insert) (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route rlist );
    List_Rc_BTree_CStr_Route (*reverse) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*append) (List_Rc_BTree_CStr_Route llist , List_Rc_BTree_CStr_Route rlist );
    List_Rc_BTree_CStr_Route (*push) (Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*take) (int len , List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*last) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*init) (List_Rc_BTree_CStr_Route list );
    int (*hasLen) (List_Rc_BTree_CStr_Route list , int desired );
    int (*len) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*tail) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*drop) (int index , List_Rc_BTree_CStr_Route list );
    Maybe_Rc_BTree_CStr_Route (*head) (List_Rc_BTree_CStr_Route list );
    List_Rc_BTree_CStr_Route (*nthcdr) (int index , List_Rc_BTree_CStr_Route list );
    Maybe_Rc_BTree_CStr_Route (*nth) (int index , List_Rc_BTree_CStr_Route list );
} List_Rc_BTree_CStr_Route__H_Table;
typedef struct class_List_Rc_BTree_CStr_Route {
  const List_Rc_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion804 */
    struct { /* ciciliStruct805 */
      Rc_BTree_CStr_Route __h_0_mem ;
      List_Rc_BTree_CStr_Route __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct806 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_CStr_Route;
List_Rc_BTree_CStr_Route Cons_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route head , List_Rc_BTree_CStr_Route tail );
List_Rc_BTree_CStr_Route Nil_Rc_BTree_CStr_Route ();
__attribute__((weak)) List_Rc_BTree_CStr_Route Default_List_Rc_BTree_CStr_Route () {
  return Nil_Rc_BTree_CStr_Route ();
}
Rc_BTree_CStr_Route * toArray_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route term );
List_Rc_BTree_CStr_Route wrap_List_Rc_BTree_CStr_Route (const Rc_BTree_CStr_Route item );
List_Rc_BTree_CStr_Route pure_List_Rc_BTree_CStr_Route (const Rc_BTree_CStr_Route * buf , int len );
int show_List_Rc_BTree_CStr_Route (CFile file , List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route copy_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route replaceAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , int index );
List_Rc_BTree_CStr_Route deleteAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , int index );
List_Rc_BTree_CStr_Route insertAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , int index );
List_Rc_BTree_CStr_Route replace_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route aimed );
List_Rc_BTree_CStr_Route delete_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , List_Rc_BTree_CStr_Route aimed );
List_Rc_BTree_CStr_Route insert_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route rlist );
List_Rc_BTree_CStr_Route reverse_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route append_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , List_Rc_BTree_CStr_Route rlist );
List_Rc_BTree_CStr_Route push_List_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route take_List_Rc_BTree_CStr_Route (int len , List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route last_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route init_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
int hasLen_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , int desired );
int len_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route tail_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route drop_List_Rc_BTree_CStr_Route (int index , List_Rc_BTree_CStr_Route list );
Maybe_Rc_BTree_CStr_Route head_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route nthcdr_List_Rc_BTree_CStr_Route (int index , List_Rc_BTree_CStr_Route list );
Maybe_Rc_BTree_CStr_Route nth_List_Rc_BTree_CStr_Route (int index , List_Rc_BTree_CStr_Route list );
List_Rc_BTree_CStr_Route__H_Table * const get_List_Rc_BTree_CStr_Route__H_Table ();
void free_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route * this_ptr );
#endif /* __List_Rc_BTree_CStr_Route__H_DECL__ */ 
#ifndef __Maybe_List_Rc_BTree_CStr_Route__H_DECL__
#define __Maybe_List_Rc_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_CStr_Route Maybe_List_Rc_BTree_CStr_Route ;
typedef void (*free_Maybe_List_Rc_BTree_CStr_Route_t) (Maybe_List_Rc_BTree_CStr_Route * this );
typedef struct Maybe_List_Rc_BTree_CStr_Route__H_Table {
  free_Maybe_List_Rc_BTree_CStr_Route_t freeData ;
} Maybe_List_Rc_BTree_CStr_Route__H_Table;
typedef struct Maybe_List_Rc_BTree_CStr_Route {
  const Maybe_List_Rc_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion906 */
    struct { /* ciciliStruct907 */
      List_Rc_BTree_CStr_Route __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct908 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_CStr_Route;
Maybe_List_Rc_BTree_CStr_Route Just_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route value );
Maybe_List_Rc_BTree_CStr_Route Nothing_List_Rc_BTree_CStr_Route ();
__attribute__((weak)) Maybe_List_Rc_BTree_CStr_Route Default_Maybe_List_Rc_BTree_CStr_Route () {
  return Nothing_List_Rc_BTree_CStr_Route ();
}
const Maybe_List_Rc_BTree_CStr_Route__H_Table * const get_Maybe_List_Rc_BTree_CStr_Route__H_Table ();
void free_Maybe_List_Rc_BTree_CStr_Route (Maybe_List_Rc_BTree_CStr_Route * this );
#endif /* __Maybe_List_Rc_BTree_CStr_Route__H_DECL__ */ 
typedef Rc_BTree_CStr_Route (*Rc_BTree_CStr_Route_to_Rc_BTree_CStr_Route_t) (Rc_BTree_CStr_Route value );
#ifndef __Functor_List_Rc_BTree_CStr_Route__H_DECL__
#define __Functor_List_Rc_BTree_CStr_Route__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_Rc_BTree_CStr_Route Functor_List_Rc_BTree_CStr_Route ;
typedef void (*free_Functor_List_Rc_BTree_CStr_Route_t) (Functor_List_Rc_BTree_CStr_Route * this );
typedef struct Functor_List_Rc_BTree_CStr_Route__H_Table {
  free_Functor_List_Rc_BTree_CStr_Route_t freeData ;
    List_Rc_BTree_CStr_Route (*fmap) (Rc_BTree_CStr_Route_to_Rc_BTree_CStr_Route_t a_b , List_Rc_BTree_CStr_Route input );
} Functor_List_Rc_BTree_CStr_Route__H_Table;
typedef struct Functor_List_Rc_BTree_CStr_Route {
  const Functor_List_Rc_BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion943 */
    struct { /* ciciliStruct944 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_Rc_BTree_CStr_Route;
Functor_List_Rc_BTree_CStr_Route Functor_List_Rc_BTree_CStr_Route_ctor ();
__attribute__((weak)) Functor_List_Rc_BTree_CStr_Route Default_Functor_List_Rc_BTree_CStr_Route () {
  return Functor_List_Rc_BTree_CStr_Route_ctor ();
}
List_Rc_BTree_CStr_Route fmap_Functor_List_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route_to_Rc_BTree_CStr_Route_t a_b , List_Rc_BTree_CStr_Route input );
const Functor_List_Rc_BTree_CStr_Route__H_Table * const get_Functor_List_Rc_BTree_CStr_Route__H_Table ();
void free_Functor_List_Rc_BTree_CStr_Route (Functor_List_Rc_BTree_CStr_Route * this );
#endif /* __Functor_List_Rc_BTree_CStr_Route__H_DECL__ */ 
Functor_List_Rc_BTree_CStr_Route get_Functor_List_Rc_BTree_CStr_Route ();
#ifndef __BTree_CStr_Route__H_DECL__
#define __BTree_CStr_Route__H_DECL__
#ifndef __H___h_BTree_ctor_t__
#define __H___h_BTree_ctor_t__
typedef enum __h_BTree_ctor_t {
  __h_Leaf_t = 0,
  __h_Internal_t = 1,
  __h_Branch_t = 2
} __h_BTree_ctor_t;
#endif /* __H___h_BTree_ctor_t__ */ 
typedef struct class_BTree_CStr_Route class_BTree_CStr_Route ;
typedef class_BTree_CStr_Route * BTree_CStr_Route ;
typedef void (*free_BTree_CStr_Route_t) (BTree_CStr_Route * this_ptr );
typedef struct BTree_CStr_Route__H_Table {
  free_BTree_CStr_Route_t freeClass ;
    Either_BTree_CStr_Route_Error_BTree_CStr_Route (*fromLists) (List_CStr keys , List_Route values );
    Either_BTree_CStr_Route_Error_BTree_CStr_Route (*pure) (CStr keys [], Route values [], int len );
    int (*show) (CFile file , BTree_CStr_Route tree );
    void (*traverse) (BTree_CStr_Route tree ,   void (*callback) (BTree_CStr_Route_pair_t item , Bool hasNext ));
    Maybe_BTree_CStr_Route_pair_t (*max) (BTree_CStr_Route tree );
    Maybe_BTree_CStr_Route_pair_t (*min) (BTree_CStr_Route tree );
    Either_BTree_CStr_Route_Error_BTree_CStr_Route (*delete) (BTree_CStr_Route tree , CStr skey ,   void (*callback) (BTree_CStr_Route_pair_t item ));
    Maybe_BTree_CStr_Route_pair_t (*search) (BTree_CStr_Route tree , CStr skey );
    Either_BTree_CStr_Route_Error_BTree_CStr_Route (*insert) (BTree_CStr_Route tree , CStr skey , Route svalue );
    int (*order) ();
} BTree_CStr_Route__H_Table;
typedef struct class_BTree_CStr_Route {
  const BTree_CStr_Route__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1003 */
    struct { /* ciciliStruct1004 */
      List_BTree_CStr_Route_pair_t __h_0_mem ;
      List_Rc_BTree_CStr_Route __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1005 */
      List_BTree_CStr_Route_pair_t __h_0_mem ;
      List_Rc_BTree_CStr_Route __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1006 */
      List_BTree_CStr_Route_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_CStr_Route;
BTree_CStr_Route Branch_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children );
BTree_CStr_Route Internal_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children );
BTree_CStr_Route Leaf_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items );
__attribute__((weak)) BTree_CStr_Route Default_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items ) {
  return Leaf_BTree_CStr_Route (items );
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route fromLists_BTree_CStr_Route (List_CStr keys , List_Route values );
Either_BTree_CStr_Route_Error_BTree_CStr_Route pure_BTree_CStr_Route (CStr keys [], Route values [], int len );
int show_BTree_CStr_Route (CFile file , BTree_CStr_Route tree );
void traverse_BTree_CStr_Route (BTree_CStr_Route tree , void (*callback) (BTree_CStr_Route_pair_t item , Bool hasNext ));
Maybe_BTree_CStr_Route_pair_t max_BTree_CStr_Route (BTree_CStr_Route tree );
Maybe_BTree_CStr_Route_pair_t min_BTree_CStr_Route (BTree_CStr_Route tree );
Either_BTree_CStr_Route_Error_BTree_CStr_Route delete_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey , void (*callback) (BTree_CStr_Route_pair_t item ));
Maybe_BTree_CStr_Route_pair_t search_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey );
Either_BTree_CStr_Route_Error_BTree_CStr_Route insert_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey , Route svalue );
int order_BTree_CStr_Route ();
BTree_CStr_Route__H_Table * const get_BTree_CStr_Route__H_Table ();
void free_BTree_CStr_Route (BTree_CStr_Route * this_ptr );
#endif /* __BTree_CStr_Route__H_DECL__ */ 
#ifndef __RouterError__H_DECL__
#define __RouterError__H_DECL__
#ifndef __H___h_RouterError_ctor_t__
#define __H___h_RouterError_ctor_t__
typedef enum __h_RouterError_ctor_t {
  __h_ERR_FASTCGI_LIB_t = 0,
  __h_ERR_UNKNOWN_ROUTER_t = 1
} __h_RouterError_ctor_t;
#endif /* __H___h_RouterError_ctor_t__ */ 
typedef struct RouterError RouterError ;
typedef void (*free_RouterError_t) (RouterError * this );
typedef struct RouterError__H_Table {
  free_RouterError_t freeData ;
    void (*show) (RouterError error );
} RouterError__H_Table;
typedef struct RouterError {
  const RouterError__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1083 */
    struct { /* ciciliStruct1084 */
    } ERR_UNKNOWN_ROUTER , _1 ;
    struct { /* ciciliStruct1085 */
      int __h_0_mem ;
      CStr __h_1_mem ;
    } ERR_FASTCGI_LIB , _ ;
  } __h_data ;
} RouterError;
RouterError Router_ERR_UNKNOWN_ROUTER ();
RouterError Router_ERR_FASTCGI_LIB (int code , CStr description );
__attribute__((weak)) RouterError Default_RouterError (int code , CStr description ) {
  return Router_ERR_FASTCGI_LIB (code , description );
}
void show_RouterError (RouterError error );
const RouterError__H_Table * const get_RouterError__H_Table ();
void free_RouterError (RouterError * this );
#endif /* __RouterError__H_DECL__ */ 
#ifndef __Either_RouterError_int__H_DECL__
#define __Either_RouterError_int__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_RouterError_int Either_RouterError_int ;
typedef void (*free_Either_RouterError_int_t) (Either_RouterError_int * this );
typedef struct Either_RouterError_int__H_Table {
  free_Either_RouterError_int_t freeData ;
} Either_RouterError_int__H_Table;
typedef struct Either_RouterError_int {
  const Either_RouterError_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1114 */
    struct { /* ciciliStruct1115 */
      int __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1116 */
      RouterError __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_RouterError_int;
Either_RouterError_int Right_RouterError_int (int value );
Either_RouterError_int Left_RouterError_int (RouterError error );
__attribute__((weak)) Either_RouterError_int Default_Either_RouterError_int (RouterError error ) {
  return Left_RouterError_int (error );
}
const Either_RouterError_int__H_Table * const get_Either_RouterError_int__H_Table ();
void free_Either_RouterError_int (Either_RouterError_int * this );
#endif /* __Either_RouterError_int__H_DECL__ */ 
#ifndef __Router__H_DECL__
#define __Router__H_DECL__
#ifndef __H___h_Router_ctor_t__
#define __H___h_Router_ctor_t__
typedef enum __h_Router_ctor_t {
  __h_DetailedRouter_t = 0,
  __h_SimpleRouter_t = 1
} __h_Router_ctor_t;
#endif /* __H___h_Router_ctor_t__ */ 
typedef struct Router Router ;
typedef void (*free_Router_t) (Router * this );
typedef struct Router__H_Table {
  free_Router_t freeData ;
    Either_RouterError_int (*start) (Router router );
} Router__H_Table;
typedef struct Router {
  const Router__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1141 */
    struct { /* ciciliStruct1142 */
      CStr __h_0_mem ;
      BTree_CStr_Route __h_1_mem ;
    } SimpleRouter , _1 ;
    struct { /* ciciliStruct1143 */
      CStr __h_0_mem ;
      BTree_CStr_Route __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
      RouteHandler __h_4_mem ;
      RouteHandler __h_5_mem ;
      Bool __h_6_mem ;
    } DetailedRouter , _ ;
  } __h_data ;
} Router;
Router MakeSimpleRouter (CStr socket , BTree_CStr_Route routes );
Router MakeDetailedRouter (CStr socket , BTree_CStr_Route routes , int backlog , int maxContentLength , RouteHandler beforeRequest , RouteHandler afterRequest , Bool multiThreading );
__attribute__((weak)) Router Default_Router (CStr socket , BTree_CStr_Route routes , int backlog , int maxContentLength , RouteHandler beforeRequest , RouteHandler afterRequest , Bool multiThreading ) {
  return MakeDetailedRouter (socket , routes , backlog , maxContentLength , beforeRequest , afterRequest , multiThreading );
}
Either_RouterError_int start_Router (Router router );
const Router__H_Table * const get_Router__H_Table ();
void free_Router (Router * this );
#endif /* __Router__H_DECL__ */ 
