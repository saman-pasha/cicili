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
  __h_False_t,
  __h_True_t
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
typedef struct Bool {
  __h_Bool_ctor_t __h_ctor ;
  union { /* ciciliUnion103 */
    struct { /* ciciliStruct104 */
    } False ;
    struct { /* ciciliStruct105 */
    } True ;
  } __h_data ;
} Bool;
Bool False ();
Bool True ();
#ifndef __H___h_Ordering_ctor_t__
#define __H___h_Ordering_ctor_t__
typedef enum __h_Ordering_ctor_t {
  __h_LT_t,
  __h_EQ_t,
  __h_GT_t
} __h_Ordering_ctor_t;
#endif /* __H___h_Ordering_ctor_t__ */ 
typedef struct Ordering {
  __h_Ordering_ctor_t __h_ctor ;
  union { /* ciciliUnion113 */
    struct { /* ciciliStruct114 */
    } LT ;
    struct { /* ciciliStruct115 */
    } EQ ;
    struct { /* ciciliStruct116 */
    } GT ;
  } __h_data ;
} Ordering;
Ordering LT ();
Ordering EQ ();
Ordering GT ();
#ifndef __H_Maybe_int
#define __H_Maybe_int
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_int {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion131 */
    struct { /* ciciliStruct132 */
    } Nothing ;
    struct { /* ciciliStruct133 */
      int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int ();
Maybe_int Just_int (int __h_0_mem );
#endif /* __H_Maybe_int */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Empty_t,
  __h_Cons_t
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct List_int {
  __h_List_ctor_t __h_ctor ;
  union { /* ciciliUnion143 */
    struct { /* ciciliStruct144 */
    } Empty ;
    struct { /* ciciliStruct145 */
      int __h_0_mem ;
      struct List_int * __h_1_mem ;
    } Cons ;
  } __h_data ;
} List_int;
List_int * Empty_int ();
List_int * __h_Cons_int_ctor (int __h_0_mem , struct List_int * __h_1_mem );
List_int * new_List_int_Pure (const int * buf , int len );
void release_List_int (List_int * list );
__attribute__((weak)) void free_List_int (List_int ** list ) {
  release_List_int ((*list ));
}
List_int * next_List_int (List_int * list );
Maybe_int nth_List_int (int index , List_int * list );
List_int * drop_List_int (int index , List_int * list );
int len_List_int (List_int * list );
int has_len_List_int (List_int * list , int desired );
List_int * take_List_int (int len , List_int * list );
List_int * append_List_int (List_int * llist , List_int * rlist );
void show_List_int (List_int * list );
#ifndef __H_Maybe_char
#define __H_Maybe_char
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_char {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion192 */
    struct { /* ciciliStruct193 */
    } Nothing ;
    struct { /* ciciliStruct194 */
      char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char ();
Maybe_char Just_char (char __h_0_mem );
#endif /* __H_Maybe_char */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Empty_t,
  __h_Cons_t
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct List_char {
  __h_List_ctor_t __h_ctor ;
  union { /* ciciliUnion204 */
    struct { /* ciciliStruct205 */
    } Empty ;
    struct { /* ciciliStruct206 */
      char __h_0_mem ;
      struct List_char * __h_1_mem ;
    } Cons ;
  } __h_data ;
} List_char;
List_char * Empty_char ();
List_char * __h_Cons_char_ctor (char __h_0_mem , struct List_char * __h_1_mem );
List_char * new_List_char_Pure (const char * buf , int len );
void release_List_char (List_char * list );
__attribute__((weak)) void free_List_char (List_char ** list ) {
  release_List_char ((*list ));
}
List_char * next_List_char (List_char * list );
Maybe_char nth_List_char (int index , List_char * list );
List_char * drop_List_char (int index , List_char * list );
int len_List_char (List_char * list );
int has_len_List_char (List_char * list , int desired );
List_char * take_List_char (int len , List_char * list );
List_char * append_List_char (List_char * llist , List_char * rlist );
void show_List_char (List_char * list );
typedef List_char String ;
__attribute__((weak)) List_char * next_String (List_char * list ) {
  return next_List_char (list );
}
__attribute__((weak)) Maybe_char nth_String (int index , List_char * list ) {
  return nth_List_char (index , list );
}
__attribute__((weak)) List_char * drop_String (int index , List_char * list ) {
  return drop_List_char (index , list );
}
__attribute__((weak)) int len_String (List_char * list ) {
  return len_List_char (list );
}
__attribute__((weak)) int has_len_String (List_char * list , int desired ) {
  return has_len_List_char (list , desired );
}
__attribute__((weak)) List_char * take_String (int len , List_char * list ) {
  return take_List_char (len , list );
}
__attribute__((weak)) List_char * append_String (List_char * llist , List_char * rlist ) {
  return append_List_char (llist , rlist );
}
List_char * new_String_Const (const char * buf );
void show_String (List_char * list );
__attribute__((weak)) void free_String (List_char ** list ) {
  release_List_char ((*list ));
}
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Empty_t,
  __h_Cons_t
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct Range_int {
  __h_List_ctor_t __h_ctor ;
  union { /* ciciliUnion283 */
    struct { /* ciciliStruct284 */
    } Empty ;
    struct { /* ciciliStruct285 */
      int __h_0_mem ;
      struct Range_int * __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons ;
  } __h_data ;
} Range_int;
Range_int * Empty_Range_int ();
Range_int * __h_Cons_Range_int_ctor (int __h_0_mem , struct Range_int * __h_1_mem , int __h_2_mem , int __h_3_mem );
Range_int * new_Range_int (int from , int to , int step );
void release_Range_int (Range_int * list );
__attribute__((weak)) void free_Range_int (Range_int ** list ) {
  release_Range_int ((*list ));
}
Range_int * next_Range_int (Range_int * list );
Range_int * take_Range_int (int len , Range_int * list );
void show_Range_int (Range_int * list );
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int * foldable );
typedef int (*Monoid_Sum_int_mappend) (int lhs , int rhs );
typedef int (*Monoid_Sum_int_mconcat) (List_int * l );
#ifndef __H___h_Monoid_Sum_int_ctor_t__
#define __H___h_Monoid_Sum_int_ctor_t__
typedef enum __h_Monoid_Sum_int_ctor_t {
  __h___h_Monoid_Sum_int_ctor_t_t
} __h_Monoid_Sum_int_ctor_t;
#endif /* __H___h_Monoid_Sum_int_ctor_t__ */ 
typedef struct Monoid_Sum_int {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion325 */
    struct { /* ciciliStruct326 */
      int __h_0_mem ;
      Monoid_Sum_int_mappend __h_1_mem ;
      Monoid_Sum_int_mconcat __h_2_mem ;
    } _ ;
  } __h_data ;
} Monoid_Sum_int;
Monoid_Sum_int __h_m_Sum_int_ctor (int __h_0_mem , Monoid_Sum_int_mappend __h_1_mem , Monoid_Sum_int_mconcat __h_2_mem );
int Monoid_Sum_int_mappend_int_s (int x , int y );
int Monoid_Sum_int_mconcat_int_s (List_int * l );
Monoid_Sum_int get_Monoid_Sum_int ();
typedef int (*Monoid_Product_int_mappend) (int lhs , int rhs );
typedef int (*Monoid_Product_int_mconcat) (List_int * l );
#ifndef __H___h_Monoid_Product_int_ctor_t__
#define __H___h_Monoid_Product_int_ctor_t__
typedef enum __h_Monoid_Product_int_ctor_t {
  __h___h_Monoid_Product_int_ctor_t_t
} __h_Monoid_Product_int_ctor_t;
#endif /* __H___h_Monoid_Product_int_ctor_t__ */ 
typedef struct Monoid_Product_int {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion352 */
    struct { /* ciciliStruct353 */
      int __h_0_mem ;
      Monoid_Product_int_mappend __h_1_mem ;
      Monoid_Product_int_mconcat __h_2_mem ;
    } _ ;
  } __h_data ;
} Monoid_Product_int;
Monoid_Product_int __h_m_Product_int_ctor (int __h_0_mem , Monoid_Product_int_mappend __h_1_mem , Monoid_Product_int_mconcat __h_2_mem );
int Monoid_Product_int_mappend_int_s (int x , int y );
int Monoid_Product_int_mconcat_int_s (List_int * l );
Monoid_Product_int get_Monoid_Product_int ();
