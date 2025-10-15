#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define __h_ISPOINTER(x) ((((uintptr_t)(x)) & ~0xffff) != 0) 
typedef struct __h_FreeRouter {
  void (*free) (void * this );
} __h_FreeRouter;
void __h_free_data_router (void ** instance );
void __h_free_class_router (void *** instance );
typedef enum __h_DefaultCtor {
  __h___t
} __h_DefaultCtor;
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_True_t = 0,
  __h_False_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
typedef struct Bool Bool ;
typedef void (*free_Bool_t) (Bool * this );
typedef struct Bool {
  free_Bool_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion111 */
    struct { /* ciciliStruct112 */
    } False , _0 ;
    struct { /* ciciliStruct113 */
    } True , _ ;
  } __h_data ;
} Bool;
Bool False ();
Bool True ();
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
typedef struct Ordering {
  free_Ordering_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion125 */
    struct { /* ciciliStruct126 */
    } LT , _0 ;
    struct { /* ciciliStruct127 */
    } EQ , _1 ;
    struct { /* ciciliStruct128 */
    } GT , _ ;
  } __h_data ;
} Ordering;
Ordering LT ();
Ordering EQ ();
Ordering GT ();
#ifndef __H_Maybe_Bool
#define __H_Maybe_Bool
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Bool Maybe_Bool ;
typedef void (*free_Maybe_Bool_t) (Maybe_Bool * this );
typedef struct Maybe_Bool {
  free_Maybe_Bool_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion147 */
    struct { /* ciciliStruct148 */
    } Nothing , _0 ;
    struct { /* ciciliStruct149 */
      Bool __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Bool;
Maybe_Bool Nothing_Bool ();
Maybe_Bool Just_Bool (Bool __h_0_mem );
#endif /* __H_Maybe_Bool */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_Bool_class_t __h_List_Bool_class_t ;
typedef __h_List_Bool_class_t * List_Bool ;
typedef void (*free_List_Bool_t) (List_Bool this );
typedef struct __h_List_Bool_class_t {
  free_List_Bool_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion163 */
    struct { /* ciciliStruct164 */
    } Empty , _0 ;
    struct { /* ciciliStruct165 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_Bool_class_t;
List_Bool Empty_Bool ();
List_Bool __h_Cons_Bool_ctor (Bool __h_0_mem , List_Bool __h_1_mem );
List_Bool new_List_Bool_Pure (const Bool * buf , int len );
List_Bool next_List_Bool (List_Bool list );
Maybe_Bool nth_List_Bool (int index , List_Bool list );
List_Bool drop_List_Bool (int index , List_Bool list );
int len_List_Bool (List_Bool list );
int has_len_List_Bool (List_Bool list , int desired );
List_Bool take_List_Bool (int len , List_Bool list );
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist );
void show_List_Bool (List_Bool list );
#ifndef __H_Maybe_int
#define __H_Maybe_int
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_int Maybe_int ;
typedef void (*free_Maybe_int_t) (Maybe_int * this );
typedef struct Maybe_int {
  free_Maybe_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion209 */
    struct { /* ciciliStruct210 */
    } Nothing , _0 ;
    struct { /* ciciliStruct211 */
      int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int ();
Maybe_int Just_int (int __h_0_mem );
#endif /* __H_Maybe_int */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_int_class_t __h_List_int_class_t ;
typedef __h_List_int_class_t * List_int ;
typedef void (*free_List_int_t) (List_int this );
typedef struct __h_List_int_class_t {
  free_List_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion225 */
    struct { /* ciciliStruct226 */
    } Empty , _0 ;
    struct { /* ciciliStruct227 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_int_class_t;
List_int Empty_int ();
List_int __h_Cons_int_ctor (int __h_0_mem , List_int __h_1_mem );
List_int new_List_int_Pure (const int * buf , int len );
List_int next_List_int (List_int list );
Maybe_int nth_List_int (int index , List_int list );
List_int drop_List_int (int index , List_int list );
int len_List_int (List_int list );
int has_len_List_int (List_int list , int desired );
List_int take_List_int (int len , List_int list );
List_int append_List_int (List_int llist , List_int rlist );
void show_List_int (List_int list );
#ifndef __H_Maybe_char
#define __H_Maybe_char
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_char Maybe_char ;
typedef void (*free_Maybe_char_t) (Maybe_char * this );
typedef struct Maybe_char {
  free_Maybe_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion273 */
    struct { /* ciciliStruct274 */
    } Nothing , _0 ;
    struct { /* ciciliStruct275 */
      char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char ();
Maybe_char Just_char (char __h_0_mem );
#endif /* __H_Maybe_char */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_char_class_t __h_List_char_class_t ;
typedef __h_List_char_class_t * List_char ;
typedef void (*free_List_char_t) (List_char this );
typedef struct __h_List_char_class_t {
  free_List_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion289 */
    struct { /* ciciliStruct290 */
    } Empty , _0 ;
    struct { /* ciciliStruct291 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_char_class_t;
List_char Empty_char ();
List_char __h_Cons_char_ctor (char __h_0_mem , List_char __h_1_mem );
List_char new_List_char_Pure (const char * buf , int len );
List_char next_List_char (List_char list );
Maybe_char nth_List_char (int index , List_char list );
List_char drop_List_char (int index , List_char list );
int len_List_char (List_char list );
int has_len_List_char (List_char list , int desired );
List_char take_List_char (int len , List_char list );
List_char append_List_char (List_char llist , List_char rlist );
void show_List_char (List_char list );
typedef List_char String ;
__attribute__((weak)) List_char next_String (List_char list ) {
  return next_List_char (list );
}
__attribute__((weak)) Maybe_char nth_String (int index , List_char list ) {
  return nth_List_char (index , list );
}
__attribute__((weak)) List_char drop_String (int index , List_char list ) {
  return drop_List_char (index , list );
}
__attribute__((weak)) int len_String (List_char list ) {
  return len_List_char (list );
}
__attribute__((weak)) int has_len_String (List_char list , int desired ) {
  return has_len_List_char (list , desired );
}
__attribute__((weak)) List_char take_String (int len , List_char list ) {
  return take_List_char (len , list );
}
__attribute__((weak)) List_char append_String (List_char llist , List_char rlist ) {
  return append_List_char (llist , rlist );
}
List_char new_String_Const (const char * buf );
void show_String (List_char list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_Range_int_class_t __h_Range_int_class_t ;
typedef __h_Range_int_class_t * Range_int ;
typedef void (*free_Range_int_t) (Range_int this );
typedef struct __h_Range_int_class_t {
  free_Range_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion364 */
    struct { /* ciciliStruct365 */
    } Empty , _0 ;
    struct { /* ciciliStruct366 */
      int __h_0_mem ;
      Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_Range_int_class_t;
Range_int Empty_Range_int ();
Range_int __h_Cons_Range_int_ctor (int __h_0_mem , Range_int __h_1_mem , int __h_2_mem , int __h_3_mem );
Range_int new_Range_int (int from , int to , int step );
void release_Range_int (Range_int list );
Range_int next_Range_int (Range_int list );
Range_int take_Range_int (int len , Range_int list );
void show_Range_int (Range_int list );
#ifndef __H_Maybe_List_int
#define __H_Maybe_List_int
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int {
  free_Maybe_List_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion395 */
    struct { /* ciciliStruct396 */
    } Nothing , _0 ;
    struct { /* ciciliStruct397 */
      List_int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int ();
Maybe_List_int Just_List_int (List_int __h_0_mem );
#endif /* __H_Maybe_List_int */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_List_int_class_t __h_List_List_int_class_t ;
typedef __h_List_List_int_class_t * List_List_int ;
typedef void (*free_List_List_int_t) (List_List_int this );
typedef struct __h_List_List_int_class_t {
  free_List_List_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion411 */
    struct { /* ciciliStruct412 */
    } Empty , _0 ;
    struct { /* ciciliStruct413 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_int_class_t;
List_List_int Empty_List_int ();
List_List_int __h_Cons_List_int_ctor (List_int __h_0_mem , List_List_int __h_1_mem );
List_List_int new_List_List_int_Pure (const List_int * buf , int len );
List_List_int next_List_List_int (List_List_int list );
Maybe_List_int nth_List_List_int (int index , List_List_int list );
List_List_int drop_List_List_int (int index , List_List_int list );
int len_List_List_int (List_List_int list );
int has_len_List_List_int (List_List_int list , int desired );
List_List_int take_List_List_int (int len , List_List_int list );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
void show_List_List_int (List_List_int list );
#ifndef __H_Maybe_List_char
#define __H_Maybe_List_char
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_char Maybe_List_char ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char {
  free_Maybe_List_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion457 */
    struct { /* ciciliStruct458 */
    } Nothing , _0 ;
    struct { /* ciciliStruct459 */
      List_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Nothing_List_char ();
Maybe_List_char Just_List_char (List_char __h_0_mem );
#endif /* __H_Maybe_List_char */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_List_char_class_t __h_List_List_char_class_t ;
typedef __h_List_List_char_class_t * List_List_char ;
typedef void (*free_List_List_char_t) (List_List_char this );
typedef struct __h_List_List_char_class_t {
  free_List_List_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion473 */
    struct { /* ciciliStruct474 */
    } Empty , _0 ;
    struct { /* ciciliStruct475 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_char_class_t;
List_List_char Empty_List_char ();
List_List_char __h_Cons_List_char_ctor (List_char __h_0_mem , List_List_char __h_1_mem );
List_List_char new_List_List_char_Pure (const List_char * buf , int len );
List_List_char next_List_List_char (List_List_char list );
Maybe_List_char nth_List_List_char (int index , List_List_char list );
List_List_char drop_List_List_char (int index , List_List_char list );
int len_List_List_char (List_List_char list );
int has_len_List_List_char (List_List_char list , int desired );
List_List_char take_List_List_char (int len , List_List_char list );
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist );
void show_List_List_char (List_List_char list );
#ifndef __H_Maybe_String
#define __H_Maybe_String
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_String Maybe_String ;
typedef void (*free_Maybe_String_t) (Maybe_String * this );
typedef struct Maybe_String {
  free_Maybe_String_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion519 */
    struct { /* ciciliStruct520 */
    } Nothing , _0 ;
    struct { /* ciciliStruct521 */
      String __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String ();
Maybe_String Just_String (String __h_0_mem );
#endif /* __H_Maybe_String */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_String_class_t __h_List_String_class_t ;
typedef __h_List_String_class_t * List_String ;
typedef void (*free_List_String_t) (List_String this );
typedef struct __h_List_String_class_t {
  free_List_String_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion535 */
    struct { /* ciciliStruct536 */
    } Empty , _0 ;
    struct { /* ciciliStruct537 */
      String __h_0_mem ;
      List_String __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_String_class_t;
List_String Empty_String ();
List_String __h_Cons_String_ctor (String __h_0_mem , List_String __h_1_mem );
List_String new_List_String_Pure (const String * buf , int len );
List_String next_List_String (List_String list );
Maybe_String nth_List_String (int index , List_String list );
List_String drop_List_String (int index , List_String list );
int len_List_String (List_String list );
int has_len_List_String (List_String list , int desired );
List_String take_List_String (int len , List_String list );
List_String append_List_String (List_String llist , List_String rlist );
void show_List_String (List_String list );
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable );
typedef int (*Monoid_Sum_int_mappend) (int lhs , int rhs );
typedef int (*Monoid_Sum_int_mconcat) (List_int l );
#ifndef __H___h_Monoid_Sum_int_ctor_t__
#define __H___h_Monoid_Sum_int_ctor_t__
typedef enum __h_Monoid_Sum_int_ctor_t {
  __h_m_Sum_int_t = 0
} __h_Monoid_Sum_int_ctor_t;
#endif /* __H___h_Monoid_Sum_int_ctor_t__ */ 
typedef struct Monoid_Sum_int Monoid_Sum_int ;
typedef void (*free_Monoid_Sum_int_t) (Monoid_Sum_int * this );
typedef struct Monoid_Sum_int {
  free_Monoid_Sum_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion593 */
    struct { /* ciciliStruct594 */
      Monoid_Sum_int_mappend __h_0_mem ;
      int __h_1_mem ;
      Monoid_Sum_int_mconcat __h_2_mem ;
    } m_Sum_int , _ ;
  } __h_data ;
} Monoid_Sum_int;
Monoid_Sum_int __h_m_Sum_int_ctor (Monoid_Sum_int_mappend __h_0_mem , int __h_1_mem , Monoid_Sum_int_mconcat __h_2_mem );
#ifndef __H___h_Semigroup_Sum_int_ctor_t__
#define __H___h_Semigroup_Sum_int_ctor_t__
typedef enum __h_Semigroup_Sum_int_ctor_t {
  __h_sg_Sum_int_t = 0
} __h_Semigroup_Sum_int_ctor_t;
#endif /* __H___h_Semigroup_Sum_int_ctor_t__ */ 
typedef struct Semigroup_Sum_int Semigroup_Sum_int ;
typedef void (*free_Semigroup_Sum_int_t) (Semigroup_Sum_int * this );
typedef struct Semigroup_Sum_int {
  free_Semigroup_Sum_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion607 */
    struct { /* ciciliStruct608 */
      Monoid_Sum_int_mappend __h_0_mem ;
    } sg_Sum_int , _ ;
  } __h_data ;
} Semigroup_Sum_int;
Semigroup_Sum_int sg_Sum_int (Monoid_Sum_int_mappend __h_0_mem );
int Monoid_Sum_int_mappend_int_s (int x , int y );
int Monoid_Sum_int_mconcat_int_s (List_int l );
Monoid_Sum_int get_Monoid_Sum_int ();
Semigroup_Sum_int get_Semigroup_Sum_int ();
typedef int (*Monoid_Product_int_mappend) (int lhs , int rhs );
typedef int (*Monoid_Product_int_mconcat) (List_int l );
#ifndef __H___h_Monoid_Product_int_ctor_t__
#define __H___h_Monoid_Product_int_ctor_t__
typedef enum __h_Monoid_Product_int_ctor_t {
  __h_m_Product_int_t = 0
} __h_Monoid_Product_int_ctor_t;
#endif /* __H___h_Monoid_Product_int_ctor_t__ */ 
typedef struct Monoid_Product_int Monoid_Product_int ;
typedef void (*free_Monoid_Product_int_t) (Monoid_Product_int * this );
typedef struct Monoid_Product_int {
  free_Monoid_Product_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion642 */
    struct { /* ciciliStruct643 */
      Monoid_Product_int_mappend __h_0_mem ;
      int __h_1_mem ;
      Monoid_Product_int_mconcat __h_2_mem ;
    } m_Product_int , _ ;
  } __h_data ;
} Monoid_Product_int;
Monoid_Product_int __h_m_Product_int_ctor (Monoid_Product_int_mappend __h_0_mem , int __h_1_mem , Monoid_Product_int_mconcat __h_2_mem );
#ifndef __H___h_Semigroup_Product_int_ctor_t__
#define __H___h_Semigroup_Product_int_ctor_t__
typedef enum __h_Semigroup_Product_int_ctor_t {
  __h_sg_Product_int_t = 0
} __h_Semigroup_Product_int_ctor_t;
#endif /* __H___h_Semigroup_Product_int_ctor_t__ */ 
typedef struct Semigroup_Product_int Semigroup_Product_int ;
typedef void (*free_Semigroup_Product_int_t) (Semigroup_Product_int * this );
typedef struct Semigroup_Product_int {
  free_Semigroup_Product_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion656 */
    struct { /* ciciliStruct657 */
      Monoid_Product_int_mappend __h_0_mem ;
    } sg_Product_int , _ ;
  } __h_data ;
} Semigroup_Product_int;
Semigroup_Product_int sg_Product_int (Monoid_Product_int_mappend __h_0_mem );
int Monoid_Product_int_mappend_int_s (int x , int y );
int Monoid_Product_int_mconcat_int_s (List_int l );
Monoid_Product_int get_Monoid_Product_int ();
Semigroup_Product_int get_Semigroup_Product_int ();
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable );
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable );
typedef List_int (*Monoid_Concat_List_int_mappend) (List_int lhs , List_int rhs );
typedef List_int (*Monoid_Concat_List_int_mconcat) (List_List_int l );
#ifndef __H___h_Monoid_Concat_List_int_ctor_t__
#define __H___h_Monoid_Concat_List_int_ctor_t__
typedef enum __h_Monoid_Concat_List_int_ctor_t {
  __h_m_Concat_List_int_t = 0
} __h_Monoid_Concat_List_int_ctor_t;
#endif /* __H___h_Monoid_Concat_List_int_ctor_t__ */ 
typedef struct Monoid_Concat_List_int Monoid_Concat_List_int ;
typedef void (*free_Monoid_Concat_List_int_t) (Monoid_Concat_List_int * this );
typedef struct Monoid_Concat_List_int {
  free_Monoid_Concat_List_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion718 */
    struct { /* ciciliStruct719 */
      Monoid_Concat_List_int_mappend __h_0_mem ;
      List_int __h_1_mem ;
      Monoid_Concat_List_int_mconcat __h_2_mem ;
    } m_Concat_List_int , _ ;
  } __h_data ;
} Monoid_Concat_List_int;
Monoid_Concat_List_int __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend __h_0_mem , List_int __h_1_mem , Monoid_Concat_List_int_mconcat __h_2_mem );
#ifndef __H___h_Semigroup_Concat_List_int_ctor_t__
#define __H___h_Semigroup_Concat_List_int_ctor_t__
typedef enum __h_Semigroup_Concat_List_int_ctor_t {
  __h_sg_Concat_List_int_t = 0
} __h_Semigroup_Concat_List_int_ctor_t;
#endif /* __H___h_Semigroup_Concat_List_int_ctor_t__ */ 
typedef struct Semigroup_Concat_List_int Semigroup_Concat_List_int ;
typedef void (*free_Semigroup_Concat_List_int_t) (Semigroup_Concat_List_int * this );
typedef struct Semigroup_Concat_List_int {
  free_Semigroup_Concat_List_int_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion732 */
    struct { /* ciciliStruct733 */
      Monoid_Concat_List_int_mappend __h_0_mem ;
    } sg_Concat_List_int , _ ;
  } __h_data ;
} Semigroup_Concat_List_int;
Semigroup_Concat_List_int sg_Concat_List_int (Monoid_Concat_List_int_mappend __h_0_mem );
List_int Monoid_Concat_List_int_mappend_List_int_s (List_int x , List_int y );
List_int Monoid_Concat_List_int_mconcat_List_int_s (List_List_int l );
Monoid_Concat_List_int get_Monoid_Concat_List_int ();
Semigroup_Concat_List_int get_Semigroup_Concat_List_int ();
typedef List_char (*Monoid_Concat_List_char_mappend) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_Concat_List_char_mconcat) (List_List_char l );
#ifndef __H___h_Monoid_Concat_List_char_ctor_t__
#define __H___h_Monoid_Concat_List_char_ctor_t__
typedef enum __h_Monoid_Concat_List_char_ctor_t {
  __h_m_Concat_List_char_t = 0
} __h_Monoid_Concat_List_char_ctor_t;
#endif /* __H___h_Monoid_Concat_List_char_ctor_t__ */ 
typedef struct Monoid_Concat_List_char Monoid_Concat_List_char ;
typedef void (*free_Monoid_Concat_List_char_t) (Monoid_Concat_List_char * this );
typedef struct Monoid_Concat_List_char {
  free_Monoid_Concat_List_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion776 */
    struct { /* ciciliStruct777 */
      Monoid_Concat_List_char_mappend __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_Concat_List_char_mconcat __h_2_mem ;
    } m_Concat_List_char , _ ;
  } __h_data ;
} Monoid_Concat_List_char;
Monoid_Concat_List_char __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend __h_0_mem , List_char __h_1_mem , Monoid_Concat_List_char_mconcat __h_2_mem );
#ifndef __H___h_Semigroup_Concat_List_char_ctor_t__
#define __H___h_Semigroup_Concat_List_char_ctor_t__
typedef enum __h_Semigroup_Concat_List_char_ctor_t {
  __h_sg_Concat_List_char_t = 0
} __h_Semigroup_Concat_List_char_ctor_t;
#endif /* __H___h_Semigroup_Concat_List_char_ctor_t__ */ 
typedef struct Semigroup_Concat_List_char Semigroup_Concat_List_char ;
typedef void (*free_Semigroup_Concat_List_char_t) (Semigroup_Concat_List_char * this );
typedef struct Semigroup_Concat_List_char {
  free_Semigroup_Concat_List_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion790 */
    struct { /* ciciliStruct791 */
      Monoid_Concat_List_char_mappend __h_0_mem ;
    } sg_Concat_List_char , _ ;
  } __h_data ;
} Semigroup_Concat_List_char;
Semigroup_Concat_List_char sg_Concat_List_char (Monoid_Concat_List_char_mappend __h_0_mem );
List_char Monoid_Concat_List_char_mappend_List_char_s (List_char x , List_char y );
List_char Monoid_Concat_List_char_mconcat_List_char_s (List_List_char l );
Monoid_Concat_List_char get_Monoid_Concat_List_char ();
Semigroup_Concat_List_char get_Semigroup_Concat_List_char ();
typedef List_char (*Monoid_Concat_String_char_mappend) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_Concat_String_char_mconcat) (List_List_char l );
#ifndef __H___h_Monoid_Concat_String_char_ctor_t__
#define __H___h_Monoid_Concat_String_char_ctor_t__
typedef enum __h_Monoid_Concat_String_char_ctor_t {
  __h_m_Concat_String_char_t = 0
} __h_Monoid_Concat_String_char_ctor_t;
#endif /* __H___h_Monoid_Concat_String_char_ctor_t__ */ 
typedef struct Monoid_Concat_String_char Monoid_Concat_String_char ;
typedef void (*free_Monoid_Concat_String_char_t) (Monoid_Concat_String_char * this );
typedef struct Monoid_Concat_String_char {
  free_Monoid_Concat_String_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion834 */
    struct { /* ciciliStruct835 */
      Monoid_Concat_String_char_mappend __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_Concat_String_char_mconcat __h_2_mem ;
    } m_Concat_String_char , _ ;
  } __h_data ;
} Monoid_Concat_String_char;
Monoid_Concat_String_char __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend __h_0_mem , List_char __h_1_mem , Monoid_Concat_String_char_mconcat __h_2_mem );
#ifndef __H___h_Semigroup_Concat_String_char_ctor_t__
#define __H___h_Semigroup_Concat_String_char_ctor_t__
typedef enum __h_Semigroup_Concat_String_char_ctor_t {
  __h_sg_Concat_String_char_t = 0
} __h_Semigroup_Concat_String_char_ctor_t;
#endif /* __H___h_Semigroup_Concat_String_char_ctor_t__ */ 
typedef struct Semigroup_Concat_String_char Semigroup_Concat_String_char ;
typedef void (*free_Semigroup_Concat_String_char_t) (Semigroup_Concat_String_char * this );
typedef struct Semigroup_Concat_String_char {
  free_Semigroup_Concat_String_char_t __h_free ;
  char __h_ctor ;
  union { /* ciciliUnion848 */
    struct { /* ciciliStruct849 */
      Monoid_Concat_String_char_mappend __h_0_mem ;
    } sg_Concat_String_char , _ ;
  } __h_data ;
} Semigroup_Concat_String_char;
Semigroup_Concat_String_char sg_Concat_String_char (Monoid_Concat_String_char_mappend __h_0_mem );
List_char Monoid_Concat_String_char_mappend_List_char_s (List_char x , List_char y );
List_char Monoid_Concat_String_char_mconcat_List_char_s (List_List_char l );
Monoid_Concat_String_char get_Monoid_Concat_String_char ();
Semigroup_Concat_String_char get_Semigroup_Concat_String_char ();
List_int fmap_List_int_List_int_Pure (int (*atob) (int value ), List_int input );
List_Bool fmap_List_int_List_Bool_Pure (Bool (*atob) (int value ), List_int input );
List_char fmap_List_char_List_char_Pure (char (*atob) (char value ), List_char input );
List_Bool fmap_List_char_List_Bool_Pure (Bool (*atob) (char value ), List_char input );
