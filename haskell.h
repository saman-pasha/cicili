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
typedef struct cicilifa3rPKngbIzBcr6USbgsw3Tz6r8_ {
  int __h_0_mem ;
  CVoid __h_1_mem ;
  size_t __h_2_mem ;
} cicilifa3rPKngbIzBcr6USbgsw3Tz6r8_;
typedef cicilifa3rPKngbIzBcr6USbgsw3Tz6r8_ __h_StackItem ;
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
  union { /* ciciliUnion124 */
    struct { /* ciciliStruct125 */
      __h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct126 */
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
  union { /* ciciliUnion157 */
    struct { /* ciciliStruct158 */
      BoxedList___h_StackItem_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct159 */
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
  union { /* ciciliUnion189 */
    struct { /* ciciliStruct190 */
      BoxedList___h_StackItem_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct191 */
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
    __h_StackItem * (*toArray) (BoxedList___h_StackItem list , __h_StackItem term );
    BoxedList___h_StackItem (*wrap) (const __h_StackItem item );
    BoxedList___h_StackItem (*pure) (const __h_StackItem * buf , int len );
    int (*show) (CFile file , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*copy) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*replaceAt) (BoxedList___h_StackItem list , __h_StackItem item , int index );
    BoxedList___h_StackItem (*deleteAt) (BoxedList___h_StackItem list , int index );
    BoxedList___h_StackItem (*insertAt) (BoxedList___h_StackItem llist , __h_StackItem item , int index );
    BoxedList___h_StackItem (*replace) (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed );
    BoxedList___h_StackItem (*delete) (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed );
    BoxedList___h_StackItem (*insert) (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist );
    BoxedList___h_StackItem (*reverse) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*append) (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist );
    BoxedList___h_StackItem (*push) (__h_StackItem item , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*take) (int len , BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*last) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*init) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*tail) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*drop) (int index , BoxedList___h_StackItem list );
    Maybe___h_StackItem (*head) (BoxedList___h_StackItem list );
    BoxedList___h_StackItem (*nthcdr) (int index , BoxedList___h_StackItem list );
    Maybe___h_StackItem (*nth) (int index , BoxedList___h_StackItem list );
    int (*hasLen) (BoxedList___h_StackItem list , int desired );
    int (*len) (BoxedList___h_StackItem list );
} BoxedList___h_StackItem__H_Table;
typedef struct class_BoxedList___h_StackItem {
  const BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion253 */
    struct { /* ciciliStruct254 */
      __h_StackItem __h_0_mem ;
      BoxedList___h_StackItem __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct255 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList___h_StackItem;
BoxedList___h_StackItem BoxedCons___h_StackItem (__h_StackItem head , BoxedList___h_StackItem tail );
BoxedList___h_StackItem BoxedNil___h_StackItem ();
__attribute__((weak)) BoxedList___h_StackItem Default_BoxedList___h_StackItem () {
  return BoxedNil___h_StackItem ();
}
__h_StackItem * toArray_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem term );
BoxedList___h_StackItem wrap_BoxedList___h_StackItem (const __h_StackItem item );
BoxedList___h_StackItem pure_BoxedList___h_StackItem (const __h_StackItem * buf , int len );
int show_BoxedList___h_StackItem (CFile file , BoxedList___h_StackItem list );
BoxedList___h_StackItem copy_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem replaceAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , int index );
BoxedList___h_StackItem deleteAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , int index );
BoxedList___h_StackItem insertAt_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , int index );
BoxedList___h_StackItem replace_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed );
BoxedList___h_StackItem delete_BoxedList___h_StackItem (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed );
BoxedList___h_StackItem insert_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist );
BoxedList___h_StackItem reverse_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem append_BoxedList___h_StackItem (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist );
BoxedList___h_StackItem push_BoxedList___h_StackItem (__h_StackItem item , BoxedList___h_StackItem list );
BoxedList___h_StackItem take_BoxedList___h_StackItem (int len , BoxedList___h_StackItem list );
BoxedList___h_StackItem last_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem init_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem tail_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem drop_BoxedList___h_StackItem (int index , BoxedList___h_StackItem list );
Maybe___h_StackItem head_BoxedList___h_StackItem (BoxedList___h_StackItem list );
BoxedList___h_StackItem nthcdr_BoxedList___h_StackItem (int index , BoxedList___h_StackItem list );
Maybe___h_StackItem nth_BoxedList___h_StackItem (int index , BoxedList___h_StackItem list );
int hasLen_BoxedList___h_StackItem (BoxedList___h_StackItem list , int desired );
int len_BoxedList___h_StackItem (BoxedList___h_StackItem list );
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
  union { /* ciciliUnion355 */
    struct { /* ciciliStruct356 */
      BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct357 */
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
  union { /* ciciliUnion385 */
    struct { /* ciciliStruct386 */
      BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct387 */
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
  union { /* ciciliUnion418 */
    struct { /* ciciliStruct419 */
      BoxedList_BoxedList___h_StackItem_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct420 */
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
  union { /* ciciliUnion450 */
    struct { /* ciciliStruct451 */
      BoxedList_BoxedList___h_StackItem_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct452 */
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
    BoxedList___h_StackItem * (*toArray) (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem term );
    BoxedList_BoxedList___h_StackItem (*wrap) (const BoxedList___h_StackItem item );
    BoxedList_BoxedList___h_StackItem (*pure) (const BoxedList___h_StackItem * buf , int len );
    int (*show) (CFile file , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*copy) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*replaceAt) (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , int index );
    BoxedList_BoxedList___h_StackItem (*deleteAt) (BoxedList_BoxedList___h_StackItem list , int index );
    BoxedList_BoxedList___h_StackItem (*insertAt) (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , int index );
    BoxedList_BoxedList___h_StackItem (*replace) (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed );
    BoxedList_BoxedList___h_StackItem (*delete) (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed );
    BoxedList_BoxedList___h_StackItem (*insert) (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist );
    BoxedList_BoxedList___h_StackItem (*reverse) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*append) (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist );
    BoxedList_BoxedList___h_StackItem (*push) (BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*take) (int len , BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*last) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*init) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*tail) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*drop) (int index , BoxedList_BoxedList___h_StackItem list );
    Maybe_BoxedList___h_StackItem (*head) (BoxedList_BoxedList___h_StackItem list );
    BoxedList_BoxedList___h_StackItem (*nthcdr) (int index , BoxedList_BoxedList___h_StackItem list );
    Maybe_BoxedList___h_StackItem (*nth) (int index , BoxedList_BoxedList___h_StackItem list );
    int (*hasLen) (BoxedList_BoxedList___h_StackItem list , int desired );
    int (*len) (BoxedList_BoxedList___h_StackItem list );
} BoxedList_BoxedList___h_StackItem__H_Table;
typedef struct class_BoxedList_BoxedList___h_StackItem {
  const BoxedList_BoxedList___h_StackItem__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion514 */
    struct { /* ciciliStruct515 */
      BoxedList___h_StackItem __h_0_mem ;
      BoxedList_BoxedList___h_StackItem __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct516 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList_BoxedList___h_StackItem;
BoxedList_BoxedList___h_StackItem BoxedCons_BoxedList___h_StackItem (BoxedList___h_StackItem head , BoxedList_BoxedList___h_StackItem tail );
BoxedList_BoxedList___h_StackItem BoxedNil_BoxedList___h_StackItem ();
__attribute__((weak)) BoxedList_BoxedList___h_StackItem Default_BoxedList_BoxedList___h_StackItem () {
  return BoxedNil_BoxedList___h_StackItem ();
}
BoxedList___h_StackItem * toArray_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem term );
BoxedList_BoxedList___h_StackItem wrap_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem item );
BoxedList_BoxedList___h_StackItem pure_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem * buf , int len );
int show_BoxedList_BoxedList___h_StackItem (CFile file , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem copy_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem replaceAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , int index );
BoxedList_BoxedList___h_StackItem deleteAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , int index );
BoxedList_BoxedList___h_StackItem insertAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , int index );
BoxedList_BoxedList___h_StackItem replace_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed );
BoxedList_BoxedList___h_StackItem delete_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed );
BoxedList_BoxedList___h_StackItem insert_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist );
BoxedList_BoxedList___h_StackItem reverse_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem append_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist );
BoxedList_BoxedList___h_StackItem push_BoxedList_BoxedList___h_StackItem (BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem take_BoxedList_BoxedList___h_StackItem (int len , BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem last_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem init_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem tail_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem drop_BoxedList_BoxedList___h_StackItem (int index , BoxedList_BoxedList___h_StackItem list );
Maybe_BoxedList___h_StackItem head_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
BoxedList_BoxedList___h_StackItem nthcdr_BoxedList_BoxedList___h_StackItem (int index , BoxedList_BoxedList___h_StackItem list );
Maybe_BoxedList___h_StackItem nth_BoxedList_BoxedList___h_StackItem (int index , BoxedList_BoxedList___h_StackItem list );
int hasLen_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , int desired );
int len_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list );
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
  union { /* ciciliUnion616 */
    struct { /* ciciliStruct617 */
      BoxedList_BoxedList___h_StackItem __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct618 */
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
  union { /* ciciliUnion650 */
    struct { /* ciciliStruct651 */
    } True , _1 ;
    struct { /* ciciliStruct652 */
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
  union { /* ciciliUnion682 */
    struct { /* ciciliStruct683 */
    } LT , _2 ;
    struct { /* ciciliStruct684 */
    } EQ , _1 ;
    struct { /* ciciliStruct685 */
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
  union { /* ciciliUnion710 */
    struct { /* ciciliStruct711 */
      CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct712 */
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
  union { /* ciciliUnion738 */
    struct { /* ciciliStruct739 */
      CFile __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct740 */
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
  union { /* ciciliUnion768 */
    struct { /* ciciliStruct769 */
      Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct770 */
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
    Bool * (*toArray) (List_Bool list , Bool term );
    List_Bool (*wrap) (const Bool item );
    List_Bool (*pure) (const Bool * buf , int len );
    int (*show) (CFile file , List_Bool list );
    List_Bool (*copy) (List_Bool list );
    List_Bool (*replaceAt) (List_Bool list , Bool item , int index );
    List_Bool (*deleteAt) (List_Bool list , int index );
    List_Bool (*insertAt) (List_Bool llist , Bool item , int index );
    List_Bool (*replace) (List_Bool list , Bool item , List_Bool aimed );
    List_Bool (*delete) (List_Bool list , List_Bool aimed );
    List_Bool (*insert) (List_Bool llist , Bool item , List_Bool rlist );
    List_Bool (*reverse) (List_Bool list );
    List_Bool (*append) (List_Bool llist , List_Bool rlist );
    List_Bool (*push) (Bool item , List_Bool list );
    List_Bool (*take) (int len , List_Bool list );
    List_Bool (*last) (List_Bool list );
    List_Bool (*init) (List_Bool list );
    int (*hasLen) (List_Bool list , int desired );
    int (*len) (List_Bool list );
    List_Bool (*tail) (List_Bool list );
    List_Bool (*drop) (int index , List_Bool list );
    Maybe_Bool (*head) (List_Bool list );
    List_Bool (*nthcdr) (int index , List_Bool list );
    Maybe_Bool (*nth) (int index , List_Bool list );
} List_Bool__H_Table;
typedef struct class_List_Bool {
  const List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion820 */
    struct { /* ciciliStruct821 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct822 */
    } Nil , _ ;
  } __h_data ;
} class_List_Bool;
List_Bool Cons_Bool (Bool head , List_Bool tail );
List_Bool Nil_Bool ();
__attribute__((weak)) List_Bool Default_List_Bool () {
  return Nil_Bool ();
}
Bool * toArray_List_Bool (List_Bool list , Bool term );
List_Bool wrap_List_Bool (const Bool item );
List_Bool pure_List_Bool (const Bool * buf , int len );
int show_List_Bool (CFile file , List_Bool list );
List_Bool copy_List_Bool (List_Bool list );
List_Bool replaceAt_List_Bool (List_Bool list , Bool item , int index );
List_Bool deleteAt_List_Bool (List_Bool list , int index );
List_Bool insertAt_List_Bool (List_Bool llist , Bool item , int index );
List_Bool replace_List_Bool (List_Bool list , Bool item , List_Bool aimed );
List_Bool delete_List_Bool (List_Bool list , List_Bool aimed );
List_Bool insert_List_Bool (List_Bool llist , Bool item , List_Bool rlist );
List_Bool reverse_List_Bool (List_Bool list );
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist );
List_Bool push_List_Bool (Bool item , List_Bool list );
List_Bool take_List_Bool (int len , List_Bool list );
List_Bool last_List_Bool (List_Bool list );
List_Bool init_List_Bool (List_Bool list );
int hasLen_List_Bool (List_Bool list , int desired );
int len_List_Bool (List_Bool list );
List_Bool tail_List_Bool (List_Bool list );
List_Bool drop_List_Bool (int index , List_Bool list );
Maybe_Bool head_List_Bool (List_Bool list );
List_Bool nthcdr_List_Bool (int index , List_Bool list );
Maybe_Bool nth_List_Bool (int index , List_Bool list );
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
  union { /* ciciliUnion922 */
    struct { /* ciciliStruct923 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct924 */
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
  union { /* ciciliUnion952 */
    struct { /* ciciliStruct953 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct954 */
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
    int * (*toArray) (List_int list , int term );
    List_int (*wrap) (const int item );
    List_int (*pure) (const int * buf , int len );
    int (*show) (CFile file , List_int list );
    List_int (*copy) (List_int list );
    List_int (*replaceAt) (List_int list , int item , int index );
    List_int (*deleteAt) (List_int list , int index );
    List_int (*insertAt) (List_int llist , int item , int index );
    List_int (*replace) (List_int list , int item , List_int aimed );
    List_int (*delete) (List_int list , List_int aimed );
    List_int (*insert) (List_int llist , int item , List_int rlist );
    List_int (*reverse) (List_int list );
    List_int (*append) (List_int llist , List_int rlist );
    List_int (*push) (int item , List_int list );
    List_int (*take) (int len , List_int list );
    List_int (*last) (List_int list );
    List_int (*init) (List_int list );
    int (*hasLen) (List_int list , int desired );
    int (*len) (List_int list );
    List_int (*tail) (List_int list );
    List_int (*drop) (int index , List_int list );
    Maybe_int (*head) (List_int list );
    List_int (*nthcdr) (int index , List_int list );
    Maybe_int (*nth) (int index , List_int list );
} List_int__H_Table;
typedef struct class_List_int {
  const List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1004 */
    struct { /* ciciliStruct1005 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1006 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list , int term );
List_int wrap_List_int (const int item );
List_int pure_List_int (const int * buf , int len );
int show_List_int (CFile file , List_int list );
List_int copy_List_int (List_int list );
List_int replaceAt_List_int (List_int list , int item , int index );
List_int deleteAt_List_int (List_int list , int index );
List_int insertAt_List_int (List_int llist , int item , int index );
List_int replace_List_int (List_int list , int item , List_int aimed );
List_int delete_List_int (List_int list , List_int aimed );
List_int insert_List_int (List_int llist , int item , List_int rlist );
List_int reverse_List_int (List_int list );
List_int append_List_int (List_int llist , List_int rlist );
List_int push_List_int (int item , List_int list );
List_int take_List_int (int len , List_int list );
List_int last_List_int (List_int list );
List_int init_List_int (List_int list );
int hasLen_List_int (List_int list , int desired );
int len_List_int (List_int list );
List_int tail_List_int (List_int list );
List_int drop_List_int (int index , List_int list );
Maybe_int head_List_int (List_int list );
List_int nthcdr_List_int (int index , List_int list );
Maybe_int nth_List_int (int index , List_int list );
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
  union { /* ciciliUnion1106 */
    struct { /* ciciliStruct1107 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1108 */
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
  union { /* ciciliUnion1138 */
    struct { /* ciciliStruct1139 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1140 */
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
    char * (*toArray) (List_char list , char term );
    List_char (*wrap) (const char item );
    List_char (*pure) (const char * buf , int len );
    int (*show) (CFile file , List_char list );
    List_char (*copy) (List_char list );
    List_char (*replaceAt) (List_char list , char item , int index );
    List_char (*deleteAt) (List_char list , int index );
    List_char (*insertAt) (List_char llist , char item , int index );
    List_char (*replace) (List_char list , char item , List_char aimed );
    List_char (*delete) (List_char list , List_char aimed );
    List_char (*insert) (List_char llist , char item , List_char rlist );
    List_char (*reverse) (List_char list );
    List_char (*append) (List_char llist , List_char rlist );
    List_char (*push) (char item , List_char list );
    List_char (*take) (int len , List_char list );
    List_char (*last) (List_char list );
    List_char (*init) (List_char list );
    int (*hasLen) (List_char list , int desired );
    int (*len) (List_char list );
    List_char (*tail) (List_char list );
    List_char (*drop) (int index , List_char list );
    Maybe_char (*head) (List_char list );
    List_char (*nthcdr) (int index , List_char list );
    Maybe_char (*nth) (int index , List_char list );
} List_char__H_Table;
typedef struct class_List_char {
  const List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1190 */
    struct { /* ciciliStruct1191 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1192 */
    } Nil , _ ;
  } __h_data ;
} class_List_char;
List_char Cons_char (char head , List_char tail );
List_char Nil_char ();
__attribute__((weak)) List_char Default_List_char () {
  return Nil_char ();
}
char * toArray_List_char (List_char list , char term );
List_char wrap_List_char (const char item );
List_char pure_List_char (const char * buf , int len );
int show_List_char (CFile file , List_char list );
List_char copy_List_char (List_char list );
List_char replaceAt_List_char (List_char list , char item , int index );
List_char deleteAt_List_char (List_char list , int index );
List_char insertAt_List_char (List_char llist , char item , int index );
List_char replace_List_char (List_char list , char item , List_char aimed );
List_char delete_List_char (List_char list , List_char aimed );
List_char insert_List_char (List_char llist , char item , List_char rlist );
List_char reverse_List_char (List_char list );
List_char append_List_char (List_char llist , List_char rlist );
List_char push_List_char (char item , List_char list );
List_char take_List_char (int len , List_char list );
List_char last_List_char (List_char list );
List_char init_List_char (List_char list );
int hasLen_List_char (List_char list , int desired );
int len_List_char (List_char list );
List_char tail_List_char (List_char list );
List_char drop_List_char (int index , List_char list );
Maybe_char head_List_char (List_char list );
List_char nthcdr_List_char (int index , List_char list );
Maybe_char nth_List_char (int index , List_char list );
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
  union { /* ciciliUnion1292 */
    struct { /* ciciliStruct1293 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1294 */
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
  union { /* ciciliUnion1326 */
    struct { /* ciciliStruct1327 */
      Char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1328 */
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
#ifndef __String__H_DECL__
#define __String__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_String class_String ;
typedef class_String * String ;
typedef void (*free_String_t) (String * this_ptr );
typedef struct String__H_Table {
  free_String_t freeClass ;
    Char * (*toArray) (String list , Char term );
    String (*wrap) (const Char item );
    String (*pure) (const Char * buf , int len );
    int (*show) (CFile file , String list );
    String (*copy) (String list );
    String (*replaceAt) (String list , Char item , int index );
    String (*deleteAt) (String list , int index );
    String (*insertAt) (String llist , Char item , int index );
    String (*replace) (String list , Char item , String aimed );
    String (*delete) (String list , String aimed );
    String (*insert) (String llist , Char item , String rlist );
    String (*reverse) (String list );
    String (*append) (String llist , String rlist );
    String (*push) (Char item , String list );
    String (*take) (int len , String list );
    String (*last) (String list );
    String (*init) (String list );
    int (*hasLen) (String list , int desired );
    int (*len) (String list );
    String (*tail) (String list );
    String (*drop) (int index , String list );
    Maybe_Char (*head) (String list );
    String (*nthcdr) (int index , String list );
    Maybe_Char (*nth) (int index , String list );
} String__H_Table;
typedef struct class_String {
  const String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1378 */
    struct { /* ciciliStruct1379 */
      Char __h_0_mem ;
      String __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1380 */
    } Nil , _ ;
  } __h_data ;
} class_String;
String Cons_Char (Char head , String tail );
String Nil_Char ();
__attribute__((weak)) String Default_String () {
  return Nil_Char ();
}
Char * toArray_String (String list , Char term );
String wrap_String (const Char item );
String pure_String (const Char * buf , int len );
int show_String (CFile file , String list );
String copy_String (String list );
String replaceAt_String (String list , Char item , int index );
String deleteAt_String (String list , int index );
String insertAt_String (String llist , Char item , int index );
String replace_String (String list , Char item , String aimed );
String delete_String (String list , String aimed );
String insert_String (String llist , Char item , String rlist );
String reverse_String (String list );
String append_String (String llist , String rlist );
String push_String (Char item , String list );
String take_String (int len , String list );
String last_String (String list );
String init_String (String list );
int hasLen_String (String list , int desired );
int len_String (String list );
String tail_String (String list );
String drop_String (int index , String list );
Maybe_Char head_String (String list );
String nthcdr_String (int index , String list );
Maybe_Char nth_String (int index , String list );
String__H_Table * const get_String__H_Table ();
void free_String (String * this_ptr );
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
  union { /* ciciliUnion1480 */
    struct { /* ciciliStruct1481 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1482 */
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
String new_String_Const (const Char * buf );
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
  union { /* ciciliUnion1514 */
    struct { /* ciciliStruct1515 */
      int __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1516 */
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
  union { /* ciciliUnion1560 */
    struct { /* ciciliStruct1561 */
      char __h_0_mem ;
      char __h_1_mem ;
      char __h_2_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1562 */
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
  union { /* ciciliUnion1604 */
    struct { /* ciciliStruct1605 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1606 */
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
    List_Bool * (*toArray) (List_List_Bool list , List_Bool term );
    List_List_Bool (*wrap) (const List_Bool item );
    List_List_Bool (*pure) (const List_Bool * buf , int len );
    int (*show) (CFile file , List_List_Bool list );
    List_List_Bool (*copy) (List_List_Bool list );
    List_List_Bool (*replaceAt) (List_List_Bool list , List_Bool item , int index );
    List_List_Bool (*deleteAt) (List_List_Bool list , int index );
    List_List_Bool (*insertAt) (List_List_Bool llist , List_Bool item , int index );
    List_List_Bool (*replace) (List_List_Bool list , List_Bool item , List_List_Bool aimed );
    List_List_Bool (*delete) (List_List_Bool list , List_List_Bool aimed );
    List_List_Bool (*insert) (List_List_Bool llist , List_Bool item , List_List_Bool rlist );
    List_List_Bool (*reverse) (List_List_Bool list );
    List_List_Bool (*append) (List_List_Bool llist , List_List_Bool rlist );
    List_List_Bool (*push) (List_Bool item , List_List_Bool list );
    List_List_Bool (*take) (int len , List_List_Bool list );
    List_List_Bool (*last) (List_List_Bool list );
    List_List_Bool (*init) (List_List_Bool list );
    int (*hasLen) (List_List_Bool list , int desired );
    int (*len) (List_List_Bool list );
    List_List_Bool (*tail) (List_List_Bool list );
    List_List_Bool (*drop) (int index , List_List_Bool list );
    Maybe_List_Bool (*head) (List_List_Bool list );
    List_List_Bool (*nthcdr) (int index , List_List_Bool list );
    Maybe_List_Bool (*nth) (int index , List_List_Bool list );
} List_List_Bool__H_Table;
typedef struct class_List_List_Bool {
  const List_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1656 */
    struct { /* ciciliStruct1657 */
      List_Bool __h_0_mem ;
      List_List_Bool __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1658 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_Bool;
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail );
List_List_Bool Nil_List_Bool ();
__attribute__((weak)) List_List_Bool Default_List_List_Bool () {
  return Nil_List_Bool ();
}
List_Bool * toArray_List_List_Bool (List_List_Bool list , List_Bool term );
List_List_Bool wrap_List_List_Bool (const List_Bool item );
List_List_Bool pure_List_List_Bool (const List_Bool * buf , int len );
int show_List_List_Bool (CFile file , List_List_Bool list );
List_List_Bool copy_List_List_Bool (List_List_Bool list );
List_List_Bool replaceAt_List_List_Bool (List_List_Bool list , List_Bool item , int index );
List_List_Bool deleteAt_List_List_Bool (List_List_Bool list , int index );
List_List_Bool insertAt_List_List_Bool (List_List_Bool llist , List_Bool item , int index );
List_List_Bool replace_List_List_Bool (List_List_Bool list , List_Bool item , List_List_Bool aimed );
List_List_Bool delete_List_List_Bool (List_List_Bool list , List_List_Bool aimed );
List_List_Bool insert_List_List_Bool (List_List_Bool llist , List_Bool item , List_List_Bool rlist );
List_List_Bool reverse_List_List_Bool (List_List_Bool list );
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist );
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list );
List_List_Bool take_List_List_Bool (int len , List_List_Bool list );
List_List_Bool last_List_List_Bool (List_List_Bool list );
List_List_Bool init_List_List_Bool (List_List_Bool list );
int hasLen_List_List_Bool (List_List_Bool list , int desired );
int len_List_List_Bool (List_List_Bool list );
List_List_Bool tail_List_List_Bool (List_List_Bool list );
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list );
Maybe_List_Bool head_List_List_Bool (List_List_Bool list );
List_List_Bool nthcdr_List_List_Bool (int index , List_List_Bool list );
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list );
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
  union { /* ciciliUnion1758 */
    struct { /* ciciliStruct1759 */
      List_List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1760 */
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
  union { /* ciciliUnion1788 */
    struct { /* ciciliStruct1789 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1790 */
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
    List_int * (*toArray) (List_List_int list , List_int term );
    List_List_int (*wrap) (const List_int item );
    List_List_int (*pure) (const List_int * buf , int len );
    int (*show) (CFile file , List_List_int list );
    List_List_int (*copy) (List_List_int list );
    List_List_int (*replaceAt) (List_List_int list , List_int item , int index );
    List_List_int (*deleteAt) (List_List_int list , int index );
    List_List_int (*insertAt) (List_List_int llist , List_int item , int index );
    List_List_int (*replace) (List_List_int list , List_int item , List_List_int aimed );
    List_List_int (*delete) (List_List_int list , List_List_int aimed );
    List_List_int (*insert) (List_List_int llist , List_int item , List_List_int rlist );
    List_List_int (*reverse) (List_List_int list );
    List_List_int (*append) (List_List_int llist , List_List_int rlist );
    List_List_int (*push) (List_int item , List_List_int list );
    List_List_int (*take) (int len , List_List_int list );
    List_List_int (*last) (List_List_int list );
    List_List_int (*init) (List_List_int list );
    int (*hasLen) (List_List_int list , int desired );
    int (*len) (List_List_int list );
    List_List_int (*tail) (List_List_int list );
    List_List_int (*drop) (int index , List_List_int list );
    Maybe_List_int (*head) (List_List_int list );
    List_List_int (*nthcdr) (int index , List_List_int list );
    Maybe_List_int (*nth) (int index , List_List_int list );
} List_List_int__H_Table;
typedef struct class_List_List_int {
  const List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1840 */
    struct { /* ciciliStruct1841 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1842 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_int;
List_List_int Cons_List_int (List_int head , List_List_int tail );
List_List_int Nil_List_int ();
__attribute__((weak)) List_List_int Default_List_List_int () {
  return Nil_List_int ();
}
List_int * toArray_List_List_int (List_List_int list , List_int term );
List_List_int wrap_List_List_int (const List_int item );
List_List_int pure_List_List_int (const List_int * buf , int len );
int show_List_List_int (CFile file , List_List_int list );
List_List_int copy_List_List_int (List_List_int list );
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , int index );
List_List_int deleteAt_List_List_int (List_List_int list , int index );
List_List_int insertAt_List_List_int (List_List_int llist , List_int item , int index );
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed );
List_List_int delete_List_List_int (List_List_int list , List_List_int aimed );
List_List_int insert_List_List_int (List_List_int llist , List_int item , List_List_int rlist );
List_List_int reverse_List_List_int (List_List_int list );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
List_List_int push_List_List_int (List_int item , List_List_int list );
List_List_int take_List_List_int (int len , List_List_int list );
List_List_int last_List_List_int (List_List_int list );
List_List_int init_List_List_int (List_List_int list );
int hasLen_List_List_int (List_List_int list , int desired );
int len_List_List_int (List_List_int list );
List_List_int tail_List_List_int (List_List_int list );
List_List_int drop_List_List_int (int index , List_List_int list );
Maybe_List_int head_List_List_int (List_List_int list );
List_List_int nthcdr_List_List_int (int index , List_List_int list );
Maybe_List_int nth_List_List_int (int index , List_List_int list );
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
  union { /* ciciliUnion1942 */
    struct { /* ciciliStruct1943 */
      List_List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1944 */
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
  union { /* ciciliUnion1972 */
    struct { /* ciciliStruct1973 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1974 */
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
    List_char * (*toArray) (List_List_char list , List_char term );
    List_List_char (*wrap) (const List_char item );
    List_List_char (*pure) (const List_char * buf , int len );
    int (*show) (CFile file , List_List_char list );
    List_List_char (*copy) (List_List_char list );
    List_List_char (*replaceAt) (List_List_char list , List_char item , int index );
    List_List_char (*deleteAt) (List_List_char list , int index );
    List_List_char (*insertAt) (List_List_char llist , List_char item , int index );
    List_List_char (*replace) (List_List_char list , List_char item , List_List_char aimed );
    List_List_char (*delete) (List_List_char list , List_List_char aimed );
    List_List_char (*insert) (List_List_char llist , List_char item , List_List_char rlist );
    List_List_char (*reverse) (List_List_char list );
    List_List_char (*append) (List_List_char llist , List_List_char rlist );
    List_List_char (*push) (List_char item , List_List_char list );
    List_List_char (*take) (int len , List_List_char list );
    List_List_char (*last) (List_List_char list );
    List_List_char (*init) (List_List_char list );
    int (*hasLen) (List_List_char list , int desired );
    int (*len) (List_List_char list );
    List_List_char (*tail) (List_List_char list );
    List_List_char (*drop) (int index , List_List_char list );
    Maybe_List_char (*head) (List_List_char list );
    List_List_char (*nthcdr) (int index , List_List_char list );
    Maybe_List_char (*nth) (int index , List_List_char list );
} List_List_char__H_Table;
typedef struct class_List_List_char {
  const List_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2024 */
    struct { /* ciciliStruct2025 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2026 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_char;
List_List_char Cons_List_char (List_char head , List_List_char tail );
List_List_char Nil_List_char ();
__attribute__((weak)) List_List_char Default_List_List_char () {
  return Nil_List_char ();
}
List_char * toArray_List_List_char (List_List_char list , List_char term );
List_List_char wrap_List_List_char (const List_char item );
List_List_char pure_List_List_char (const List_char * buf , int len );
int show_List_List_char (CFile file , List_List_char list );
List_List_char copy_List_List_char (List_List_char list );
List_List_char replaceAt_List_List_char (List_List_char list , List_char item , int index );
List_List_char deleteAt_List_List_char (List_List_char list , int index );
List_List_char insertAt_List_List_char (List_List_char llist , List_char item , int index );
List_List_char replace_List_List_char (List_List_char list , List_char item , List_List_char aimed );
List_List_char delete_List_List_char (List_List_char list , List_List_char aimed );
List_List_char insert_List_List_char (List_List_char llist , List_char item , List_List_char rlist );
List_List_char reverse_List_List_char (List_List_char list );
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist );
List_List_char push_List_List_char (List_char item , List_List_char list );
List_List_char take_List_List_char (int len , List_List_char list );
List_List_char last_List_List_char (List_List_char list );
List_List_char init_List_List_char (List_List_char list );
int hasLen_List_List_char (List_List_char list , int desired );
int len_List_List_char (List_List_char list );
List_List_char tail_List_List_char (List_List_char list );
List_List_char drop_List_List_char (int index , List_List_char list );
Maybe_List_char head_List_List_char (List_List_char list );
List_List_char nthcdr_List_List_char (int index , List_List_char list );
Maybe_List_char nth_List_List_char (int index , List_List_char list );
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
  union { /* ciciliUnion2126 */
    struct { /* ciciliStruct2127 */
      List_List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2128 */
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
  union { /* ciciliUnion2156 */
    struct { /* ciciliStruct2157 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2158 */
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
#ifndef __List_String__H_DECL__
#define __List_String__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_String class_List_String ;
typedef class_List_String * List_String ;
typedef void (*free_List_String_t) (List_String * this_ptr );
typedef struct List_String__H_Table {
  free_List_String_t freeClass ;
    String * (*toArray) (List_String list , String term );
    List_String (*wrap) (const String item );
    List_String (*pure) (const String * buf , int len );
    int (*show) (CFile file , List_String list );
    List_String (*copy) (List_String list );
    List_String (*replaceAt) (List_String list , String item , int index );
    List_String (*deleteAt) (List_String list , int index );
    List_String (*insertAt) (List_String llist , String item , int index );
    List_String (*replace) (List_String list , String item , List_String aimed );
    List_String (*delete) (List_String list , List_String aimed );
    List_String (*insert) (List_String llist , String item , List_String rlist );
    List_String (*reverse) (List_String list );
    List_String (*append) (List_String llist , List_String rlist );
    List_String (*push) (String item , List_String list );
    List_String (*take) (int len , List_String list );
    List_String (*last) (List_String list );
    List_String (*init) (List_String list );
    int (*hasLen) (List_String list , int desired );
    int (*len) (List_String list );
    List_String (*tail) (List_String list );
    List_String (*drop) (int index , List_String list );
    Maybe_String (*head) (List_String list );
    List_String (*nthcdr) (int index , List_String list );
    Maybe_String (*nth) (int index , List_String list );
} List_String__H_Table;
typedef struct class_List_String {
  const List_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2208 */
    struct { /* ciciliStruct2209 */
      String __h_0_mem ;
      List_String __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2210 */
    } Nil , _ ;
  } __h_data ;
} class_List_String;
List_String Cons_String (String head , List_String tail );
List_String Nil_String ();
__attribute__((weak)) List_String Default_List_String () {
  return Nil_String ();
}
String * toArray_List_String (List_String list , String term );
List_String wrap_List_String (const String item );
List_String pure_List_String (const String * buf , int len );
int show_List_String (CFile file , List_String list );
List_String copy_List_String (List_String list );
List_String replaceAt_List_String (List_String list , String item , int index );
List_String deleteAt_List_String (List_String list , int index );
List_String insertAt_List_String (List_String llist , String item , int index );
List_String replace_List_String (List_String list , String item , List_String aimed );
List_String delete_List_String (List_String list , List_String aimed );
List_String insert_List_String (List_String llist , String item , List_String rlist );
List_String reverse_List_String (List_String list );
List_String append_List_String (List_String llist , List_String rlist );
List_String push_List_String (String item , List_String list );
List_String take_List_String (int len , List_String list );
List_String last_List_String (List_String list );
List_String init_List_String (List_String list );
int hasLen_List_String (List_String list , int desired );
int len_List_String (List_String list );
List_String tail_List_String (List_String list );
List_String drop_List_String (int index , List_String list );
Maybe_String head_List_String (List_String list );
List_String nthcdr_List_String (int index , List_String list );
Maybe_String nth_List_String (int index , List_String list );
List_String__H_Table * const get_List_String__H_Table ();
void free_List_String (List_String * this_ptr );
#endif /* __List_String__H_DECL__ */ 
#ifndef __Maybe_List_String__H_DECL__
#define __Maybe_List_String__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_String Maybe_List_String ;
typedef void (*free_Maybe_List_String_t) (Maybe_List_String * this );
typedef struct Maybe_List_String__H_Table {
  free_Maybe_List_String_t freeData ;
} Maybe_List_String__H_Table;
typedef struct Maybe_List_String {
  const Maybe_List_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2310 */
    struct { /* ciciliStruct2311 */
      List_String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2312 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_String;
Maybe_List_String Just_List_String (List_String value );
Maybe_List_String Nothing_List_String ();
__attribute__((weak)) Maybe_List_String Default_Maybe_List_String () {
  return Nothing_List_String ();
}
const Maybe_List_String__H_Table * const get_Maybe_List_String__H_Table ();
void free_Maybe_List_String (Maybe_List_String * this );
#endif /* __Maybe_List_String__H_DECL__ */ 
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
  union { /* ciciliUnion2340 */
    struct { /* ciciliStruct2341 */
      CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2342 */
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
    CStr * (*toArray) (List_CStr list , CStr term );
    List_CStr (*wrap) (const CStr item );
    List_CStr (*pure) (const CStr * buf , int len );
    int (*show) (CFile file , List_CStr list );
    List_CStr (*copy) (List_CStr list );
    List_CStr (*replaceAt) (List_CStr list , CStr item , int index );
    List_CStr (*deleteAt) (List_CStr list , int index );
    List_CStr (*insertAt) (List_CStr llist , CStr item , int index );
    List_CStr (*replace) (List_CStr list , CStr item , List_CStr aimed );
    List_CStr (*delete) (List_CStr list , List_CStr aimed );
    List_CStr (*insert) (List_CStr llist , CStr item , List_CStr rlist );
    List_CStr (*reverse) (List_CStr list );
    List_CStr (*append) (List_CStr llist , List_CStr rlist );
    List_CStr (*push) (CStr item , List_CStr list );
    List_CStr (*take) (int len , List_CStr list );
    List_CStr (*last) (List_CStr list );
    List_CStr (*init) (List_CStr list );
    int (*hasLen) (List_CStr list , int desired );
    int (*len) (List_CStr list );
    List_CStr (*tail) (List_CStr list );
    List_CStr (*drop) (int index , List_CStr list );
    Maybe_CStr (*head) (List_CStr list );
    List_CStr (*nthcdr) (int index , List_CStr list );
    Maybe_CStr (*nth) (int index , List_CStr list );
} List_CStr__H_Table;
typedef struct class_List_CStr {
  const List_CStr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2392 */
    struct { /* ciciliStruct2393 */
      CStr __h_0_mem ;
      List_CStr __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2394 */
    } Nil , _ ;
  } __h_data ;
} class_List_CStr;
List_CStr Cons_CStr (CStr head , List_CStr tail );
List_CStr Nil_CStr ();
__attribute__((weak)) List_CStr Default_List_CStr () {
  return Nil_CStr ();
}
CStr * toArray_List_CStr (List_CStr list , CStr term );
List_CStr wrap_List_CStr (const CStr item );
List_CStr pure_List_CStr (const CStr * buf , int len );
int show_List_CStr (CFile file , List_CStr list );
List_CStr copy_List_CStr (List_CStr list );
List_CStr replaceAt_List_CStr (List_CStr list , CStr item , int index );
List_CStr deleteAt_List_CStr (List_CStr list , int index );
List_CStr insertAt_List_CStr (List_CStr llist , CStr item , int index );
List_CStr replace_List_CStr (List_CStr list , CStr item , List_CStr aimed );
List_CStr delete_List_CStr (List_CStr list , List_CStr aimed );
List_CStr insert_List_CStr (List_CStr llist , CStr item , List_CStr rlist );
List_CStr reverse_List_CStr (List_CStr list );
List_CStr append_List_CStr (List_CStr llist , List_CStr rlist );
List_CStr push_List_CStr (CStr item , List_CStr list );
List_CStr take_List_CStr (int len , List_CStr list );
List_CStr last_List_CStr (List_CStr list );
List_CStr init_List_CStr (List_CStr list );
int hasLen_List_CStr (List_CStr list , int desired );
int len_List_CStr (List_CStr list );
List_CStr tail_List_CStr (List_CStr list );
List_CStr drop_List_CStr (int index , List_CStr list );
Maybe_CStr head_List_CStr (List_CStr list );
List_CStr nthcdr_List_CStr (int index , List_CStr list );
Maybe_CStr nth_List_CStr (int index , List_CStr list );
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
  union { /* ciciliUnion2494 */
    struct { /* ciciliStruct2495 */
      List_CStr __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2496 */
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
  union { /* ciciliUnion2526 */
    struct { /* ciciliStruct2527 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2528 */
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
  union { /* ciciliUnion2557 */
    struct { /* ciciliStruct2558 */
      List_Bool * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2559 */
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
  union { /* ciciliUnion2600 */
    struct { /* ciciliStruct2601 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2602 */
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
  union { /* ciciliUnion2631 */
    struct { /* ciciliStruct2632 */
      List_int * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2633 */
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
  union { /* ciciliUnion2674 */
    struct { /* ciciliStruct2675 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2676 */
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
  union { /* ciciliUnion2705 */
    struct { /* ciciliStruct2706 */
      List_char * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2707 */
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
  union { /* ciciliUnion2748 */
    struct { /* ciciliStruct2749 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2750 */
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
#ifndef __Cell_String__H_DECL__
#define __Cell_String__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Cell_String Cell_String ;
typedef void (*free_Cell_String_t) (Cell_String * this );
typedef struct Cell_String__H_Table {
  free_Cell_String_t freeData ;
    Cell_String (*new) (String pointer );
    Maybe_String (*take) (Cell_String * this );
    Maybe_String (*get) (Cell_String life );
} Cell_String__H_Table;
typedef struct Cell_String {
  const Cell_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2779 */
    struct { /* ciciliStruct2780 */
      String * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _1 ;
    struct { /* ciciliStruct2781 */
    } Dead , _ ;
  } __h_data ;
} Cell_String;
Cell_String __h_Alive_String (String * pointer , size_t address );
Cell_String Dead_String ();
__attribute__((weak)) Cell_String Default_Cell_String () {
  return Dead_String ();
}
Cell_String new_Cell_String (String pointer );
Maybe_String take_Cell_String (Cell_String * this );
Maybe_String get_Cell_String (Cell_String life );
const Cell_String__H_Table * const get_Cell_String__H_Table ();
void free_Cell_String (Cell_String * this );
#endif /* __Cell_String__H_DECL__ */ 
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
  union { /* ciciliUnion2822 */
    struct { /* ciciliStruct2823 */
      List_Bool __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2824 */
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
  union { /* ciciliUnion2854 */
    struct { /* ciciliStruct2855 */
      List_Bool * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct2856 */
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
  union { /* ciciliUnion2900 */
    struct { /* ciciliStruct2901 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2902 */
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
  union { /* ciciliUnion2932 */
    struct { /* ciciliStruct2933 */
      List_int * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct2934 */
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
  union { /* ciciliUnion2978 */
    struct { /* ciciliStruct2979 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2980 */
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
  union { /* ciciliUnion3010 */
    struct { /* ciciliStruct3011 */
      List_char * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3012 */
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
  union { /* ciciliUnion3056 */
    struct { /* ciciliStruct3057 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3058 */
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
#ifndef __Rc_String__H_DECL__
#define __Rc_String__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_String Rc_String ;
typedef void (*free_Rc_String_t) (Rc_String * this );
typedef struct Rc_String__H_Table {
  free_Rc_String_t freeData ;
    Rc_String (*new) (String pointer );
    Rc_String (*clone) (Rc_String rc );
    Maybe_String (*take) (Rc_String * this );
    Maybe_String (*get) (Rc_String rc );
} Rc_String__H_Table;
typedef struct Rc_String {
  const Rc_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3088 */
    struct { /* ciciliStruct3089 */
      String * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3090 */
    } Gone , _ ;
  } __h_data ;
} Rc_String;
Rc_String __h_Hold_String (String * pointer , int * count , size_t address );
Rc_String Gone_String ();
__attribute__((weak)) Rc_String Default_Rc_String () {
  return Gone_String ();
}
Rc_String new_Rc_String (String pointer );
Rc_String clone_Rc_String (Rc_String rc );
Maybe_String take_Rc_String (Rc_String * this );
Maybe_String get_Rc_String (Rc_String rc );
const Rc_String__H_Table * const get_Rc_String__H_Table ();
void free_Rc_String (Rc_String * this );
#endif /* __Rc_String__H_DECL__ */ 
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
  union { /* ciciliUnion3146 */
    struct { /* ciciliStruct3147 */
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
  union { /* ciciliUnion3173 */
    struct { /* ciciliStruct3174 */
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
  union { /* ciciliUnion3228 */
    struct { /* ciciliStruct3229 */
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
  union { /* ciciliUnion3255 */
    struct { /* ciciliStruct3256 */
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
  union { /* ciciliUnion3310 */
    struct { /* ciciliStruct3311 */
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
  union { /* ciciliUnion3337 */
    struct { /* ciciliStruct3338 */
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
  union { /* ciciliUnion3392 */
    struct { /* ciciliStruct3393 */
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
  union { /* ciciliUnion3419 */
    struct { /* ciciliStruct3420 */
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
  union { /* ciciliUnion3474 */
    struct { /* ciciliStruct3475 */
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
  union { /* ciciliUnion3501 */
    struct { /* ciciliStruct3502 */
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
  union { /* ciciliUnion3556 */
    struct { /* ciciliStruct3557 */
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
  union { /* ciciliUnion3583 */
    struct { /* ciciliStruct3584 */
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
  union { /* ciciliUnion3638 */
    struct { /* ciciliStruct3639 */
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
  union { /* ciciliUnion3665 */
    struct { /* ciciliStruct3666 */
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
#ifndef __folds_List_char__H_DECL__
#define __folds_List_char__H_DECL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable );
#endif /* __folds_List_char__H_DECL__ */ 
typedef List_char (*Monoid_String_Char_mappend_t) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_String_Char_mconcat_t) (List_List_char l );
#ifndef __Monoid_String_Char__H_DECL__
#define __Monoid_String_Char__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_String_Char Monoid_String_Char ;
typedef void (*free_Monoid_String_Char_t) (Monoid_String_Char * this );
typedef struct Monoid_String_Char__H_Table {
  free_Monoid_String_Char_t freeData ;
} Monoid_String_Char__H_Table;
typedef struct Monoid_String_Char {
  const Monoid_String_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3720 */
    struct { /* ciciliStruct3721 */
      Monoid_String_Char_mappend_t __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_String_Char_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_String_Char;
Monoid_String_Char Monoid_String_Char_ctor (Monoid_String_Char_mappend_t mappend , List_char mempty , Monoid_String_Char_mconcat_t mconcat );
__attribute__((weak)) Monoid_String_Char Default_Monoid_String_Char (Monoid_String_Char_mappend_t mappend , List_char mempty , Monoid_String_Char_mconcat_t mconcat ) {
  return Monoid_String_Char_ctor (mappend , mempty , mconcat );
}
const Monoid_String_Char__H_Table * const get_Monoid_String_Char__H_Table ();
void free_Monoid_String_Char (Monoid_String_Char * this );
#endif /* __Monoid_String_Char__H_DECL__ */ 
#ifndef __Semigroup_String_Char__H_DECL__
#define __Semigroup_String_Char__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_String_Char Semigroup_String_Char ;
typedef void (*free_Semigroup_String_Char_t) (Semigroup_String_Char * this );
typedef struct Semigroup_String_Char__H_Table {
  free_Semigroup_String_Char_t freeData ;
} Semigroup_String_Char__H_Table;
typedef struct Semigroup_String_Char {
  const Semigroup_String_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3747 */
    struct { /* ciciliStruct3748 */
      Monoid_String_Char_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_String_Char;
Semigroup_String_Char Semigroup_String_Char_ctor (Monoid_String_Char_mappend_t mappend );
__attribute__((weak)) Semigroup_String_Char Default_Semigroup_String_Char (Monoid_String_Char_mappend_t mappend ) {
  return Semigroup_String_Char_ctor (mappend );
}
const Semigroup_String_Char__H_Table * const get_Semigroup_String_Char__H_Table ();
void free_Semigroup_String_Char (Semigroup_String_Char * this );
#endif /* __Semigroup_String_Char__H_DECL__ */ 
List_char mempty_String_Char ();
List_char mappend_String_Char (List_char lhs , List_char rhs );
List_char mconcat_String_Char (List_List_char list );
Monoid_String_Char get_Monoid_String_Char ();
Semigroup_String_Char get_Semigroup_String_Char ();
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
  union { /* ciciliUnion3795 */
    struct { /* ciciliStruct3796 */
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
  union { /* ciciliUnion3838 */
    struct { /* ciciliStruct3839 */
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
  union { /* ciciliUnion3881 */
    struct { /* ciciliStruct3882 */
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
  union { /* ciciliUnion3924 */
    struct { /* ciciliStruct3925 */
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
  union { /* ciciliUnion3967 */
    struct { /* ciciliStruct3968 */
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
  union { /* ciciliUnion4053 */
    struct { /* ciciliStruct4054 */
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
  union { /* ciciliUnion4096 */
    struct { /* ciciliStruct4097 */
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
  union { /* ciciliUnion4139 */
    struct { /* ciciliStruct4140 */
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
  union { /* ciciliUnion4182 */
    struct { /* ciciliStruct4183 */
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
  union { /* ciciliUnion4225 */
    struct { /* ciciliStruct4226 */
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
  union { /* ciciliUnion4268 */
    struct { /* ciciliStruct4269 */
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
