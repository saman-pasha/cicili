#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef enum DefaultCtor {
  __h___t
} DefaultCtor;
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_True_t = 0,
  __h_False_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
typedef struct Bool {
  char __h_ctor ;
  union { /* ciciliUnion103 */
    struct { /* ciciliStruct104 */
    } False , _0 ;
    struct { /* ciciliStruct105 */
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
typedef struct Ordering {
  char __h_ctor ;
  union { /* ciciliUnion113 */
    struct { /* ciciliStruct114 */
    } LT , _0 ;
    struct { /* ciciliStruct115 */
    } EQ , _1 ;
    struct { /* ciciliStruct116 */
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
typedef struct Maybe_Bool {
  char __h_ctor ;
  union { /* ciciliUnion131 */
    struct { /* ciciliStruct132 */
    } Nothing , _0 ;
    struct { /* ciciliStruct133 */
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
typedef struct __h_List_Bool_class_t {
  char __h_ctor ;
  union { /* ciciliUnion143 */
    struct { /* ciciliStruct144 */
    } Empty , _0 ;
    struct { /* ciciliStruct145 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_Bool_class_t;
List_Bool Empty_Bool ();
List_Bool __h_Cons_Bool_ctor (Bool __h_0_mem , List_Bool __h_1_mem );
List_Bool new_List_Bool_Pure (const Bool * buf , int len );
void release_List_Bool (List_Bool list );
__attribute__((weak)) void free_List_Bool (List_Bool * list ) {
  release_List_Bool ((*list ));
}
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
typedef struct Maybe_int {
  char __h_ctor ;
  union { /* ciciliUnion190 */
    struct { /* ciciliStruct191 */
    } Nothing , _0 ;
    struct { /* ciciliStruct192 */
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
typedef struct __h_List_int_class_t {
  char __h_ctor ;
  union { /* ciciliUnion202 */
    struct { /* ciciliStruct203 */
    } Empty , _0 ;
    struct { /* ciciliStruct204 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_int_class_t;
List_int Empty_int ();
List_int __h_Cons_int_ctor (int __h_0_mem , List_int __h_1_mem );
List_int new_List_int_Pure (const int * buf , int len );
void release_List_int (List_int list );
__attribute__((weak)) void free_List_int (List_int * list ) {
  release_List_int ((*list ));
}
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
typedef struct Maybe_char {
  char __h_ctor ;
  union { /* ciciliUnion251 */
    struct { /* ciciliStruct252 */
    } Nothing , _0 ;
    struct { /* ciciliStruct253 */
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
typedef struct __h_List_char_class_t {
  char __h_ctor ;
  union { /* ciciliUnion263 */
    struct { /* ciciliStruct264 */
    } Empty , _0 ;
    struct { /* ciciliStruct265 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_char_class_t;
List_char Empty_char ();
List_char __h_Cons_char_ctor (char __h_0_mem , List_char __h_1_mem );
List_char new_List_char_Pure (const char * buf , int len );
void release_List_char (List_char list );
__attribute__((weak)) void free_List_char (List_char * list ) {
  release_List_char ((*list ));
}
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
__attribute__((weak)) void free_String (List_char * list ) {
  release_List_char ((*list ));
}
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_Range_int_class_t __h_Range_int_class_t ;
typedef __h_Range_int_class_t * Range_int ;
typedef struct __h_Range_int_class_t {
  char __h_ctor ;
  union { /* ciciliUnion342 */
    struct { /* ciciliStruct343 */
    } Empty , _0 ;
    struct { /* ciciliStruct344 */
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
__attribute__((weak)) void free_Range_int (Range_int * list ) {
  release_Range_int ((*list ));
}
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
typedef struct Maybe_List_int {
  char __h_ctor ;
  union { /* ciciliUnion372 */
    struct { /* ciciliStruct373 */
    } Nothing , _0 ;
    struct { /* ciciliStruct374 */
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
typedef struct __h_List_List_int_class_t {
  char __h_ctor ;
  union { /* ciciliUnion384 */
    struct { /* ciciliStruct385 */
    } Empty , _0 ;
    struct { /* ciciliStruct386 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_int_class_t;
List_List_int Empty_List_int ();
List_List_int __h_Cons_List_int_ctor (List_int __h_0_mem , List_List_int __h_1_mem );
List_List_int new_List_List_int_Pure (const List_int * buf , int len );
void release_List_List_int (List_List_int list );
__attribute__((weak)) void free_List_List_int (List_List_int * list ) {
  release_List_List_int ((*list ));
}
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
typedef struct Maybe_List_char {
  char __h_ctor ;
  union { /* ciciliUnion431 */
    struct { /* ciciliStruct432 */
    } Nothing , _0 ;
    struct { /* ciciliStruct433 */
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
typedef struct __h_List_List_char_class_t {
  char __h_ctor ;
  union { /* ciciliUnion443 */
    struct { /* ciciliStruct444 */
    } Empty , _0 ;
    struct { /* ciciliStruct445 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_char_class_t;
List_List_char Empty_List_char ();
List_List_char __h_Cons_List_char_ctor (List_char __h_0_mem , List_List_char __h_1_mem );
List_List_char new_List_List_char_Pure (const List_char * buf , int len );
void release_List_List_char (List_List_char list );
__attribute__((weak)) void free_List_List_char (List_List_char * list ) {
  release_List_List_char ((*list ));
}
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
typedef struct Maybe_String {
  char __h_ctor ;
  union { /* ciciliUnion490 */
    struct { /* ciciliStruct491 */
    } Nothing , _0 ;
    struct { /* ciciliStruct492 */
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
typedef struct __h_List_String_class_t {
  char __h_ctor ;
  union { /* ciciliUnion502 */
    struct { /* ciciliStruct503 */
    } Empty , _0 ;
    struct { /* ciciliStruct504 */
      String __h_0_mem ;
      List_String __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_String_class_t;
List_String Empty_String ();
List_String __h_Cons_String_ctor (String __h_0_mem , List_String __h_1_mem );
List_String new_List_String_Pure (const String * buf , int len );
void release_List_String (List_String list );
__attribute__((weak)) void free_List_String (List_String * list ) {
  release_List_String ((*list ));
}
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
typedef struct Monoid_Sum_int {
  char __h_ctor ;
  union { /* ciciliUnion561 */
    struct { /* ciciliStruct562 */
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
typedef struct Semigroup_Sum_int {
  char __h_ctor ;
  union { /* ciciliUnion571 */
    struct { /* ciciliStruct572 */
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
typedef struct Monoid_Product_int {
  char __h_ctor ;
  union { /* ciciliUnion602 */
    struct { /* ciciliStruct603 */
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
typedef struct Semigroup_Product_int {
  char __h_ctor ;
  union { /* ciciliUnion612 */
    struct { /* ciciliStruct613 */
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
typedef struct Monoid_Concat_List_int {
  char __h_ctor ;
  union { /* ciciliUnion670 */
    struct { /* ciciliStruct671 */
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
typedef struct Semigroup_Concat_List_int {
  char __h_ctor ;
  union { /* ciciliUnion680 */
    struct { /* ciciliStruct681 */
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
typedef struct Monoid_Concat_List_char {
  char __h_ctor ;
  union { /* ciciliUnion720 */
    struct { /* ciciliStruct721 */
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
typedef struct Semigroup_Concat_List_char {
  char __h_ctor ;
  union { /* ciciliUnion730 */
    struct { /* ciciliStruct731 */
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
typedef struct Monoid_Concat_String_char {
  char __h_ctor ;
  union { /* ciciliUnion770 */
    struct { /* ciciliStruct771 */
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
typedef struct Semigroup_Concat_String_char {
  char __h_ctor ;
  union { /* ciciliUnion780 */
    struct { /* ciciliStruct781 */
      Monoid_Concat_String_char_mappend __h_0_mem ;
    } sg_Concat_String_char , _ ;
  } __h_data ;
} Semigroup_Concat_String_char;
Semigroup_Concat_String_char sg_Concat_String_char (Monoid_Concat_String_char_mappend __h_0_mem );
List_char Monoid_Concat_String_char_mappend_List_char_s (List_char x , List_char y );
List_char Monoid_Concat_String_char_mconcat_List_char_s (List_List_char l );
Monoid_Concat_String_char get_Monoid_Concat_String_char ();
Semigroup_Concat_String_char get_Semigroup_Concat_String_char ();
List_int fmap_List_int_List_int (int (*atob) (int value ), List_int input );
List_Bool fmap_List_int_List_Bool (Bool (*atob) (int value ), List_int input );
List_char fmap_List_char_List_char (char (*atob) (char value ), List_char input );
List_Bool fmap_List_char_List_Bool (Bool (*atob) (char value ), List_char input );
