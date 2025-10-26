#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
  free_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion109 */
    struct { /* ciciliStruct110 */
    } False , _0 ;
    struct { /* ciciliStruct111 */
    } True , _ ;
  } __h_data ;
} Bool;
Bool False ();
Bool True ();
__attribute__((weak)) Bool Default_Bool () {
  return True ();
}
void free_Bool (Bool * this );
Bool and_Bool (Bool lhs , Bool rhs );
Bool or_Bool (Bool lhs , Bool rhs );
void show_Bool (Bool value );
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
  free_Ordering_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion130 */
    struct { /* ciciliStruct131 */
    } LT , _0 ;
    struct { /* ciciliStruct132 */
    } EQ , _1 ;
    struct { /* ciciliStruct133 */
    } GT , _ ;
  } __h_data ;
} Ordering;
Ordering LT ();
Ordering EQ ();
Ordering GT ();
__attribute__((weak)) Ordering Default_Ordering () {
  return GT ();
}
void free_Ordering (Ordering * this );
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
  free_Maybe_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion154 */
    struct { /* ciciliStruct155 */
    } Nothing , _0 ;
    struct { /* ciciliStruct156 */
      Bool __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Bool;
Maybe_Bool Nothing_Bool ();
Maybe_Bool Just_Bool (Bool value );
__attribute__((weak)) Maybe_Bool Default_Maybe_Bool (Bool value ) {
  return Just_Bool (value );
}
void free_Maybe_Bool (Maybe_Bool * this );
#endif /* __H_Maybe_Bool */ 
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
  free_Maybe_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion178 */
    struct { /* ciciliStruct179 */
    } Nothing , _0 ;
    struct { /* ciciliStruct180 */
      int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int ();
Maybe_int Just_int (int value );
__attribute__((weak)) Maybe_int Default_Maybe_int (int value ) {
  return Just_int (value );
}
void free_Maybe_int (Maybe_int * this );
#endif /* __H_Maybe_int */ 
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
  free_Maybe_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion202 */
    struct { /* ciciliStruct203 */
    } Nothing , _0 ;
    struct { /* ciciliStruct204 */
      char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char ();
Maybe_char Just_char (char value );
__attribute__((weak)) Maybe_char Default_Maybe_char (char value ) {
  return Just_char (value );
}
void free_Maybe_char (Maybe_char * this );
#endif /* __H_Maybe_char */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_Bool_class_t __h_List_Bool_class_t ;
typedef __h_List_Bool_class_t * List_Bool ;
typedef void (*free_List_Bool_t) (List_Bool * this_ptr );
typedef struct __h_List_Bool_class_t {
  free_List_Bool_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion225 */
    struct { /* ciciliStruct226 */
    } Empty , _0 ;
    struct { /* ciciliStruct227 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_Bool_class_t;
List_Bool Empty_Bool ();
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail );
void free_List_Bool (List_Bool * this_ptr );
List_Bool new_List_Bool_Pure (const Bool * buf , int len );
List_Bool next_List_Bool (List_Bool list );
Maybe_Bool nth_List_Bool (int index , List_Bool list );
List_Bool drop_List_Bool (int index , List_Bool list );
int len_List_Bool (List_Bool list );
int has_len_List_Bool (List_Bool list , int desired );
List_Bool take_List_Bool (int len , List_Bool list );
List_Bool last_List_Bool (List_Bool list );
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist );
void show_List_Bool (List_Bool list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_int_class_t __h_List_int_class_t ;
typedef __h_List_int_class_t * List_int ;
typedef void (*free_List_int_t) (List_int * this_ptr );
typedef struct __h_List_int_class_t {
  free_List_int_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion273 */
    struct { /* ciciliStruct274 */
    } Empty , _0 ;
    struct { /* ciciliStruct275 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_int_class_t;
List_int Empty_int ();
List_int __h_Cons_int_ctor (int head , List_int tail );
void free_List_int (List_int * this_ptr );
List_int new_List_int_Pure (const int * buf , int len );
List_int next_List_int (List_int list );
Maybe_int nth_List_int (int index , List_int list );
List_int drop_List_int (int index , List_int list );
int len_List_int (List_int list );
int has_len_List_int (List_int list , int desired );
List_int take_List_int (int len , List_int list );
List_int last_List_int (List_int list );
List_int append_List_int (List_int llist , List_int rlist );
void show_List_int (List_int list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_char_class_t __h_List_char_class_t ;
typedef __h_List_char_class_t * List_char ;
typedef void (*free_List_char_t) (List_char * this_ptr );
typedef struct __h_List_char_class_t {
  free_List_char_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion323 */
    struct { /* ciciliStruct324 */
    } Empty , _0 ;
    struct { /* ciciliStruct325 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_char_class_t;
List_char Empty_char ();
List_char __h_Cons_char_ctor (char head , List_char tail );
void free_List_char (List_char * this_ptr );
List_char new_List_char_Pure (const char * buf , int len );
List_char next_List_char (List_char list );
Maybe_char nth_List_char (int index , List_char list );
List_char drop_List_char (int index , List_char list );
int len_List_char (List_char list );
int has_len_List_char (List_char list , int desired );
List_char take_List_char (int len , List_char list );
List_char last_List_char (List_char list );
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
  free_List_char (list );
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
typedef void (*free_Range_int_t) (Range_int * this_ptr );
typedef struct __h_Range_int_class_t {
  free_Range_int_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion406 */
    struct { /* ciciliStruct407 */
    } Empty , _0 ;
    struct { /* ciciliStruct408 */
      int __h_0_mem ;
      Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_Range_int_class_t;
Range_int Empty_Range_int ();
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step );
void free_Range_int (Range_int * this_ptr );
Range_int new_Range_int (int from , int to , int step );
void release_Range_int (Range_int list );
Range_int next_Range_int (Range_int list );
Range_int take_Range_int (int len , Range_int list );
void show_Range_int (Range_int list );
#ifndef __H_Maybe_List_Bool
#define __H_Maybe_List_Bool
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Bool Maybe_List_Bool ;
typedef void (*free_Maybe_List_Bool_t) (Maybe_List_Bool * this );
typedef struct Maybe_List_Bool {
  free_Maybe_List_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion438 */
    struct { /* ciciliStruct439 */
    } Nothing , _0 ;
    struct { /* ciciliStruct440 */
      List_Bool __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Nothing_List_Bool ();
Maybe_List_Bool Just_List_Bool (List_Bool value );
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool (List_Bool value ) {
  return Just_List_Bool (value );
}
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __H_Maybe_List_Bool */ 
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
  free_Maybe_List_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion462 */
    struct { /* ciciliStruct463 */
    } Nothing , _0 ;
    struct { /* ciciliStruct464 */
      List_int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int ();
Maybe_List_int Just_List_int (List_int value );
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int (List_int value ) {
  return Just_List_int (value );
}
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __H_Maybe_List_int */ 
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
  free_Maybe_List_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion486 */
    struct { /* ciciliStruct487 */
    } Nothing , _0 ;
    struct { /* ciciliStruct488 */
      List_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Nothing_List_char ();
Maybe_List_char Just_List_char (List_char value );
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char (List_char value ) {
  return Just_List_char (value );
}
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __H_Maybe_List_char */ 
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
  free_Maybe_String_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion510 */
    struct { /* ciciliStruct511 */
    } Nothing , _0 ;
    struct { /* ciciliStruct512 */
      String __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String ();
Maybe_String Just_String (String value );
__attribute__((weak)) Maybe_String Default_Maybe_String (String value ) {
  return Just_String (value );
}
void free_Maybe_String (Maybe_String * this );
#endif /* __H_Maybe_String */ 
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_List_Bool_class_t __h_List_List_Bool_class_t ;
typedef __h_List_List_Bool_class_t * List_List_Bool ;
typedef void (*free_List_List_Bool_t) (List_List_Bool * this_ptr );
typedef struct __h_List_List_Bool_class_t {
  free_List_List_Bool_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion533 */
    struct { /* ciciliStruct534 */
    } Empty , _0 ;
    struct { /* ciciliStruct535 */
      List_Bool __h_0_mem ;
      List_List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_Bool_class_t;
List_List_Bool Empty_List_Bool ();
List_List_Bool __h_Cons_List_Bool_ctor (List_Bool head , List_List_Bool tail );
void free_List_List_Bool (List_List_Bool * this_ptr );
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len );
List_List_Bool next_List_List_Bool (List_List_Bool list );
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list );
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list );
int len_List_List_Bool (List_List_Bool list );
int has_len_List_List_Bool (List_List_Bool list , int desired );
List_List_Bool take_List_List_Bool (int len , List_List_Bool list );
List_List_Bool last_List_List_Bool (List_List_Bool list );
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist );
void show_List_List_Bool (List_List_Bool list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_List_int_class_t __h_List_List_int_class_t ;
typedef __h_List_List_int_class_t * List_List_int ;
typedef void (*free_List_List_int_t) (List_List_int * this_ptr );
typedef struct __h_List_List_int_class_t {
  free_List_List_int_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion581 */
    struct { /* ciciliStruct582 */
    } Empty , _0 ;
    struct { /* ciciliStruct583 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_int_class_t;
List_List_int Empty_List_int ();
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail );
void free_List_List_int (List_List_int * this_ptr );
List_List_int new_List_List_int_Pure (const List_int * buf , int len );
List_List_int next_List_List_int (List_List_int list );
Maybe_List_int nth_List_List_int (int index , List_List_int list );
List_List_int drop_List_List_int (int index , List_List_int list );
int len_List_List_int (List_List_int list );
int has_len_List_List_int (List_List_int list , int desired );
List_List_int take_List_List_int (int len , List_List_int list );
List_List_int last_List_List_int (List_List_int list );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
void show_List_List_int (List_List_int list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_List_char_class_t __h_List_List_char_class_t ;
typedef __h_List_List_char_class_t * List_List_char ;
typedef void (*free_List_List_char_t) (List_List_char * this_ptr );
typedef struct __h_List_List_char_class_t {
  free_List_List_char_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion629 */
    struct { /* ciciliStruct630 */
    } Empty , _0 ;
    struct { /* ciciliStruct631 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_char_class_t;
List_List_char Empty_List_char ();
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail );
void free_List_List_char (List_List_char * this_ptr );
List_List_char new_List_List_char_Pure (const List_char * buf , int len );
List_List_char next_List_List_char (List_List_char list );
Maybe_List_char nth_List_List_char (int index , List_List_char list );
List_List_char drop_List_List_char (int index , List_List_char list );
int len_List_List_char (List_List_char list );
int has_len_List_List_char (List_List_char list , int desired );
List_List_char take_List_List_char (int len , List_List_char list );
List_List_char last_List_List_char (List_List_char list );
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist );
void show_List_List_char (List_List_char list );
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Cons_t = 0,
  __h_Empty_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct __h_List_String_class_t __h_List_String_class_t ;
typedef __h_List_String_class_t * List_String ;
typedef void (*free_List_String_t) (List_String * this_ptr );
typedef struct __h_List_String_class_t {
  free_List_String_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion677 */
    struct { /* ciciliStruct678 */
    } Empty , _0 ;
    struct { /* ciciliStruct679 */
      String __h_0_mem ;
      List_String __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_String_class_t;
List_String Empty_String ();
List_String __h_Cons_String_ctor (String head , List_String tail );
void free_List_String (List_String * this_ptr );
List_String new_List_String_Pure (const String * buf , int len );
List_String next_List_String (List_String list );
Maybe_String nth_List_String (int index , List_String list );
List_String drop_List_String (int index , List_String list );
int len_List_String (List_String list );
int has_len_List_String (List_String list , int desired );
List_String take_List_String (int len , List_String list );
List_String last_List_String (List_String list );
List_String append_List_String (List_String llist , List_String rlist );
void show_List_String (List_String list );
typedef struct __h_Rc_List_Bool_class_t __h_Rc_List_Bool_class_t ;
typedef struct __h_Rc_List_Bool_class_t * Rc_List_Bool ;
void free_Rc_List_Bool (Rc_List_Bool * this );
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
typedef struct __h_Rc_List_int_class_t __h_Rc_List_int_class_t ;
typedef struct __h_Rc_List_int_class_t * Rc_List_int ;
void free_Rc_List_int (Rc_List_int * this );
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
typedef struct __h_Rc_List_char_class_t __h_Rc_List_char_class_t ;
typedef struct __h_Rc_List_char_class_t * Rc_List_char ;
void free_Rc_List_char (Rc_List_char * this );
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
typedef struct __h_Rc_String_class_t __h_Rc_String_class_t ;
typedef struct __h_Rc_String_class_t * Rc_String ;
void free_Rc_String (Rc_String * this );
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable );
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable );
char foldr_char (char (*folder) (char lhs , char rhs ), char neutral , List_char foldable );
typedef Bool (*Monoid_All_Bool_mappend_t) (Bool lhs , Bool rhs );
typedef Bool (*Monoid_All_Bool_mconcat_t) (List_Bool l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_All_Bool Monoid_All_Bool ;
typedef void (*free_Monoid_All_Bool_t) (Monoid_All_Bool * this );
typedef struct Monoid_All_Bool {
  free_Monoid_All_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion828 */
    struct { /* ciciliStruct829 */
      Monoid_All_Bool_mappend_t __h_0_mem ;
      Bool __h_1_mem ;
      Monoid_All_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_All_Bool;
Monoid_All_Bool __h_Monoid_All_Bool_ctor_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat );
void free_Monoid_All_Bool (Monoid_All_Bool * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_All_Bool Semigroup_All_Bool ;
typedef void (*free_Semigroup_All_Bool_t) (Semigroup_All_Bool * this );
typedef struct Semigroup_All_Bool {
  free_Semigroup_All_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion846 */
    struct { /* ciciliStruct847 */
      Monoid_All_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_All_Bool;
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_All_Bool Default_Semigroup_All_Bool (Monoid_All_Bool_mappend_t mappend ) {
  return Semigroup_All_Bool_ctor (mappend );
}
void free_Semigroup_All_Bool (Semigroup_All_Bool * this );
Bool Monoid_All_Bool_mappend (Bool lhs , Bool rhs );
Bool Monoid_All_Bool_mconcat (List_Bool list );
Monoid_All_Bool get_Monoid_All_Bool ();
Semigroup_All_Bool get_Semigroup_All_Bool ();
Bool mempty_All_Bool ();
typedef Bool (*Monoid_Any_Bool_mappend_t) (Bool lhs , Bool rhs );
typedef Bool (*Monoid_Any_Bool_mconcat_t) (List_Bool l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Any_Bool Monoid_Any_Bool ;
typedef void (*free_Monoid_Any_Bool_t) (Monoid_Any_Bool * this );
typedef struct Monoid_Any_Bool {
  free_Monoid_Any_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion891 */
    struct { /* ciciliStruct892 */
      Monoid_Any_Bool_mappend_t __h_0_mem ;
      Bool __h_1_mem ;
      Monoid_Any_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Any_Bool;
Monoid_Any_Bool __h_Monoid_Any_Bool_ctor_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat );
void free_Monoid_Any_Bool (Monoid_Any_Bool * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Any_Bool Semigroup_Any_Bool ;
typedef void (*free_Semigroup_Any_Bool_t) (Semigroup_Any_Bool * this );
typedef struct Semigroup_Any_Bool {
  free_Semigroup_Any_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion909 */
    struct { /* ciciliStruct910 */
      Monoid_Any_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Any_Bool;
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_Any_Bool Default_Semigroup_Any_Bool (Monoid_Any_Bool_mappend_t mappend ) {
  return Semigroup_Any_Bool_ctor (mappend );
}
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this );
Bool Monoid_Any_Bool_mappend (Bool lhs , Bool rhs );
Bool Monoid_Any_Bool_mconcat (List_Bool list );
Monoid_Any_Bool get_Monoid_Any_Bool ();
Semigroup_Any_Bool get_Semigroup_Any_Bool ();
Bool mempty_Any_Bool ();
typedef int (*Monoid_Sum_int_mappend_t) (int lhs , int rhs );
typedef int (*Monoid_Sum_int_mconcat_t) (List_int l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Sum_int Monoid_Sum_int ;
typedef void (*free_Monoid_Sum_int_t) (Monoid_Sum_int * this );
typedef struct Monoid_Sum_int {
  free_Monoid_Sum_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion954 */
    struct { /* ciciliStruct955 */
      Monoid_Sum_int_mappend_t __h_0_mem ;
      int __h_1_mem ;
      Monoid_Sum_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Sum_int;
Monoid_Sum_int __h_Monoid_Sum_int_ctor_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat );
void free_Monoid_Sum_int (Monoid_Sum_int * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Sum_int Semigroup_Sum_int ;
typedef void (*free_Semigroup_Sum_int_t) (Semigroup_Sum_int * this );
typedef struct Semigroup_Sum_int {
  free_Semigroup_Sum_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion972 */
    struct { /* ciciliStruct973 */
      Monoid_Sum_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Sum_int;
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend );
__attribute__((weak)) Semigroup_Sum_int Default_Semigroup_Sum_int (Monoid_Sum_int_mappend_t mappend ) {
  return Semigroup_Sum_int_ctor (mappend );
}
void free_Semigroup_Sum_int (Semigroup_Sum_int * this );
int Monoid_Sum_int_mappend (int lhs , int rhs );
int Monoid_Sum_int_mconcat (List_int list );
Monoid_Sum_int get_Monoid_Sum_int ();
Semigroup_Sum_int get_Semigroup_Sum_int ();
int mempty_Sum_int ();
typedef int (*Monoid_Product_int_mappend_t) (int lhs , int rhs );
typedef int (*Monoid_Product_int_mconcat_t) (List_int l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_Product_int Monoid_Product_int ;
typedef void (*free_Monoid_Product_int_t) (Monoid_Product_int * this );
typedef struct Monoid_Product_int {
  free_Monoid_Product_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1017 */
    struct { /* ciciliStruct1018 */
      Monoid_Product_int_mappend_t __h_0_mem ;
      int __h_1_mem ;
      Monoid_Product_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_Product_int;
Monoid_Product_int __h_Monoid_Product_int_ctor_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat );
void free_Monoid_Product_int (Monoid_Product_int * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_Product_int Semigroup_Product_int ;
typedef void (*free_Semigroup_Product_int_t) (Semigroup_Product_int * this );
typedef struct Semigroup_Product_int {
  free_Semigroup_Product_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1035 */
    struct { /* ciciliStruct1036 */
      Monoid_Product_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_Product_int;
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend );
__attribute__((weak)) Semigroup_Product_int Default_Semigroup_Product_int (Monoid_Product_int_mappend_t mappend ) {
  return Semigroup_Product_int_ctor (mappend );
}
void free_Semigroup_Product_int (Semigroup_Product_int * this );
int Monoid_Product_int_mappend (int lhs , int rhs );
int Monoid_Product_int_mconcat (List_int list );
Monoid_Product_int get_Monoid_Product_int ();
Semigroup_Product_int get_Semigroup_Product_int ();
int mempty_Product_int ();
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable );
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable );
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable );
typedef List_Bool (*Monoid_List_Bool_mappend_t) (List_Bool lhs , List_Bool rhs );
typedef List_Bool (*Monoid_List_Bool_mconcat_t) (List_List_Bool l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_Bool Monoid_List_Bool ;
typedef void (*free_Monoid_List_Bool_t) (Monoid_List_Bool * this );
typedef struct Monoid_List_Bool {
  free_Monoid_List_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1118 */
    struct { /* ciciliStruct1119 */
      Monoid_List_Bool_mappend_t __h_0_mem ;
      List_Bool __h_1_mem ;
      Monoid_List_Bool_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_Bool;
Monoid_List_Bool __h_Monoid_List_Bool_ctor_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat );
void free_Monoid_List_Bool (Monoid_List_Bool * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_Bool Semigroup_List_Bool ;
typedef void (*free_Semigroup_List_Bool_t) (Semigroup_List_Bool * this );
typedef struct Semigroup_List_Bool {
  free_Semigroup_List_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1137 */
    struct { /* ciciliStruct1138 */
      Monoid_List_Bool_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_Bool;
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend );
__attribute__((weak)) Semigroup_List_Bool Default_Semigroup_List_Bool (Monoid_List_Bool_mappend_t mappend ) {
  return Semigroup_List_Bool_ctor (mappend );
}
void free_Semigroup_List_Bool (Semigroup_List_Bool * this );
List_Bool Monoid_List_Bool_mappend (List_Bool lhs , List_Bool rhs );
List_Bool Monoid_List_Bool_mconcat (List_List_Bool list );
Monoid_List_Bool get_Monoid_List_Bool ();
Semigroup_List_Bool get_Semigroup_List_Bool ();
List_Bool mempty_List_Bool ();
typedef List_int (*Monoid_List_int_mappend_t) (List_int lhs , List_int rhs );
typedef List_int (*Monoid_List_int_mconcat_t) (List_List_int l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_int Monoid_List_int ;
typedef void (*free_Monoid_List_int_t) (Monoid_List_int * this );
typedef struct Monoid_List_int {
  free_Monoid_List_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1192 */
    struct { /* ciciliStruct1193 */
      Monoid_List_int_mappend_t __h_0_mem ;
      List_int __h_1_mem ;
      Monoid_List_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_int;
Monoid_List_int __h_Monoid_List_int_ctor_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat );
void free_Monoid_List_int (Monoid_List_int * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_int Semigroup_List_int ;
typedef void (*free_Semigroup_List_int_t) (Semigroup_List_int * this );
typedef struct Semigroup_List_int {
  free_Semigroup_List_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1211 */
    struct { /* ciciliStruct1212 */
      Monoid_List_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_int;
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend );
__attribute__((weak)) Semigroup_List_int Default_Semigroup_List_int (Monoid_List_int_mappend_t mappend ) {
  return Semigroup_List_int_ctor (mappend );
}
void free_Semigroup_List_int (Semigroup_List_int * this );
List_int Monoid_List_int_mappend (List_int lhs , List_int rhs );
List_int Monoid_List_int_mconcat (List_List_int list );
Monoid_List_int get_Monoid_List_int ();
Semigroup_List_int get_Semigroup_List_int ();
List_int mempty_List_int ();
typedef List_char (*Monoid_List_char_mappend_t) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_List_char_mconcat_t) (List_List_char l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_List_char Monoid_List_char ;
typedef void (*free_Monoid_List_char_t) (Monoid_List_char * this );
typedef struct Monoid_List_char {
  free_Monoid_List_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1266 */
    struct { /* ciciliStruct1267 */
      Monoid_List_char_mappend_t __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_List_char_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_char;
Monoid_List_char __h_Monoid_List_char_ctor_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat );
void free_Monoid_List_char (Monoid_List_char * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_List_char Semigroup_List_char ;
typedef void (*free_Semigroup_List_char_t) (Semigroup_List_char * this );
typedef struct Semigroup_List_char {
  free_Semigroup_List_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1285 */
    struct { /* ciciliStruct1286 */
      Monoid_List_char_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_char;
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend );
__attribute__((weak)) Semigroup_List_char Default_Semigroup_List_char (Monoid_List_char_mappend_t mappend ) {
  return Semigroup_List_char_ctor (mappend );
}
void free_Semigroup_List_char (Semigroup_List_char * this );
List_char Monoid_List_char_mappend (List_char lhs , List_char rhs );
List_char Monoid_List_char_mconcat (List_List_char list );
Monoid_List_char get_Monoid_List_char ();
Semigroup_List_char get_Semigroup_List_char ();
List_char mempty_List_char ();
typedef List_char (*Monoid_String_char_mappend_t) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_String_char_mconcat_t) (List_List_char l );
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_String_char Monoid_String_char ;
typedef void (*free_Monoid_String_char_t) (Monoid_String_char * this );
typedef struct Monoid_String_char {
  free_Monoid_String_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1340 */
    struct { /* ciciliStruct1341 */
      Monoid_String_char_mappend_t __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_String_char_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_String_char;
Monoid_String_char __h_Monoid_String_char_ctor_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat );
void free_Monoid_String_char (Monoid_String_char * this );
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_String_char Semigroup_String_char ;
typedef void (*free_Semigroup_String_char_t) (Semigroup_String_char * this );
typedef struct Semigroup_String_char {
  free_Semigroup_String_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1359 */
    struct { /* ciciliStruct1360 */
      Monoid_String_char_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_String_char;
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend );
__attribute__((weak)) Semigroup_String_char Default_Semigroup_String_char (Monoid_String_char_mappend_t mappend ) {
  return Semigroup_String_char_ctor (mappend );
}
void free_Semigroup_String_char (Semigroup_String_char * this );
List_char Monoid_String_char_mappend (List_char lhs , List_char rhs );
List_char Monoid_String_char_mconcat (List_List_char list );
Monoid_String_char get_Monoid_String_char ();
Semigroup_String_char get_Semigroup_String_char ();
List_char mempty_String_char ();
typedef int (*Functor_List_int_int_a_b_t) (int value );
typedef List_int (*Functor_List_int_int_fmap_t) (Functor_List_int_int_a_b_t a_b , List_int input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_int_int Functor_List_int_int ;
typedef void (*free_Functor_List_int_int_t) (Functor_List_int_int * this );
typedef struct Functor_List_int_int {
  free_Functor_List_int_int_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1413 */
    struct { /* ciciliStruct1414 */
      Functor_List_int_int_fmap_t __h_0_mem ;
      Functor_List_int_int_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_int;
Functor_List_int_int __h_Functor_List_int_int_ctor_ctor (Functor_List_int_int_fmap_t fmap , Functor_List_int_int_a_b_t a_b );
void free_Functor_List_int_int (Functor_List_int_int * this );
List_int Functor_List_int_int_fmap (Functor_List_int_int_a_b_t a_b , List_int input );
Functor_List_int_int get_Functor_List_int_int (Functor_List_int_int_a_b_t a_b );
typedef Bool (*Functor_List_int_Bool_a_b_t) (int value );
typedef List_Bool (*Functor_List_int_Bool_fmap_t) (Functor_List_int_Bool_a_b_t a_b , List_int input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_int_Bool Functor_List_int_Bool ;
typedef void (*free_Functor_List_int_Bool_t) (Functor_List_int_Bool * this );
typedef struct Functor_List_int_Bool {
  free_Functor_List_int_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1455 */
    struct { /* ciciliStruct1456 */
      Functor_List_int_Bool_fmap_t __h_0_mem ;
      Functor_List_int_Bool_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_Bool;
Functor_List_int_Bool __h_Functor_List_int_Bool_ctor_ctor (Functor_List_int_Bool_fmap_t fmap , Functor_List_int_Bool_a_b_t a_b );
void free_Functor_List_int_Bool (Functor_List_int_Bool * this );
List_Bool Functor_List_int_Bool_fmap (Functor_List_int_Bool_a_b_t a_b , List_int input );
Functor_List_int_Bool get_Functor_List_int_Bool (Functor_List_int_Bool_a_b_t a_b );
typedef char (*Functor_List_char_char_a_b_t) (char value );
typedef List_char (*Functor_List_char_char_fmap_t) (Functor_List_char_char_a_b_t a_b , List_char input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_char_char Functor_List_char_char ;
typedef void (*free_Functor_List_char_char_t) (Functor_List_char_char * this );
typedef struct Functor_List_char_char {
  free_Functor_List_char_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1497 */
    struct { /* ciciliStruct1498 */
      Functor_List_char_char_fmap_t __h_0_mem ;
      Functor_List_char_char_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_List_char_char;
Functor_List_char_char __h_Functor_List_char_char_ctor_ctor (Functor_List_char_char_fmap_t fmap , Functor_List_char_char_a_b_t a_b );
void free_Functor_List_char_char (Functor_List_char_char * this );
List_char Functor_List_char_char_fmap (Functor_List_char_char_a_b_t a_b , List_char input );
Functor_List_char_char get_Functor_List_char_char (Functor_List_char_char_a_b_t a_b );
typedef Bool (*Functor_List_char_Bool_a_b_t) (char value );
typedef List_Bool (*Functor_List_char_Bool_fmap_t) (Functor_List_char_Bool_a_b_t a_b , List_char input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_char_Bool Functor_List_char_Bool ;
typedef void (*free_Functor_List_char_Bool_t) (Functor_List_char_Bool * this );
typedef struct Functor_List_char_Bool {
  free_Functor_List_char_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1539 */
    struct { /* ciciliStruct1540 */
      Functor_List_char_Bool_fmap_t __h_0_mem ;
      Functor_List_char_Bool_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_List_char_Bool;
Functor_List_char_Bool __h_Functor_List_char_Bool_ctor_ctor (Functor_List_char_Bool_fmap_t fmap , Functor_List_char_Bool_a_b_t a_b );
void free_Functor_List_char_Bool (Functor_List_char_Bool * this );
List_Bool Functor_List_char_Bool_fmap (Functor_List_char_Bool_a_b_t a_b , List_char input );
Functor_List_char_Bool get_Functor_List_char_Bool (Functor_List_char_Bool_a_b_t a_b );
typedef char (*Functor_String_char_a_b_t) (char value );
typedef List_char (*Functor_String_char_fmap_t) (Functor_String_char_a_b_t a_b , List_char input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_String_char Functor_String_char ;
typedef void (*free_Functor_String_char_t) (Functor_String_char * this );
typedef struct Functor_String_char {
  free_Functor_String_char_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1581 */
    struct { /* ciciliStruct1582 */
      Functor_String_char_fmap_t __h_0_mem ;
      Functor_String_char_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_String_char;
Functor_String_char __h_Functor_String_char_ctor_ctor (Functor_String_char_fmap_t fmap , Functor_String_char_a_b_t a_b );
void free_Functor_String_char (Functor_String_char * this );
List_char Functor_String_char_fmap (Functor_String_char_a_b_t a_b , List_char input );
Functor_String_char get_Functor_String_char (Functor_String_char_a_b_t a_b );
typedef Bool (*Functor_String_Bool_a_b_t) (char value );
typedef List_Bool (*Functor_String_Bool_fmap_t) (Functor_String_Bool_a_b_t a_b , List_char input );
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_String_Bool Functor_String_Bool ;
typedef void (*free_Functor_String_Bool_t) (Functor_String_Bool * this );
typedef struct Functor_String_Bool {
  free_Functor_String_Bool_t __h_free_data ;
  char __h_ctor ;
  union { /* ciciliUnion1623 */
    struct { /* ciciliStruct1624 */
      Functor_String_Bool_fmap_t __h_0_mem ;
      Functor_String_Bool_a_b_t __h_1_mem ;
    } Functor , _ ;
  } __h_data ;
} Functor_String_Bool;
Functor_String_Bool __h_Functor_String_Bool_ctor_ctor (Functor_String_Bool_fmap_t fmap , Functor_String_Bool_a_b_t a_b );
void free_Functor_String_Bool (Functor_String_Bool * this );
List_Bool Functor_String_Bool_fmap (Functor_String_Bool_a_b_t a_b , List_char input );
Functor_String_Bool get_Functor_String_Bool (Functor_String_Bool_a_b_t a_b );
