#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void __h_free_data_router (void *** instance );
void __h_free_class_router (void *** instance );
typedef enum __h_DefaultCtor {
  __h___t
} __h_DefaultCtor;
#ifndef __Bool__H_DECL__
#define __Bool__H_DECL__
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_True_t = 0,
  __h_False_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
typedef struct Bool Bool ;
typedef void (*free_Bool_t) (Bool * this );
typedef struct Bool__H_Table {
  free_Bool_t freeData ;
  void (*show) (Bool value );
  Bool (*or) (Bool lhs , Bool rhs );
  Bool (*and) (Bool lhs , Bool rhs );
} Bool__H_Table;
typedef struct Bool {
  const Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion114 */
    struct { /* ciciliStruct115 */
    } False , _0 ;
    struct { /* ciciliStruct116 */
    } True , _ ;
  } __h_data ;
} Bool;
Bool False ();
Bool True ();
__attribute__((weak)) Bool Default_Bool () {
  return True ();
}
void show_Bool (Bool value );
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
  union { /* ciciliUnion146 */
    struct { /* ciciliStruct147 */
    } LT , _0 ;
    struct { /* ciciliStruct148 */
    } EQ , _1 ;
    struct { /* ciciliStruct149 */
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
#ifndef __Maybe_Bool__H_DECL__
#define __Maybe_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion176 */
    struct { /* ciciliStruct177 */
    } Nothing , _0 ;
    struct { /* ciciliStruct178 */
      Bool __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_Bool;
Maybe_Bool Nothing_Bool ();
Maybe_Bool Just_Bool (Bool value );
__attribute__((weak)) Maybe_Bool Default_Maybe_Bool (Bool value ) {
  return Just_Bool (value );
}
const Maybe_Bool__H_Table * const get_Maybe_Bool__H_Table ();
void free_Maybe_Bool (Maybe_Bool * this );
#endif /* __Maybe_Bool__H_DECL__ */ 
#ifndef __List_Bool__H_DECL__
#define __List_Bool__H_DECL__
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
typedef struct List_Bool__H_Table {
  free_List_Bool_t freeClass ;
  void (*show) (List_Bool list );
  List_Bool (*append) (List_Bool llist , List_Bool rlist );
  List_Bool (*push) (Bool item , List_Bool list );
  List_Bool (*last) (List_Bool list );
  List_Bool (*take) (int len , List_Bool list );
  int (*hasLen) (List_Bool list , int desired );
  int (*len) (List_Bool list );
  List_Bool (*tail) (List_Bool list );
  List_Bool (*drop) (int index , List_Bool list );
  Maybe_Bool (*head) (List_Bool list );
  Maybe_Bool (*nth) (int index , List_Bool list );
  List_Bool (*next) (List_Bool list );
} List_Bool__H_Table;
typedef struct __h_List_Bool_class_t {
  const List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion216 */
    struct { /* ciciliStruct217 */
    } Empty , _0 ;
    struct { /* ciciliStruct218 */
      Bool __h_0_mem ;
      List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_Bool_class_t;
List_Bool Empty_Bool ();
List_Bool Cons_Bool (Bool head , List_Bool tail );
__attribute__((weak)) List_Bool Default_List_Bool (Bool head , List_Bool tail ) {
  return Cons_Bool (head , tail );
}
void show_List_Bool (List_Bool list );
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist );
List_Bool push_List_Bool (Bool item , List_Bool list );
List_Bool last_List_Bool (List_Bool list );
List_Bool take_List_Bool (int len , List_Bool list );
int hasLen_List_Bool (List_Bool list , int desired );
int len_List_Bool (List_Bool list );
List_Bool tail_List_Bool (List_Bool list );
List_Bool drop_List_Bool (int index , List_Bool list );
Maybe_Bool head_List_Bool (List_Bool list );
Maybe_Bool nth_List_Bool (int index , List_Bool list );
List_Bool next_List_Bool (List_Bool list );
const List_Bool__H_Table * const get_List_Bool__H_Table ();
void free_List_Bool (List_Bool * this_ptr );
#endif /* __List_Bool__H_DECL__ */ 
List_Bool new_List_Bool_Pure (const Bool * buf , int len );
List_Bool new_List_Bool_Wrap (const Bool item );
#ifndef __Maybe_int__H_DECL__
#define __Maybe_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion288 */
    struct { /* ciciliStruct289 */
    } Nothing , _0 ;
    struct { /* ciciliStruct290 */
      int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int ();
Maybe_int Just_int (int value );
__attribute__((weak)) Maybe_int Default_Maybe_int (int value ) {
  return Just_int (value );
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table ();
void free_Maybe_int (Maybe_int * this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __List_int__H_DECL__
#define __List_int__H_DECL__
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
typedef struct List_int__H_Table {
  free_List_int_t freeClass ;
  void (*show) (List_int list );
  List_int (*append) (List_int llist , List_int rlist );
  List_int (*push) (int item , List_int list );
  List_int (*last) (List_int list );
  List_int (*take) (int len , List_int list );
  int (*hasLen) (List_int list , int desired );
  int (*len) (List_int list );
  List_int (*tail) (List_int list );
  List_int (*drop) (int index , List_int list );
  Maybe_int (*head) (List_int list );
  Maybe_int (*nth) (int index , List_int list );
  List_int (*next) (List_int list );
} List_int__H_Table;
typedef struct __h_List_int_class_t {
  const List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion328 */
    struct { /* ciciliStruct329 */
    } Empty , _0 ;
    struct { /* ciciliStruct330 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_int_class_t;
List_int Empty_int ();
List_int Cons_int (int head , List_int tail );
__attribute__((weak)) List_int Default_List_int (int head , List_int tail ) {
  return Cons_int (head , tail );
}
void show_List_int (List_int list );
List_int append_List_int (List_int llist , List_int rlist );
List_int push_List_int (int item , List_int list );
List_int last_List_int (List_int list );
List_int take_List_int (int len , List_int list );
int hasLen_List_int (List_int list , int desired );
int len_List_int (List_int list );
List_int tail_List_int (List_int list );
List_int drop_List_int (int index , List_int list );
Maybe_int head_List_int (List_int list );
Maybe_int nth_List_int (int index , List_int list );
List_int next_List_int (List_int list );
const List_int__H_Table * const get_List_int__H_Table ();
void free_List_int (List_int * this_ptr );
#endif /* __List_int__H_DECL__ */ 
List_int new_List_int_Pure (const int * buf , int len );
List_int new_List_int_Wrap (const int item );
#ifndef __Maybe_char__H_DECL__
#define __Maybe_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion402 */
    struct { /* ciciliStruct403 */
    } Nothing , _0 ;
    struct { /* ciciliStruct404 */
      char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char ();
Maybe_char Just_char (char value );
__attribute__((weak)) Maybe_char Default_Maybe_char (char value ) {
  return Just_char (value );
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table ();
void free_Maybe_char (Maybe_char * this );
#endif /* __Maybe_char__H_DECL__ */ 
#ifndef __List_char__H_DECL__
#define __List_char__H_DECL__
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
typedef struct List_char__H_Table {
  free_List_char_t freeClass ;
  void (*show) (List_char list );
  List_char (*append) (List_char llist , List_char rlist );
  List_char (*push) (char item , List_char list );
  List_char (*last) (List_char list );
  List_char (*take) (int len , List_char list );
  int (*hasLen) (List_char list , int desired );
  int (*len) (List_char list );
  List_char (*tail) (List_char list );
  List_char (*drop) (int index , List_char list );
  Maybe_char (*head) (List_char list );
  Maybe_char (*nth) (int index , List_char list );
  List_char (*next) (List_char list );
} List_char__H_Table;
typedef struct __h_List_char_class_t {
  const List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion442 */
    struct { /* ciciliStruct443 */
    } Empty , _0 ;
    struct { /* ciciliStruct444 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_char_class_t;
List_char Empty_char ();
List_char Cons_char (char head , List_char tail );
__attribute__((weak)) List_char Default_List_char (char head , List_char tail ) {
  return Cons_char (head , tail );
}
void show_List_char (List_char list );
List_char append_List_char (List_char llist , List_char rlist );
List_char push_List_char (char item , List_char list );
List_char last_List_char (List_char list );
List_char take_List_char (int len , List_char list );
int hasLen_List_char (List_char list , int desired );
int len_List_char (List_char list );
List_char tail_List_char (List_char list );
List_char drop_List_char (int index , List_char list );
Maybe_char head_List_char (List_char list );
Maybe_char nth_List_char (int index , List_char list );
List_char next_List_char (List_char list );
const List_char__H_Table * const get_List_char__H_Table ();
void free_List_char (List_char * this_ptr );
#endif /* __List_char__H_DECL__ */ 
List_char new_List_char_Pure (const char * buf , int len );
List_char new_List_char_Wrap (const char item );
typedef List_char String ;
List_char new_String_Const (const char * buf );
void show_String (List_char list );
__attribute__((weak)) void free_String (List_char * list ) {
  free_List_char (list );
}
#ifndef __Range_int__H_DECL__
#define __Range_int__H_DECL__
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
typedef struct Range_int__H_Table {
  free_Range_int_t freeClass ;
  void (*show) (Range_int list );
  Range_int (*take) (int len , Range_int list );
  Range_int (*next) (Range_int list );
} Range_int__H_Table;
typedef struct __h_Range_int_class_t {
  const Range_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion522 */
    struct { /* ciciliStruct523 */
    } Empty , _0 ;
    struct { /* ciciliStruct524 */
      int __h_0_mem ;
      Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_Range_int_class_t;
Range_int Empty_Range_int ();
Range_int Cons_Range_int (int from , Range_int tail , int to , int step );
__attribute__((weak)) Range_int Default_Range_int (int from , Range_int tail , int to , int step ) {
  return Cons_Range_int (from , tail , to , step );
}
void show_Range_int (Range_int list );
Range_int take_Range_int (int len , Range_int list );
Range_int next_Range_int (Range_int list );
const Range_int__H_Table * const get_Range_int__H_Table ();
void free_Range_int (Range_int * this_ptr );
#endif /* __Range_int__H_DECL__ */ 
Range_int new_Range_int (int from , int to , int step );
#ifndef __Maybe_List_Bool__H_DECL__
#define __Maybe_List_Bool__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion563 */
    struct { /* ciciliStruct564 */
    } Nothing , _0 ;
    struct { /* ciciliStruct565 */
      List_Bool __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_Bool;
Maybe_List_Bool Nothing_List_Bool ();
Maybe_List_Bool Just_List_Bool (List_Bool value );
__attribute__((weak)) Maybe_List_Bool Default_Maybe_List_Bool (List_Bool value ) {
  return Just_List_Bool (value );
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table ();
void free_Maybe_List_Bool (Maybe_List_Bool * this );
#endif /* __Maybe_List_Bool__H_DECL__ */ 
#ifndef __List_List_Bool__H_DECL__
#define __List_List_Bool__H_DECL__
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
typedef struct List_List_Bool__H_Table {
  free_List_List_Bool_t freeClass ;
  void (*show) (List_List_Bool list );
  List_List_Bool (*append) (List_List_Bool llist , List_List_Bool rlist );
  List_List_Bool (*push) (List_Bool item , List_List_Bool list );
  List_List_Bool (*last) (List_List_Bool list );
  List_List_Bool (*take) (int len , List_List_Bool list );
  int (*hasLen) (List_List_Bool list , int desired );
  int (*len) (List_List_Bool list );
  List_List_Bool (*tail) (List_List_Bool list );
  List_List_Bool (*drop) (int index , List_List_Bool list );
  Maybe_List_Bool (*head) (List_List_Bool list );
  Maybe_List_Bool (*nth) (int index , List_List_Bool list );
  List_List_Bool (*next) (List_List_Bool list );
} List_List_Bool__H_Table;
typedef struct __h_List_List_Bool_class_t {
  const List_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion603 */
    struct { /* ciciliStruct604 */
    } Empty , _0 ;
    struct { /* ciciliStruct605 */
      List_Bool __h_0_mem ;
      List_List_Bool __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_Bool_class_t;
List_List_Bool Empty_List_Bool ();
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail );
__attribute__((weak)) List_List_Bool Default_List_List_Bool (List_Bool head , List_List_Bool tail ) {
  return Cons_List_Bool (head , tail );
}
void show_List_List_Bool (List_List_Bool list );
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist );
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list );
List_List_Bool last_List_List_Bool (List_List_Bool list );
List_List_Bool take_List_List_Bool (int len , List_List_Bool list );
int hasLen_List_List_Bool (List_List_Bool list , int desired );
int len_List_List_Bool (List_List_Bool list );
List_List_Bool tail_List_List_Bool (List_List_Bool list );
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list );
Maybe_List_Bool head_List_List_Bool (List_List_Bool list );
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list );
List_List_Bool next_List_List_Bool (List_List_Bool list );
const List_List_Bool__H_Table * const get_List_List_Bool__H_Table ();
void free_List_List_Bool (List_List_Bool * this_ptr );
#endif /* __List_List_Bool__H_DECL__ */ 
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len );
List_List_Bool new_List_List_Bool_Wrap (const List_Bool item );
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion675 */
    struct { /* ciciliStruct676 */
    } Nothing , _0 ;
    struct { /* ciciliStruct677 */
      List_int __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int ();
Maybe_List_int Just_List_int (List_int value );
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int (List_int value ) {
  return Just_List_int (value );
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __List_List_int__H_DECL__
#define __List_List_int__H_DECL__
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
typedef struct List_List_int__H_Table {
  free_List_List_int_t freeClass ;
  void (*show) (List_List_int list );
  List_List_int (*append) (List_List_int llist , List_List_int rlist );
  List_List_int (*push) (List_int item , List_List_int list );
  List_List_int (*last) (List_List_int list );
  List_List_int (*take) (int len , List_List_int list );
  int (*hasLen) (List_List_int list , int desired );
  int (*len) (List_List_int list );
  List_List_int (*tail) (List_List_int list );
  List_List_int (*drop) (int index , List_List_int list );
  Maybe_List_int (*head) (List_List_int list );
  Maybe_List_int (*nth) (int index , List_List_int list );
  List_List_int (*next) (List_List_int list );
} List_List_int__H_Table;
typedef struct __h_List_List_int_class_t {
  const List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion715 */
    struct { /* ciciliStruct716 */
    } Empty , _0 ;
    struct { /* ciciliStruct717 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_int_class_t;
List_List_int Empty_List_int ();
List_List_int Cons_List_int (List_int head , List_List_int tail );
__attribute__((weak)) List_List_int Default_List_List_int (List_int head , List_List_int tail ) {
  return Cons_List_int (head , tail );
}
void show_List_List_int (List_List_int list );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
List_List_int push_List_List_int (List_int item , List_List_int list );
List_List_int last_List_List_int (List_List_int list );
List_List_int take_List_List_int (int len , List_List_int list );
int hasLen_List_List_int (List_List_int list , int desired );
int len_List_List_int (List_List_int list );
List_List_int tail_List_List_int (List_List_int list );
List_List_int drop_List_List_int (int index , List_List_int list );
Maybe_List_int head_List_List_int (List_List_int list );
Maybe_List_int nth_List_List_int (int index , List_List_int list );
List_List_int next_List_List_int (List_List_int list );
const List_List_int__H_Table * const get_List_List_int__H_Table ();
void free_List_List_int (List_List_int * this_ptr );
#endif /* __List_List_int__H_DECL__ */ 
List_List_int new_List_List_int_Pure (const List_int * buf , int len );
List_List_int new_List_List_int_Wrap (const List_int item );
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion787 */
    struct { /* ciciliStruct788 */
    } Nothing , _0 ;
    struct { /* ciciliStruct789 */
      List_char __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Nothing_List_char ();
Maybe_List_char Just_List_char (List_char value );
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char (List_char value ) {
  return Just_List_char (value );
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __List_List_char__H_DECL__
#define __List_List_char__H_DECL__
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
typedef struct List_List_char__H_Table {
  free_List_List_char_t freeClass ;
  void (*show) (List_List_char list );
  List_List_char (*append) (List_List_char llist , List_List_char rlist );
  List_List_char (*push) (List_char item , List_List_char list );
  List_List_char (*last) (List_List_char list );
  List_List_char (*take) (int len , List_List_char list );
  int (*hasLen) (List_List_char list , int desired );
  int (*len) (List_List_char list );
  List_List_char (*tail) (List_List_char list );
  List_List_char (*drop) (int index , List_List_char list );
  Maybe_List_char (*head) (List_List_char list );
  Maybe_List_char (*nth) (int index , List_List_char list );
  List_List_char (*next) (List_List_char list );
} List_List_char__H_Table;
typedef struct __h_List_List_char_class_t {
  const List_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion827 */
    struct { /* ciciliStruct828 */
    } Empty , _0 ;
    struct { /* ciciliStruct829 */
      List_char __h_0_mem ;
      List_List_char __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_List_char_class_t;
List_List_char Empty_List_char ();
List_List_char Cons_List_char (List_char head , List_List_char tail );
__attribute__((weak)) List_List_char Default_List_List_char (List_char head , List_List_char tail ) {
  return Cons_List_char (head , tail );
}
void show_List_List_char (List_List_char list );
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist );
List_List_char push_List_List_char (List_char item , List_List_char list );
List_List_char last_List_List_char (List_List_char list );
List_List_char take_List_List_char (int len , List_List_char list );
int hasLen_List_List_char (List_List_char list , int desired );
int len_List_List_char (List_List_char list );
List_List_char tail_List_List_char (List_List_char list );
List_List_char drop_List_List_char (int index , List_List_char list );
Maybe_List_char head_List_List_char (List_List_char list );
Maybe_List_char nth_List_List_char (int index , List_List_char list );
List_List_char next_List_List_char (List_List_char list );
const List_List_char__H_Table * const get_List_List_char__H_Table ();
void free_List_List_char (List_List_char * this_ptr );
#endif /* __List_List_char__H_DECL__ */ 
List_List_char new_List_List_char_Pure (const List_char * buf , int len );
List_List_char new_List_List_char_Wrap (const List_char item );
#ifndef __Maybe_String__H_DECL__
#define __Maybe_String__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
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
  union { /* ciciliUnion899 */
    struct { /* ciciliStruct900 */
    } Nothing , _0 ;
    struct { /* ciciliStruct901 */
      String __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String ();
Maybe_String Just_String (String value );
__attribute__((weak)) Maybe_String Default_Maybe_String (String value ) {
  return Just_String (value );
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table ();
void free_Maybe_String (Maybe_String * this );
#endif /* __Maybe_String__H_DECL__ */ 
#ifndef __List_String__H_DECL__
#define __List_String__H_DECL__
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
typedef struct List_String__H_Table {
  free_List_String_t freeClass ;
  void (*show) (List_String list );
  List_String (*append) (List_String llist , List_String rlist );
  List_String (*push) (String item , List_String list );
  List_String (*last) (List_String list );
  List_String (*take) (int len , List_String list );
  int (*hasLen) (List_String list , int desired );
  int (*len) (List_String list );
  List_String (*tail) (List_String list );
  List_String (*drop) (int index , List_String list );
  Maybe_String (*head) (List_String list );
  Maybe_String (*nth) (int index , List_String list );
  List_String (*next) (List_String list );
} List_String__H_Table;
typedef struct __h_List_String_class_t {
  const List_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion939 */
    struct { /* ciciliStruct940 */
    } Empty , _0 ;
    struct { /* ciciliStruct941 */
      String __h_0_mem ;
      List_String __h_1_mem ;
    } Cons , _ ;
  } __h_data ;
} __h_List_String_class_t;
List_String Empty_String ();
List_String Cons_String (String head , List_String tail );
__attribute__((weak)) List_String Default_List_String (String head , List_String tail ) {
  return Cons_String (head , tail );
}
void show_List_String (List_String list );
List_String append_List_String (List_String llist , List_String rlist );
List_String push_List_String (String item , List_String list );
List_String last_List_String (List_String list );
List_String take_List_String (int len , List_String list );
int hasLen_List_String (List_String list , int desired );
int len_List_String (List_String list );
List_String tail_List_String (List_String list );
List_String drop_List_String (int index , List_String list );
Maybe_String head_List_String (List_String list );
Maybe_String nth_List_String (int index , List_String list );
List_String next_List_String (List_String list );
const List_String__H_Table * const get_List_String__H_Table ();
void free_List_String (List_String * this_ptr );
#endif /* __List_String__H_DECL__ */ 
List_String new_List_String_Pure (const String * buf , int len );
List_String new_List_String_Wrap (const String item );
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
  union { /* ciciliUnion1101 */
    struct { /* ciciliStruct1102 */
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
  union { /* ciciliUnion1128 */
    struct { /* ciciliStruct1129 */
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
  union { /* ciciliUnion1183 */
    struct { /* ciciliStruct1184 */
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
  union { /* ciciliUnion1210 */
    struct { /* ciciliStruct1211 */
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
  union { /* ciciliUnion1265 */
    struct { /* ciciliStruct1266 */
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
  union { /* ciciliUnion1292 */
    struct { /* ciciliStruct1293 */
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
  union { /* ciciliUnion1347 */
    struct { /* ciciliStruct1348 */
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
  union { /* ciciliUnion1374 */
    struct { /* ciciliStruct1375 */
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
  union { /* ciciliUnion1439 */
    struct { /* ciciliStruct1440 */
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
  union { /* ciciliUnion1468 */
    struct { /* ciciliStruct1469 */
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
  union { /* ciciliUnion1538 */
    struct { /* ciciliStruct1539 */
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
  union { /* ciciliUnion1567 */
    struct { /* ciciliStruct1568 */
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
  union { /* ciciliUnion1637 */
    struct { /* ciciliStruct1638 */
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
  union { /* ciciliUnion1666 */
    struct { /* ciciliStruct1667 */
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
typedef List_char (*Monoid_String_char_mappend_t) (List_char lhs , List_char rhs );
typedef List_char (*Monoid_String_char_mconcat_t) (List_List_char l );
#ifndef __Monoid_String_char__H_DECL__
#define __Monoid_String_char__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
typedef struct Monoid_String_char Monoid_String_char ;
typedef void (*free_Monoid_String_char_t) (Monoid_String_char * this );
typedef struct Monoid_String_char__H_Table {
  free_Monoid_String_char_t freeData ;
} Monoid_String_char__H_Table;
typedef struct Monoid_String_char {
  const Monoid_String_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1736 */
    struct { /* ciciliStruct1737 */
      Monoid_String_char_mappend_t __h_0_mem ;
      List_char __h_1_mem ;
      Monoid_String_char_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_String_char;
Monoid_String_char Monoid_String_char_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat );
__attribute__((weak)) Monoid_String_char Default_Monoid_String_char (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return Monoid_String_char_ctor (mappend , mempty , mconcat );
}
const Monoid_String_char__H_Table * const get_Monoid_String_char__H_Table ();
void free_Monoid_String_char (Monoid_String_char * this );
#endif /* __Monoid_String_char__H_DECL__ */ 
#ifndef __Semigroup_String_char__H_DECL__
#define __Semigroup_String_char__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
typedef struct Semigroup_String_char Semigroup_String_char ;
typedef void (*free_Semigroup_String_char_t) (Semigroup_String_char * this );
typedef struct Semigroup_String_char__H_Table {
  free_Semigroup_String_char_t freeData ;
} Semigroup_String_char__H_Table;
typedef struct Semigroup_String_char {
  const Semigroup_String_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1765 */
    struct { /* ciciliStruct1766 */
      Monoid_String_char_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_String_char;
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend );
__attribute__((weak)) Semigroup_String_char Default_Semigroup_String_char (Monoid_String_char_mappend_t mappend ) {
  return Semigroup_String_char_ctor (mappend );
}
const Semigroup_String_char__H_Table * const get_Semigroup_String_char__H_Table ();
void free_Semigroup_String_char (Semigroup_String_char * this );
#endif /* __Semigroup_String_char__H_DECL__ */ 
List_char mempty_String_char ();
List_char mappend_String_char (List_char lhs , List_char rhs );
List_char mconcat_String_char (List_List_char list );
Monoid_String_char get_Monoid_String_char ();
Semigroup_String_char get_Semigroup_String_char ();
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
  union { /* ciciliUnion1818 */
    struct { /* ciciliStruct1819 */
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
  union { /* ciciliUnion1861 */
    struct { /* ciciliStruct1862 */
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
  union { /* ciciliUnion1904 */
    struct { /* ciciliStruct1905 */
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
  union { /* ciciliUnion1947 */
    struct { /* ciciliStruct1948 */
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
  union { /* ciciliUnion1990 */
    struct { /* ciciliStruct1991 */
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
  union { /* ciciliUnion2033 */
    struct { /* ciciliStruct2034 */
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
  union { /* ciciliUnion2076 */
    struct { /* ciciliStruct2077 */
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
  union { /* ciciliUnion2119 */
    struct { /* ciciliStruct2120 */
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
