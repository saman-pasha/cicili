#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef enum DefaultCtor {
  __h___t
} DefaultCtor;
typedef enum Bool {
  False,
  True
} Bool;
typedef enum Maybe {
  __h_Nothing_t,
  __h_Just_t
} Maybe;
typedef enum Ordering {
  LT,
  EQ,
  GT
} Ordering;
#ifndef __H_Maybe_char
#define __H_Maybe_char
typedef struct Maybe_char {
  Maybe __h_ctor ;
  union { /* ciciliUnion108 */
    struct { /* ciciliStruct109 */
    } Nothing ;
    struct { /* ciciliStruct110 */
      char __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char ();
Maybe_char Just_char (char value );
#endif /* __H_Maybe_char */ 
typedef enum __h_String_ctor_t {
  __h___h_String_ctor_t_t
} __h_String_ctor_t;
typedef struct String_class_t String_class_t ;
typedef String_class_t * String ;
typedef struct Maybe_String Maybe_String ;
#ifndef __H_Maybe_String
#define __H_Maybe_String
typedef struct Maybe_String {
  Maybe __h_ctor ;
  union { /* ciciliUnion128 */
    struct { /* ciciliStruct129 */
    } Nothing ;
    struct { /* ciciliStruct130 */
      String __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_String;
Maybe_String Nothing_String ();
Maybe_String Just_String (String value );
#endif /* __H_Maybe_String */ 
typedef struct String_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion138 */
    struct { /* ciciliStruct139 */
      char __h_0_mem ;
      Maybe_String __h_1_mem ;
    } _ ;
  } __h_data ;
} String_class_t;
String __h_Cons_char_ctor (char __h_0_mem , Maybe_String __h_1_mem );
Maybe_String new_String_Pure (const char * buf , int len );
void release_String (Maybe_String list );
__attribute__((weak)) void free_String (Maybe_String * list ) {
  release_String ((*list ));
}
Maybe_String next_String (Maybe_String list );
Maybe_char nth_String (int index , Maybe_String list );
Maybe_String drop_String (int index , Maybe_String list );
int len_String (Maybe_String list );
int has_len_String (Maybe_String list , int desired );
Maybe_String take_String (int len , Maybe_String list );
Maybe_String append_String (Maybe_String llist , Maybe_String rlist );
Maybe_char nth_Cons_char (int index , String cons );
Maybe_String drop_Cons_char (int index , String cons );
int len_Cons_char (String cons );
int has_len_Cons_char (String cons , int desired );
void show_String (Maybe_String list );
Maybe_String new_String_Const (const char * buf );
void show_String (Maybe_String list );
#ifndef __H_Maybe_int
#define __H_Maybe_int
typedef struct Maybe_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion211 */
    struct { /* ciciliStruct212 */
    } Nothing ;
    struct { /* ciciliStruct213 */
      int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int ();
Maybe_int Just_int (int value );
#endif /* __H_Maybe_int */ 
typedef enum __h_List_int_ctor_t {
  __h___h_List_int_ctor_t_t
} __h_List_int_ctor_t;
typedef struct List_int_class_t List_int_class_t ;
typedef List_int_class_t * List_int ;
typedef struct Maybe_List_int Maybe_List_int ;
#ifndef __H_Maybe_List_int
#define __H_Maybe_List_int
typedef struct Maybe_List_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion231 */
    struct { /* ciciliStruct232 */
    } Nothing ;
    struct { /* ciciliStruct233 */
      List_int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int ();
Maybe_List_int Just_List_int (List_int value );
#endif /* __H_Maybe_List_int */ 
typedef struct List_int_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion241 */
    struct { /* ciciliStruct242 */
      int __h_0_mem ;
      Maybe_List_int __h_1_mem ;
    } _ ;
  } __h_data ;
} List_int_class_t;
List_int __h_Cons_int_ctor (int __h_0_mem , Maybe_List_int __h_1_mem );
Maybe_List_int new_List_int_Pure (const int * buf , int len );
void release_List_int (Maybe_List_int list );
__attribute__((weak)) void free_List_int (Maybe_List_int * list ) {
  release_List_int ((*list ));
}
Maybe_List_int next_List_int (Maybe_List_int list );
Maybe_int nth_List_int (int index , Maybe_List_int list );
Maybe_List_int drop_List_int (int index , Maybe_List_int list );
int len_List_int (Maybe_List_int list );
int has_len_List_int (Maybe_List_int list , int desired );
Maybe_List_int take_List_int (int len , Maybe_List_int list );
Maybe_List_int append_List_int (Maybe_List_int llist , Maybe_List_int rlist );
Maybe_int nth_Cons_int (int index , List_int cons );
Maybe_List_int drop_Cons_int (int index , List_int cons );
int len_Cons_int (List_int cons );
int has_len_Cons_int (List_int cons , int desired );
void show_List_int (Maybe_List_int list );
typedef enum __h_Range_int_ctor_t {
  __h___h_Range_int_ctor_t_t
} __h_Range_int_ctor_t;
typedef struct Range_int_class_t Range_int_class_t ;
typedef Range_int_class_t * Range_int ;
typedef struct Maybe_Range_int Maybe_Range_int ;
#ifndef __H_Maybe_Range_int
#define __H_Maybe_Range_int
typedef struct Maybe_Range_int {
  Maybe __h_ctor ;
  union { /* ciciliUnion315 */
    struct { /* ciciliStruct316 */
    } Nothing ;
    struct { /* ciciliStruct317 */
      Range_int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe_Range_int;
Maybe_Range_int Nothing_Range_int ();
Maybe_Range_int Just_Range_int (Range_int value );
#endif /* __H_Maybe_Range_int */ 
typedef struct Range_int_class_t {
  DefaultCtor __h_ctor ;
  union { /* ciciliUnion325 */
    struct { /* ciciliStruct326 */
      int __h_0_mem ;
      Maybe_Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } _ ;
  } __h_data ;
} Range_int_class_t;
Range_int __h_Cons_Range_int_ctor (int __h_0_mem , Maybe_Range_int __h_1_mem , int __h_2_mem , int __h_3_mem );
Maybe_Range_int new_Range_int (int from , int to , int step );
void release_Range_int (Maybe_Range_int list );
__attribute__((weak)) void free_Range_int (Maybe_Range_int * list ) {
  release_Range_int ((*list ));
}
Maybe_Range_int next_Range_int (Maybe_Range_int list );
Maybe_Range_int take_Range_int (int len , Maybe_Range_int list );
void show_Range_int (Maybe_Range_int list );
