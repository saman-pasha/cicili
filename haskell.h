#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef __CICILI_HASKELL_H_DECL__
#define __CICILI_HASKELL_H_DECL__
void __h_free_data_router (void * instance );
void __h_free_class_router (void * instance );
typedef char * CStr ;
typedef FILE * CFile ;
typedef void * CVoid ;
typedef struct ciciliB3szHc7glS1agojWJ4liazTuxtI_ {
  int __h_0_mem ;
  CVoid __h_1_mem ;
  size_t __h_2_mem ;
} ciciliB3szHc7glS1agojWJ4liazTuxtI_;
typedef ciciliB3szHc7glS1agojWJ4liazTuxtI_ __h_StackItem ;
void __h_init_haskell ();
CVoid __h_stack_push (CVoid pointer );
void __h_stack_push_func (CStr func_name );
void __h_stack_push_data (CStr buffer );
void __h_stack_push_separator ();
#ifndef __Maybe___h_StackItem__H_DECL__
#define __Maybe___h_StackItem__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe___h_StackItem Maybe___h_StackItem ;
typedef void (*free_Maybe___h_StackItem_t) (Maybe___h_StackItem * this );
typedef struct Maybe___h_StackItem__H_Table {
  free_Maybe___h_StackItem_t freeData ;
} Maybe___h_StackItem__H_Table;
typedef struct Maybe___h_StackItem {
  const Maybe___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion123 */
    struct { /* ciciliStruct124 */
      __h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct125 */
    } Nothing , _ ;
  } __h_data ;
} Maybe___h_StackItem;
Maybe___h_StackItem Just___h_StackItem (__h_StackItem value );
Maybe___h_StackItem Nothing___h_StackItem ();
__attribute__((weak)) Maybe___h_StackItem Default_Maybe___h_StackItem () {
  return Nothing___h_StackItem ();
}
const Maybe___h_StackItem__H_Table * const get_Maybe___h_StackItem__H_Table ();
void free_Maybe___h_StackItem (Maybe___h_StackItem * this );
#endif /* __Maybe___h_StackItem__H_DECL__ */ 
#ifndef __BoxedList___h_StackItem__H_DECL__
#define __BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_BoxedList___h_StackItem class_BoxedList___h_StackItem ;
typedef class_BoxedList___h_StackItem * BoxedList___h_StackItem_x ;
#ifndef __Maybe_BoxedList___h_StackItem_x__H_DECL__
#define __Maybe_BoxedList___h_StackItem_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList___h_StackItem_x Maybe_BoxedList___h_StackItem_x ;
typedef void (*free_Maybe_BoxedList___h_StackItem_x_t) (Maybe_BoxedList___h_StackItem_x * this );
typedef struct Maybe_BoxedList___h_StackItem_x__H_Table {
  free_Maybe_BoxedList___h_StackItem_x_t freeData ;
} Maybe_BoxedList___h_StackItem_x__H_Table;
typedef struct Maybe_BoxedList___h_StackItem_x {
  const Maybe_BoxedList___h_StackItem_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion156 */
    struct { /* ciciliStruct157 */
      BoxedList___h_StackItem_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct158 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList___h_StackItem_x;
Maybe_BoxedList___h_StackItem_x Just_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x value );
Maybe_BoxedList___h_StackItem_x Nothing_BoxedList___h_StackItem_x ();
__attribute__((weak)) Maybe_BoxedList___h_StackItem_x Default_Maybe_BoxedList___h_StackItem_x () {
  return Nothing_BoxedList___h_StackItem_x ();
}
const Maybe_BoxedList___h_StackItem_x__H_Table * const get_Maybe_BoxedList___h_StackItem_x__H_Table ();
void free_Maybe_BoxedList___h_StackItem_x (Maybe_BoxedList___h_StackItem_x * this );
#endif /* __Maybe_BoxedList___h_StackItem_x__H_DECL__ */ 
#ifndef __Box_BoxedList___h_StackItem__H_DECL__
#define __Box_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_BoxedList___h_StackItem Box_BoxedList___h_StackItem ;
typedef void (*free_Box_BoxedList___h_StackItem_t) (Box_BoxedList___h_StackItem * this );
typedef struct Box_BoxedList___h_StackItem__H_Table {
  free_Box_BoxedList___h_StackItem_t freeData ;
    Box_BoxedList___h_StackItem (*new) (BoxedList___h_StackItem_x pointer );
    Box_BoxedList___h_StackItem (*clone) (Box_BoxedList___h_StackItem rc );
    Maybe_BoxedList___h_StackItem_x (*take) (Box_BoxedList___h_StackItem * this );
    Maybe_BoxedList___h_StackItem_x (*get) (Box_BoxedList___h_StackItem rc );
} Box_BoxedList___h_StackItem__H_Table;
typedef struct Box_BoxedList___h_StackItem {
  const Box_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion188 */
    struct { /* ciciliStruct189 */
      BoxedList___h_StackItem_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct190 */
    } Gone , _ ;
  } __h_data ;
} Box_BoxedList___h_StackItem;
Box_BoxedList___h_StackItem __h_Hold_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * pointer , int * count , size_t address );
Box_BoxedList___h_StackItem Gone_BoxedList___h_StackItem_x ();
__attribute__((weak)) Box_BoxedList___h_StackItem Default_Box_BoxedList___h_StackItem () {
  return Gone_BoxedList___h_StackItem_x ();
}
Box_BoxedList___h_StackItem new_Box_BoxedList___h_StackItem (BoxedList___h_StackItem_x pointer );
Box_BoxedList___h_StackItem clone_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc );
Maybe_BoxedList___h_StackItem_x take_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this );
Maybe_BoxedList___h_StackItem_x get_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc );
const Box_BoxedList___h_StackItem__H_Table * const get_Box_BoxedList___h_StackItem__H_Table ();
void free_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this );
#endif /* __Box_BoxedList___h_StackItem__H_DECL__ */ 
typedef Box_BoxedList___h_StackItem BoxedList___h_StackItem ;
typedef void (*free_BoxedList___h_StackItem_t) (BoxedList___h_StackItem_x * this );
typedef struct BoxedList___h_StackItem__H_Table {
  free_BoxedList___h_StackItem_t freeData ;
    __h_StackItem * (*toArray) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*wrap) (const __h_StackItem item );
    BoxedList___h_StackItem (*pure) (const __h_StackItem * buf , size_t len );
    size_t (*show) (CFile file , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*copy) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*replaceAt) (BoxedList___h_StackItem list , __h_StackItem item , size_t index );
    BoxedList___h_StackItem (*deleteAt) (BoxedList___h_StackItem list , size_t index );
    BoxedList___h_StackItem (*insertAt) (BoxedList___h_StackItem llist , __h_StackItem item , size_t index );
    BoxedList___h_StackItem (*replace) (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed );
    BoxedList___h_StackItem (*delete) (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed );
    BoxedList___h_StackItem (*insert) (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist );
    BoxedList___h_StackItem (*reverse) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*append) (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist );
    BoxedList___h_StackItem (*push) (__h_StackItem item , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*take) (size_t len , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*last) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*init) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*tail) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*drop) (size_t len , BoxedList___h_StackItem list );
    Maybe___h_StackItem (*head) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*nthcdr) (size_t index , BoxedList___h_StackItem list );
    Maybe___h_StackItem (*nth) (size_t index , BoxedList___h_StackItem list );
    size_t (*hasLen) (BoxedList___h_StackItem list , size_t desired );
    size_t (*len) (BoxedList___h_StackItem list );
} BoxedList___h_StackItem__H_Table;
typedef struct class_BoxedList___h_StackItem {
  const BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion250 */
    struct { /* ciciliStruct251 */
      __h_StackItem __h_0_mem ;
      BoxedList___h_StackItem __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct252 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList___h_StackItem;
BoxedList___h_StackItem BoxedCons___h_StackItem (__h_StackItem head , BoxedList___h_StackItem tail );
BoxedList___h_StackItem BoxedNil___h_StackItem ();
__attribute__((weak)) BoxedList___h_StackItem Default_BoxedList___h_StackItem () {
  return BoxedNil___h_StackItem ();
}
__h_StackItem * toArray_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem wrap_BoxedList___h_StackItem (const __h_StackItem item );
BoxedList___h_StackItem pure_BoxedList___h_StackItem (const __h_StackItem * buf , size_t len );
size_t show_BoxedList___h_StackItem (CFile file , BoxedList___h_StackItem list );
BoxedList___h_StackItem copy_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem replaceAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , size_t index );
BoxedList___h_StackItem deleteAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t index );
BoxedList___h_StackItem insertAt_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , size_t index );
BoxedList___h_StackItem replace_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed );
BoxedList___h_StackItem delete_BoxedList___h_StackItem (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed );
BoxedList___h_StackItem insert_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist );
BoxedList___h_StackItem reverse_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem append_BoxedList___h_StackItem (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist );
BoxedList___h_StackItem push_BoxedList___h_StackItem (__h_StackItem item , BoxedList___h_StackItem list );
BoxedList___h_StackItem take_BoxedList___h_StackItem (size_t len , BoxedList___h_StackItem list );
BoxedList___h_StackItem last_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem init_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem tail_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem drop_BoxedList___h_StackItem (size_t len , BoxedList___h_StackItem list );
Maybe___h_StackItem head_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem nthcdr_BoxedList___h_StackItem (size_t index , BoxedList___h_StackItem list );
Maybe___h_StackItem nth_BoxedList___h_StackItem (size_t index , BoxedList___h_StackItem list );
size_t hasLen_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t desired );
size_t len_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem__H_Table * const get_BoxedList___h_StackItem__H_Table ();
void free_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * this );
#endif /* __BoxedList___h_StackItem__H_DECL__ */ 
#ifndef __Maybe_BoxedList___h_StackItem__H_DECL__
#define __Maybe_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList___h_StackItem Maybe_BoxedList___h_StackItem ;
typedef void (*free_Maybe_BoxedList___h_StackItem_t) (Maybe_BoxedList___h_StackItem * this );
typedef struct Maybe_BoxedList___h_StackItem__H_Table {
  free_Maybe_BoxedList___h_StackItem_t freeData ;
} Maybe_BoxedList___h_StackItem__H_Table;
typedef struct Maybe_BoxedList___h_StackItem {
  const Maybe_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion350 */
    struct { /* ciciliStruct351 */
      BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct352 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList___h_StackItem;
Maybe_BoxedList___h_StackItem Just_BoxedList___h_StackItem (BoxedList___h_StackItem value );
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem ();
__attribute__((weak)) Maybe_BoxedList___h_StackItem Default_Maybe_BoxedList___h_StackItem () {
  return Nothing_BoxedList___h_StackItem ();
}
const Maybe_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList___h_StackItem__H_Table ();
void free_Maybe_BoxedList___h_StackItem (Maybe_BoxedList___h_StackItem * this );
#endif /* __Maybe_BoxedList___h_StackItem__H_DECL__ */ 
#ifndef __Maybe_BoxedList___h_StackItem__H_DECL__
#define __Maybe_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList___h_StackItem Maybe_BoxedList___h_StackItem ;
typedef void (*free_Maybe_BoxedList___h_StackItem_t) (Maybe_BoxedList___h_StackItem * this );
typedef struct Maybe_BoxedList___h_StackItem__H_Table {
  free_Maybe_BoxedList___h_StackItem_t freeData ;
} Maybe_BoxedList___h_StackItem__H_Table;
typedef struct Maybe_BoxedList___h_StackItem {
  const Maybe_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion380 */
    struct { /* ciciliStruct381 */
      BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct382 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList___h_StackItem;
Maybe_BoxedList___h_StackItem Just_BoxedList___h_StackItem (BoxedList___h_StackItem value );
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem ();
__attribute__((weak)) Maybe_BoxedList___h_StackItem Default_Maybe_BoxedList___h_StackItem () {
  return Nothing_BoxedList___h_StackItem ();
}
const Maybe_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList___h_StackItem__H_Table ();
void free_Maybe_BoxedList___h_StackItem (Maybe_BoxedList___h_StackItem * this );
#endif /* __Maybe_BoxedList___h_StackItem__H_DECL__ */ 
#ifndef __BoxedList_BoxedList___h_StackItem__H_DECL__
#define __BoxedList_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_BoxedList_BoxedList___h_StackItem class_BoxedList_BoxedList___h_StackItem ;
typedef class_BoxedList_BoxedList___h_StackItem * BoxedList_BoxedList___h_StackItem_x ;
#ifndef __Maybe_BoxedList_BoxedList___h_StackItem_x__H_DECL__
#define __Maybe_BoxedList_BoxedList___h_StackItem_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_BoxedList___h_StackItem_x Maybe_BoxedList_BoxedList___h_StackItem_x ;
typedef void (*free_Maybe_BoxedList_BoxedList___h_StackItem_x_t) (Maybe_BoxedList_BoxedList___h_StackItem_x * this );
typedef struct Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table {
  free_Maybe_BoxedList_BoxedList___h_StackItem_x_t freeData ;
} Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table;
typedef struct Maybe_BoxedList_BoxedList___h_StackItem_x {
  const Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion413 */
    struct { /* ciciliStruct414 */
      BoxedList_BoxedList___h_StackItem_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct415 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_BoxedList___h_StackItem_x;
Maybe_BoxedList_BoxedList___h_StackItem_x Just_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x value );
Maybe_BoxedList_BoxedList___h_StackItem_x Nothing_BoxedList_BoxedList___h_StackItem_x ();
__attribute__((weak)) Maybe_BoxedList_BoxedList___h_StackItem_x Default_Maybe_BoxedList_BoxedList___h_StackItem_x () {
  return Nothing_BoxedList_BoxedList___h_StackItem_x ();
}
const Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table * const get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table ();
void free_Maybe_BoxedList_BoxedList___h_StackItem_x (Maybe_BoxedList_BoxedList___h_StackItem_x * this );
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem_x__H_DECL__ */ 
#ifndef __Box_BoxedList_BoxedList___h_StackItem__H_DECL__
#define __Box_BoxedList_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_BoxedList_BoxedList___h_StackItem Box_BoxedList_BoxedList___h_StackItem ;
typedef void (*free_Box_BoxedList_BoxedList___h_StackItem_t) (Box_BoxedList_BoxedList___h_StackItem * this );
typedef struct Box_BoxedList_BoxedList___h_StackItem__H_Table {
  free_Box_BoxedList_BoxedList___h_StackItem_t freeData ;
    Box_BoxedList_BoxedList___h_StackItem (*new) (BoxedList_BoxedList___h_StackItem_x pointer );
    Box_BoxedList_BoxedList___h_StackItem (*clone) (Box_BoxedList_BoxedList___h_StackItem rc );
    Maybe_BoxedList_BoxedList___h_StackItem_x (*take) (Box_BoxedList_BoxedList___h_StackItem * this );
    Maybe_BoxedList_BoxedList___h_StackItem_x (*get) (Box_BoxedList_BoxedList___h_StackItem rc );
} Box_BoxedList_BoxedList___h_StackItem__H_Table;
typedef struct Box_BoxedList_BoxedList___h_StackItem {
  const Box_BoxedList_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion445 */
    struct { /* ciciliStruct446 */
      BoxedList_BoxedList___h_StackItem_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct447 */
    } Gone , _ ;
  } __h_data ;
} Box_BoxedList_BoxedList___h_StackItem;
Box_BoxedList_BoxedList___h_StackItem __h_Hold_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * pointer , int * count , size_t address );
Box_BoxedList_BoxedList___h_StackItem Gone_BoxedList_BoxedList___h_StackItem_x ();
__attribute__((weak)) Box_BoxedList_BoxedList___h_StackItem Default_Box_BoxedList_BoxedList___h_StackItem () {
  return Gone_BoxedList_BoxedList___h_StackItem_x ();
}
Box_BoxedList_BoxedList___h_StackItem new_Box_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem_x pointer );
Box_BoxedList_BoxedList___h_StackItem clone_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc );
Maybe_BoxedList_BoxedList___h_StackItem_x take_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this );
Maybe_BoxedList_BoxedList___h_StackItem_x get_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc );
const Box_BoxedList_BoxedList___h_StackItem__H_Table * const get_Box_BoxedList_BoxedList___h_StackItem__H_Table ();
void free_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this );
#endif /* __Box_BoxedList_BoxedList___h_StackItem__H_DECL__ */ 
typedef Box_BoxedList_BoxedList___h_StackItem BoxedList_BoxedList___h_StackItem ;
typedef void (*free_BoxedList_BoxedList___h_StackItem_t) (BoxedList_BoxedList___h_StackItem_x * this );
typedef struct BoxedList_BoxedList___h_StackItem__H_Table {
  free_BoxedList_BoxedList___h_StackItem_t freeData ;
    BoxedList___h_StackItem * (*toArray) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*wrap) (const BoxedList___h_StackItem item );
    BoxedList_BoxedList___h_StackItem (*pure) (const BoxedList___h_StackItem * buf , size_t len );
    size_t (*show) (CFile file , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*copy) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*replaceAt) (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index );
    BoxedList_BoxedList___h_StackItem (*deleteAt) (BoxedList_BoxedList___h_StackItem list , size_t index );
    BoxedList_BoxedList___h_StackItem (*insertAt) (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , size_t index );
    BoxedList_BoxedList___h_StackItem (*replace) (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed );
    BoxedList_BoxedList___h_StackItem (*delete) (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed );
    BoxedList_BoxedList___h_StackItem (*insert) (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist );
    BoxedList_BoxedList___h_StackItem (*reverse) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*append) (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist );
    BoxedList_BoxedList___h_StackItem (*push) (BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*take) (size_t len , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*last) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*init) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*tail) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*drop) (size_t len , BoxedList_BoxedList___h_StackItem list );
    Maybe_BoxedList___h_StackItem (*head) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*nthcdr) (size_t index , BoxedList_BoxedList___h_StackItem list );
    Maybe_BoxedList___h_StackItem (*nth) (size_t index , BoxedList_BoxedList___h_StackItem list );
    size_t (*hasLen) (BoxedList_BoxedList___h_StackItem list , size_t desired );
    size_t (*len) (BoxedList_BoxedList___h_StackItem list );
} BoxedList_BoxedList___h_StackItem__H_Table;
typedef struct class_BoxedList_BoxedList___h_StackItem {
  const BoxedList_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion507 */
    struct { /* ciciliStruct508 */
      BoxedList___h_StackItem __h_0_mem ;
      BoxedList_BoxedList___h_StackItem __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct509 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList_BoxedList___h_StackItem;
BoxedList_BoxedList___h_StackItem BoxedCons_BoxedList___h_StackItem (BoxedList___h_StackItem head , BoxedList_BoxedList___h_StackItem tail );
BoxedList_BoxedList___h_StackItem BoxedNil_BoxedList___h_StackItem ();
__attribute__((weak)) BoxedList_BoxedList___h_StackItem Default_BoxedList_BoxedList___h_StackItem () {
  return BoxedNil_BoxedList___h_StackItem ();
}
BoxedList___h_StackItem * toArray_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem wrap_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem item );
BoxedList_BoxedList___h_StackItem pure_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem * buf , size_t len );
size_t show_BoxedList_BoxedList___h_StackItem (CFile file , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem copy_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem replaceAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index );
BoxedList_BoxedList___h_StackItem deleteAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t index );
BoxedList_BoxedList___h_StackItem insertAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , size_t index );
BoxedList_BoxedList___h_StackItem replace_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed );
BoxedList_BoxedList___h_StackItem delete_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed );
BoxedList_BoxedList___h_StackItem insert_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist );
BoxedList_BoxedList___h_StackItem reverse_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem append_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist );
BoxedList_BoxedList___h_StackItem push_BoxedList_BoxedList___h_StackItem (BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem take_BoxedList_BoxedList___h_StackItem (size_t len , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem last_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem init_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem tail_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem drop_BoxedList_BoxedList___h_StackItem (size_t len , BoxedList_BoxedList___h_StackItem list );
Maybe_BoxedList___h_StackItem head_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem nthcdr_BoxedList_BoxedList___h_StackItem (size_t index , BoxedList_BoxedList___h_StackItem list );
Maybe_BoxedList___h_StackItem nth_BoxedList_BoxedList___h_StackItem (size_t index , BoxedList_BoxedList___h_StackItem list );
size_t hasLen_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t desired );
size_t len_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem__H_Table * const get_BoxedList_BoxedList___h_StackItem__H_Table ();
void free_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * this );
#endif /* __BoxedList_BoxedList___h_StackItem__H_DECL__ */ 
#ifndef __Maybe_BoxedList_BoxedList___h_StackItem__H_DECL__
#define __Maybe_BoxedList_BoxedList___h_StackItem__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_BoxedList___h_StackItem Maybe_BoxedList_BoxedList___h_StackItem ;
typedef void (*free_Maybe_BoxedList_BoxedList___h_StackItem_t) (Maybe_BoxedList_BoxedList___h_StackItem * this );
typedef struct Maybe_BoxedList_BoxedList___h_StackItem__H_Table {
  free_Maybe_BoxedList_BoxedList___h_StackItem_t freeData ;
} Maybe_BoxedList_BoxedList___h_StackItem__H_Table;
typedef struct Maybe_BoxedList_BoxedList___h_StackItem {
  const Maybe_BoxedList_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion607 */
    struct { /* ciciliStruct608 */
      BoxedList_BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct609 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_BoxedList___h_StackItem;
Maybe_BoxedList_BoxedList___h_StackItem Just_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem value );
Maybe_BoxedList_BoxedList___h_StackItem Nothing_BoxedList_BoxedList___h_StackItem ();
__attribute__((weak)) Maybe_BoxedList_BoxedList___h_StackItem Default_Maybe_BoxedList_BoxedList___h_StackItem () {
  return Nothing_BoxedList_BoxedList___h_StackItem ();
}
const Maybe_BoxedList_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table ();
void free_Maybe_BoxedList_BoxedList___h_StackItem (Maybe_BoxedList_BoxedList___h_StackItem * this );
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem__H_DECL__ */ 
void __h_stack_show_item (BoxedList___h_StackItem stack , int counter );
void __h_stack_show ();
BoxedList_BoxedList___h_StackItem __h_stack ();
void __h_stack_free (BoxedList_BoxedList___h_StackItem * pin );
void __h_stack_free_main (BoxedList_BoxedList___h_StackItem * pin );
typedef enum __h_DefaultCtor {
  __h___t
} __h_DefaultCtor;
#ifndef __Bool__H_DECL__
#define __Bool__H_DECL__
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_False_t = 0,
  __h_True_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
typedef struct Bool Bool ;
typedef void (*free_Bool_t) (Bool * this );
typedef struct Bool__H_Table {
  free_Bool_t freeData ;
    int (*show) (CFile file , Bool value );
    Bool (*or) (Bool lhs , Bool rhs );
    Bool (*and) (Bool lhs , Bool rhs );
} Bool__H_Table;
typedef struct Bool {
  const Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion641 */
    struct { /* ciciliStruct642 */
    } True , _1 ;
    struct { /* ciciliStruct643 */
    } False , _ ;
  } __h_data ;
} Bool;
Bool True ();
Bool False ();
__attribute__((weak)) Bool Default_Bool () {
  return False ();
}
int show_Bool (CFile file , Bool value );
Bool or_Bool (Bool lhs , Bool rhs );
Bool and_Bool (Bool lhs , Bool rhs );
const Bool__H_Table * const get_Bool__H_Table ();
void free_Bool (Bool * this );
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
typedef struct Ordering Ordering ;
typedef void (*free_Ordering_t) (Ordering * this );
typedef struct Ordering__H_Table {
  free_Ordering_t freeData ;
} Ordering__H_Table;
typedef struct Ordering {
  const Ordering__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion673 */
    struct { /* ciciliStruct674 */
    } LT , _2 ;
    struct { /* ciciliStruct675 */
    } EQ , _1 ;
    struct { /* ciciliStruct676 */
    } GT , _ ;
  } __h_data ;
} Ordering;
Ordering LT ();
Ordering EQ ();
Ordering GT ();
__attribute__((weak)) Ordering Default_Ordering () {
  return GT ();
}
const Ordering__H_Table * const get_Ordering__H_Table ();
void free_Ordering (Ordering * this );
#endif /* __Ordering__H_DECL__ */ 
typedef char Char ;
#ifndef __Maybe_CStr__H_DECL__
#define __Maybe_CStr__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_CStr Maybe_CStr ;
typedef void (*free_Maybe_CStr_t) (Maybe_CStr * this );
typedef struct Maybe_CStr__H_Table {
  free_Maybe_CStr_t freeData ;
} Maybe_CStr__H_Table;
typedef struct Maybe_CStr {
  const Maybe_CStr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion701 */
    struct { /* ciciliStruct702 */
      CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct703 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_CStr;
Maybe_CStr Just_CStr (CStr value );
Maybe_CStr Nothing_CStr ();
__attribute__((weak)) Maybe_CStr Default_Maybe_CStr () {
  return Nothing_CStr ();
}
const Maybe_CStr__H_Table * const get_Maybe_CStr__H_Table ();
void free_Maybe_CStr (Maybe_CStr * this );
#endif /* __Maybe_CStr__H_DECL__ */ 
#ifndef __Maybe_CFile__H_DECL__
#define __Maybe_CFile__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_CFile Maybe_CFile ;
typedef void (*free_Maybe_CFile_t) (Maybe_CFile * this );
typedef struct Maybe_CFile__H_Table {
  free_Maybe_CFile_t freeData ;
} Maybe_CFile__H_Table;
typedef struct Maybe_CFile {
  const Maybe_CFile__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion729 */
    struct { /* ciciliStruct730 */
      CFile __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct731 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_CFile;
Maybe_CFile Just_CFile (CFile value );
Maybe_CFile Nothing_CFile ();
__attribute__((weak)) Maybe_CFile Default_Maybe_CFile () {
  return Nothing_CFile ();
}
const Maybe_CFile__H_Table * const get_Maybe_CFile__H_Table ();
void free_Maybe_CFile (Maybe_CFile * this );
#endif /* __Maybe_CFile__H_DECL__ */ 
#ifndef __Maybe_Bool__H_DECL__
#define __Maybe_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Bool Maybe_Bool ;
typedef void (*free_Maybe_Bool_t) (Maybe_Bool * this );
typedef struct Maybe_Bool__H_Table {
  free_Maybe_Bool_t freeData ;
} Maybe_Bool__H_Table;
typedef struct Maybe_Bool {
  const Maybe_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion759 */
    struct { /* ciciliStruct760 */
      Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct761 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Bool;
Maybe_Bool Just_Bool (Bool value );
Maybe_Bool Nothing_Bool ();
__attribute__((weak)) Maybe_Bool Default_Maybe_Bool () {
  return Nothing_Bool ();
}
const Maybe_Bool__H_Table * const get_Maybe_Bool__H_Table ();
void free_Maybe_Bool (Maybe_Bool * this );
#endif /* __Maybe_Bool__H_DECL__ */ 
#ifndef __List_Bool__H_DECL__
#define __List_Bool__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Bool class_List_Bool ;
typedef class_List_Bool * List_Bool ;
typedef void (*free_List_Bool_t) (List_Bool * this_ptr );
typedef struct List_Bool__H_Table {
  free_List_Bool_t freeClass ;
    Bool * (*toArray) (List_Bool list );
    List_Bool (*wrap) (const Bool item );
    List_Bool (*pure) (const Bool * buf , size_t len );
    size_t (*show) (CFile file , List_Bool list );
    List_Bool (*copy) (List_Bool list );
    List_Bool (*replaceAt) (List_Bool list , Bool item , size_t index );
    List_Bool (*deleteAt) (List_Bool list , size_t index );
    List_Bool (*insertAt) (List_Bool llist , Bool item , size_t index );
    List_Bool (*replace) (List_Bool list , Bool item , List_Bool aimed );
    List_Bool (*delete) (List_Bool list , List_Bool aimed );
    List_Bool (*insert) (List_Bool llist , Bool item , List_Bool rlist );
    List_Bool (*reverse) (List_Bool list );
    List_Bool (*append) (List_Bool llist , List_Bool rlist );
    List_Bool (*push) (Bool item , List_Bool list );
    List_Bool (*take) (size_t len , List_Bool list );
    List_Bool (*last) (List_Bool list );
    List_Bool (*init) (List_Bool list );
    size_t (*hasLen) (List_Bool list , size_t desired );
    size_t (*len) (List_Bool list );
    List_Bool (*tail) (List_Bool list );
    List_Bool (*drop) (size_t len , List_Bool list );
    Maybe_Bool (*head) (List_Bool list );
    List_Bool (*nthcdr) (size_t index , List_Bool list );
    Maybe_Bool (*nth) (size_t index , List_Bool list );
} List_Bool__H_Table;
typedef struct class_List_Bool {
  const List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion811 */
    struct { /* ciciliStruct812 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct813 */
    } Nil , _ ;
  } __h_data ;
} class_List_Bool;
List_Bool Cons_Bool (Bool head , List_Bool tail );
List_Bool Nil_Bool ();
__attribute__((weak)) List_Bool Default_List_Bool () {
  return Nil_Bool ();
}
Bool * toArray_List_Bool (List_Bool list );
List_Bool wrap_List_Bool (const Bool item );
List_Bool pure_List_Bool (const Bool * buf , size_t len );
size_t show_List_Bool (CFile file , List_Bool list );
List_Bool copy_List_Bool (List_Bool list );
List_Bool replaceAt_List_Bool (List_Bool list , Bool item , size_t index );
List_Bool deleteAt_List_Bool (List_Bool list , size_t index );
List_Bool insertAt_List_Bool (List_Bool llist , Bool item , size_t index );
List_Bool replace_List_Bool (List_Bool list , Bool item , List_Bool aimed );
List_Bool delete_List_Bool (List_Bool list , List_Bool aimed );
List_Bool insert_List_Bool (List_Bool llist , Bool item , List_Bool rlist );
List_Bool reverse_List_Bool (List_Bool list );
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist );
List_Bool push_List_Bool (Bool item , List_Bool list );
List_Bool take_List_Bool (size_t len , List_Bool list );
List_Bool last_List_Bool (List_Bool list );
List_Bool init_List_Bool (List_Bool list );
size_t hasLen_List_Bool (List_Bool list , size_t desired );
size_t len_List_Bool (List_Bool list );
List_Bool tail_List_Bool (List_Bool list );
List_Bool drop_List_Bool (size_t len , List_Bool list );
Maybe_Bool head_List_Bool (List_Bool list );
List_Bool nthcdr_List_Bool (size_t index , List_Bool list );
Maybe_Bool nth_List_Bool (size_t index , List_Bool list );
List_Bool__H_Table * const get_List_Bool__H_Table ();
void free_List_Bool (List_Bool * this_ptr );
#endif /* __List_Bool__H_DECL__ */ 
#ifndef __Maybe_List_Bool__H_DECL__
#define __Maybe_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Bool Maybe_List_Bool ;
typedef void (*free_Maybe_List_Bool_t) (Maybe_List_Bool * this );
typedef struct Maybe_List_Bool__H_Table {
  free_Maybe_List_Bool_t freeData ;
} Maybe_List_Bool__H_Table;
typedef struct Maybe_List_Bool {
  const Maybe_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion911 */
    struct { /* ciciliStruct912 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct913 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Just_List_Bool (List_Bool value );
Maybe_List_Bool Nothing_List_Bool ();
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool () {
  return Nothing_List_Bool ();
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table ();
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __Maybe_List_Bool__H_DECL__ */ 
#ifndef __Maybe_int__H_DECL__
#define __Maybe_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_int Maybe_int ;
typedef void (*free_Maybe_int_t) (Maybe_int * this );
typedef struct Maybe_int__H_Table {
  free_Maybe_int_t freeData ;
} Maybe_int__H_Table;
typedef struct Maybe_int {
  const Maybe_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion941 */
    struct { /* ciciliStruct942 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct943 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Just_int (int value );
Maybe_int Nothing_int ();
__attribute__((weak)) Maybe_int Default_Maybe_int () {
  return Nothing_int ();
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table ();
void free_Maybe_int (Maybe_int * this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __List_int__H_DECL__
#define __List_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_int class_List_int ;
typedef class_List_int * List_int ;
typedef void (*free_List_int_t) (List_int * this_ptr );
typedef struct List_int__H_Table {
  free_List_int_t freeClass ;
    int * (*toArray) (List_int list );
    List_int (*wrap) (const int item );
    List_int (*pure) (const int * buf , size_t len );
    size_t (*show) (CFile file , List_int list );
    List_int (*copy) (List_int list );
    List_int (*replaceAt) (List_int list , int item , size_t index );
    List_int (*deleteAt) (List_int list , size_t index );
    List_int (*insertAt) (List_int llist , int item , size_t index );
    List_int (*replace) (List_int list , int item , List_int aimed );
    List_int (*delete) (List_int list , List_int aimed );
    List_int (*insert) (List_int llist , int item , List_int rlist );
    List_int (*reverse) (List_int list );
    List_int (*append) (List_int llist , List_int rlist );
    List_int (*push) (int item , List_int list );
    List_int (*take) (size_t len , List_int list );
    List_int (*last) (List_int list );
    List_int (*init) (List_int list );
    size_t (*hasLen) (List_int list , size_t desired );
    size_t (*len) (List_int list );
    List_int (*tail) (List_int list );
    List_int (*drop) (size_t len , List_int list );
    Maybe_int (*head) (List_int list );
    List_int (*nthcdr) (size_t index , List_int list );
    Maybe_int (*nth) (size_t index , List_int list );
} List_int__H_Table;
typedef struct class_List_int {
  const List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion993 */
    struct { /* ciciliStruct994 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct995 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list );
List_int wrap_List_int (const int item );
List_int pure_List_int (const int * buf , size_t len );
size_t show_List_int (CFile file , List_int list );
List_int copy_List_int (List_int list );
List_int replaceAt_List_int (List_int list , int item , size_t index );
List_int deleteAt_List_int (List_int list , size_t index );
List_int insertAt_List_int (List_int llist , int item , size_t index );
List_int replace_List_int (List_int list , int item , List_int aimed );
List_int delete_List_int (List_int list , List_int aimed );
List_int insert_List_int (List_int llist , int item , List_int rlist );
List_int reverse_List_int (List_int list );
List_int append_List_int (List_int llist , List_int rlist );
List_int push_List_int (int item , List_int list );
List_int take_List_int (size_t len , List_int list );
List_int last_List_int (List_int list );
List_int init_List_int (List_int list );
size_t hasLen_List_int (List_int list , size_t desired );
size_t len_List_int (List_int list );
List_int tail_List_int (List_int list );
List_int drop_List_int (size_t len , List_int list );
Maybe_int head_List_int (List_int list );
List_int nthcdr_List_int (size_t index , List_int list );
Maybe_int nth_List_int (size_t index , List_int list );
List_int__H_Table * const get_List_int__H_Table ();
void free_List_int (List_int * this_ptr );
#endif /* __List_int__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1093 */
    struct { /* ciciliStruct1094 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1095 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __Maybe_char__H_DECL__
#define __Maybe_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_char Maybe_char ;
typedef void (*free_Maybe_char_t) (Maybe_char * this );
typedef struct Maybe_char__H_Table {
  free_Maybe_char_t freeData ;
} Maybe_char__H_Table;
typedef struct Maybe_char {
  const Maybe_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1125 */
    struct { /* ciciliStruct1126 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1127 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Just_char (char value );
Maybe_char Nothing_char ();
__attribute__((weak)) Maybe_char Default_Maybe_char () {
  return Nothing_char ();
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table ();
void free_Maybe_char (Maybe_char * this );
#endif /* __Maybe_char__H_DECL__ */ 
#ifndef __List_char__H_DECL__
#define __List_char__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_char class_List_char ;
typedef class_List_char * List_char ;
typedef void (*free_List_char_t) (List_char * this_ptr );
typedef struct List_char__H_Table {
  free_List_char_t freeClass ;
    char * (*toArray) (List_char list );
    List_char (*wrap) (const char item );
    List_char (*pure) (const char * buf , size_t len );
    size_t (*show) (CFile file , List_char list );
    List_char (*copy) (List_char list );
    List_char (*replaceAt) (List_char list , char item , size_t index );
    List_char (*deleteAt) (List_char list , size_t index );
    List_char (*insertAt) (List_char llist , char item , size_t index );
    List_char (*replace) (List_char list , char item , List_char aimed );
    List_char (*delete) (List_char list , List_char aimed );
    List_char (*insert) (List_char llist , char item , List_char rlist );
    List_char (*reverse) (List_char list );
    List_char (*append) (List_char llist , List_char rlist );
    List_char (*push) (char item , List_char list );
    List_char (*take) (size_t len , List_char list );
    List_char (*last) (List_char list );
    List_char (*init) (List_char list );
    size_t (*hasLen) (List_char list , size_t desired );
    size_t (*len) (List_char list );
    List_char (*tail) (List_char list );
    List_char (*drop) (size_t len , List_char list );
    Maybe_char (*head) (List_char list );
    List_char (*nthcdr) (size_t index , List_char list );
    Maybe_char (*nth) (size_t index , List_char list );
} List_char__H_Table;
typedef struct class_List_char {
  const List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1177 */
    struct { /* ciciliStruct1178 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1179 */
    } Nil , _ ;
  } __h_data ;
} class_List_char;
List_char Cons_char (char head , List_char tail );
List_char Nil_char ();
__attribute__((weak)) List_char Default_List_char () {
  return Nil_char ();
}
char * toArray_List_char (List_char list );
List_char wrap_List_char (const char item );
List_char pure_List_char (const char * buf , size_t len );
size_t show_List_char (CFile file , List_char list );
List_char copy_List_char (List_char list );
List_char replaceAt_List_char (List_char list , char item , size_t index );
List_char deleteAt_List_char (List_char list , size_t index );
List_char insertAt_List_char (List_char llist , char item , size_t index );
List_char replace_List_char (List_char list , char item , List_char aimed );
List_char delete_List_char (List_char list , List_char aimed );
List_char insert_List_char (List_char llist , char item , List_char rlist );
List_char reverse_List_char (List_char list );
List_char append_List_char (List_char llist , List_char rlist );
List_char push_List_char (char item , List_char list );
List_char take_List_char (size_t len , List_char list );
List_char last_List_char (List_char list );
List_char init_List_char (List_char list );
size_t hasLen_List_char (List_char list , size_t desired );
size_t len_List_char (List_char list );
List_char tail_List_char (List_char list );
List_char drop_List_char (size_t len , List_char list );
Maybe_char head_List_char (List_char list );
List_char nthcdr_List_char (size_t index , List_char list );
Maybe_char nth_List_char (size_t index , List_char list );
List_char__H_Table * const get_List_char__H_Table ();
void free_List_char (List_char * this_ptr );
#endif /* __List_char__H_DECL__ */ 
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_char Maybe_List_char ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char__H_Table {
  free_Maybe_List_char_t freeData ;
} Maybe_List_char__H_Table;
typedef struct Maybe_List_char {
  const Maybe_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1277 */
    struct { /* ciciliStruct1278 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1279 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Just_List_char (List_char value );
Maybe_List_char Nothing_List_char ();
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char () {
  return Nothing_List_char ();
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
List_char new_List_char_Const (const char * buf );
#ifndef __Maybe_char__H_DECL__
#define __Maybe_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_char Maybe_char ;
typedef void (*free_Maybe_char_t) (Maybe_char * this );
typedef struct Maybe_char__H_Table {
  free_Maybe_char_t freeData ;
} Maybe_char__H_Table;
typedef struct Maybe_char {
  const Maybe_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1309 */
    struct { /* ciciliStruct1310 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1311 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Just_char (char value );
Maybe_char Nothing_char ();
__attribute__((weak)) Maybe_char Default_Maybe_char () {
  return Nothing_char ();
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table ();
void free_Maybe_char (Maybe_char * this );
#endif /* __Maybe_char__H_DECL__ */ 
#ifndef __StringBuffer_char__H_DECL__
#define __StringBuffer_char__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_char StringBuffer_char ;
typedef void (*free_StringBuffer_char_t) (StringBuffer_char * this );
typedef struct StringBuffer_char__H_Table {
  free_StringBuffer_char_t freeData ;
    StringBuffer_char (*clear) (StringBuffer_char sb );
    StringBuffer_char (*resize) (StringBuffer_char sb , size_t size );
    StringBuffer_char (*new) (size_t step );
    StringBuffer_char (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_char (*copySlice) (StringBuffer_char sb , size_t cursor , size_t size );
    StringBuffer_char (*copy) (StringBuffer_char sb );
    StringBuffer_char (*put) (StringBuffer_char sb , const char data );
    StringBuffer_char (*print) (StringBuffer_char sb , const char * data , size_t len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1359 */
    struct { /* ciciliStruct1360 */
      const char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct1361 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (const char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
  return FreedStringBuffer_char ();
}
StringBuffer_char clear_StringBuffer_char (StringBuffer_char sb );
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t size );
StringBuffer_char new_StringBuffer_char (size_t step );
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step );
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t cursor , size_t size );
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len );
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table ();
void free_StringBuffer_char (StringBuffer_char * this );
#endif /* __StringBuffer_char__H_DECL__ */ 
typedef const char * Str_ptr_t ;
typedef struct cicililE9XeAooi5n_AJvMavz6_BCtwDw_ {
  Str_ptr_t __h_0_mem ;
  Str_ptr_t __h_1_mem ;
} cicililE9XeAooi5n_AJvMavz6_BCtwDw_;
typedef cicililE9XeAooi5n_AJvMavz6_BCtwDw_ Str_iter_t ;
#ifndef __Str__H_DECL__
#define __Str__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Str class_Str ;
typedef class_Str * Str_x ;
#ifndef __Maybe_Str_x__H_DECL__
#define __Maybe_Str_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Str_x Maybe_Str_x ;
typedef void (*free_Maybe_Str_x_t) (Maybe_Str_x * this );
typedef struct Maybe_Str_x__H_Table {
  free_Maybe_Str_x_t freeData ;
} Maybe_Str_x__H_Table;
typedef struct Maybe_Str_x {
  const Maybe_Str_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1423 */
    struct { /* ciciliStruct1424 */
      Str_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1425 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Str_x;
Maybe_Str_x Just_Str_x (Str_x value );
Maybe_Str_x Nothing_Str_x ();
__attribute__((weak)) Maybe_Str_x Default_Maybe_Str_x () {
  return Nothing_Str_x ();
}
const Maybe_Str_x__H_Table * const get_Maybe_Str_x__H_Table ();
void free_Maybe_Str_x (Maybe_Str_x * this );
#endif /* __Maybe_Str_x__H_DECL__ */ 
#ifndef __Box_Str__H_DECL__
#define __Box_Str__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Str Box_Str ;
typedef void (*free_Box_Str_t) (Box_Str * this );
typedef struct Box_Str__H_Table {
  free_Box_Str_t freeData ;
    Box_Str (*new) (Str_x pointer );
    Box_Str (*clone) (Box_Str rc );
    Maybe_Str_x (*take) (Box_Str * this );
    Maybe_Str_x (*get) (Box_Str rc );
} Box_Str__H_Table;
typedef struct Box_Str {
  const Box_Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1455 */
    struct { /* ciciliStruct1456 */
      Str_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1457 */
    } Gone , _ ;
  } __h_data ;
} Box_Str;
Box_Str __h_Hold_Str_x (Str_x * pointer , int * count , size_t address );
Box_Str Gone_Str_x ();
__attribute__((weak)) Box_Str Default_Box_Str () {
  return Gone_Str_x ();
}
Box_Str new_Box_Str (Str_x pointer );
Box_Str clone_Box_Str (Box_Str rc );
Maybe_Str_x take_Box_Str (Box_Str * this );
Maybe_Str_x get_Box_Str (Box_Str rc );
const Box_Str__H_Table * const get_Box_Str__H_Table ();
void free_Box_Str (Box_Str * this );
#endif /* __Box_Str__H_DECL__ */ 
typedef Box_Str Str ;
typedef void (*free_Str_t) (Str_x * this );
typedef struct Str__H_Table {
  free_Str_t freeData ;
    Str_iter_t (*iterator) (Str vector );
    Str (*clear) (Str vector );
    Str (*resize) (Str vector , size_t len );
    Str (*pure) (size_t step );
    Str (*pureCapacity) (size_t capacity , size_t step );
    Str_ptr_t (*toArray) (Str vector );
    Str (*wrap) (const char item );
    size_t (*show) (CFile file , Str vector );
    Str (*copy) (Str vector );
    Str (*copySlice) (Str vector , size_t pos , size_t len );
    Str (*replaceAt) (Str vector , char item , size_t index );
    Str (*deleteAt) (Str vector , size_t index );
    Str (*insertAt) (Str vector , char item , size_t index );
    Str (*reverse) (Str vector );
    Str (*append) (Str lvector , Str rvector );
    Str (*push) (char item , Str vector );
    Str (*take) (size_t len , Str vector );
    Maybe_char (*last) (Str vector );
    Str (*init) (Str vector );
    size_t (*hasLen) (Str vector , size_t desired );
    size_t (*len) (Str vector );
    Str (*tail) (Str vector );
    Str (*drop) (size_t index , Str vector );
    Maybe_char (*head) (Str list );
    Maybe_char (*nth) (size_t index , Str vector );
} Str__H_Table;
typedef struct class_Str {
  const Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1521 */
    struct { /* ciciliStruct1522 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct1523 */
      Str __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct1524 */
    } None , _ ;
  } __h_data ;
} class_Str;
Str Buffer_char (StringBuffer_char buffer );
Str Slice_char (Str vector , size_t cursor , size_t size );
Str None_char ();
__attribute__((weak)) Str Default_Str () {
  return None_char ();
}
Str_iter_t iterator_Str (Str vector );
Str clear_Str (Str vector );
Str resize_Str (Str vector , size_t len );
Str pure_Str (size_t step );
Str pureCapacity_Str (size_t capacity , size_t step );
Str_ptr_t toArray_Str (Str vector );
Str wrap_Str (const char item );
size_t show_Str (CFile file , Str vector );
Str copy_Str (Str vector );
Str copySlice_Str (Str vector , size_t pos , size_t len );
Str replaceAt_Str (Str vector , char item , size_t index );
Str deleteAt_Str (Str vector , size_t index );
Str insertAt_Str (Str vector , char item , size_t index );
Str reverse_Str (Str vector );
Str append_Str (Str lvector , Str rvector );
Str push_Str (char item , Str vector );
Str take_Str (size_t len , Str vector );
Maybe_char last_Str (Str vector );
Str init_Str (Str vector );
size_t hasLen_Str (Str vector , size_t desired );
size_t len_Str (Str vector );
Str tail_Str (Str vector );
Str drop_Str (size_t index , Str vector );
Maybe_char head_Str (Str list );
Maybe_char nth_Str (size_t index , Str vector );
Str__H_Table * const get_Str__H_Table ();
void free_Str_x (Str_x * this );
#endif /* __Str__H_DECL__ */ 
#ifndef __Maybe_Str__H_DECL__
#define __Maybe_Str__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Str Maybe_Str ;
typedef void (*free_Maybe_Str_t) (Maybe_Str * this );
typedef struct Maybe_Str__H_Table {
  free_Maybe_Str_t freeData ;
} Maybe_Str__H_Table;
typedef struct Maybe_Str {
  const Maybe_Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1628 */
    struct { /* ciciliStruct1629 */
      Str __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1630 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Str;
Maybe_Str Just_Str (Str value );
Maybe_Str Nothing_Str ();
__attribute__((weak)) Maybe_Str Default_Maybe_Str () {
  return Nothing_Str ();
}
const Maybe_Str__H_Table * const get_Maybe_Str__H_Table ();
void free_Maybe_Str (Maybe_Str * this );
#endif /* __Maybe_Str__H_DECL__ */ 
#ifndef __Maybe_Char__H_DECL__
#define __Maybe_Char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Char Maybe_Char ;
typedef void (*free_Maybe_Char_t) (Maybe_Char * this );
typedef struct Maybe_Char__H_Table {
  free_Maybe_Char_t freeData ;
} Maybe_Char__H_Table;
typedef struct Maybe_Char {
  const Maybe_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1658 */
    struct { /* ciciliStruct1659 */
      Char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1660 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Char;
Maybe_Char Just_Char (Char value );
Maybe_Char Nothing_Char ();
__attribute__((weak)) Maybe_Char Default_Maybe_Char () {
  return Nothing_Char ();
}
const Maybe_Char__H_Table * const get_Maybe_Char__H_Table ();
void free_Maybe_Char (Maybe_Char * this );
#endif /* __Maybe_Char__H_DECL__ */ 
#ifndef __StringBuffer_Char__H_DECL__
#define __StringBuffer_Char__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_Char StringBuffer_Char ;
typedef void (*free_StringBuffer_Char_t) (StringBuffer_Char * this );
typedef struct StringBuffer_Char__H_Table {
  free_StringBuffer_Char_t freeData ;
    StringBuffer_Char (*clear) (StringBuffer_Char sb );
    StringBuffer_Char (*resize) (StringBuffer_Char sb , size_t size );
    StringBuffer_Char (*new) (size_t step );
    StringBuffer_Char (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_Char (*copySlice) (StringBuffer_Char sb , size_t cursor , size_t size );
    StringBuffer_Char (*copy) (StringBuffer_Char sb );
    StringBuffer_Char (*put) (StringBuffer_Char sb , const Char data );
    StringBuffer_Char (*print) (StringBuffer_Char sb , const Char * data , size_t len );
} StringBuffer_Char__H_Table;
typedef struct StringBuffer_Char {
  const StringBuffer_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1708 */
    struct { /* ciciliStruct1709 */
      Char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct1710 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_Char;
StringBuffer_Char MakeStringBuffer_Char (Char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_Char FreedStringBuffer_Char ();
__attribute__((weak)) StringBuffer_Char Default_StringBuffer_Char () {
  return FreedStringBuffer_Char ();
}
StringBuffer_Char clear_StringBuffer_Char (StringBuffer_Char sb );
StringBuffer_Char resize_StringBuffer_Char (StringBuffer_Char sb , size_t size );
StringBuffer_Char new_StringBuffer_Char (size_t step );
StringBuffer_Char newCapacity_StringBuffer_Char (size_t capacity , size_t step );
StringBuffer_Char copySlice_StringBuffer_Char (StringBuffer_Char sb , size_t cursor , size_t size );
StringBuffer_Char copy_StringBuffer_Char (StringBuffer_Char sb );
StringBuffer_Char put_StringBuffer_Char (StringBuffer_Char sb , const Char data );
StringBuffer_Char print_StringBuffer_Char (StringBuffer_Char sb , const Char * data , size_t len );
const StringBuffer_Char__H_Table * const get_StringBuffer_Char__H_Table ();
void free_StringBuffer_Char (StringBuffer_Char * this );
#endif /* __StringBuffer_Char__H_DECL__ */ 
typedef Char * String_ptr_t ;
typedef struct cicili6fiDQ_wuZcNpYUcriOguesPFbS4_ {
  String_ptr_t __h_0_mem ;
  String_ptr_t __h_1_mem ;
} cicili6fiDQ_wuZcNpYUcriOguesPFbS4_;
typedef cicili6fiDQ_wuZcNpYUcriOguesPFbS4_ String_iter_t ;
#ifndef __String__H_DECL__
#define __String__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_String class_String ;
typedef class_String * String_x ;
#ifndef __Maybe_String_x__H_DECL__
#define __Maybe_String_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_String_x Maybe_String_x ;
typedef void (*free_Maybe_String_x_t) (Maybe_String_x * this );
typedef struct Maybe_String_x__H_Table {
  free_Maybe_String_x_t freeData ;
} Maybe_String_x__H_Table;
typedef struct Maybe_String_x {
  const Maybe_String_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1772 */
    struct { /* ciciliStruct1773 */
      String_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1774 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_String_x;
Maybe_String_x Just_String_x (String_x value );
Maybe_String_x Nothing_String_x ();
__attribute__((weak)) Maybe_String_x Default_Maybe_String_x () {
  return Nothing_String_x ();
}
const Maybe_String_x__H_Table * const get_Maybe_String_x__H_Table ();
void free_Maybe_String_x (Maybe_String_x * this );
#endif /* __Maybe_String_x__H_DECL__ */ 
#ifndef __Box_String__H_DECL__
#define __Box_String__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_String Box_String ;
typedef void (*free_Box_String_t) (Box_String * this );
typedef struct Box_String__H_Table {
  free_Box_String_t freeData ;
    Box_String (*new) (String_x pointer );
    Box_String (*clone) (Box_String rc );
    Maybe_String_x (*take) (Box_String * this );
    Maybe_String_x (*get) (Box_String rc );
} Box_String__H_Table;
typedef struct Box_String {
  const Box_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1804 */
    struct { /* ciciliStruct1805 */
      String_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1806 */
    } Gone , _ ;
  } __h_data ;
} Box_String;
Box_String __h_Hold_String_x (String_x * pointer , int * count , size_t address );
Box_String Gone_String_x ();
__attribute__((weak)) Box_String Default_Box_String () {
  return Gone_String_x ();
}
Box_String new_Box_String (String_x pointer );
Box_String clone_Box_String (Box_String rc );
Maybe_String_x take_Box_String (Box_String * this );
Maybe_String_x get_Box_String (Box_String rc );
const Box_String__H_Table * const get_Box_String__H_Table ();
void free_Box_String (Box_String * this );
#endif /* __Box_String__H_DECL__ */ 
typedef Box_String String ;
typedef void (*free_String_t) (String_x * this );
typedef struct String__H_Table {
  free_String_t freeData ;
    String_iter_t (*iterator) (String vector );
    String (*clear) (String vector );
    String (*resize) (String vector , size_t len );
    String (*pure) (size_t step );
    String (*pureCapacity) (size_t capacity , size_t step );
    String_ptr_t (*toArray) (String vector );
    String (*wrap) (const Char item );
    size_t (*show) (CFile file , String vector );
    String (*copy) (String vector );
    String (*copySlice) (String vector , size_t pos , size_t len );
    String (*replaceAt) (String vector , Char item , size_t index );
    String (*deleteAt) (String vector , size_t index );
    String (*insertAt) (String vector , Char item , size_t index );
    String (*reverse) (String vector );
    String (*append) (String lvector , String rvector );
    String (*push) (Char item , String vector );
    String (*take) (size_t len , String vector );
    Maybe_Char (*last) (String vector );
    String (*init) (String vector );
    size_t (*hasLen) (String vector , size_t desired );
    size_t (*len) (String vector );
    String (*tail) (String vector );
    String (*drop) (size_t index , String vector );
    Maybe_Char (*head) (String list );
    Maybe_Char (*nth) (size_t index , String vector );
} String__H_Table;
typedef struct class_String {
  const String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1870 */
    struct { /* ciciliStruct1871 */
      StringBuffer_Char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct1872 */
      String __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct1873 */
    } None , _ ;
  } __h_data ;
} class_String;
String Buffer_Char (StringBuffer_Char buffer );
String Slice_Char (String vector , size_t cursor , size_t size );
String None_Char ();
__attribute__((weak)) String Default_String () {
  return None_Char ();
}
String_iter_t iterator_String (String vector );
String clear_String (String vector );
String resize_String (String vector , size_t len );
String pure_String (size_t step );
String pureCapacity_String (size_t capacity , size_t step );
String_ptr_t toArray_String (String vector );
String wrap_String (const Char item );
size_t show_String (CFile file , String vector );
String copy_String (String vector );
String copySlice_String (String vector , size_t pos , size_t len );
String replaceAt_String (String vector , Char item , size_t index );
String deleteAt_String (String vector , size_t index );
String insertAt_String (String vector , Char item , size_t index );
String reverse_String (String vector );
String append_String (String lvector , String rvector );
String push_String (Char item , String vector );
String take_String (size_t len , String vector );
Maybe_Char last_String (String vector );
String init_String (String vector );
size_t hasLen_String (String vector , size_t desired );
size_t len_String (String vector );
String tail_String (String vector );
String drop_String (size_t index , String vector );
Maybe_Char head_String (String list );
Maybe_Char nth_String (size_t index , String vector );
String__H_Table * const get_String__H_Table ();
void free_String_x (String_x * this );
#endif /* __String__H_DECL__ */ 
#ifndef __Maybe_String__H_DECL__
#define __Maybe_String__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_String Maybe_String ;
typedef void (*free_Maybe_String_t) (Maybe_String * this );
typedef struct Maybe_String__H_Table {
  free_Maybe_String_t freeData ;
} Maybe_String__H_Table;
typedef struct Maybe_String {
  const Maybe_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1977 */
    struct { /* ciciliStruct1978 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1979 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_String;
Maybe_String Just_String (String value );
Maybe_String Nothing_String ();
__attribute__((weak)) Maybe_String Default_Maybe_String () {
  return Nothing_String ();
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table ();
void free_Maybe_String (Maybe_String * this );
#endif /* __Maybe_String__H_DECL__ */ 
#ifndef __Range_int__H_DECL__
#define __Range_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_Range_int class_Range_int ;
typedef class_Range_int * Range_int ;
typedef void (*free_Range_int_t) (Range_int * this_ptr );
typedef struct Range_int__H_Table {
  free_Range_int_t freeClass ;
    int (*show) (CFile file , Range_int list );
    Range_int (*drop) (int len , Range_int list );
    List_int (*take) (int len , Range_int list );
    Range_int (*next) (Range_int list );
} Range_int__H_Table;
typedef struct class_Range_int {
  const Range_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2009 */
    struct { /* ciciliStruct2010 */
      int __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2011 */
    } Nil , _ ;
  } __h_data ;
} class_Range_int;
Range_int Cons_Range_int (int from , int to , int step );
Range_int Nil_Range_int ();
__attribute__((weak)) Range_int Default_Range_int () {
  return Nil_Range_int ();
}
int show_Range_int (CFile file , Range_int list );
Range_int drop_Range_int (int len , Range_int list );
List_int take_Range_int (int len , Range_int list );
Range_int next_Range_int (Range_int list );
Range_int__H_Table * const get_Range_int__H_Table ();
void free_Range_int (Range_int * this_ptr );
#endif /* __Range_int__H_DECL__ */ 
Range_int new_Range_int (int from , int to , int step );
#ifndef __Range_char__H_DECL__
#define __Range_char__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_Range_char class_Range_char ;
typedef class_Range_char * Range_char ;
typedef void (*free_Range_char_t) (Range_char * this_ptr );
typedef struct Range_char__H_Table {
  free_Range_char_t freeClass ;
    int (*show) (CFile file , Range_char list );
    Range_char (*drop) (int len , Range_char list );
    List_char (*take) (int len , Range_char list );
    Range_char (*next) (Range_char list );
} Range_char__H_Table;
typedef struct class_Range_char {
  const Range_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2055 */
    struct { /* ciciliStruct2056 */
      char __h_0_mem ;
      char __h_1_mem ;
      char __h_2_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2057 */
    } Nil , _ ;
  } __h_data ;
} class_Range_char;
Range_char Cons_Range_char (char from , char to , char step );
Range_char Nil_Range_char ();
__attribute__((weak)) Range_char Default_Range_char () {
  return Nil_Range_char ();
}
int show_Range_char (CFile file , Range_char list );
Range_char drop_Range_char (int len , Range_char list );
List_char take_Range_char (int len , Range_char list );
Range_char next_Range_char (Range_char list );
Range_char__H_Table * const get_Range_char__H_Table ();
void free_Range_char (Range_char * this_ptr );
#endif /* __Range_char__H_DECL__ */ 
Range_char new_Range_char (char from , char to , char step );
#ifndef __Maybe_List_Bool__H_DECL__
#define __Maybe_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Bool Maybe_List_Bool ;
typedef void (*free_Maybe_List_Bool_t) (Maybe_List_Bool * this );
typedef struct Maybe_List_Bool__H_Table {
  free_Maybe_List_Bool_t freeData ;
} Maybe_List_Bool__H_Table;
typedef struct Maybe_List_Bool {
  const Maybe_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2099 */
    struct { /* ciciliStruct2100 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2101 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Just_List_Bool (List_Bool value );
Maybe_List_Bool Nothing_List_Bool ();
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool () {
  return Nothing_List_Bool ();
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table ();
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __Maybe_List_Bool__H_DECL__ */ 
#ifndef __List_List_Bool__H_DECL__
#define __List_List_Bool__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_List_Bool class_List_List_Bool ;
typedef class_List_List_Bool * List_List_Bool ;
typedef void (*free_List_List_Bool_t) (List_List_Bool * this_ptr );
typedef struct List_List_Bool__H_Table {
  free_List_List_Bool_t freeClass ;
    List_Bool * (*toArray) (List_List_Bool list );
    List_List_Bool (*wrap) (const List_Bool item );
    List_List_Bool (*pure) (const List_Bool * buf , size_t len );
    size_t (*show) (CFile file , List_List_Bool list );
    List_List_Bool (*copy) (List_List_Bool list );
    List_List_Bool (*replaceAt) (List_List_Bool list , List_Bool item , size_t index );
    List_List_Bool (*deleteAt) (List_List_Bool list , size_t index );
    List_List_Bool (*insertAt) (List_List_Bool llist , List_Bool item , size_t index );
    List_List_Bool (*replace) (List_List_Bool list , List_Bool item , List_List_Bool aimed );
    List_List_Bool (*delete) (List_List_Bool list , List_List_Bool aimed );
    List_List_Bool (*insert) (List_List_Bool llist , List_Bool item , List_List_Bool rlist );
    List_List_Bool (*reverse) (List_List_Bool list );
    List_List_Bool (*append) (List_List_Bool llist , List_List_Bool rlist );
    List_List_Bool (*push) (List_Bool item , List_List_Bool list );
    List_List_Bool (*take) (size_t len , List_List_Bool list );
    List_List_Bool (*last) (List_List_Bool list );
    List_List_Bool (*init) (List_List_Bool list );
    size_t (*hasLen) (List_List_Bool list , size_t desired );
    size_t (*len) (List_List_Bool list );
    List_List_Bool (*tail) (List_List_Bool list );
    List_List_Bool (*drop) (size_t len , List_List_Bool list );
    Maybe_List_Bool (*head) (List_List_Bool list );
    List_List_Bool (*nthcdr) (size_t index , List_List_Bool list );
    Maybe_List_Bool (*nth) (size_t index , List_List_Bool list );
} List_List_Bool__H_Table;
typedef struct class_List_List_Bool {
  const List_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2151 */
    struct { /* ciciliStruct2152 */
      List_Bool __h_0_mem ;
      List_List_Bool __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2153 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_Bool;
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail );
List_List_Bool Nil_List_Bool ();
__attribute__((weak)) List_List_Bool Default_List_List_Bool () {
  return Nil_List_Bool ();
}
List_Bool * toArray_List_List_Bool (List_List_Bool list );
List_List_Bool wrap_List_List_Bool (const List_Bool item );
List_List_Bool pure_List_List_Bool (const List_Bool * buf , size_t len );
size_t show_List_List_Bool (CFile file , List_List_Bool list );
List_List_Bool copy_List_List_Bool (List_List_Bool list );
List_List_Bool replaceAt_List_List_Bool (List_List_Bool list , List_Bool item , size_t index );
List_List_Bool deleteAt_List_List_Bool (List_List_Bool list , size_t index );
List_List_Bool insertAt_List_List_Bool (List_List_Bool llist , List_Bool item , size_t index );
List_List_Bool replace_List_List_Bool (List_List_Bool list , List_Bool item , List_List_Bool aimed );
List_List_Bool delete_List_List_Bool (List_List_Bool list , List_List_Bool aimed );
List_List_Bool insert_List_List_Bool (List_List_Bool llist , List_Bool item , List_List_Bool rlist );
List_List_Bool reverse_List_List_Bool (List_List_Bool list );
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist );
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list );
List_List_Bool take_List_List_Bool (size_t len , List_List_Bool list );
List_List_Bool last_List_List_Bool (List_List_Bool list );
List_List_Bool init_List_List_Bool (List_List_Bool list );
size_t hasLen_List_List_Bool (List_List_Bool list , size_t desired );
size_t len_List_List_Bool (List_List_Bool list );
List_List_Bool tail_List_List_Bool (List_List_Bool list );
List_List_Bool drop_List_List_Bool (size_t len , List_List_Bool list );
Maybe_List_Bool head_List_List_Bool (List_List_Bool list );
List_List_Bool nthcdr_List_List_Bool (size_t index , List_List_Bool list );
Maybe_List_Bool nth_List_List_Bool (size_t index , List_List_Bool list );
List_List_Bool__H_Table * const get_List_List_Bool__H_Table ();
void free_List_List_Bool (List_List_Bool * this_ptr );
#endif /* __List_List_Bool__H_DECL__ */ 
#ifndef __Maybe_List_List_Bool__H_DECL__
#define __Maybe_List_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_List_Bool Maybe_List_List_Bool ;
typedef void (*free_Maybe_List_List_Bool_t) (Maybe_List_List_Bool * this );
typedef struct Maybe_List_List_Bool__H_Table {
  free_Maybe_List_List_Bool_t freeData ;
} Maybe_List_List_Bool__H_Table;
typedef struct Maybe_List_List_Bool {
  const Maybe_List_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2251 */
    struct { /* ciciliStruct2252 */
      List_List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2253 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_List_Bool;
Maybe_List_List_Bool Just_List_List_Bool (List_List_Bool value );
Maybe_List_List_Bool Nothing_List_List_Bool ();
__attribute__((weak)) Maybe_List_List_Bool Default_Maybe_List_List_Bool () {
  return Nothing_List_List_Bool ();
}
const Maybe_List_List_Bool__H_Table * const get_Maybe_List_List_Bool__H_Table ();
void free_Maybe_List_List_Bool (Maybe_List_List_Bool * this );
#endif /* __Maybe_List_List_Bool__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2281 */
    struct { /* ciciliStruct2282 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2283 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __List_List_int__H_DECL__
#define __List_List_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_List_int class_List_List_int ;
typedef class_List_List_int * List_List_int ;
typedef void (*free_List_List_int_t) (List_List_int * this_ptr );
typedef struct List_List_int__H_Table {
  free_List_List_int_t freeClass ;
    List_int * (*toArray) (List_List_int list );
    List_List_int (*wrap) (const List_int item );
    List_List_int (*pure) (const List_int * buf , size_t len );
    size_t (*show) (CFile file , List_List_int list );
    List_List_int (*copy) (List_List_int list );
    List_List_int (*replaceAt) (List_List_int list , List_int item , size_t index );
    List_List_int (*deleteAt) (List_List_int list , size_t index );
    List_List_int (*insertAt) (List_List_int llist , List_int item , size_t index );
    List_List_int (*replace) (List_List_int list , List_int item , List_List_int aimed );
    List_List_int (*delete) (List_List_int list , List_List_int aimed );
    List_List_int (*insert) (List_List_int llist , List_int item , List_List_int rlist );
    List_List_int (*reverse) (List_List_int list );
    List_List_int (*append) (List_List_int llist , List_List_int rlist );
    List_List_int (*push) (List_int item , List_List_int list );
    List_List_int (*take) (size_t len , List_List_int list );
    List_List_int (*last) (List_List_int list );
    List_List_int (*init) (List_List_int list );
    size_t (*hasLen) (List_List_int list , size_t desired );
    size_t (*len) (List_List_int list );
    List_List_int (*tail) (List_List_int list );
    List_List_int (*drop) (size_t len , List_List_int list );
    Maybe_List_int (*head) (List_List_int list );
    List_List_int (*nthcdr) (size_t index , List_List_int list );
    Maybe_List_int (*nth) (size_t index , List_List_int list );
} List_List_int__H_Table;
typedef struct class_List_List_int {
  const List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2333 */
    struct { /* ciciliStruct2334 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2335 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_int;
List_List_int Cons_List_int (List_int head , List_List_int tail );
List_List_int Nil_List_int ();
__attribute__((weak)) List_List_int Default_List_List_int () {
  return Nil_List_int ();
}
List_int * toArray_List_List_int (List_List_int list );
List_List_int wrap_List_List_int (const List_int item );
List_List_int pure_List_List_int (const List_int * buf , size_t len );
size_t show_List_List_int (CFile file , List_List_int list );
List_List_int copy_List_List_int (List_List_int list );
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index );
List_List_int deleteAt_List_List_int (List_List_int list , size_t index );
List_List_int insertAt_List_List_int (List_List_int llist , List_int item , size_t index );
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed );
List_List_int delete_List_List_int (List_List_int list , List_List_int aimed );
List_List_int insert_List_List_int (List_List_int llist , List_int item , List_List_int rlist );
List_List_int reverse_List_List_int (List_List_int list );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
List_List_int push_List_List_int (List_int item , List_List_int list );
List_List_int take_List_List_int (size_t len , List_List_int list );
List_List_int last_List_List_int (List_List_int list );
List_List_int init_List_List_int (List_List_int list );
size_t hasLen_List_List_int (List_List_int list , size_t desired );
size_t len_List_List_int (List_List_int list );
List_List_int tail_List_List_int (List_List_int list );
List_List_int drop_List_List_int (size_t len , List_List_int list );
Maybe_List_int head_List_List_int (List_List_int list );
List_List_int nthcdr_List_List_int (size_t index , List_List_int list );
Maybe_List_int nth_List_List_int (size_t index , List_List_int list );
List_List_int__H_Table * const get_List_List_int__H_Table ();
void free_List_List_int (List_List_int * this_ptr );
#endif /* __List_List_int__H_DECL__ */ 
#ifndef __Maybe_List_List_int__H_DECL__
#define __Maybe_List_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_List_int Maybe_List_List_int ;
typedef void (*free_Maybe_List_List_int_t) (Maybe_List_List_int * this );
typedef struct Maybe_List_List_int__H_Table {
  free_Maybe_List_List_int_t freeData ;
} Maybe_List_List_int__H_Table;
typedef struct Maybe_List_List_int {
  const Maybe_List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2433 */
    struct { /* ciciliStruct2434 */
      List_List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2435 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_List_int;
Maybe_List_List_int Just_List_List_int (List_List_int value );
Maybe_List_List_int Nothing_List_List_int ();
__attribute__((weak)) Maybe_List_List_int Default_Maybe_List_List_int () {
  return Nothing_List_List_int ();
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table ();
void free_Maybe_List_List_int (Maybe_List_List_int * this );
#endif /* __Maybe_List_List_int__H_DECL__ */ 
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_char Maybe_List_char ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char__H_Table {
  free_Maybe_List_char_t freeData ;
} Maybe_List_char__H_Table;
typedef struct Maybe_List_char {
  const Maybe_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2463 */
    struct { /* ciciliStruct2464 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2465 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Just_List_char (List_char value );
Maybe_List_char Nothing_List_char ();
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char () {
  return Nothing_List_char ();
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __List_List_char__H_DECL__
#define __List_List_char__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_List_char class_List_List_char ;
typedef class_List_List_char * List_List_char ;
typedef void (*free_List_List_char_t) (List_List_char * this_ptr );
typedef struct List_List_char__H_Table {
  free_List_List_char_t freeClass ;
    List_char * (*toArray) (List_List_char list );
    List_List_char (*wrap) (const List_char item );
    List_List_char (*pure) (const List_char * buf , size_t len );
    size_t (*show) (CFile file , List_List_char list );
    List_List_char (*copy) (List_List_char list );
    List_List_char (*replaceAt) (List_List_char list , List_char item , size_t index );
    List_List_char (*deleteAt) (List_List_char list , size_t index );
    List_List_char (*insertAt) (List_List_char llist , List_char item , size_t index );
    List_List_char (*replace) (List_List_char list , List_char item , List_List_char aimed );
    List_List_char (*delete) (List_List_char list , List_List_char aimed );
    List_List_char (*insert) (List_List_char llist , List_char item , List_List_char rlist );
    List_List_char (*reverse) (List_List_char list );
    List_List_char (*append) (List_List_char llist , List_List_char rlist );
    List_List_char (*push) (List_char item , List_List_char list );
    List_List_char (*take) (size_t len , List_List_char list );
    List_List_char (*last) (List_List_char list );
    List_List_char (*init) (List_List_char list );
    size_t (*hasLen) (List_List_char list , size_t desired );
    size_t (*len) (List_List_char list );
    List_List_char (*tail) (List_List_char list );
    List_List_char (*drop) (size_t len , List_List_char list );
    Maybe_List_char (*head) (List_List_char list );
    List_List_char (*nthcdr) (size_t index , List_List_char list );
    Maybe_List_char (*nth) (size_t index , List_List_char list );
} List_List_char__H_Table;
typedef struct class_List_List_char {
  const List_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2515 */
    struct { /* ciciliStruct2516 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2517 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_char;
List_List_char Cons_List_char (List_char head , List_List_char tail );
List_List_char Nil_List_char ();
__attribute__((weak)) List_List_char Default_List_List_char () {
  return Nil_List_char ();
}
List_char * toArray_List_List_char (List_List_char list );
List_List_char wrap_List_List_char (const List_char item );
List_List_char pure_List_List_char (const List_char * buf , size_t len );
size_t show_List_List_char (CFile file , List_List_char list );
List_List_char copy_List_List_char (List_List_char list );
List_List_char replaceAt_List_List_char (List_List_char list , List_char item , size_t index );
List_List_char deleteAt_List_List_char (List_List_char list , size_t index );
List_List_char insertAt_List_List_char (List_List_char llist , List_char item , size_t index );
List_List_char replace_List_List_char (List_List_char list , List_char item , List_List_char aimed );
List_List_char delete_List_List_char (List_List_char list , List_List_char aimed );
List_List_char insert_List_List_char (List_List_char llist , List_char item , List_List_char rlist );
List_List_char reverse_List_List_char (List_List_char list );
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist );
List_List_char push_List_List_char (List_char item , List_List_char list );
List_List_char take_List_List_char (size_t len , List_List_char list );
List_List_char last_List_List_char (List_List_char list );
List_List_char init_List_List_char (List_List_char list );
size_t hasLen_List_List_char (List_List_char list , size_t desired );
size_t len_List_List_char (List_List_char list );
List_List_char tail_List_List_char (List_List_char list );
List_List_char drop_List_List_char (size_t len , List_List_char list );
Maybe_List_char head_List_List_char (List_List_char list );
List_List_char nthcdr_List_List_char (size_t index , List_List_char list );
Maybe_List_char nth_List_List_char (size_t index , List_List_char list );
List_List_char__H_Table * const get_List_List_char__H_Table ();
void free_List_List_char (List_List_char * this_ptr );
#endif /* __List_List_char__H_DECL__ */ 
#ifndef __Maybe_List_List_char__H_DECL__
#define __Maybe_List_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_List_char Maybe_List_List_char ;
typedef void (*free_Maybe_List_List_char_t) (Maybe_List_List_char * this );
typedef struct Maybe_List_List_char__H_Table {
  free_Maybe_List_List_char_t freeData ;
} Maybe_List_List_char__H_Table;
typedef struct Maybe_List_List_char {
  const Maybe_List_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2615 */
    struct { /* ciciliStruct2616 */
      List_List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2617 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_List_char;
Maybe_List_List_char Just_List_List_char (List_List_char value );
Maybe_List_List_char Nothing_List_List_char ();
__attribute__((weak)) Maybe_List_List_char Default_Maybe_List_List_char () {
  return Nothing_List_List_char ();
}
const Maybe_List_List_char__H_Table * const get_Maybe_List_List_char__H_Table ();
void free_Maybe_List_List_char (Maybe_List_List_char * this );
#endif /* __Maybe_List_List_char__H_DECL__ */ 
#ifndef __Maybe_CStr__H_DECL__
#define __Maybe_CStr__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_CStr Maybe_CStr ;
typedef void (*free_Maybe_CStr_t) (Maybe_CStr * this );
typedef struct Maybe_CStr__H_Table {
  free_Maybe_CStr_t freeData ;
} Maybe_CStr__H_Table;
typedef struct Maybe_CStr {
  const Maybe_CStr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2645 */
    struct { /* ciciliStruct2646 */
      CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2647 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_CStr;
Maybe_CStr Just_CStr (CStr value );
Maybe_CStr Nothing_CStr ();
__attribute__((weak)) Maybe_CStr Default_Maybe_CStr () {
  return Nothing_CStr ();
}
const Maybe_CStr__H_Table * const get_Maybe_CStr__H_Table ();
void free_Maybe_CStr (Maybe_CStr * this );
#endif /* __Maybe_CStr__H_DECL__ */ 
#ifndef __List_CStr__H_DECL__
#define __List_CStr__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_CStr class_List_CStr ;
typedef class_List_CStr * List_CStr ;
typedef void (*free_List_CStr_t) (List_CStr * this_ptr );
typedef struct List_CStr__H_Table {
  free_List_CStr_t freeClass ;
    CStr * (*toArray) (List_CStr list );
    List_CStr (*wrap) (const CStr item );
    List_CStr (*pure) (const CStr * buf , size_t len );
    size_t (*show) (CFile file , List_CStr list );
    List_CStr (*copy) (List_CStr list );
    List_CStr (*replaceAt) (List_CStr list , CStr item , size_t index );
    List_CStr (*deleteAt) (List_CStr list , size_t index );
    List_CStr (*insertAt) (List_CStr llist , CStr item , size_t index );
    List_CStr (*replace) (List_CStr list , CStr item , List_CStr aimed );
    List_CStr (*delete) (List_CStr list , List_CStr aimed );
    List_CStr (*insert) (List_CStr llist , CStr item , List_CStr rlist );
    List_CStr (*reverse) (List_CStr list );
    List_CStr (*append) (List_CStr llist , List_CStr rlist );
    List_CStr (*push) (CStr item , List_CStr list );
    List_CStr (*take) (size_t len , List_CStr list );
    List_CStr (*last) (List_CStr list );
    List_CStr (*init) (List_CStr list );
    size_t (*hasLen) (List_CStr list , size_t desired );
    size_t (*len) (List_CStr list );
    List_CStr (*tail) (List_CStr list );
    List_CStr (*drop) (size_t len , List_CStr list );
    Maybe_CStr (*head) (List_CStr list );
    List_CStr (*nthcdr) (size_t index , List_CStr list );
    Maybe_CStr (*nth) (size_t index , List_CStr list );
} List_CStr__H_Table;
typedef struct class_List_CStr {
  const List_CStr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2697 */
    struct { /* ciciliStruct2698 */
      CStr __h_0_mem ;
      List_CStr __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2699 */
    } Nil , _ ;
  } __h_data ;
} class_List_CStr;
List_CStr Cons_CStr (CStr head , List_CStr tail );
List_CStr Nil_CStr ();
__attribute__((weak)) List_CStr Default_List_CStr () {
  return Nil_CStr ();
}
CStr * toArray_List_CStr (List_CStr list );
List_CStr wrap_List_CStr (const CStr item );
List_CStr pure_List_CStr (const CStr * buf , size_t len );
size_t show_List_CStr (CFile file , List_CStr list );
List_CStr copy_List_CStr (List_CStr list );
List_CStr replaceAt_List_CStr (List_CStr list , CStr item , size_t index );
List_CStr deleteAt_List_CStr (List_CStr list , size_t index );
List_CStr insertAt_List_CStr (List_CStr llist , CStr item , size_t index );
List_CStr replace_List_CStr (List_CStr list , CStr item , List_CStr aimed );
List_CStr delete_List_CStr (List_CStr list , List_CStr aimed );
List_CStr insert_List_CStr (List_CStr llist , CStr item , List_CStr rlist );
List_CStr reverse_List_CStr (List_CStr list );
List_CStr append_List_CStr (List_CStr llist , List_CStr rlist );
List_CStr push_List_CStr (CStr item , List_CStr list );
List_CStr take_List_CStr (size_t len , List_CStr list );
List_CStr last_List_CStr (List_CStr list );
List_CStr init_List_CStr (List_CStr list );
size_t hasLen_List_CStr (List_CStr list , size_t desired );
size_t len_List_CStr (List_CStr list );
List_CStr tail_List_CStr (List_CStr list );
List_CStr drop_List_CStr (size_t len , List_CStr list );
Maybe_CStr head_List_CStr (List_CStr list );
List_CStr nthcdr_List_CStr (size_t index , List_CStr list );
Maybe_CStr nth_List_CStr (size_t index , List_CStr list );
List_CStr__H_Table * const get_List_CStr__H_Table ();
void free_List_CStr (List_CStr * this_ptr );
#endif /* __List_CStr__H_DECL__ */ 
#ifndef __Maybe_List_CStr__H_DECL__
#define __Maybe_List_CStr__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_CStr Maybe_List_CStr ;
typedef void (*free_Maybe_List_CStr_t) (Maybe_List_CStr * this );
typedef struct Maybe_List_CStr__H_Table {
  free_Maybe_List_CStr_t freeData ;
} Maybe_List_CStr__H_Table;
typedef struct Maybe_List_CStr {
  const Maybe_List_CStr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2797 */
    struct { /* ciciliStruct2798 */
      List_CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2799 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_CStr;
Maybe_List_CStr Just_List_CStr (List_CStr value );
Maybe_List_CStr Nothing_List_CStr ();
__attribute__((weak)) Maybe_List_CStr Default_Maybe_List_CStr () {
  return Nothing_List_CStr ();
}
const Maybe_List_CStr__H_Table * const get_Maybe_List_CStr__H_Table ();
void free_Maybe_List_CStr (Maybe_List_CStr * this );
#endif /* __Maybe_List_CStr__H_DECL__ */ 
#ifndef __Maybe_List_Bool__H_DECL__
#define __Maybe_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Bool Maybe_List_Bool ;
typedef void (*free_Maybe_List_Bool_t) (Maybe_List_Bool * this );
typedef struct Maybe_List_Bool__H_Table {
  free_Maybe_List_Bool_t freeData ;
} Maybe_List_Bool__H_Table;
typedef struct Maybe_List_Bool {
  const Maybe_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2829 */
    struct { /* ciciliStruct2830 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2831 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Just_List_Bool (List_Bool value );
Maybe_List_Bool Nothing_List_Bool ();
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool () {
  return Nothing_List_Bool ();
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table ();
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __Maybe_List_Bool__H_DECL__ */ 
#ifndef __Cell_List_Bool__H_DECL__
#define __Cell_List_Bool__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Cell_List_Bool Cell_List_Bool ;
typedef void (*free_Cell_List_Bool_t) (Cell_List_Bool * this );
typedef struct Cell_List_Bool__H_Table {
  free_Cell_List_Bool_t freeData ;
    Cell_List_Bool (*new) (List_Bool pointer );
    Maybe_List_Bool (*take) (Cell_List_Bool * this );
    Maybe_List_Bool (*get) (Cell_List_Bool life );
} Cell_List_Bool__H_Table;
typedef struct Cell_List_Bool {
  const Cell_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2860 */
    struct { /* ciciliStruct2861 */
      List_Bool * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2862 */
    } Dead , _ ;
  } __h_data ;
} Cell_List_Bool;
Cell_List_Bool __h_Alive_List_Bool (List_Bool * pointer , size_t address );
Cell_List_Bool Dead_List_Bool ();
__attribute__((weak)) Cell_List_Bool Default_Cell_List_Bool () {
  return Dead_List_Bool ();
}
Cell_List_Bool new_Cell_List_Bool (List_Bool pointer );
Maybe_List_Bool take_Cell_List_Bool (Cell_List_Bool * this );
Maybe_List_Bool get_Cell_List_Bool (Cell_List_Bool life );
const Cell_List_Bool__H_Table * const get_Cell_List_Bool__H_Table ();
void free_Cell_List_Bool (Cell_List_Bool * this );
#endif /* __Cell_List_Bool__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2901 */
    struct { /* ciciliStruct2902 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2903 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __Cell_List_int__H_DECL__
#define __Cell_List_int__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Cell_List_int Cell_List_int ;
typedef void (*free_Cell_List_int_t) (Cell_List_int * this );
typedef struct Cell_List_int__H_Table {
  free_Cell_List_int_t freeData ;
    Cell_List_int (*new) (List_int pointer );
    Maybe_List_int (*take) (Cell_List_int * this );
    Maybe_List_int (*get) (Cell_List_int life );
} Cell_List_int__H_Table;
typedef struct Cell_List_int {
  const Cell_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2932 */
    struct { /* ciciliStruct2933 */
      List_int * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2934 */
    } Dead , _ ;
  } __h_data ;
} Cell_List_int;
Cell_List_int __h_Alive_List_int (List_int * pointer , size_t address );
Cell_List_int Dead_List_int ();
__attribute__((weak)) Cell_List_int Default_Cell_List_int () {
  return Dead_List_int ();
}
Cell_List_int new_Cell_List_int (List_int pointer );
Maybe_List_int take_Cell_List_int (Cell_List_int * this );
Maybe_List_int get_Cell_List_int (Cell_List_int life );
const Cell_List_int__H_Table * const get_Cell_List_int__H_Table ();
void free_Cell_List_int (Cell_List_int * this );
#endif /* __Cell_List_int__H_DECL__ */ 
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_char Maybe_List_char ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char__H_Table {
  free_Maybe_List_char_t freeData ;
} Maybe_List_char__H_Table;
typedef struct Maybe_List_char {
  const Maybe_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2973 */
    struct { /* ciciliStruct2974 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2975 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Just_List_char (List_char value );
Maybe_List_char Nothing_List_char ();
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char () {
  return Nothing_List_char ();
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __Cell_List_char__H_DECL__
#define __Cell_List_char__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Cell_List_char Cell_List_char ;
typedef void (*free_Cell_List_char_t) (Cell_List_char * this );
typedef struct Cell_List_char__H_Table {
  free_Cell_List_char_t freeData ;
    Cell_List_char (*new) (List_char pointer );
    Maybe_List_char (*take) (Cell_List_char * this );
    Maybe_List_char (*get) (Cell_List_char life );
} Cell_List_char__H_Table;
typedef struct Cell_List_char {
  const Cell_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3004 */
    struct { /* ciciliStruct3005 */
      List_char * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct3006 */
    } Dead , _ ;
  } __h_data ;
} Cell_List_char;
Cell_List_char __h_Alive_List_char (List_char * pointer , size_t address );
Cell_List_char Dead_List_char ();
__attribute__((weak)) Cell_List_char Default_Cell_List_char () {
  return Dead_List_char ();
}
Cell_List_char new_Cell_List_char (List_char pointer );
Maybe_List_char take_Cell_List_char (Cell_List_char * this );
Maybe_List_char get_Cell_List_char (Cell_List_char life );
const Cell_List_char__H_Table * const get_Cell_List_char__H_Table ();
void free_Cell_List_char (Cell_List_char * this );
#endif /* __Cell_List_char__H_DECL__ */ 
#ifndef __Maybe_List_Bool__H_DECL__
#define __Maybe_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Bool Maybe_List_Bool ;
typedef void (*free_Maybe_List_Bool_t) (Maybe_List_Bool * this );
typedef struct Maybe_List_Bool__H_Table {
  free_Maybe_List_Bool_t freeData ;
} Maybe_List_Bool__H_Table;
typedef struct Maybe_List_Bool {
  const Maybe_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3045 */
    struct { /* ciciliStruct3046 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3047 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Just_List_Bool (List_Bool value );
Maybe_List_Bool Nothing_List_Bool ();
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool () {
  return Nothing_List_Bool ();
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table ();
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __Maybe_List_Bool__H_DECL__ */ 
#ifndef __Rc_List_Bool__H_DECL__
#define __Rc_List_Bool__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_List_Bool Rc_List_Bool ;
typedef void (*free_Rc_List_Bool_t) (Rc_List_Bool * this );
typedef struct Rc_List_Bool__H_Table {
  free_Rc_List_Bool_t freeData ;
    Rc_List_Bool (*new) (List_Bool pointer );
    Rc_List_Bool (*clone) (Rc_List_Bool rc );
    Maybe_List_Bool (*take) (Rc_List_Bool * this );
    Maybe_List_Bool (*get) (Rc_List_Bool rc );
} Rc_List_Bool__H_Table;
typedef struct Rc_List_Bool {
  const Rc_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3077 */
    struct { /* ciciliStruct3078 */
      List_Bool * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3079 */
    } Gone , _ ;
  } __h_data ;
} Rc_List_Bool;
Rc_List_Bool __h_Hold_List_Bool (List_Bool * pointer , int * count , size_t address );
Rc_List_Bool Gone_List_Bool ();
__attribute__((weak)) Rc_List_Bool Default_Rc_List_Bool () {
  return Gone_List_Bool ();
}
Rc_List_Bool new_Rc_List_Bool (List_Bool pointer );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Maybe_List_Bool take_Rc_List_Bool (Rc_List_Bool * this );
Maybe_List_Bool get_Rc_List_Bool (Rc_List_Bool rc );
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table ();
void free_Rc_List_Bool (Rc_List_Bool * this );
#endif /* __Rc_List_Bool__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3121 */
    struct { /* ciciliStruct3122 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3123 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __Rc_List_int__H_DECL__
#define __Rc_List_int__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_List_int Rc_List_int ;
typedef void (*free_Rc_List_int_t) (Rc_List_int * this );
typedef struct Rc_List_int__H_Table {
  free_Rc_List_int_t freeData ;
    Rc_List_int (*new) (List_int pointer );
    Rc_List_int (*clone) (Rc_List_int rc );
    Maybe_List_int (*take) (Rc_List_int * this );
    Maybe_List_int (*get) (Rc_List_int rc );
} Rc_List_int__H_Table;
typedef struct Rc_List_int {
  const Rc_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3153 */
    struct { /* ciciliStruct3154 */
      List_int * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3155 */
    } Gone , _ ;
  } __h_data ;
} Rc_List_int;
Rc_List_int __h_Hold_List_int (List_int * pointer , int * count , size_t address );
Rc_List_int Gone_List_int ();
__attribute__((weak)) Rc_List_int Default_Rc_List_int () {
  return Gone_List_int ();
}
Rc_List_int new_Rc_List_int (List_int pointer );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Maybe_List_int take_Rc_List_int (Rc_List_int * this );
Maybe_List_int get_Rc_List_int (Rc_List_int rc );
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table ();
void free_Rc_List_int (Rc_List_int * this );
#endif /* __Rc_List_int__H_DECL__ */ 
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_char Maybe_List_char ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char__H_Table {
  free_Maybe_List_char_t freeData ;
} Maybe_List_char__H_Table;
typedef struct Maybe_List_char {
  const Maybe_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3197 */
    struct { /* ciciliStruct3198 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3199 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Just_List_char (List_char value );
Maybe_List_char Nothing_List_char ();
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char () {
  return Nothing_List_char ();
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __Rc_List_char__H_DECL__
#define __Rc_List_char__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_List_char Rc_List_char ;
typedef void (*free_Rc_List_char_t) (Rc_List_char * this );
typedef struct Rc_List_char__H_Table {
  free_Rc_List_char_t freeData ;
    Rc_List_char (*new) (List_char pointer );
    Rc_List_char (*clone) (Rc_List_char rc );
    Maybe_List_char (*take) (Rc_List_char * this );
    Maybe_List_char (*get) (Rc_List_char rc );
} Rc_List_char__H_Table;
typedef struct Rc_List_char {
  const Rc_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3229 */
    struct { /* ciciliStruct3230 */
      List_char * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3231 */
    } Gone , _ ;
  } __h_data ;
} Rc_List_char;
Rc_List_char __h_Hold_List_char (List_char * pointer , int * count , size_t address );
Rc_List_char Gone_List_char ();
__attribute__((weak)) Rc_List_char Default_Rc_List_char () {
  return Gone_List_char ();
}
Rc_List_char new_Rc_List_char (List_char pointer );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Maybe_List_char take_Rc_List_char (Rc_List_char * this );
Maybe_List_char get_Rc_List_char (Rc_List_char rc );
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table ();
void free_Rc_List_char (Rc_List_char * this );
#endif /* __Rc_List_char__H_DECL__ */ 
#ifndef __folds_Bool__H_DECL__
#define __folds_Bool__H_DECL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable );
#endif /* __folds_Bool__H_DECL__ */ 
typedef Bool (*Monoid_All_Bool_mappend_t) (Bool lhs , Bool rhs );
typedef Bool (*Monoid_All_Bool_mconcat_t) (List_Bool l );
#ifndef __Monoid_All_Bool__H_DECL__
#define __Monoid_All_Bool__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_All_Bool Monoid_All_Bool ;
typedef void (*free_Monoid_All_Bool_t) (Monoid_All_Bool * this );
typedef struct Monoid_All_Bool__H_Table {
  free_Monoid_All_Bool_t freeData ;
} Monoid_All_Bool__H_Table;
typedef struct Monoid_All_Bool {
  const Monoid_All_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3285 */
    struct { /* ciciliStruct3286 */
      Monoid_All_Bool_mappend_t __h_0_mem ;
      Bool __h_1_mem ;
      Monoid_All_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_All_Bool;
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat );
__attribute__((weak)) Monoid_All_Bool Default_Monoid_All_Bool (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return Monoid_All_Bool_ctor (mappend , mempty , mconcat );
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table ();
void free_Monoid_All_Bool (Monoid_All_Bool * this );
#endif /* __Monoid_All_Bool__H_DECL__ */ 
#ifndef __Semigroup_All_Bool__H_DECL__
#define __Semigroup_All_Bool__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_All_Bool Semigroup_All_Bool ;
typedef void (*free_Semigroup_All_Bool_t) (Semigroup_All_Bool * this );
typedef struct Semigroup_All_Bool__H_Table {
  free_Semigroup_All_Bool_t freeData ;
} Semigroup_All_Bool__H_Table;
typedef struct Semigroup_All_Bool {
  const Semigroup_All_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3308 */
    struct { /* ciciliStruct3309 */
      Monoid_All_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_All_Bool;
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_All_Bool Default_Semigroup_All_Bool (Monoid_All_Bool_mappend_t mappend ) {
  return Semigroup_All_Bool_ctor (mappend );
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table ();
void free_Semigroup_All_Bool (Semigroup_All_Bool * this );
#endif /* __Semigroup_All_Bool__H_DECL__ */ 
Bool mempty_All_Bool ();
Bool mappend_All_Bool (Bool lhs , Bool rhs );
Bool mconcat_All_Bool (List_Bool list );
Monoid_All_Bool get_Monoid_All_Bool ();
Semigroup_All_Bool get_Semigroup_All_Bool ();
#ifndef __folds_Bool__H_DECL__
#define __folds_Bool__H_DECL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable );
#endif /* __folds_Bool__H_DECL__ */ 
typedef Bool (*Monoid_Any_Bool_mappend_t) (Bool lhs , Bool rhs );
typedef Bool (*Monoid_Any_Bool_mconcat_t) (List_Bool l );
#ifndef __Monoid_Any_Bool__H_DECL__
#define __Monoid_Any_Bool__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Any_Bool Monoid_Any_Bool ;
typedef void (*free_Monoid_Any_Bool_t) (Monoid_Any_Bool * this );
typedef struct Monoid_Any_Bool__H_Table {
  free_Monoid_Any_Bool_t freeData ;
} Monoid_Any_Bool__H_Table;
typedef struct Monoid_Any_Bool {
  const Monoid_Any_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3361 */
    struct { /* ciciliStruct3362 */
      Monoid_Any_Bool_mappend_t __h_0_mem ;
      Bool __h_1_mem ;
      Monoid_Any_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Any_Bool;
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat );
__attribute__((weak)) Monoid_Any_Bool Default_Monoid_Any_Bool (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return Monoid_Any_Bool_ctor (mappend , mempty , mconcat );
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table ();
void free_Monoid_Any_Bool (Monoid_Any_Bool * this );
#endif /* __Monoid_Any_Bool__H_DECL__ */ 
#ifndef __Semigroup_Any_Bool__H_DECL__
#define __Semigroup_Any_Bool__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Any_Bool Semigroup_Any_Bool ;
typedef void (*free_Semigroup_Any_Bool_t) (Semigroup_Any_Bool * this );
typedef struct Semigroup_Any_Bool__H_Table {
  free_Semigroup_Any_Bool_t freeData ;
} Semigroup_Any_Bool__H_Table;
typedef struct Semigroup_Any_Bool {
  const Semigroup_Any_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3384 */
    struct { /* ciciliStruct3385 */
      Monoid_Any_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Any_Bool;
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_Any_Bool Default_Semigroup_Any_Bool (Monoid_Any_Bool_mappend_t mappend ) {
  return Semigroup_Any_Bool_ctor (mappend );
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table ();
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this );
#endif /* __Semigroup_Any_Bool__H_DECL__ */ 
Bool mempty_Any_Bool ();
Bool mappend_Any_Bool (Bool lhs , Bool rhs );
Bool mconcat_Any_Bool (List_Bool list );
Monoid_Any_Bool get_Monoid_Any_Bool ();
Semigroup_Any_Bool get_Semigroup_Any_Bool ();
#ifndef __folds_int__H_DECL__
#define __folds_int__H_DECL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable );
#endif /* __folds_int__H_DECL__ */ 
typedef int (*Monoid_Sum_int_mappend_t) (int lhs , int rhs );
typedef int (*Monoid_Sum_int_mconcat_t) (List_int l );
#ifndef __Monoid_Sum_int__H_DECL__
#define __Monoid_Sum_int__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Sum_int Monoid_Sum_int ;
typedef void (*free_Monoid_Sum_int_t) (Monoid_Sum_int * this );
typedef struct Monoid_Sum_int__H_Table {
  free_Monoid_Sum_int_t freeData ;
} Monoid_Sum_int__H_Table;
typedef struct Monoid_Sum_int {
  const Monoid_Sum_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3437 */
    struct { /* ciciliStruct3438 */
      Monoid_Sum_int_mappend_t __h_0_mem ;
      int __h_1_mem ;
      Monoid_Sum_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Sum_int;
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat );
__attribute__((weak)) Monoid_Sum_int Default_Monoid_Sum_int (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return Monoid_Sum_int_ctor (mappend , mempty , mconcat );
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table ();
void free_Monoid_Sum_int (Monoid_Sum_int * this );
#endif /* __Monoid_Sum_int__H_DECL__ */ 
#ifndef __Semigroup_Sum_int__H_DECL__
#define __Semigroup_Sum_int__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Sum_int Semigroup_Sum_int ;
typedef void (*free_Semigroup_Sum_int_t) (Semigroup_Sum_int * this );
typedef struct Semigroup_Sum_int__H_Table {
  free_Semigroup_Sum_int_t freeData ;
} Semigroup_Sum_int__H_Table;
typedef struct Semigroup_Sum_int {
  const Semigroup_Sum_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3460 */
    struct { /* ciciliStruct3461 */
      Monoid_Sum_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Sum_int;
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend );
__attribute__((weak)) Semigroup_Sum_int Default_Semigroup_Sum_int (Monoid_Sum_int_mappend_t mappend ) {
  return Semigroup_Sum_int_ctor (mappend );
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table ();
void free_Semigroup_Sum_int (Semigroup_Sum_int * this );
#endif /* __Semigroup_Sum_int__H_DECL__ */ 
int mempty_Sum_int ();
int mappend_Sum_int (int lhs , int rhs );
int mconcat_Sum_int (List_int list );
Monoid_Sum_int get_Monoid_Sum_int ();
Semigroup_Sum_int get_Semigroup_Sum_int ();
#ifndef __folds_int__H_DECL__
#define __folds_int__H_DECL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable );
#endif /* __folds_int__H_DECL__ */ 
typedef int (*Monoid_Product_int_mappend_t) (int lhs , int rhs );
typedef int (*Monoid_Product_int_mconcat_t) (List_int l );
#ifndef __Monoid_Product_int__H_DECL__
#define __Monoid_Product_int__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Product_int Monoid_Product_int ;
typedef void (*free_Monoid_Product_int_t) (Monoid_Product_int * this );
typedef struct Monoid_Product_int__H_Table {
  free_Monoid_Product_int_t freeData ;
} Monoid_Product_int__H_Table;
typedef struct Monoid_Product_int {
  const Monoid_Product_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3513 */
    struct { /* ciciliStruct3514 */
      Monoid_Product_int_mappend_t __h_0_mem ;
      int __h_1_mem ;
      Monoid_Product_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Product_int;
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat );
__attribute__((weak)) Monoid_Product_int Default_Monoid_Product_int (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return Monoid_Product_int_ctor (mappend , mempty , mconcat );
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table ();
void free_Monoid_Product_int (Monoid_Product_int * this );
#endif /* __Monoid_Product_int__H_DECL__ */ 
#ifndef __Semigroup_Product_int__H_DECL__
#define __Semigroup_Product_int__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Product_int Semigroup_Product_int ;
typedef void (*free_Semigroup_Product_int_t) (Semigroup_Product_int * this );
typedef struct Semigroup_Product_int__H_Table {
  free_Semigroup_Product_int_t freeData ;
} Semigroup_Product_int__H_Table;
typedef struct Semigroup_Product_int {
  const Semigroup_Product_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3536 */
    struct { /* ciciliStruct3537 */
      Monoid_Product_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Product_int;
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend );
__attribute__((weak)) Semigroup_Product_int Default_Semigroup_Product_int (Monoid_Product_int_mappend_t mappend ) {
  return Semigroup_Product_int_ctor (mappend );
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table ();
void free_Semigroup_Product_int (Semigroup_Product_int * this );
#endif /* __Semigroup_Product_int__H_DECL__ */ 
int mempty_Product_int ();
int mappend_Product_int (int lhs , int rhs );
int mconcat_Product_int (List_int list );
Monoid_Product_int get_Monoid_Product_int ();
Semigroup_Product_int get_Semigroup_Product_int ();
#ifndef __folds_List_Bool__H_DECL__
#define __folds_List_Bool__H_DECL__
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable );
#endif /* __folds_List_Bool__H_DECL__ */ 
typedef List_Bool (*Monoid_List_Bool_mappend_t) (List_Bool lhs , List_Bool rhs );
typedef List_Bool (*Monoid_List_Bool_mconcat_t) (List_List_Bool l );
#ifndef __Monoid_List_Bool__H_DECL__
#define __Monoid_List_Bool__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_Bool Monoid_List_Bool ;
typedef void (*free_Monoid_List_Bool_t) (Monoid_List_Bool * this );
typedef struct Monoid_List_Bool__H_Table {
  free_Monoid_List_Bool_t freeData ;
} Monoid_List_Bool__H_Table;
typedef struct Monoid_List_Bool {
  const Monoid_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3589 */
    struct { /* ciciliStruct3590 */
      Monoid_List_Bool_mappend_t __h_0_mem ;
      List_Bool __h_1_mem ;
      Monoid_List_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_Bool;
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat );
__attribute__((weak)) Monoid_List_Bool Default_Monoid_List_Bool (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return Monoid_List_Bool_ctor (mappend , mempty , mconcat );
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table ();
void free_Monoid_List_Bool (Monoid_List_Bool * this );
#endif /* __Monoid_List_Bool__H_DECL__ */ 
#ifndef __Semigroup_List_Bool__H_DECL__
#define __Semigroup_List_Bool__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_Bool Semigroup_List_Bool ;
typedef void (*free_Semigroup_List_Bool_t) (Semigroup_List_Bool * this );
typedef struct Semigroup_List_Bool__H_Table {
  free_Semigroup_List_Bool_t freeData ;
} Semigroup_List_Bool__H_Table;
typedef struct Semigroup_List_Bool {
  const Semigroup_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3612 */
    struct { /* ciciliStruct3613 */
      Monoid_List_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_Bool;
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_List_Bool Default_Semigroup_List_Bool (Monoid_List_Bool_mappend_t mappend ) {
  return Semigroup_List_Bool_ctor (mappend );
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table ();
void free_Semigroup_List_Bool (Semigroup_List_Bool * this );
#endif /* __Semigroup_List_Bool__H_DECL__ */ 
List_Bool mempty_List_Bool ();
List_Bool mappend_List_Bool (List_Bool lhs , List_Bool rhs );
List_Bool mconcat_List_Bool (List_List_Bool list );
Monoid_List_Bool get_Monoid_List_Bool ();
Semigroup_List_Bool get_Semigroup_List_Bool ();
#ifndef __folds_List_int__H_DECL__
#define __folds_List_int__H_DECL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable );
#endif /* __folds_List_int__H_DECL__ */ 
typedef List_int (*Monoid_List_int_mappend_t) (List_int lhs , List_int rhs );
typedef List_int (*Monoid_List_int_mconcat_t) (List_List_int l );
#ifndef __Monoid_List_int__H_DECL__
#define __Monoid_List_int__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_int Monoid_List_int ;
typedef void (*free_Monoid_List_int_t) (Monoid_List_int * this );
typedef struct Monoid_List_int__H_Table {
  free_Monoid_List_int_t freeData ;
} Monoid_List_int__H_Table;
typedef struct Monoid_List_int {
  const Monoid_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3665 */
    struct { /* ciciliStruct3666 */
      Monoid_List_int_mappend_t __h_0_mem ;
      List_int __h_1_mem ;
      Monoid_List_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_int;
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat );
__attribute__((weak)) Monoid_List_int Default_Monoid_List_int (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return Monoid_List_int_ctor (mappend , mempty , mconcat );
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table ();
void free_Monoid_List_int (Monoid_List_int * this );
#endif /* __Monoid_List_int__H_DECL__ */ 
#ifndef __Semigroup_List_int__H_DECL__
#define __Semigroup_List_int__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_int Semigroup_List_int ;
typedef void (*free_Semigroup_List_int_t) (Semigroup_List_int * this );
typedef struct Semigroup_List_int__H_Table {
  free_Semigroup_List_int_t freeData ;
} Semigroup_List_int__H_Table;
typedef struct Semigroup_List_int {
  const Semigroup_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3688 */
    struct { /* ciciliStruct3689 */
      Monoid_List_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_int;
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend );
__attribute__((weak)) Semigroup_List_int Default_Semigroup_List_int (Monoid_List_int_mappend_t mappend ) {
  return Semigroup_List_int_ctor (mappend );
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table ();
void free_Semigroup_List_int (Semigroup_List_int * this );
#endif /* __Semigroup_List_int__H_DECL__ */ 
List_int mempty_List_int ();
List_int mappend_List_int (List_int lhs , List_int rhs );
List_int mconcat_List_int (List_List_int list );
Monoid_List_int get_Monoid_List_int ();
Semigroup_List_int get_Semigroup_List_int ();
#ifndef __folds_List_char__H_DECL__
#define __folds_List_char__H_DECL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable );
#endif /* __folds_List_char__H_DECL__ */ 
typedef List_char (*Monoid_List_char_mappend_t) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_List_char_mconcat_t) (List_List_char l );
#ifndef __Monoid_List_char__H_DECL__
#define __Monoid_List_char__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_char Monoid_List_char ;
typedef void (*free_Monoid_List_char_t) (Monoid_List_char * this );
typedef struct Monoid_List_char__H_Table {
  free_Monoid_List_char_t freeData ;
} Monoid_List_char__H_Table;
typedef struct Monoid_List_char {
  const Monoid_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3741 */
    struct { /* ciciliStruct3742 */
      Monoid_List_char_mappend_t __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_List_char_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_char;
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat );
__attribute__((weak)) Monoid_List_char Default_Monoid_List_char (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return Monoid_List_char_ctor (mappend , mempty , mconcat );
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table ();
void free_Monoid_List_char (Monoid_List_char * this );
#endif /* __Monoid_List_char__H_DECL__ */ 
#ifndef __Semigroup_List_char__H_DECL__
#define __Semigroup_List_char__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_char Semigroup_List_char ;
typedef void (*free_Semigroup_List_char_t) (Semigroup_List_char * this );
typedef struct Semigroup_List_char__H_Table {
  free_Semigroup_List_char_t freeData ;
} Semigroup_List_char__H_Table;
typedef struct Semigroup_List_char {
  const Semigroup_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3764 */
    struct { /* ciciliStruct3765 */
      Monoid_List_char_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_char;
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend );
__attribute__((weak)) Semigroup_List_char Default_Semigroup_List_char (Monoid_List_char_mappend_t mappend ) {
  return Semigroup_List_char_ctor (mappend );
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table ();
void free_Semigroup_List_char (Semigroup_List_char * this );
#endif /* __Semigroup_List_char__H_DECL__ */ 
List_char mempty_List_char ();
List_char mappend_List_char (List_char lhs , List_char rhs );
List_char mconcat_List_char (List_List_char list );
Monoid_List_char get_Monoid_List_char ();
Semigroup_List_char get_Semigroup_List_char ();
typedef int (*int_to_int_t) (int value );
#ifndef __Functor_List_int_int__H_DECL__
#define __Functor_List_int_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_int_int Functor_List_int_int ;
typedef void (*free_Functor_List_int_int_t) (Functor_List_int_int * this );
typedef struct Functor_List_int_int__H_Table {
  free_Functor_List_int_int_t freeData ;
    List_int (*fmap) (int_to_int_t a_b , List_int input );
} Functor_List_int_int__H_Table;
typedef struct Functor_List_int_int {
  const Functor_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3810 */
    struct { /* ciciliStruct3811 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_int;
Functor_List_int_int Functor_List_int_int_ctor ();
__attribute__((weak)) Functor_List_int_int Default_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input );
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table ();
void free_Functor_List_int_int (Functor_List_int_int * this );
#endif /* __Functor_List_int_int__H_DECL__ */ 
Functor_List_int_int get_Functor_List_int_int ();
typedef char (*int_to_char_t) (int value );
#ifndef __Functor_List_int_char__H_DECL__
#define __Functor_List_int_char__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_int_char Functor_List_int_char ;
typedef void (*free_Functor_List_int_char_t) (Functor_List_int_char * this );
typedef struct Functor_List_int_char__H_Table {
  free_Functor_List_int_char_t freeData ;
    List_char (*fmap) (int_to_char_t a_b , List_int input );
} Functor_List_int_char__H_Table;
typedef struct Functor_List_int_char {
  const Functor_List_int_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3850 */
    struct { /* ciciliStruct3851 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_char;
Functor_List_int_char Functor_List_int_char_ctor ();
__attribute__((weak)) Functor_List_int_char Default_Functor_List_int_char () {
  return Functor_List_int_char_ctor ();
}
List_char fmap_Functor_List_int_char (int_to_char_t a_b , List_int input );
const Functor_List_int_char__H_Table * const get_Functor_List_int_char__H_Table ();
void free_Functor_List_int_char (Functor_List_int_char * this );
#endif /* __Functor_List_int_char__H_DECL__ */ 
Functor_List_int_char get_Functor_List_int_char ();
typedef Bool (*int_to_Bool_t) (int value );
#ifndef __Functor_List_int_Bool__H_DECL__
#define __Functor_List_int_Bool__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_int_Bool Functor_List_int_Bool ;
typedef void (*free_Functor_List_int_Bool_t) (Functor_List_int_Bool * this );
typedef struct Functor_List_int_Bool__H_Table {
  free_Functor_List_int_Bool_t freeData ;
    List_Bool (*fmap) (int_to_Bool_t a_b , List_int input );
} Functor_List_int_Bool__H_Table;
typedef struct Functor_List_int_Bool {
  const Functor_List_int_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3890 */
    struct { /* ciciliStruct3891 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_Bool;
Functor_List_int_Bool Functor_List_int_Bool_ctor ();
__attribute__((weak)) Functor_List_int_Bool Default_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
List_Bool fmap_Functor_List_int_Bool (int_to_Bool_t a_b , List_int input );
const Functor_List_int_Bool__H_Table * const get_Functor_List_int_Bool__H_Table ();
void free_Functor_List_int_Bool (Functor_List_int_Bool * this );
#endif /* __Functor_List_int_Bool__H_DECL__ */ 
Functor_List_int_Bool get_Functor_List_int_Bool ();
typedef char (*char_to_char_t) (char value );
#ifndef __Functor_List_char_char__H_DECL__
#define __Functor_List_char_char__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_char_char Functor_List_char_char ;
typedef void (*free_Functor_List_char_char_t) (Functor_List_char_char * this );
typedef struct Functor_List_char_char__H_Table {
  free_Functor_List_char_char_t freeData ;
    List_char (*fmap) (char_to_char_t a_b , List_char input );
} Functor_List_char_char__H_Table;
typedef struct Functor_List_char_char {
  const Functor_List_char_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3930 */
    struct { /* ciciliStruct3931 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_char_char;
Functor_List_char_char Functor_List_char_char_ctor ();
__attribute__((weak)) Functor_List_char_char Default_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
List_char fmap_Functor_List_char_char (char_to_char_t a_b , List_char input );
const Functor_List_char_char__H_Table * const get_Functor_List_char_char__H_Table ();
void free_Functor_List_char_char (Functor_List_char_char * this );
#endif /* __Functor_List_char_char__H_DECL__ */ 
Functor_List_char_char get_Functor_List_char_char ();
typedef int (*char_to_int_t) (char value );
#ifndef __Functor_List_char_int__H_DECL__
#define __Functor_List_char_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_char_int Functor_List_char_int ;
typedef void (*free_Functor_List_char_int_t) (Functor_List_char_int * this );
typedef struct Functor_List_char_int__H_Table {
  free_Functor_List_char_int_t freeData ;
    List_int (*fmap) (char_to_int_t a_b , List_char input );
} Functor_List_char_int__H_Table;
typedef struct Functor_List_char_int {
  const Functor_List_char_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3970 */
    struct { /* ciciliStruct3971 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_char_int;
Functor_List_char_int Functor_List_char_int_ctor ();
__attribute__((weak)) Functor_List_char_int Default_Functor_List_char_int () {
  return Functor_List_char_int_ctor ();
}
List_int fmap_Functor_List_char_int (char_to_int_t a_b , List_char input );
const Functor_List_char_int__H_Table * const get_Functor_List_char_int__H_Table ();
void free_Functor_List_char_int (Functor_List_char_int * this );
#endif /* __Functor_List_char_int__H_DECL__ */ 
Functor_List_char_int get_Functor_List_char_int ();
typedef Bool (*char_to_Bool_t) (char value );
#ifndef __Functor_List_char_Bool__H_DECL__
#define __Functor_List_char_Bool__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_char_Bool Functor_List_char_Bool ;
typedef void (*free_Functor_List_char_Bool_t) (Functor_List_char_Bool * this );
typedef struct Functor_List_char_Bool__H_Table {
  free_Functor_List_char_Bool_t freeData ;
    List_Bool (*fmap) (char_to_Bool_t a_b , List_char input );
} Functor_List_char_Bool__H_Table;
typedef struct Functor_List_char_Bool {
  const Functor_List_char_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4010 */
    struct { /* ciciliStruct4011 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_char_Bool;
Functor_List_char_Bool Functor_List_char_Bool_ctor ();
__attribute__((weak)) Functor_List_char_Bool Default_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
List_Bool fmap_Functor_List_char_Bool (char_to_Bool_t a_b , List_char input );
const Functor_List_char_Bool__H_Table * const get_Functor_List_char_Bool__H_Table ();
void free_Functor_List_char_Bool (Functor_List_char_Bool * this );
#endif /* __Functor_List_char_Bool__H_DECL__ */ 
Functor_List_char_Bool get_Functor_List_char_Bool ();
typedef int (*int_to_int_t) (int value );
#ifndef __Functor_Maybe_int_int__H_DECL__
#define __Functor_Maybe_int_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_int_int Functor_Maybe_int_int ;
typedef void (*free_Functor_Maybe_int_int_t) (Functor_Maybe_int_int * this );
typedef struct Functor_Maybe_int_int__H_Table {
  free_Functor_Maybe_int_int_t freeData ;
    Maybe_int (*fmap) (int_to_int_t a_b , Maybe_int input );
} Functor_Maybe_int_int__H_Table;
typedef struct Functor_Maybe_int_int {
  const Functor_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4050 */
    struct { /* ciciliStruct4051 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_int;
Functor_Maybe_int_int Functor_Maybe_int_int_ctor ();
__attribute__((weak)) Functor_Maybe_int_int Default_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
}
Maybe_int fmap_Functor_Maybe_int_int (int_to_int_t a_b , Maybe_int input );
const Functor_Maybe_int_int__H_Table * const get_Functor_Maybe_int_int__H_Table ();
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this );
#endif /* __Functor_Maybe_int_int__H_DECL__ */ 
Functor_Maybe_int_int get_Functor_Maybe_int_int ();
typedef char (*int_to_char_t) (int value );
#ifndef __Functor_Maybe_int_char__H_DECL__
#define __Functor_Maybe_int_char__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_int_char Functor_Maybe_int_char ;
typedef void (*free_Functor_Maybe_int_char_t) (Functor_Maybe_int_char * this );
typedef struct Functor_Maybe_int_char__H_Table {
  free_Functor_Maybe_int_char_t freeData ;
    Maybe_char (*fmap) (int_to_char_t a_b , Maybe_int input );
} Functor_Maybe_int_char__H_Table;
typedef struct Functor_Maybe_int_char {
  const Functor_Maybe_int_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4090 */
    struct { /* ciciliStruct4091 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_char;
Functor_Maybe_int_char Functor_Maybe_int_char_ctor ();
__attribute__((weak)) Functor_Maybe_int_char Default_Functor_Maybe_int_char () {
  return Functor_Maybe_int_char_ctor ();
}
Maybe_char fmap_Functor_Maybe_int_char (int_to_char_t a_b , Maybe_int input );
const Functor_Maybe_int_char__H_Table * const get_Functor_Maybe_int_char__H_Table ();
void free_Functor_Maybe_int_char (Functor_Maybe_int_char * this );
#endif /* __Functor_Maybe_int_char__H_DECL__ */ 
Functor_Maybe_int_char get_Functor_Maybe_int_char ();
typedef Bool (*int_to_Bool_t) (int value );
#ifndef __Functor_Maybe_int_Bool__H_DECL__
#define __Functor_Maybe_int_Bool__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_int_Bool Functor_Maybe_int_Bool ;
typedef void (*free_Functor_Maybe_int_Bool_t) (Functor_Maybe_int_Bool * this );
typedef struct Functor_Maybe_int_Bool__H_Table {
  free_Functor_Maybe_int_Bool_t freeData ;
    Maybe_Bool (*fmap) (int_to_Bool_t a_b , Maybe_int input );
} Functor_Maybe_int_Bool__H_Table;
typedef struct Functor_Maybe_int_Bool {
  const Functor_Maybe_int_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4130 */
    struct { /* ciciliStruct4131 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_int_Bool;
Functor_Maybe_int_Bool Functor_Maybe_int_Bool_ctor ();
__attribute__((weak)) Functor_Maybe_int_Bool Default_Functor_Maybe_int_Bool () {
  return Functor_Maybe_int_Bool_ctor ();
}
Maybe_Bool fmap_Functor_Maybe_int_Bool (int_to_Bool_t a_b , Maybe_int input );
const Functor_Maybe_int_Bool__H_Table * const get_Functor_Maybe_int_Bool__H_Table ();
void free_Functor_Maybe_int_Bool (Functor_Maybe_int_Bool * this );
#endif /* __Functor_Maybe_int_Bool__H_DECL__ */ 
Functor_Maybe_int_Bool get_Functor_Maybe_int_Bool ();
typedef char (*char_to_char_t) (char value );
#ifndef __Functor_Maybe_char_char__H_DECL__
#define __Functor_Maybe_char_char__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_char_char Functor_Maybe_char_char ;
typedef void (*free_Functor_Maybe_char_char_t) (Functor_Maybe_char_char * this );
typedef struct Functor_Maybe_char_char__H_Table {
  free_Functor_Maybe_char_char_t freeData ;
    Maybe_char (*fmap) (char_to_char_t a_b , Maybe_char input );
} Functor_Maybe_char_char__H_Table;
typedef struct Functor_Maybe_char_char {
  const Functor_Maybe_char_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4170 */
    struct { /* ciciliStruct4171 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_char_char;
Functor_Maybe_char_char Functor_Maybe_char_char_ctor ();
__attribute__((weak)) Functor_Maybe_char_char Default_Functor_Maybe_char_char () {
  return Functor_Maybe_char_char_ctor ();
}
Maybe_char fmap_Functor_Maybe_char_char (char_to_char_t a_b , Maybe_char input );
const Functor_Maybe_char_char__H_Table * const get_Functor_Maybe_char_char__H_Table ();
void free_Functor_Maybe_char_char (Functor_Maybe_char_char * this );
#endif /* __Functor_Maybe_char_char__H_DECL__ */ 
Functor_Maybe_char_char get_Functor_Maybe_char_char ();
typedef int (*char_to_int_t) (char value );
#ifndef __Functor_Maybe_char_int__H_DECL__
#define __Functor_Maybe_char_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_char_int Functor_Maybe_char_int ;
typedef void (*free_Functor_Maybe_char_int_t) (Functor_Maybe_char_int * this );
typedef struct Functor_Maybe_char_int__H_Table {
  free_Functor_Maybe_char_int_t freeData ;
    Maybe_int (*fmap) (char_to_int_t a_b , Maybe_char input );
} Functor_Maybe_char_int__H_Table;
typedef struct Functor_Maybe_char_int {
  const Functor_Maybe_char_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4210 */
    struct { /* ciciliStruct4211 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_char_int;
Functor_Maybe_char_int Functor_Maybe_char_int_ctor ();
__attribute__((weak)) Functor_Maybe_char_int Default_Functor_Maybe_char_int () {
  return Functor_Maybe_char_int_ctor ();
}
Maybe_int fmap_Functor_Maybe_char_int (char_to_int_t a_b , Maybe_char input );
const Functor_Maybe_char_int__H_Table * const get_Functor_Maybe_char_int__H_Table ();
void free_Functor_Maybe_char_int (Functor_Maybe_char_int * this );
#endif /* __Functor_Maybe_char_int__H_DECL__ */ 
Functor_Maybe_char_int get_Functor_Maybe_char_int ();
typedef Bool (*char_to_Bool_t) (char value );
#ifndef __Functor_Maybe_char_Bool__H_DECL__
#define __Functor_Maybe_char_Bool__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_Maybe_char_Bool Functor_Maybe_char_Bool ;
typedef void (*free_Functor_Maybe_char_Bool_t) (Functor_Maybe_char_Bool * this );
typedef struct Functor_Maybe_char_Bool__H_Table {
  free_Functor_Maybe_char_Bool_t freeData ;
    Maybe_Bool (*fmap) (char_to_Bool_t a_b , Maybe_char input );
} Functor_Maybe_char_Bool__H_Table;
typedef struct Functor_Maybe_char_Bool {
  const Functor_Maybe_char_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4250 */
    struct { /* ciciliStruct4251 */
    } Functor , _ ;
  } __h_data ;
} Functor_Maybe_char_Bool;
Functor_Maybe_char_Bool Functor_Maybe_char_Bool_ctor ();
__attribute__((weak)) Functor_Maybe_char_Bool Default_Functor_Maybe_char_Bool () {
  return Functor_Maybe_char_Bool_ctor ();
}
Maybe_Bool fmap_Functor_Maybe_char_Bool (char_to_Bool_t a_b , Maybe_char input );
const Functor_Maybe_char_Bool__H_Table * const get_Functor_Maybe_char_Bool__H_Table ();
void free_Functor_Maybe_char_Bool (Functor_Maybe_char_Bool * this );
#endif /* __Functor_Maybe_char_Bool__H_DECL__ */ 
Functor_Maybe_char_Bool get_Functor_Maybe_char_Bool ();
#endif /* __CICILI_HASKELL_H_DECL__ */ 
