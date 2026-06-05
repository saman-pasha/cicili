typedef struct class_List_DynamicType * List_DynamicType ;
typedef struct class_BTree_CStr_DynamicType * BTree_CStr_DynamicType ;
#ifndef __DynamicType__H_DECL__
#define __DynamicType__H_DECL__
#ifndef __H___h_DynamicType_ctor_t__
#define __H___h_DynamicType_ctor_t__
typedef enum __h_DynamicType_ctor_t {
  __h_Error_t = 0,
  __h_Null_t = 1,
  __h_Object_t = 2,
  __h_List_t = 3,
  __h_Boolean_t = 4,
  __h_Float_t = 5,
  __h_Integer_t = 6,
  __h_String_t = 7
} __h_DynamicType_ctor_t;
#endif /* __H___h_DynamicType_ctor_t__ */ 
typedef struct class_DynamicType class_DynamicType ;
typedef class_DynamicType * DynamicType_x ;
#ifndef __Maybe_DynamicType_x__H_DECL__
#define __Maybe_DynamicType_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_DynamicType_x Maybe_DynamicType_x ;
typedef void (*free_Maybe_DynamicType_x_t) (Maybe_DynamicType_x * this );
typedef struct Maybe_DynamicType_x__H_Table {
  free_Maybe_DynamicType_x_t freeData ;
} Maybe_DynamicType_x__H_Table;
typedef struct Maybe_DynamicType_x {
  const Maybe_DynamicType_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion122 */
    struct { /* ciciliStruct123 */
      DynamicType_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct124 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_DynamicType_x;
Maybe_DynamicType_x Just_DynamicType_x (DynamicType_x value );
Maybe_DynamicType_x Nothing_DynamicType_x ();
__attribute__((weak)) Maybe_DynamicType_x Default_Maybe_DynamicType_x () {
  return Nothing_DynamicType_x ();
}
const Maybe_DynamicType_x__H_Table * const get_Maybe_DynamicType_x__H_Table ();
void free_Maybe_DynamicType_x (Maybe_DynamicType_x * this );
#endif /* __Maybe_DynamicType_x__H_DECL__ */ 
#ifndef __Box_DynamicType__H_DECL__
#define __Box_DynamicType__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_DynamicType Box_DynamicType ;
typedef void (*free_Box_DynamicType_t) (Box_DynamicType * this );
typedef struct Box_DynamicType__H_Table {
  free_Box_DynamicType_t freeData ;
    Box_DynamicType (*new) (DynamicType_x pointer );
    Box_DynamicType (*clone) (Box_DynamicType rc );
    Maybe_DynamicType_x (*take) (Box_DynamicType * this );
    Maybe_DynamicType_x (*get) (Box_DynamicType rc );
} Box_DynamicType__H_Table;
typedef struct Box_DynamicType {
  const Box_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion154 */
    struct { /* ciciliStruct155 */
      DynamicType_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct156 */
    } Gone , _ ;
  } __h_data ;
} Box_DynamicType;
Box_DynamicType __h_Hold_DynamicType_x (DynamicType_x * pointer , int * count , size_t address );
Box_DynamicType Gone_DynamicType_x ();
__attribute__((weak)) Box_DynamicType Default_Box_DynamicType () {
  return Gone_DynamicType_x ();
}
Box_DynamicType new_Box_DynamicType (DynamicType_x pointer );
Box_DynamicType clone_Box_DynamicType (Box_DynamicType rc );
Maybe_DynamicType_x take_Box_DynamicType (Box_DynamicType * this );
Maybe_DynamicType_x get_Box_DynamicType (Box_DynamicType rc );
const Box_DynamicType__H_Table * const get_Box_DynamicType__H_Table ();
void free_Box_DynamicType (Box_DynamicType * this );
#endif /* __Box_DynamicType__H_DECL__ */ 
typedef Box_DynamicType DynamicType ;
typedef void (*free_DynamicType_t) (DynamicType_x * this );
typedef struct DynamicType__H_Table {
  free_DynamicType_t freeData ;
    int (*show) (CFile file , DynamicType dt );
    DynamicType (*search) (DynamicType dt , CStr path );
    int (*toXml) (CFile file , CStr root , DynamicType dt );
    int (*toJson) (CFile file , DynamicType dt );
    DynamicType (*parseJson) (CFile file );
} DynamicType__H_Table;
typedef struct class_DynamicType {
  const DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion197 */
    struct { /* ciciliStruct198 */
      String __h_0_mem ;
    } String , _7 ;
    struct { /* ciciliStruct199 */
      int64_t __h_0_mem ;
    } Integer , _6 ;
    struct { /* ciciliStruct200 */
      long double __h_0_mem ;
    } Float , _5 ;
    struct { /* ciciliStruct201 */
      Bool __h_0_mem ;
    } Boolean , _4 ;
    struct { /* ciciliStruct202 */
      List_DynamicType __h_0_mem ;
      CStr __h_1_mem ;
    } List , _3 ;
    struct { /* ciciliStruct203 */
      BTree_CStr_DynamicType __h_0_mem ;
    } Object , _2 ;
    struct { /* ciciliStruct204 */
    } Null , _1 ;
    struct { /* ciciliStruct205 */
      CStr __h_0_mem ;
    } Error , _ ;
  } __h_data ;
} class_DynamicType;
DynamicType Dynamic_String (String data );
DynamicType Dynamic_Integer (int64_t data );
DynamicType Dynamic_Float (long double data );
DynamicType Dynamic_Boolean (Bool data );
DynamicType Dynamic_List (List_DynamicType data , CStr xml_name );
DynamicType Dynamic_Object (BTree_CStr_DynamicType data );
DynamicType Dynamic_Null ();
DynamicType Dynamic_Error (CStr reason );
__attribute__((weak)) DynamicType Default_DynamicType (CStr reason ) {
  return Dynamic_Error (reason );
}
int show_DynamicType (CFile file , DynamicType dt );
DynamicType search_DynamicType (DynamicType dt , CStr path );
int toXml_DynamicType (CFile file , CStr root , DynamicType dt );
int toJson_DynamicType (CFile file , DynamicType dt );
DynamicType parseJson_DynamicType (CFile file );
DynamicType__H_Table * const get_DynamicType__H_Table ();
void free_DynamicType_x (DynamicType_x * this );
#endif /* __DynamicType__H_DECL__ */ 
#ifndef __Maybe_DynamicType__H_DECL__
#define __Maybe_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_DynamicType Maybe_DynamicType ;
typedef void (*free_Maybe_DynamicType_t) (Maybe_DynamicType * this );
typedef struct Maybe_DynamicType__H_Table {
  free_Maybe_DynamicType_t freeData ;
} Maybe_DynamicType__H_Table;
typedef struct Maybe_DynamicType {
  const Maybe_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion268 */
    struct { /* ciciliStruct269 */
      DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct270 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_DynamicType;
Maybe_DynamicType Just_DynamicType (DynamicType value );
Maybe_DynamicType Nothing_DynamicType ();
__attribute__((weak)) Maybe_DynamicType Default_Maybe_DynamicType () {
  return Nothing_DynamicType ();
}
const Maybe_DynamicType__H_Table * const get_Maybe_DynamicType__H_Table ();
void free_Maybe_DynamicType (Maybe_DynamicType * this );
#endif /* __Maybe_DynamicType__H_DECL__ */ 
#ifndef __List_DynamicType__H_DECL__
#define __List_DynamicType__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_DynamicType class_List_DynamicType ;
typedef class_List_DynamicType * List_DynamicType ;
typedef void (*free_List_DynamicType_t) (List_DynamicType * this_ptr );
typedef struct List_DynamicType__H_Table {
  free_List_DynamicType_t freeClass ;
    DynamicType * (*toArray) (List_DynamicType list , DynamicType term );
    List_DynamicType (*wrap) (const DynamicType item );
    List_DynamicType (*pure) (const DynamicType * buf , int len );
    int (*show) (CFile file , List_DynamicType list );
    List_DynamicType (*copy) (List_DynamicType list );
    List_DynamicType (*replaceAt) (List_DynamicType list , DynamicType item , int index );
    List_DynamicType (*deleteAt) (List_DynamicType list , int index );
    List_DynamicType (*insertAt) (List_DynamicType llist , DynamicType item , int index );
    List_DynamicType (*replace) (List_DynamicType list , DynamicType item , List_DynamicType aimed );
    List_DynamicType (*delete) (List_DynamicType list , List_DynamicType aimed );
    List_DynamicType (*insert) (List_DynamicType llist , DynamicType item , List_DynamicType rlist );
    List_DynamicType (*reverse) (List_DynamicType list );
    List_DynamicType (*append) (List_DynamicType llist , List_DynamicType rlist );
    List_DynamicType (*push) (DynamicType item , List_DynamicType list );
    List_DynamicType (*take) (int len , List_DynamicType list );
    List_DynamicType (*last) (List_DynamicType list );
    List_DynamicType (*init) (List_DynamicType list );
    int (*hasLen) (List_DynamicType list , int desired );
    int (*len) (List_DynamicType list );
    List_DynamicType (*tail) (List_DynamicType list );
    List_DynamicType (*drop) (int index , List_DynamicType list );
    Maybe_DynamicType (*head) (List_DynamicType list );
    List_DynamicType (*nthcdr) (int index , List_DynamicType list );
    Maybe_DynamicType (*nth) (int index , List_DynamicType list );
} List_DynamicType__H_Table;
typedef struct class_List_DynamicType {
  const List_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion320 */
    struct { /* ciciliStruct321 */
      DynamicType __h_0_mem ;
      List_DynamicType __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct322 */
    } Nil , _ ;
  } __h_data ;
} class_List_DynamicType;
List_DynamicType Cons_DynamicType (DynamicType head , List_DynamicType tail );
List_DynamicType Nil_DynamicType ();
__attribute__((weak)) List_DynamicType Default_List_DynamicType () {
  return Nil_DynamicType ();
}
DynamicType * toArray_List_DynamicType (List_DynamicType list , DynamicType term );
List_DynamicType wrap_List_DynamicType (const DynamicType item );
List_DynamicType pure_List_DynamicType (const DynamicType * buf , int len );
int show_List_DynamicType (CFile file , List_DynamicType list );
List_DynamicType copy_List_DynamicType (List_DynamicType list );
List_DynamicType replaceAt_List_DynamicType (List_DynamicType list , DynamicType item , int index );
List_DynamicType deleteAt_List_DynamicType (List_DynamicType list , int index );
List_DynamicType insertAt_List_DynamicType (List_DynamicType llist , DynamicType item , int index );
List_DynamicType replace_List_DynamicType (List_DynamicType list , DynamicType item , List_DynamicType aimed );
List_DynamicType delete_List_DynamicType (List_DynamicType list , List_DynamicType aimed );
List_DynamicType insert_List_DynamicType (List_DynamicType llist , DynamicType item , List_DynamicType rlist );
List_DynamicType reverse_List_DynamicType (List_DynamicType list );
List_DynamicType append_List_DynamicType (List_DynamicType llist , List_DynamicType rlist );
List_DynamicType push_List_DynamicType (DynamicType item , List_DynamicType list );
List_DynamicType take_List_DynamicType (int len , List_DynamicType list );
List_DynamicType last_List_DynamicType (List_DynamicType list );
List_DynamicType init_List_DynamicType (List_DynamicType list );
int hasLen_List_DynamicType (List_DynamicType list , int desired );
int len_List_DynamicType (List_DynamicType list );
List_DynamicType tail_List_DynamicType (List_DynamicType list );
List_DynamicType drop_List_DynamicType (int index , List_DynamicType list );
Maybe_DynamicType head_List_DynamicType (List_DynamicType list );
List_DynamicType nthcdr_List_DynamicType (int index , List_DynamicType list );
Maybe_DynamicType nth_List_DynamicType (int index , List_DynamicType list );
List_DynamicType__H_Table * const get_List_DynamicType__H_Table ();
void free_List_DynamicType (List_DynamicType * this_ptr );
#endif /* __List_DynamicType__H_DECL__ */ 
#ifndef __Maybe_List_DynamicType__H_DECL__
#define __Maybe_List_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_DynamicType Maybe_List_DynamicType ;
typedef void (*free_Maybe_List_DynamicType_t) (Maybe_List_DynamicType * this );
typedef struct Maybe_List_DynamicType__H_Table {
  free_Maybe_List_DynamicType_t freeData ;
} Maybe_List_DynamicType__H_Table;
typedef struct Maybe_List_DynamicType {
  const Maybe_List_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion422 */
    struct { /* ciciliStruct423 */
      List_DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct424 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_DynamicType;
Maybe_List_DynamicType Just_List_DynamicType (List_DynamicType value );
Maybe_List_DynamicType Nothing_List_DynamicType ();
__attribute__((weak)) Maybe_List_DynamicType Default_Maybe_List_DynamicType () {
  return Nothing_List_DynamicType ();
}
const Maybe_List_DynamicType__H_Table * const get_Maybe_List_DynamicType__H_Table ();
void free_Maybe_List_DynamicType (Maybe_List_DynamicType * this );
#endif /* __Maybe_List_DynamicType__H_DECL__ */ 
typedef struct class_BTree_CStr_DynamicType * BTree_CStr_DynamicType ;
typedef struct ciciliu_Auem4Re_lgZgdbQG_0Ba5a1QA_ {
  CStr __h_0_mem ;
  DynamicType __h_1_mem ;
} ciciliu_Auem4Re_lgZgdbQG_0Ba5a1QA_;
typedef ciciliu_Auem4Re_lgZgdbQG_0Ba5a1QA_ BTree_CStr_DynamicType_pair_t ;
#ifndef __BTree_CStr_DynamicType_Error__H_DECL__
#define __BTree_CStr_DynamicType_Error__H_DECL__
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
typedef struct BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_Error ;
typedef void (*free_BTree_CStr_DynamicType_Error_t) (BTree_CStr_DynamicType_Error * this );
typedef struct BTree_CStr_DynamicType_Error__H_Table {
  free_BTree_CStr_DynamicType_Error_t freeData ;
    void (*show) (BTree_CStr_DynamicType_Error error );
} BTree_CStr_DynamicType_Error__H_Table;
typedef struct BTree_CStr_DynamicType_Error {
  const BTree_CStr_DynamicType_Error__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion458 */
    struct { /* ciciliStruct459 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct460 */
      int __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct461 */
      BTree_CStr_DynamicType_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct462 */
      CStr __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct463 */
      BTree_CStr_DynamicType_pair_t __h_0_mem ;
      int __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct464 */
      BTree_CStr_DynamicType __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct465 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _ ;
  } __h_data ;
} BTree_CStr_DynamicType_Error;
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_OBJECT ();
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_ORDER (int order );
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_UNIQUE_KEY (BTree_CStr_DynamicType_pair_t item );
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_NOT_FOUND (CStr key );
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (BTree_CStr_DynamicType_pair_t item , int index );
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_BRANCH (BTree_CStr_DynamicType branch );
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_CANT_BORROW (char * reason );
__attribute__((weak)) BTree_CStr_DynamicType_Error Default_BTree_CStr_DynamicType_Error (char * reason ) {
  return BTree_CStr_DynamicType_ERR_CANT_BORROW (reason );
}
void show_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error error );
const BTree_CStr_DynamicType_Error__H_Table * const get_BTree_CStr_DynamicType_Error__H_Table ();
void free_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error * this );
#endif /* __BTree_CStr_DynamicType_Error__H_DECL__ */ 
#ifndef __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_DECL__
#define __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType ;
typedef void (*free_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType_t) (Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType * this );
typedef struct Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table {
  free_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType_t freeData ;
} Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table;
typedef struct Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType {
  const Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion512 */
    struct { /* ciciliStruct513 */
      BTree_CStr_DynamicType __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct514 */
      BTree_CStr_DynamicType_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType;
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType value );
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_Error error );
__attribute__((weak)) Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Default_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_Error error ) {
  return Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (error );
}
const Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table * const get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table ();
void free_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType * this );
#endif /* __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType__H_DECL__
#define __Maybe_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_DynamicType Maybe_BTree_CStr_DynamicType ;
typedef void (*free_Maybe_BTree_CStr_DynamicType_t) (Maybe_BTree_CStr_DynamicType * this );
typedef struct Maybe_BTree_CStr_DynamicType__H_Table {
  free_Maybe_BTree_CStr_DynamicType_t freeData ;
} Maybe_BTree_CStr_DynamicType__H_Table;
typedef struct Maybe_BTree_CStr_DynamicType {
  const Maybe_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion540 */
    struct { /* ciciliStruct541 */
      BTree_CStr_DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct542 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_DynamicType;
Maybe_BTree_CStr_DynamicType Just_BTree_CStr_DynamicType (BTree_CStr_DynamicType value );
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType ();
__attribute__((weak)) Maybe_BTree_CStr_DynamicType Default_Maybe_BTree_CStr_DynamicType () {
  return Nothing_BTree_CStr_DynamicType ();
}
const Maybe_BTree_CStr_DynamicType__H_Table * const get_Maybe_BTree_CStr_DynamicType__H_Table ();
void free_Maybe_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType * this );
#endif /* __Maybe_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType_pair_t__H_DECL__
#define __Maybe_BTree_CStr_DynamicType_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_DynamicType_pair_t Maybe_BTree_CStr_DynamicType_pair_t ;
typedef void (*free_Maybe_BTree_CStr_DynamicType_pair_t_t) (Maybe_BTree_CStr_DynamicType_pair_t * this );
typedef struct Maybe_BTree_CStr_DynamicType_pair_t__H_Table {
  free_Maybe_BTree_CStr_DynamicType_pair_t_t freeData ;
} Maybe_BTree_CStr_DynamicType_pair_t__H_Table;
typedef struct Maybe_BTree_CStr_DynamicType_pair_t {
  const Maybe_BTree_CStr_DynamicType_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion570 */
    struct { /* ciciliStruct571 */
      BTree_CStr_DynamicType_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct572 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_DynamicType_pair_t;
Maybe_BTree_CStr_DynamicType_pair_t Just_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t value );
Maybe_BTree_CStr_DynamicType_pair_t Nothing_BTree_CStr_DynamicType_pair_t ();
__attribute__((weak)) Maybe_BTree_CStr_DynamicType_pair_t Default_Maybe_BTree_CStr_DynamicType_pair_t () {
  return Nothing_BTree_CStr_DynamicType_pair_t ();
}
const Maybe_BTree_CStr_DynamicType_pair_t__H_Table * const get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table ();
void free_Maybe_BTree_CStr_DynamicType_pair_t (Maybe_BTree_CStr_DynamicType_pair_t * this );
#endif /* __Maybe_BTree_CStr_DynamicType_pair_t__H_DECL__ */ 
#ifndef __List_BTree_CStr_DynamicType_pair_t__H_DECL__
#define __List_BTree_CStr_DynamicType_pair_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_BTree_CStr_DynamicType_pair_t class_List_BTree_CStr_DynamicType_pair_t ;
typedef class_List_BTree_CStr_DynamicType_pair_t * List_BTree_CStr_DynamicType_pair_t ;
typedef void (*free_List_BTree_CStr_DynamicType_pair_t_t) (List_BTree_CStr_DynamicType_pair_t * this_ptr );
typedef struct List_BTree_CStr_DynamicType_pair_t__H_Table {
  free_List_BTree_CStr_DynamicType_pair_t_t freeClass ;
    BTree_CStr_DynamicType_pair_t * (*toArray) (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t term );
    List_BTree_CStr_DynamicType_pair_t (*wrap) (const BTree_CStr_DynamicType_pair_t item );
    List_BTree_CStr_DynamicType_pair_t (*pure) (const BTree_CStr_DynamicType_pair_t * buf , int len );
    int (*show) (CFile file , List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*copy) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*replaceAt) (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , int index );
    List_BTree_CStr_DynamicType_pair_t (*deleteAt) (List_BTree_CStr_DynamicType_pair_t list , int index );
    List_BTree_CStr_DynamicType_pair_t (*insertAt) (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , int index );
    List_BTree_CStr_DynamicType_pair_t (*replace) (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t aimed );
    List_BTree_CStr_DynamicType_pair_t (*delete) (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t aimed );
    List_BTree_CStr_DynamicType_pair_t (*insert) (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t rlist );
    List_BTree_CStr_DynamicType_pair_t (*reverse) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*append) (List_BTree_CStr_DynamicType_pair_t llist , List_BTree_CStr_DynamicType_pair_t rlist );
    List_BTree_CStr_DynamicType_pair_t (*push) (BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*take) (int len , List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*last) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*init) (List_BTree_CStr_DynamicType_pair_t list );
    int (*hasLen) (List_BTree_CStr_DynamicType_pair_t list , int desired );
    int (*len) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*tail) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*drop) (int index , List_BTree_CStr_DynamicType_pair_t list );
    Maybe_BTree_CStr_DynamicType_pair_t (*head) (List_BTree_CStr_DynamicType_pair_t list );
    List_BTree_CStr_DynamicType_pair_t (*nthcdr) (int index , List_BTree_CStr_DynamicType_pair_t list );
    Maybe_BTree_CStr_DynamicType_pair_t (*nth) (int index , List_BTree_CStr_DynamicType_pair_t list );
} List_BTree_CStr_DynamicType_pair_t__H_Table;
typedef struct class_List_BTree_CStr_DynamicType_pair_t {
  const List_BTree_CStr_DynamicType_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion622 */
    struct { /* ciciliStruct623 */
      BTree_CStr_DynamicType_pair_t __h_0_mem ;
      List_BTree_CStr_DynamicType_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct624 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_CStr_DynamicType_pair_t;
List_BTree_CStr_DynamicType_pair_t Cons_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t head , List_BTree_CStr_DynamicType_pair_t tail );
List_BTree_CStr_DynamicType_pair_t Nil_BTree_CStr_DynamicType_pair_t ();
__attribute__((weak)) List_BTree_CStr_DynamicType_pair_t Default_List_BTree_CStr_DynamicType_pair_t () {
  return Nil_BTree_CStr_DynamicType_pair_t ();
}
BTree_CStr_DynamicType_pair_t * toArray_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t term );
List_BTree_CStr_DynamicType_pair_t wrap_List_BTree_CStr_DynamicType_pair_t (const BTree_CStr_DynamicType_pair_t item );
List_BTree_CStr_DynamicType_pair_t pure_List_BTree_CStr_DynamicType_pair_t (const BTree_CStr_DynamicType_pair_t * buf , int len );
int show_List_BTree_CStr_DynamicType_pair_t (CFile file , List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t copy_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t replaceAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , int index );
List_BTree_CStr_DynamicType_pair_t deleteAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int index );
List_BTree_CStr_DynamicType_pair_t insertAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , int index );
List_BTree_CStr_DynamicType_pair_t replace_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t aimed );
List_BTree_CStr_DynamicType_pair_t delete_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t aimed );
List_BTree_CStr_DynamicType_pair_t insert_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t rlist );
List_BTree_CStr_DynamicType_pair_t reverse_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t append_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , List_BTree_CStr_DynamicType_pair_t rlist );
List_BTree_CStr_DynamicType_pair_t push_List_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t take_List_BTree_CStr_DynamicType_pair_t (int len , List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t last_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t init_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
int hasLen_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int desired );
int len_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t tail_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t drop_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list );
Maybe_BTree_CStr_DynamicType_pair_t head_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t nthcdr_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list );
Maybe_BTree_CStr_DynamicType_pair_t nth_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list );
List_BTree_CStr_DynamicType_pair_t__H_Table * const get_List_BTree_CStr_DynamicType_pair_t__H_Table ();
void free_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t * this_ptr );
#endif /* __List_BTree_CStr_DynamicType_pair_t__H_DECL__ */ 
#ifndef __Maybe_List_BTree_CStr_DynamicType_pair_t__H_DECL__
#define __Maybe_List_BTree_CStr_DynamicType_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_CStr_DynamicType_pair_t Maybe_List_BTree_CStr_DynamicType_pair_t ;
typedef void (*free_Maybe_List_BTree_CStr_DynamicType_pair_t_t) (Maybe_List_BTree_CStr_DynamicType_pair_t * this );
typedef struct Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table {
  free_Maybe_List_BTree_CStr_DynamicType_pair_t_t freeData ;
} Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table;
typedef struct Maybe_List_BTree_CStr_DynamicType_pair_t {
  const Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion724 */
    struct { /* ciciliStruct725 */
      List_BTree_CStr_DynamicType_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct726 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_CStr_DynamicType_pair_t;
Maybe_List_BTree_CStr_DynamicType_pair_t Just_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t value );
Maybe_List_BTree_CStr_DynamicType_pair_t Nothing_List_BTree_CStr_DynamicType_pair_t ();
__attribute__((weak)) Maybe_List_BTree_CStr_DynamicType_pair_t Default_Maybe_List_BTree_CStr_DynamicType_pair_t () {
  return Nothing_List_BTree_CStr_DynamicType_pair_t ();
}
const Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table * const get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table ();
void free_Maybe_List_BTree_CStr_DynamicType_pair_t (Maybe_List_BTree_CStr_DynamicType_pair_t * this );
#endif /* __Maybe_List_BTree_CStr_DynamicType_pair_t__H_DECL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType__H_DECL__
#define __Maybe_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_CStr_DynamicType Maybe_BTree_CStr_DynamicType ;
typedef void (*free_Maybe_BTree_CStr_DynamicType_t) (Maybe_BTree_CStr_DynamicType * this );
typedef struct Maybe_BTree_CStr_DynamicType__H_Table {
  free_Maybe_BTree_CStr_DynamicType_t freeData ;
} Maybe_BTree_CStr_DynamicType__H_Table;
typedef struct Maybe_BTree_CStr_DynamicType {
  const Maybe_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion756 */
    struct { /* ciciliStruct757 */
      BTree_CStr_DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct758 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_CStr_DynamicType;
Maybe_BTree_CStr_DynamicType Just_BTree_CStr_DynamicType (BTree_CStr_DynamicType value );
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType ();
__attribute__((weak)) Maybe_BTree_CStr_DynamicType Default_Maybe_BTree_CStr_DynamicType () {
  return Nothing_BTree_CStr_DynamicType ();
}
const Maybe_BTree_CStr_DynamicType__H_Table * const get_Maybe_BTree_CStr_DynamicType__H_Table ();
void free_Maybe_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType * this );
#endif /* __Maybe_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __Rc_BTree_CStr_DynamicType__H_DECL__
#define __Rc_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_BTree_CStr_DynamicType Rc_BTree_CStr_DynamicType ;
typedef void (*free_Rc_BTree_CStr_DynamicType_t) (Rc_BTree_CStr_DynamicType * this );
typedef struct Rc_BTree_CStr_DynamicType__H_Table {
  free_Rc_BTree_CStr_DynamicType_t freeData ;
    Rc_BTree_CStr_DynamicType (*new) (BTree_CStr_DynamicType pointer );
    Rc_BTree_CStr_DynamicType (*clone) (Rc_BTree_CStr_DynamicType rc );
    Maybe_BTree_CStr_DynamicType (*take) (Rc_BTree_CStr_DynamicType * this );
    Maybe_BTree_CStr_DynamicType (*get) (Rc_BTree_CStr_DynamicType rc );
} Rc_BTree_CStr_DynamicType__H_Table;
typedef struct Rc_BTree_CStr_DynamicType {
  const Rc_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion788 */
    struct { /* ciciliStruct789 */
      BTree_CStr_DynamicType * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct790 */
    } Gone , _ ;
  } __h_data ;
} Rc_BTree_CStr_DynamicType;
Rc_BTree_CStr_DynamicType __h_Hold_BTree_CStr_DynamicType (BTree_CStr_DynamicType * pointer , int * count , size_t address );
Rc_BTree_CStr_DynamicType Gone_BTree_CStr_DynamicType ();
__attribute__((weak)) Rc_BTree_CStr_DynamicType Default_Rc_BTree_CStr_DynamicType () {
  return Gone_BTree_CStr_DynamicType ();
}
Rc_BTree_CStr_DynamicType new_Rc_BTree_CStr_DynamicType (BTree_CStr_DynamicType pointer );
Rc_BTree_CStr_DynamicType clone_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc );
Maybe_BTree_CStr_DynamicType take_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this );
Maybe_BTree_CStr_DynamicType get_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc );
const Rc_BTree_CStr_DynamicType__H_Table * const get_Rc_BTree_CStr_DynamicType__H_Table ();
void free_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this );
#endif /* __Rc_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __Maybe_Rc_BTree_CStr_DynamicType__H_DECL__
#define __Maybe_Rc_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Rc_BTree_CStr_DynamicType Maybe_Rc_BTree_CStr_DynamicType ;
typedef void (*free_Maybe_Rc_BTree_CStr_DynamicType_t) (Maybe_Rc_BTree_CStr_DynamicType * this );
typedef struct Maybe_Rc_BTree_CStr_DynamicType__H_Table {
  free_Maybe_Rc_BTree_CStr_DynamicType_t freeData ;
} Maybe_Rc_BTree_CStr_DynamicType__H_Table;
typedef struct Maybe_Rc_BTree_CStr_DynamicType {
  const Maybe_Rc_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion832 */
    struct { /* ciciliStruct833 */
      Rc_BTree_CStr_DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct834 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Rc_BTree_CStr_DynamicType;
Maybe_Rc_BTree_CStr_DynamicType Just_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType value );
Maybe_Rc_BTree_CStr_DynamicType Nothing_Rc_BTree_CStr_DynamicType ();
__attribute__((weak)) Maybe_Rc_BTree_CStr_DynamicType Default_Maybe_Rc_BTree_CStr_DynamicType () {
  return Nothing_Rc_BTree_CStr_DynamicType ();
}
const Maybe_Rc_BTree_CStr_DynamicType__H_Table * const get_Maybe_Rc_BTree_CStr_DynamicType__H_Table ();
void free_Maybe_Rc_BTree_CStr_DynamicType (Maybe_Rc_BTree_CStr_DynamicType * this );
#endif /* __Maybe_Rc_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __List_Rc_BTree_CStr_DynamicType__H_DECL__
#define __List_Rc_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Rc_BTree_CStr_DynamicType class_List_Rc_BTree_CStr_DynamicType ;
typedef class_List_Rc_BTree_CStr_DynamicType * List_Rc_BTree_CStr_DynamicType ;
typedef void (*free_List_Rc_BTree_CStr_DynamicType_t) (List_Rc_BTree_CStr_DynamicType * this_ptr );
typedef struct List_Rc_BTree_CStr_DynamicType__H_Table {
  free_List_Rc_BTree_CStr_DynamicType_t freeClass ;
    Rc_BTree_CStr_DynamicType * (*toArray) (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType term );
    List_Rc_BTree_CStr_DynamicType (*wrap) (const Rc_BTree_CStr_DynamicType item );
    List_Rc_BTree_CStr_DynamicType (*pure) (const Rc_BTree_CStr_DynamicType * buf , int len );
    int (*show) (CFile file , List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*copy) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*replaceAt) (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , int index );
    List_Rc_BTree_CStr_DynamicType (*deleteAt) (List_Rc_BTree_CStr_DynamicType list , int index );
    List_Rc_BTree_CStr_DynamicType (*insertAt) (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , int index );
    List_Rc_BTree_CStr_DynamicType (*replace) (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType aimed );
    List_Rc_BTree_CStr_DynamicType (*delete) (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType aimed );
    List_Rc_BTree_CStr_DynamicType (*insert) (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType rlist );
    List_Rc_BTree_CStr_DynamicType (*reverse) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*append) (List_Rc_BTree_CStr_DynamicType llist , List_Rc_BTree_CStr_DynamicType rlist );
    List_Rc_BTree_CStr_DynamicType (*push) (Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*take) (int len , List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*last) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*init) (List_Rc_BTree_CStr_DynamicType list );
    int (*hasLen) (List_Rc_BTree_CStr_DynamicType list , int desired );
    int (*len) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*tail) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*drop) (int index , List_Rc_BTree_CStr_DynamicType list );
    Maybe_Rc_BTree_CStr_DynamicType (*head) (List_Rc_BTree_CStr_DynamicType list );
    List_Rc_BTree_CStr_DynamicType (*nthcdr) (int index , List_Rc_BTree_CStr_DynamicType list );
    Maybe_Rc_BTree_CStr_DynamicType (*nth) (int index , List_Rc_BTree_CStr_DynamicType list );
} List_Rc_BTree_CStr_DynamicType__H_Table;
typedef struct class_List_Rc_BTree_CStr_DynamicType {
  const List_Rc_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion884 */
    struct { /* ciciliStruct885 */
      Rc_BTree_CStr_DynamicType __h_0_mem ;
      List_Rc_BTree_CStr_DynamicType __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct886 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_CStr_DynamicType;
List_Rc_BTree_CStr_DynamicType Cons_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType head , List_Rc_BTree_CStr_DynamicType tail );
List_Rc_BTree_CStr_DynamicType Nil_Rc_BTree_CStr_DynamicType ();
__attribute__((weak)) List_Rc_BTree_CStr_DynamicType Default_List_Rc_BTree_CStr_DynamicType () {
  return Nil_Rc_BTree_CStr_DynamicType ();
}
Rc_BTree_CStr_DynamicType * toArray_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType term );
List_Rc_BTree_CStr_DynamicType wrap_List_Rc_BTree_CStr_DynamicType (const Rc_BTree_CStr_DynamicType item );
List_Rc_BTree_CStr_DynamicType pure_List_Rc_BTree_CStr_DynamicType (const Rc_BTree_CStr_DynamicType * buf , int len );
int show_List_Rc_BTree_CStr_DynamicType (CFile file , List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType copy_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType replaceAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , int index );
List_Rc_BTree_CStr_DynamicType deleteAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int index );
List_Rc_BTree_CStr_DynamicType insertAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , int index );
List_Rc_BTree_CStr_DynamicType replace_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType aimed );
List_Rc_BTree_CStr_DynamicType delete_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType aimed );
List_Rc_BTree_CStr_DynamicType insert_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType rlist );
List_Rc_BTree_CStr_DynamicType reverse_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType append_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , List_Rc_BTree_CStr_DynamicType rlist );
List_Rc_BTree_CStr_DynamicType push_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType take_List_Rc_BTree_CStr_DynamicType (int len , List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType last_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType init_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
int hasLen_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int desired );
int len_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType tail_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType drop_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list );
Maybe_Rc_BTree_CStr_DynamicType head_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType nthcdr_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list );
Maybe_Rc_BTree_CStr_DynamicType nth_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list );
List_Rc_BTree_CStr_DynamicType__H_Table * const get_List_Rc_BTree_CStr_DynamicType__H_Table ();
void free_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType * this_ptr );
#endif /* __List_Rc_BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __Maybe_List_Rc_BTree_CStr_DynamicType__H_DECL__
#define __Maybe_List_Rc_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_CStr_DynamicType Maybe_List_Rc_BTree_CStr_DynamicType ;
typedef void (*free_Maybe_List_Rc_BTree_CStr_DynamicType_t) (Maybe_List_Rc_BTree_CStr_DynamicType * this );
typedef struct Maybe_List_Rc_BTree_CStr_DynamicType__H_Table {
  free_Maybe_List_Rc_BTree_CStr_DynamicType_t freeData ;
} Maybe_List_Rc_BTree_CStr_DynamicType__H_Table;
typedef struct Maybe_List_Rc_BTree_CStr_DynamicType {
  const Maybe_List_Rc_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion986 */
    struct { /* ciciliStruct987 */
      List_Rc_BTree_CStr_DynamicType __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct988 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_CStr_DynamicType;
Maybe_List_Rc_BTree_CStr_DynamicType Just_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType value );
Maybe_List_Rc_BTree_CStr_DynamicType Nothing_List_Rc_BTree_CStr_DynamicType ();
__attribute__((weak)) Maybe_List_Rc_BTree_CStr_DynamicType Default_Maybe_List_Rc_BTree_CStr_DynamicType () {
  return Nothing_List_Rc_BTree_CStr_DynamicType ();
}
const Maybe_List_Rc_BTree_CStr_DynamicType__H_Table * const get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table ();
void free_Maybe_List_Rc_BTree_CStr_DynamicType (Maybe_List_Rc_BTree_CStr_DynamicType * this );
#endif /* __Maybe_List_Rc_BTree_CStr_DynamicType__H_DECL__ */ 
typedef Rc_BTree_CStr_DynamicType (*Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t) (Rc_BTree_CStr_DynamicType value );
#ifndef __Functor_List_Rc_BTree_CStr_DynamicType__H_DECL__
#define __Functor_List_Rc_BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_Rc_BTree_CStr_DynamicType Functor_List_Rc_BTree_CStr_DynamicType ;
typedef void (*free_Functor_List_Rc_BTree_CStr_DynamicType_t) (Functor_List_Rc_BTree_CStr_DynamicType * this );
typedef struct Functor_List_Rc_BTree_CStr_DynamicType__H_Table {
  free_Functor_List_Rc_BTree_CStr_DynamicType_t freeData ;
    List_Rc_BTree_CStr_DynamicType (*fmap) (Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t a_b , List_Rc_BTree_CStr_DynamicType input );
} Functor_List_Rc_BTree_CStr_DynamicType__H_Table;
typedef struct Functor_List_Rc_BTree_CStr_DynamicType {
  const Functor_List_Rc_BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1023 */
    struct { /* ciciliStruct1024 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_Rc_BTree_CStr_DynamicType;
Functor_List_Rc_BTree_CStr_DynamicType Functor_List_Rc_BTree_CStr_DynamicType_ctor ();
__attribute__((weak)) Functor_List_Rc_BTree_CStr_DynamicType Default_Functor_List_Rc_BTree_CStr_DynamicType () {
  return Functor_List_Rc_BTree_CStr_DynamicType_ctor ();
}
List_Rc_BTree_CStr_DynamicType fmap_Functor_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t a_b , List_Rc_BTree_CStr_DynamicType input );
const Functor_List_Rc_BTree_CStr_DynamicType__H_Table * const get_Functor_List_Rc_BTree_CStr_DynamicType__H_Table ();
void free_Functor_List_Rc_BTree_CStr_DynamicType (Functor_List_Rc_BTree_CStr_DynamicType * this );
#endif /* __Functor_List_Rc_BTree_CStr_DynamicType__H_DECL__ */ 
Functor_List_Rc_BTree_CStr_DynamicType get_Functor_List_Rc_BTree_CStr_DynamicType ();
#ifndef __BTree_CStr_DynamicType__H_DECL__
#define __BTree_CStr_DynamicType__H_DECL__
#ifndef __H___h_BTree_ctor_t__
#define __H___h_BTree_ctor_t__
typedef enum __h_BTree_ctor_t {
  __h_Leaf_t = 0,
  __h_Internal_t = 1,
  __h_Branch_t = 2
} __h_BTree_ctor_t;
#endif /* __H___h_BTree_ctor_t__ */ 
typedef struct class_BTree_CStr_DynamicType class_BTree_CStr_DynamicType ;
typedef class_BTree_CStr_DynamicType * BTree_CStr_DynamicType ;
typedef void (*free_BTree_CStr_DynamicType_t) (BTree_CStr_DynamicType * this_ptr );
typedef struct BTree_CStr_DynamicType__H_Table {
  free_BTree_CStr_DynamicType_t freeClass ;
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (*fromLists) (List_CStr keys , List_DynamicType values );
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (*pure) (CStr keys [], DynamicType values [], int len );
    int (*show) (CFile file , BTree_CStr_DynamicType tree );
    void (*traverse) (BTree_CStr_DynamicType tree ,   void (*callback) (BTree_CStr_DynamicType_pair_t item , Bool hasNext ));
    Maybe_BTree_CStr_DynamicType_pair_t (*max) (BTree_CStr_DynamicType tree );
    Maybe_BTree_CStr_DynamicType_pair_t (*min) (BTree_CStr_DynamicType tree );
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (*delete) (BTree_CStr_DynamicType tree , CStr skey ,   void (*callback) (BTree_CStr_DynamicType_pair_t item ));
    Maybe_BTree_CStr_DynamicType_pair_t (*search) (BTree_CStr_DynamicType tree , CStr skey );
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (*insert) (BTree_CStr_DynamicType tree , CStr skey , DynamicType svalue );
    int (*order) ();
} BTree_CStr_DynamicType__H_Table;
typedef struct class_BTree_CStr_DynamicType {
  const BTree_CStr_DynamicType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1083 */
    struct { /* ciciliStruct1084 */
      List_BTree_CStr_DynamicType_pair_t __h_0_mem ;
      List_Rc_BTree_CStr_DynamicType __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1085 */
      List_BTree_CStr_DynamicType_pair_t __h_0_mem ;
      List_Rc_BTree_CStr_DynamicType __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1086 */
      List_BTree_CStr_DynamicType_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_CStr_DynamicType;
BTree_CStr_DynamicType Branch_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children );
BTree_CStr_DynamicType Internal_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children );
BTree_CStr_DynamicType Leaf_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items );
__attribute__((weak)) BTree_CStr_DynamicType Default_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items ) {
  return Leaf_BTree_CStr_DynamicType (items );
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType fromLists_BTree_CStr_DynamicType (List_CStr keys , List_DynamicType values );
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType pure_BTree_CStr_DynamicType (CStr keys [], DynamicType values [], int len );
int show_BTree_CStr_DynamicType (CFile file , BTree_CStr_DynamicType tree );
void traverse_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , void (*callback) (BTree_CStr_DynamicType_pair_t item , Bool hasNext ));
Maybe_BTree_CStr_DynamicType_pair_t max_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree );
Maybe_BTree_CStr_DynamicType_pair_t min_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree );
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType delete_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey , void (*callback) (BTree_CStr_DynamicType_pair_t item ));
Maybe_BTree_CStr_DynamicType_pair_t search_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey );
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insert_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey , DynamicType svalue );
int order_BTree_CStr_DynamicType ();
BTree_CStr_DynamicType__H_Table * const get_BTree_CStr_DynamicType__H_Table ();
void free_BTree_CStr_DynamicType (BTree_CStr_DynamicType * this_ptr );
#endif /* __BTree_CStr_DynamicType__H_DECL__ */ 
#ifndef __StringBuffer_char__H_DECL__
#define __StringBuffer_char__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_NullTerminated_t = 1,
  __h_Bufferred_t = 2
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_char StringBuffer_char ;
typedef void (*free_StringBuffer_char_t) (StringBuffer_char * this );
typedef struct StringBuffer_char__H_Table {
  free_StringBuffer_char_t freeData ;
    StringBuffer_char (*new) (int step , bool null_terminated );
    StringBuffer_char (*put) (StringBuffer_char sb , char data );
    StringBuffer_char (*print) (StringBuffer_char sb , char * data , int len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1172 */
    struct { /* ciciliStruct1173 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Bufferred , _2 ;
    struct { /* ciciliStruct1174 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct1175 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
  return FreedStringBuffer_char ();
}
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , char * data , int len );
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table ();
void free_StringBuffer_char (StringBuffer_char * this );
#endif /* __StringBuffer_char__H_DECL__ */ 
