#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#define __Maybe_int__H_IMPL__ 
#define __Maybe_char__H_IMPL__ 
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
  union { /* ciciliUnion117 */
    struct { /* ciciliStruct118 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct119 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int;
Maybe_int Just_int (int value );
Maybe_int Nothing_int ();
__attribute__((weak)) Maybe_int Default_Maybe_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_int ();
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table ();
void free_Maybe_int (Maybe_int * this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __StringBuffer_int__H_DECL__
#define __StringBuffer_int__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_NullTerminated_t = 1,
  __h_Buffered_t = 2
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_int StringBuffer_int ;
typedef void (*free_StringBuffer_int_t) (StringBuffer_int * this );
typedef struct StringBuffer_int__H_Table {
  free_StringBuffer_int_t freeData ;
    StringBuffer_int (*new) (int step , bool null_terminated );
    StringBuffer_int (*newCapacity) (int capacity , int step , bool null_terminated );
    StringBuffer_int (*copySlice) (StringBuffer_int sb , int cursor , int size );
    StringBuffer_int (*copy) (StringBuffer_int sb );
    StringBuffer_int (*put) (StringBuffer_int sb , const int data );
    StringBuffer_int (*print) (StringBuffer_int sb , const int * data , int len );
} StringBuffer_int__H_Table;
typedef struct StringBuffer_int {
  const StringBuffer_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion161 */
    struct { /* ciciliStruct162 */
      int * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct163 */
      int * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct164 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_int;
StringBuffer_int MakeStringBuffer_int (int * buffer , int cursor , int size , int step );
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , int cursor , int size , int step );
StringBuffer_int FreedStringBuffer_int ();
__attribute__((weak)) StringBuffer_int Default_StringBuffer_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return FreedStringBuffer_int ();
}
StringBuffer_int new_StringBuffer_int (int step , bool null_terminated );
StringBuffer_int newCapacity_StringBuffer_int (int capacity , int step , bool null_terminated );
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , int cursor , int size );
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb );
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data );
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , int len );
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table ();
void free_StringBuffer_int (StringBuffer_int * this );
#endif /* __StringBuffer_int__H_DECL__ */ 
#ifndef __Vector_int__H_DECL__
#define __Vector_int__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Vector_int class_Vector_int ;
typedef class_Vector_int * Vector_int_x ;
#ifndef __Maybe_Vector_int_x__H_DECL__
#define __Maybe_Vector_int_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_int_x Maybe_Vector_int_x ;
typedef void (*free_Maybe_Vector_int_x_t) (Maybe_Vector_int_x * this );
typedef struct Maybe_Vector_int_x__H_Table {
  free_Maybe_Vector_int_x_t freeData ;
} Maybe_Vector_int_x__H_Table;
typedef struct Maybe_Vector_int_x {
  const Maybe_Vector_int_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion227 */
    struct { /* ciciliStruct228 */
      Vector_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct229 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_int_x;
Maybe_Vector_int_x Just_Vector_int_x (Vector_int_x value );
Maybe_Vector_int_x Nothing_Vector_int_x ();
__attribute__((weak)) Maybe_Vector_int_x Default_Maybe_Vector_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_Vector_int_x ();
}
const Maybe_Vector_int_x__H_Table * const get_Maybe_Vector_int_x__H_Table ();
void free_Maybe_Vector_int_x (Maybe_Vector_int_x * this );
#endif /* __Maybe_Vector_int_x__H_DECL__ */ 
#ifndef __Box_Vector_int__H_DECL__
#define __Box_Vector_int__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Vector_int Box_Vector_int ;
typedef void (*free_Box_Vector_int_t) (Box_Vector_int * this );
typedef struct Box_Vector_int__H_Table {
  free_Box_Vector_int_t freeData ;
    Box_Vector_int (*new) (Vector_int_x pointer );
    Box_Vector_int (*clone) (Box_Vector_int rc );
    Maybe_Vector_int_x (*take) (Box_Vector_int * this );
    Maybe_Vector_int_x (*get) (Box_Vector_int rc );
} Box_Vector_int__H_Table;
typedef struct Box_Vector_int {
  const Box_Vector_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion259 */
    struct { /* ciciliStruct260 */
      Vector_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct261 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_int;
Box_Vector_int __h_Hold_Vector_int_x (Vector_int_x * pointer , int * count , size_t address );
Box_Vector_int Gone_Vector_int_x ();
__attribute__((weak)) Box_Vector_int Default_Box_Vector_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Gone_Vector_int_x ();
}
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer );
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc );
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this );
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc );
const Box_Vector_int__H_Table * const get_Box_Vector_int__H_Table ();
void free_Box_Vector_int (Box_Vector_int * this );
#endif /* __Box_Vector_int__H_DECL__ */ 
typedef Box_Vector_int Vector_int ;
typedef void (*free_Vector_int_t) (Vector_int_x * this );
typedef struct Vector_int__H_Table {
  free_Vector_int_t freeData ;
    Vector_int (*pure) (int step );
    Vector_int (*pureCapacity) (int capacity , int step );
    int * (*toArray) (Vector_int vector );
    Vector_int (*wrap) (const int item );
    int (*show) (CFile file , Vector_int vector );
    Vector_int (*copy) (Vector_int vector );
    Vector_int (*replaceAt) (Vector_int vector , int item , int index );
    Vector_int (*deleteAt) (Vector_int vector , int index );
    Vector_int (*insertAt) (Vector_int vector , int item , int index );
    Vector_int (*reverse) (Vector_int vector );
    Vector_int (*append) (Vector_int lvector , Vector_int rvector );
    Vector_int (*push) (int item , Vector_int vector );
    Vector_int (*take) (int len , Vector_int vector );
    Vector_int (*last) (Vector_int vector );
    Vector_int (*init) (Vector_int vector );
    int (*hasLen) (Vector_int vector , int desired );
    int (*len) (Vector_int vector );
    Vector_int (*tail) (Vector_int vector );
    Vector_int (*drop) (int index , Vector_int vector );
    Maybe_int (*head) (Vector_int list );
    Maybe_int (*nth) (int index , Vector_int vector );
} Vector_int__H_Table;
typedef struct class_Vector_int {
  const Vector_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion320 */
    struct { /* ciciliStruct321 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct322 */
      Vector_int __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct323 */
    } None , _ ;
  } __h_data ;
} class_Vector_int;
Vector_int Buffer_int (StringBuffer_int buffer );
Vector_int Slice_int (Vector_int vector , int cursor , int size );
Vector_int None_int ();
__attribute__((weak)) Vector_int Default_Vector_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return None_int ();
}
Vector_int pure_Vector_int (int step );
Vector_int pureCapacity_Vector_int (int capacity , int step );
int * toArray_Vector_int (Vector_int vector );
Vector_int wrap_Vector_int (const int item );
int show_Vector_int (CFile file , Vector_int vector );
Vector_int copy_Vector_int (Vector_int vector );
Vector_int replaceAt_Vector_int (Vector_int vector , int item , int index );
Vector_int deleteAt_Vector_int (Vector_int vector , int index );
Vector_int insertAt_Vector_int (Vector_int vector , int item , int index );
Vector_int reverse_Vector_int (Vector_int vector );
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector );
Vector_int push_Vector_int (int item , Vector_int vector );
Vector_int take_Vector_int (int len , Vector_int vector );
Vector_int last_Vector_int (Vector_int vector );
Vector_int init_Vector_int (Vector_int vector );
int hasLen_Vector_int (Vector_int vector , int desired );
int len_Vector_int (Vector_int vector );
Vector_int tail_Vector_int (Vector_int vector );
Vector_int drop_Vector_int (int index , Vector_int vector );
Maybe_int head_Vector_int (Vector_int list );
Maybe_int nth_Vector_int (int index , Vector_int vector );
Vector_int__H_Table * const get_Vector_int__H_Table ();
void free_Vector_int_x (Vector_int_x * this );
#endif /* __Vector_int__H_DECL__ */ 
#ifndef __Maybe_Vector_int__H_DECL__
#define __Maybe_Vector_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_int Maybe_Vector_int ;
typedef void (*free_Maybe_Vector_int_t) (Maybe_Vector_int * this );
typedef struct Maybe_Vector_int__H_Table {
  free_Maybe_Vector_int_t freeData ;
} Maybe_Vector_int__H_Table;
typedef struct Maybe_Vector_int {
  const Maybe_Vector_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion418 */
    struct { /* ciciliStruct419 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct420 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_int;
Maybe_Vector_int Just_Vector_int (Vector_int value );
Maybe_Vector_int Nothing_Vector_int ();
__attribute__((weak)) Maybe_Vector_int Default_Maybe_Vector_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_Vector_int ();
}
const Maybe_Vector_int__H_Table * const get_Maybe_Vector_int__H_Table ();
void free_Maybe_Vector_int (Maybe_Vector_int * this );
#endif /* __Maybe_Vector_int__H_DECL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let450 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let455 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __StringBuffer_int__H_IMPL__
#define __StringBuffer_int__H_IMPL__
StringBuffer_int new_StringBuffer_int (int step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return newCapacity_StringBuffer_int (step , step , null_terminated );
}
StringBuffer_int newCapacity_StringBuffer_int (int capacity , int step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ((null_terminated ) ? ({ /* cicili#Let470 */
        int * buffer  = malloc (((capacity  +  1 ) *  sizeof(int) ));
        StringBuffer_int sb  = MakeNullTerminatedBuffer_int (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((int)'\0');
        sb ;
      }) : ({ /* cicili#Let474 */
        int * buffer  = malloc ((capacity  *  sizeof(int) ));
        StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , int cursor , int size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let483 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let485 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn486 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn488 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn493 */
            ({ /* cicili#Let495 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
              // ----------
              print_StringBuffer_int (new_sb , (buffer  +  cursor  ), size );
            });
          }) : ({ /* cicili#Let502 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let504 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn505 */
                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn507 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn512 */
                  ({ /* cicili#Let514 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                    // ----------
                    print_StringBuffer_int (new_sb , (buffer  +  cursor  ), size );
                  });
                }) : ({ /* cicili#Let521 */
                  // ----------
                  ;
                  ({ /* cicili#Progn523 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let532 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let534 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn535 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn537 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn539 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn541 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn546 */
            ({ /* cicili#Let548 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let555 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let557 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn558 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn560 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn562 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn564 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn569 */
                  ({ /* cicili#Let571 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                    // ----------
                    print_StringBuffer_int (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let578 */
                  // ----------
                  ;
                  ({ /* cicili#Progn580 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return print_StringBuffer_int (sb , (&data ), 1);
}
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let594 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let596 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn597 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn599 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn601 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn603 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn608 */
            ({ /* cicili#Let610 */
              int blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block614 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let616 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let621 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let623 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn624 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn626 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn628 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn630 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn635 */
                  ({ /* cicili#Let637 */
                    int blen  = (len  *  sizeof(int) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block641 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let643 */
                          int * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(int) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((int)'\0');
                    MakeNullTerminatedBuffer_int (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let648 */
                  // ----------
                  ;
                  ({ /* cicili#Progn650 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let658 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let660 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn661 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block667 */
          { /* cicili#Block669 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
      else
        { /* cicili#Let675 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let677 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn678 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block684 */
                { /* cicili#Block686 */
                  free (buffer );
                  (*this ) = FreedStringBuffer_int ();
                }
              }
          });
        }
    });
  }
}
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table () {
  static const StringBuffer_int__H_Table table  = { free_StringBuffer_int , new_StringBuffer_int , newCapacity_StringBuffer_int , copySlice_StringBuffer_int , copy_StringBuffer_int , put_StringBuffer_int , print_StringBuffer_int };
  return (&table );
}
StringBuffer_int MakeStringBuffer_int (int * buffer , int cursor , int size , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let696 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , int cursor , int size , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let701 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let706 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_int__H_IMPL__ */ 
bool null_terminated_Vector_int  = false ;
#ifndef __Vector_int__H_IMPL__
#define __Vector_int__H_IMPL__
#ifndef __Maybe_Vector_int_x__H_IMPL__
#define __Maybe_Vector_int_x__H_IMPL__
void free_Maybe_Vector_int_x (Maybe_Vector_int_x * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_Vector_int_x__H_Table * const get_Maybe_Vector_int_x__H_Table () {
  static const Maybe_Vector_int_x__H_Table table  = { free_Maybe_Vector_int_x };
  return (&table );
}
Maybe_Vector_int_x Just_Vector_int_x (Vector_int_x value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let728 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int_x Nothing_Vector_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let733 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int_x__H_IMPL__ */ 
#ifndef __Box_Vector_int__H_IMPL__
#define __Box_Vector_int__H_IMPL__
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let740 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_int_x *)malloc (sizeof(Vector_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let749 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let751 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn752 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn754 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn756 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn761 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn764 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let770 */
            // ----------
            ;
            ({ /* cicili#Progn772 */
              Gone_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let780 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let782 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn783 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn785 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn787 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn792 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let796 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block802 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let807 */
            // ----------
            ;
            ({ /* cicili#Progn809 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let817 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let819 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn820 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn822 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn824 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn829 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let836 */
            // ----------
            ;
            ({ /* cicili#Progn838 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let847 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let849 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn850 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn852 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn854 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block860 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block863 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block871 */
                if ((*count ) ==  1 )
                  { /* cicili#Block874 */
                    free_Vector_int_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Vector_int_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let884 */
          // ----------
          ;
          ({ /* cicili#Let886 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block891 */
              }
          });
        }
    });
  }
}
const Box_Vector_int__H_Table * const get_Box_Vector_int__H_Table () {
  static const Box_Vector_int__H_Table table  = { free_Box_Vector_int , new_Box_Vector_int , clone_Box_Vector_int , take_Box_Vector_int , get_Box_Vector_int };
  return (&table );
}
Box_Vector_int __h_Hold_Vector_int_x (Vector_int_x * pointer , int * count , size_t address ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let902 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let907 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int pure_Vector_int (int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_int (step , step );
}
Vector_int pureCapacity_Vector_int (int capacity , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Buffer_int (newCapacity_StringBuffer_int (capacity , step , null_terminated_Vector_int ));
}
int * toArray_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let921 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let925 */
        __auto_type match924  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match924 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let928 */
          bool __h_case_result  = (true  &&  (((match924 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn929 */
                (unboxed  =  (((match924 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn934 */
              ({ /* cicili#Let938 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let940 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn941 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn946 */
                      ({ /* cicili#Let950 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let952 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn953 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn958 */
                              buffer ;
                            }) : ({ /* cicili#Let962 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let964 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn965 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn970 */
                                    buffer ;
                                  }) : ({ /* cicili#Let974 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn976 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let980 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let982 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn983 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn985 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn990 */
                            ({ /* cicili#Let993 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let997 */
                                __auto_type match996  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match996 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1000 */
                                  bool __h_case_result  = (true  &&  (((match996 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1001 */
                                        (unboxed  =  (((match996 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1006 */
                                      ({ /* cicili#Let1010 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1012 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1013 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1018 */
                                              ({ /* cicili#Let1022 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1024 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1025 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1030 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1034 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1036 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1037 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1042 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let1046 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1048 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1052 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1054 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1055 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1057 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1062 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1067 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1069 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1073 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1075 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1079 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1081 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1085 */
              // ----------
              ;
              ({ /* cicili#Progn1087 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_int (16, 16);
}
int show_Vector_int (CFile file , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto int show_ (int index , Vector_int vector );
  int showWithSize (int index , int size , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1097 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1101 */
          __auto_type match1100  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1100 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1104 */
            bool __h_case_result  = (true  &&  (((match1100 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1105 */
                  (unboxed  =  (((match1100 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1110 */
                ({ /* cicili#Let1114 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1116 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1117 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1122 */
                        ({ /* cicili#Let1126 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1128 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1129 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1134 */
                                ({ /* cicili#Let1136 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1147 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let1149 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1150 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1155 */
                                      ({ /* cicili#Let1157 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1168 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1170 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1174 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1176 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1177 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1179 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1181 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1186 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1190 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1192 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1196 */
                // ----------
                ;
                ({ /* cicili#Progn1198 */
                  0;
                });
              }));
          });
        });
      });
  }
  int show_ (int index , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1202 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1206 */
          __auto_type match1205  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1205 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1209 */
            bool __h_case_result  = (true  &&  (((match1205 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1210 */
                  (unboxed  =  (((match1205 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1215 */
                ({ /* cicili#Let1219 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1221 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1222 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1227 */
                        ({ /* cicili#Let1231 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1233 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1234 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1236 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1241 */
                                ({ /* cicili#Let1243 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1254 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1256 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1257 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1259 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1264 */
                                      ({ /* cicili#Let1266 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1277 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1279 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1283 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1285 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1286 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1288 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1290 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1295 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1299 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1301 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1305 */
                // ----------
                ;
                ({ /* cicili#Progn1307 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Vector_int copy_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1312 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1316 */
        __auto_type match1315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1315 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1319 */
          bool __h_case_result  = (true  &&  (((match1315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1320 */
                (unboxed  =  (((match1315 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1325 */
              ({ /* cicili#Let1329 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1331 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1332 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1337 */
                      ({ /* cicili#Let1341 */
                        // ----------
                        ;
                        ({ /* cicili#Let1343 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1347 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1353 */
                              // ----------
                              ;
                              ({ /* cicili#Let1355 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1359 */
                                    Buffer_int (copy_StringBuffer_int (sb ));
                                  }) : ({ /* cicili#Let1365 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1367 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1372 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1374 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1375 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1377 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1379 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1384 */
                            ({ /* cicili#Let1387 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1391 */
                                __auto_type match1390  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1390 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1394 */
                                  bool __h_case_result  = (true  &&  (((match1390 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1395 */
                                        (unboxed  =  (((match1390 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1400 */
                                      ({ /* cicili#Let1404 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1406 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1407 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1412 */
                                              ({ /* cicili#Let1416 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1418 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1422 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1428 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1430 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1434 */
                                                            Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let1440 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1442 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1447 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1449 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1450 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1455 */
                                                    copy_Vector_int (veci );
                                                  }) : ({ /* cicili#Let1460 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1462 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1467 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1469 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1474 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1476 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1481 */
              // ----------
              ;
              ({ /* cicili#Progn1483 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1489 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1493 */
        __auto_type match1492  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1492 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1496 */
          bool __h_case_result  = (true  &&  (((match1492 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1497 */
                (unboxed  =  (((match1492 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1502 */
              ({ /* cicili#Let1506 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1508 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1509 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1514 */
                      ({ /* cicili#Progn1516 */
                        { /* cicili#Let1520 */
                          __auto_type match1519  = take_Box_Vector_int ((&vector ));
                          typeof((((match1519 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1523 */
                            bool __h_case_result  = (true  &&  (((match1519 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1524 */
                                  (ptr  =  (((match1519 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1530 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1534 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1536 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1537 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1539 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1544 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn1547 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_int (sb );
                                  }) : Buffer_int (sb ));
                              }) : ({ /* cicili#Let1553 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1555 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1556 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1558 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1563 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn1566 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (sb );
                                        }) : Buffer_int (sb ));
                                    }) : ({ /* cicili#Let1572 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1574 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1579 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1581 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1582 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1584 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1586 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1591 */
                            ({ /* cicili#Let1594 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1598 */
                                __auto_type match1597  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1597 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1601 */
                                  bool __h_case_result  = (true  &&  (((match1597 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1602 */
                                        (unboxed  =  (((match1597 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1607 */
                                      ({ /* cicili#Let1611 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1613 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1614 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1619 */
                                              ({ /* cicili#Let1623 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1625 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1626 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1628 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1633 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1636 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1646 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1648 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1649 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1651 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1656 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let1659 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let1669 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1671 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1675 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1677 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1678 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1680 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1685 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let1690 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1692 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1697 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1699 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1704 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1706 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1711 */
              // ----------
              ;
              ({ /* cicili#Progn1713 */
                clone_Box_Vector_int (vector );
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1719 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1723 */
        __auto_type match1722  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1722 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1726 */
          bool __h_case_result  = (true  &&  (((match1722 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1727 */
                (unboxed  =  (((match1722 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1732 */
              ({ /* cicili#Let1736 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1738 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1739 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1744 */
                      ({ /* cicili#Progn1746 */
                        { /* cicili#Let1750 */
                          __auto_type match1749  = take_Box_Vector_int ((&vector ));
                          typeof((((match1749 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1753 */
                            bool __h_case_result  = (true  &&  (((match1749 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1754 */
                                  (ptr  =  (((match1749 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1760 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1764 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let1766 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn1767 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn1769 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn1771 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn1773 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1778 */
                                ({ /* cicili#Progn1780 */
                                  for (int i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let1788 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let1790 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn1791 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn1793 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn1795 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn1797 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1802 */
                                      ({ /* cicili#Progn1804 */
                                        for (int i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_int (MakeNullTerminatedBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let1812 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1814 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1819 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1821 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1822 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1824 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1826 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1831 */
                            ({ /* cicili#Let1834 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1838 */
                                __auto_type match1837  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1837 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1841 */
                                  bool __h_case_result  = (true  &&  (((match1837 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1842 */
                                        (unboxed  =  (((match1837 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1847 */
                                      ({ /* cicili#Let1851 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1853 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1854 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1859 */
                                              ({ /* cicili#Let1863 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1865 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1866 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1868 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1873 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1876 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1885 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1887 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1888 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1890 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1895 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let1898 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let1907 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1909 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1913 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1915 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1916 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1918 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1923 */
                                                    deleteAt_Vector_int (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let1928 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1930 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1935 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1937 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1942 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1944 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1949 */
              // ----------
              ;
              ({ /* cicili#Progn1951 */
                clone_Box_Vector_int (vector );
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1957 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1961 */
        __auto_type match1960  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1960 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1964 */
          bool __h_case_result  = (true  &&  (((match1960 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1965 */
                (unboxed  =  (((match1960 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1970 */
              ({ /* cicili#Let1974 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1976 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1977 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1982 */
                      ({ /* cicili#Let1984 */
                        StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                        // ----------
                        { /* cicili#Let1990 */
                          __auto_type match1989  = take_Box_Vector_int ((&vector ));
                          typeof((((match1989 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1993 */
                            bool __h_case_result  = (true  &&  (((match1989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1994 */
                                  (ptr  =  (((match1989 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2000 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2004 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2006 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2007 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2009 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2014 */
                                ({ /* cicili#Progn2016 */
                                  for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_int (new_sb );
                                });
                              }) : ({ /* cicili#Let2023 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let2025 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2026 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn2028 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2033 */
                                      ({ /* cicili#Progn2035 */
                                        for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_int (new_sb );
                                      });
                                    }) : ({ /* cicili#Let2042 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2044 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2049 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2051 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2052 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2054 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2056 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2061 */
                            ({ /* cicili#Let2064 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2068 */
                                __auto_type match2067  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2067 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2071 */
                                  bool __h_case_result  = (true  &&  (((match2067 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2072 */
                                        (unboxed  =  (((match2067 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2077 */
                                      ({ /* cicili#Let2081 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2083 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2084 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2089 */
                                              ({ /* cicili#Let2093 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2095 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2096 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2098 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2103 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2106 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2116 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2118 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2119 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2121 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2126 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2129 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2139 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2141 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2145 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2147 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2148 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2150 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2155 */
                                                    insertAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let2160 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2162 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2167 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2169 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2174 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2176 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2181 */
              // ----------
              ;
              ({ /* cicili#Progn2183 */
                clone_Box_Vector_int (vector );
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2189 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2193 */
        __auto_type match2192  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2192 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2196 */
          bool __h_case_result  = (true  &&  (((match2192 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2197 */
                (unboxed  =  (((match2192 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2202 */
              ({ /* cicili#Let2206 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2208 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2209 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2214 */
                      ({ /* cicili#Let2218 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2220 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2221 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2223 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2225 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2227 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2232 */
                              ({ /* cicili#Let2234 */
                                int tmp ;
                                // ----------
                                { /* cicili#Let2238 */
                                  __auto_type match2237  = take_Box_Vector_int ((&vector ));
                                  typeof((((match2237 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2241 */
                                    bool __h_case_result  = (true  &&  (((match2237 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2242 */
                                          (ptr  =  (((match2237 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2248 */
                                        free (ptr );
                                      }
                                  });
                                }
                                for (int i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                    tmp  = (*(buffer  +  i  ));
                                    (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                    (*(buffer  +  (j  -  1 ) )) = tmp ;
                                }
                                Buffer_int (MakeStringBuffer_int (buffer , cursor , size , step ));
                              });
                            }) : ({ /* cicili#Let2256 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let2258 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2259 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2261 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2263 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn2265 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2270 */
                                    ({ /* cicili#Let2272 */
                                      int tmp ;
                                      // ----------
                                      { /* cicili#Let2276 */
                                        __auto_type match2275  = take_Box_Vector_int ((&vector ));
                                        typeof((((match2275 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2279 */
                                          bool __h_case_result  = (true  &&  (((match2275 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2280 */
                                                (ptr  =  (((match2275 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2286 */
                                              free (ptr );
                                            }
                                        });
                                      }
                                      for (int i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                          tmp  = (*(buffer  +  i  ));
                                          (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                          (*(buffer  +  (j  -  1 ) )) = tmp ;
                                      }
                                      Buffer_int (MakeNullTerminatedBuffer_int (buffer , cursor , size , step ));
                                    });
                                  }) : ({ /* cicili#Let2294 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2296 */
                                      clone_Box_Vector_int (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2301 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2303 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2304 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2306 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2308 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2313 */
                            ({ /* cicili#Let2316 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2320 */
                                __auto_type match2319  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2319 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2323 */
                                  bool __h_case_result  = (true  &&  (((match2319 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2324 */
                                        (unboxed  =  (((match2319 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2329 */
                                      ({ /* cicili#Let2333 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2335 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2336 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2341 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2348 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2350 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2351 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2356 */
                                                    reverse_Vector_int (veci );
                                                  }) : ({ /* cicili#Let2361 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2363 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2368 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2370 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2375 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2377 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2382 */
              // ----------
              ;
              ({ /* cicili#Progn2384 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2390 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2394 */
        __auto_type match2393  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2393 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2397 */
          bool __h_case_result  = (true  &&  (((match2393 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2398 */
                (unboxed  =  (((match2393 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2403 */
              ({ /* cicili#Let2407 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2409 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2410 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2415 */
                      ({ /* cicili#Progn2417 */
                        { /* cicili#Let2421 */
                          __auto_type match2420  = take_Box_Vector_int ((&lvector ));
                          typeof((((match2420 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2424 */
                            bool __h_case_result  = (true  &&  (((match2420 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2425 */
                                  (ptr  =  (((match2420 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2431 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                      });
                    }) : ({ /* cicili#Let2439 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2441 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2442 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2444 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2446 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2451 */
                            ({ /* cicili#Let2454 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2458 */
                                __auto_type match2457  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2457 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2461 */
                                  bool __h_case_result  = (true  &&  (((match2457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2462 */
                                        (unboxed  =  (((match2457 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2467 */
                                      ({ /* cicili#Let2471 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2473 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2474 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2479 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2488 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2490 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2491 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2496 */
                                                    append_Vector_int (veci , rvector );
                                                  }) : ({ /* cicili#Let2501 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2503 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2508 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2510 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2515 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2517 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2522 */
              // ----------
              ;
              ({ /* cicili#Progn2524 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2530 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2534 */
        __auto_type match2533  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2533 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2537 */
          bool __h_case_result  = (true  &&  (((match2533 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2538 */
                (unboxed  =  (((match2533 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2543 */
              ({ /* cicili#Let2547 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2549 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2550 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2555 */
                      ({ /* cicili#Progn2557 */
                        { /* cicili#Let2561 */
                          __auto_type match2560  = take_Box_Vector_int ((&vector ));
                          typeof((((match2560 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2564 */
                            bool __h_case_result  = (true  &&  (((match2560 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2565 */
                                  (ptr  =  (((match2560 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2571 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (put_StringBuffer_int (sb , item ));
                      });
                    }) : ({ /* cicili#Let2577 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2579 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2580 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2582 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2584 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2589 */
                            ({ /* cicili#Let2592 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2596 */
                                __auto_type match2595  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2595 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2599 */
                                  bool __h_case_result  = (true  &&  (((match2595 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2600 */
                                        (unboxed  =  (((match2595 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2605 */
                                      ({ /* cicili#Let2609 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2611 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2612 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2617 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2624 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2626 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2627 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2632 */
                                                    push_Vector_int (item , veci );
                                                  }) : ({ /* cicili#Let2637 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2639 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2644 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2646 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2651 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2653 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2658 */
              // ----------
              ;
              ({ /* cicili#Progn2660 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (int len , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2666 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2670 */
        __auto_type match2669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2669 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2673 */
          bool __h_case_result  = (true  &&  (((match2669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2674 */
                (unboxed  =  (((match2669 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2679 */
              ({ /* cicili#Let2683 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2685 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2686 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2691 */
                      ({ /* cicili#Let2695 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2697 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2698 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2703 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2715 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2717 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2718 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2723 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let2735 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2737 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2743 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2745 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2746 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2748 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2753 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), 0, 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), 0, len ) : Slice_int (clone_Box_Vector_int (vec ), 0, 0)));
                          }) : ({ /* cicili#Let2765 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2767 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2772 */
              // ----------
              ;
              ({ /* cicili#Progn2774 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int last_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2780 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2784 */
        __auto_type match2783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2783 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2787 */
          bool __h_case_result  = (true  &&  (((match2783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2788 */
                (unboxed  =  (((match2783 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2793 */
              ({ /* cicili#Let2797 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2799 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2800 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2805 */
                      ({ /* cicili#Let2809 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2811 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2812 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2817 */
                              Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let2823 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2825 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2826 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2831 */
                                    Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let2837 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2839 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2844 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2846 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2847 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2849 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2854 */
                            Slice_int (clone_Box_Vector_int (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let2860 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2862 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2867 */
              // ----------
              ;
              ({ /* cicili#Progn2869 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2875 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2879 */
        __auto_type match2878  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2878 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2882 */
          bool __h_case_result  = (true  &&  (((match2878 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2883 */
                (unboxed  =  (((match2878 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2888 */
              ({ /* cicili#Let2892 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2894 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2895 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2900 */
                      ({ /* cicili#Let2904 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2906 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2907 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2912 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let2918 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2920 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2921 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2926 */
                                    Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let2932 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2934 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2939 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2941 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2942 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2944 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2946 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2951 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let2957 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2959 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2964 */
              // ----------
              ;
              ({ /* cicili#Progn2966 */
                None_int ();
              });
            }));
        });
      });
    });
}
int hasLen_Vector_int (Vector_int vector , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2971 */
      int len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
int len_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2978 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2982 */
        __auto_type match2981  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2981 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2985 */
          bool __h_case_result  = (true  &&  (((match2981 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2986 */
                (unboxed  =  (((match2981 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2991 */
              ({ /* cicili#Let2995 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2997 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2998 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3003 */
                      ({ /* cicili#Let3007 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3009 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3010 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3015 */
                              cursor ;
                            }) : ({ /* cicili#Let3019 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3021 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3022 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3027 */
                                    cursor ;
                                  }) : ({ /* cicili#Let3031 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3033 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3037 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3039 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3040 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3045 */
                            size ;
                          }) : ({ /* cicili#Let3049 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3051 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3055 */
              // ----------
              ;
              ({ /* cicili#Progn3057 */
                0;
              });
            }));
        });
      });
    });
}
Vector_int tail_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_Vector_int (1, vector );
}
Vector_int drop_Vector_int (int len , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3065 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3069 */
        __auto_type match3068  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3068 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3072 */
          bool __h_case_result  = (true  &&  (((match3068 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3073 */
                (unboxed  =  (((match3068 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3078 */
              ({ /* cicili#Let3082 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3084 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3085 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3090 */
                      ({ /* cicili#Let3094 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3096 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3097 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3102 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3114 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3116 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3117 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3122 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let3134 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3136 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3142 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3144 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3145 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3147 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3152 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3157 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3159 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3164 */
              // ----------
              ;
              ({ /* cicili#Progn3166 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3173 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3177 */
        __auto_type match3176  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3176 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3180 */
          bool __h_case_result  = (true  &&  (((match3176 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3181 */
                (unboxed  =  (((match3176 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3186 */
              ({ /* cicili#Let3190 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3192 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3193 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3198 */
                      ({ /* cicili#Let3202 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3204 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3205 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3207 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3212 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3219 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3221 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3222 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3224 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3229 */
                                    (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                                  }) : ({ /* cicili#Let3236 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3238 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3243 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3245 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3246 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3248 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3253 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3258 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3260 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3265 */
              // ----------
              ;
              ({ /* cicili#Progn3267 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (int index , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3274 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3278 */
        __auto_type match3277  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3277 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3281 */
          bool __h_case_result  = (true  &&  (((match3277 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3282 */
                (unboxed  =  (((match3277 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3287 */
              ({ /* cicili#Let3291 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3293 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3294 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3299 */
                      ({ /* cicili#Let3303 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3305 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3306 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3308 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3313 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3320 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3322 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3323 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3325 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3330 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                                  }) : ({ /* cicili#Let3337 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3339 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3344 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3346 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3347 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3349 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3351 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3356 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3363 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3365 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3370 */
              // ----------
              ;
              ({ /* cicili#Progn3372 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3377 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3381 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3383 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3384 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3390 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3396 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3398 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3399 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3405 */
                  free_Box_Vector_int ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Vector_int__H_Table * const get_Vector_int__H_Table () {
  static Vector_int__H_Table table  = { free_Vector_int_x , pure_Vector_int , pureCapacity_Vector_int , toArray_Vector_int , wrap_Vector_int , show_Vector_int , copy_Vector_int , replaceAt_Vector_int , deleteAt_Vector_int , insertAt_Vector_int , reverse_Vector_int , append_Vector_int , push_Vector_int , take_Vector_int , last_Vector_int , init_Vector_int , hasLen_Vector_int , len_Vector_int , tail_Vector_int , drop_Vector_int , head_Vector_int , nth_Vector_int };
  return (&table );
}
Vector_int Buffer_int (StringBuffer_int buffer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3415 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (__h_stack_push (instance ));
  }
}
Vector_int Slice_int (Vector_int vector , int cursor , int size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3423 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (__h_stack_push (instance ));
  }
}
Vector_int None_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3430 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h___t });
    return new_Box_Vector_int (__h_stack_push (instance ));
  }
}
#endif /* __Vector_int__H_IMPL__ */ 
#ifndef __Maybe_Vector_int__H_IMPL__
#define __Maybe_Vector_int__H_IMPL__
void free_Maybe_Vector_int (Maybe_Vector_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_Vector_int__H_Table * const get_Maybe_Vector_int__H_Table () {
  static const Maybe_Vector_int__H_Table table  = { free_Maybe_Vector_int };
  return (&table );
}
Maybe_Vector_int Just_Vector_int (Vector_int value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3448 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3453 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int__H_IMPL__ */ 
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
  union { /* ciciliUnion3479 */
    struct { /* ciciliStruct3480 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3481 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_char;
Maybe_char Just_char (char value );
Maybe_char Nothing_char ();
__attribute__((weak)) Maybe_char Default_Maybe_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
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
  __h_NullTerminated_t = 1,
  __h_Buffered_t = 2
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_char StringBuffer_char ;
typedef void (*free_StringBuffer_char_t) (StringBuffer_char * this );
typedef struct StringBuffer_char__H_Table {
  free_StringBuffer_char_t freeData ;
    StringBuffer_char (*new) (int step , bool null_terminated );
    StringBuffer_char (*newCapacity) (int capacity , int step , bool null_terminated );
    StringBuffer_char (*copySlice) (StringBuffer_char sb , int cursor , int size );
    StringBuffer_char (*copy) (StringBuffer_char sb );
    StringBuffer_char (*put) (StringBuffer_char sb , const char data );
    StringBuffer_char (*print) (StringBuffer_char sb , const char * data , int len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3523 */
    struct { /* ciciliStruct3524 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct3525 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct3526 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return FreedStringBuffer_char ();
}
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated );
StringBuffer_char newCapacity_StringBuffer_char (int capacity , int step , bool null_terminated );
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , int cursor , int size );
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , int len );
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table ();
void free_StringBuffer_char (StringBuffer_char * this );
#endif /* __StringBuffer_char__H_DECL__ */ 
#ifndef __Vector_char__H_DECL__
#define __Vector_char__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Vector_char class_Vector_char ;
typedef class_Vector_char * Vector_char_x ;
#ifndef __Maybe_Vector_char_x__H_DECL__
#define __Maybe_Vector_char_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_char_x Maybe_Vector_char_x ;
typedef void (*free_Maybe_Vector_char_x_t) (Maybe_Vector_char_x * this );
typedef struct Maybe_Vector_char_x__H_Table {
  free_Maybe_Vector_char_x_t freeData ;
} Maybe_Vector_char_x__H_Table;
typedef struct Maybe_Vector_char_x {
  const Maybe_Vector_char_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3589 */
    struct { /* ciciliStruct3590 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3591 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_char_x;
Maybe_Vector_char_x Just_Vector_char_x (Vector_char_x value );
Maybe_Vector_char_x Nothing_Vector_char_x ();
__attribute__((weak)) Maybe_Vector_char_x Default_Maybe_Vector_char_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_Vector_char_x ();
}
const Maybe_Vector_char_x__H_Table * const get_Maybe_Vector_char_x__H_Table ();
void free_Maybe_Vector_char_x (Maybe_Vector_char_x * this );
#endif /* __Maybe_Vector_char_x__H_DECL__ */ 
#ifndef __Box_Vector_char__H_DECL__
#define __Box_Vector_char__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Vector_char Box_Vector_char ;
typedef void (*free_Box_Vector_char_t) (Box_Vector_char * this );
typedef struct Box_Vector_char__H_Table {
  free_Box_Vector_char_t freeData ;
    Box_Vector_char (*new) (Vector_char_x pointer );
    Box_Vector_char (*clone) (Box_Vector_char rc );
    Maybe_Vector_char_x (*take) (Box_Vector_char * this );
    Maybe_Vector_char_x (*get) (Box_Vector_char rc );
} Box_Vector_char__H_Table;
typedef struct Box_Vector_char {
  const Box_Vector_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3621 */
    struct { /* ciciliStruct3622 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3623 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_char;
Box_Vector_char __h_Hold_Vector_char_x (Vector_char_x * pointer , int * count , size_t address );
Box_Vector_char Gone_Vector_char_x ();
__attribute__((weak)) Box_Vector_char Default_Box_Vector_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Gone_Vector_char_x ();
}
Box_Vector_char new_Box_Vector_char (Vector_char_x pointer );
Box_Vector_char clone_Box_Vector_char (Box_Vector_char rc );
Maybe_Vector_char_x take_Box_Vector_char (Box_Vector_char * this );
Maybe_Vector_char_x get_Box_Vector_char (Box_Vector_char rc );
const Box_Vector_char__H_Table * const get_Box_Vector_char__H_Table ();
void free_Box_Vector_char (Box_Vector_char * this );
#endif /* __Box_Vector_char__H_DECL__ */ 
typedef Box_Vector_char Vector_char ;
typedef void (*free_Vector_char_t) (Vector_char_x * this );
typedef struct Vector_char__H_Table {
  free_Vector_char_t freeData ;
    Vector_char (*pure) (int step );
    Vector_char (*pureCapacity) (int capacity , int step );
    char * (*toArray) (Vector_char vector );
    Vector_char (*wrap) (const char item );
    int (*show) (CFile file , Vector_char vector );
    Vector_char (*copy) (Vector_char vector );
    Vector_char (*replaceAt) (Vector_char vector , char item , int index );
    Vector_char (*deleteAt) (Vector_char vector , int index );
    Vector_char (*insertAt) (Vector_char vector , char item , int index );
    Vector_char (*reverse) (Vector_char vector );
    Vector_char (*append) (Vector_char lvector , Vector_char rvector );
    Vector_char (*push) (char item , Vector_char vector );
    Vector_char (*take) (int len , Vector_char vector );
    Vector_char (*last) (Vector_char vector );
    Vector_char (*init) (Vector_char vector );
    int (*hasLen) (Vector_char vector , int desired );
    int (*len) (Vector_char vector );
    Vector_char (*tail) (Vector_char vector );
    Vector_char (*drop) (int index , Vector_char vector );
    Maybe_char (*head) (Vector_char list );
    Maybe_char (*nth) (int index , Vector_char vector );
} Vector_char__H_Table;
typedef struct class_Vector_char {
  const Vector_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3682 */
    struct { /* ciciliStruct3683 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3684 */
      Vector_char __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3685 */
    } None , _ ;
  } __h_data ;
} class_Vector_char;
Vector_char Buffer_char (StringBuffer_char buffer );
Vector_char Slice_char (Vector_char vector , int cursor , int size );
Vector_char None_char ();
__attribute__((weak)) Vector_char Default_Vector_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return None_char ();
}
Vector_char pure_Vector_char (int step );
Vector_char pureCapacity_Vector_char (int capacity , int step );
char * toArray_Vector_char (Vector_char vector );
Vector_char wrap_Vector_char (const char item );
int show_Vector_char (CFile file , Vector_char vector );
Vector_char copy_Vector_char (Vector_char vector );
Vector_char replaceAt_Vector_char (Vector_char vector , char item , int index );
Vector_char deleteAt_Vector_char (Vector_char vector , int index );
Vector_char insertAt_Vector_char (Vector_char vector , char item , int index );
Vector_char reverse_Vector_char (Vector_char vector );
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector );
Vector_char push_Vector_char (char item , Vector_char vector );
Vector_char take_Vector_char (int len , Vector_char vector );
Vector_char last_Vector_char (Vector_char vector );
Vector_char init_Vector_char (Vector_char vector );
int hasLen_Vector_char (Vector_char vector , int desired );
int len_Vector_char (Vector_char vector );
Vector_char tail_Vector_char (Vector_char vector );
Vector_char drop_Vector_char (int index , Vector_char vector );
Maybe_char head_Vector_char (Vector_char list );
Maybe_char nth_Vector_char (int index , Vector_char vector );
Vector_char__H_Table * const get_Vector_char__H_Table ();
void free_Vector_char_x (Vector_char_x * this );
#endif /* __Vector_char__H_DECL__ */ 
#ifndef __Maybe_Vector_char__H_DECL__
#define __Maybe_Vector_char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Vector_char Maybe_Vector_char ;
typedef void (*free_Maybe_Vector_char_t) (Maybe_Vector_char * this );
typedef struct Maybe_Vector_char__H_Table {
  free_Maybe_Vector_char_t freeData ;
} Maybe_Vector_char__H_Table;
typedef struct Maybe_Vector_char {
  const Maybe_Vector_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3780 */
    struct { /* ciciliStruct3781 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3782 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_char;
Maybe_Vector_char Just_Vector_char (Vector_char value );
Maybe_Vector_char Nothing_Vector_char ();
__attribute__((weak)) Maybe_Vector_char Default_Maybe_Vector_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_Vector_char ();
}
const Maybe_Vector_char__H_Table * const get_Maybe_Vector_char__H_Table ();
void free_Maybe_Vector_char (Maybe_Vector_char * this );
#endif /* __Maybe_Vector_char__H_DECL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3812 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3817 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return newCapacity_StringBuffer_char (step , step , null_terminated );
}
StringBuffer_char newCapacity_StringBuffer_char (int capacity , int step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ((null_terminated ) ? ({ /* cicili#Let3832 */
        char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let3836 */
        char * buffer  = malloc ((capacity  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , int cursor , int size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3845 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3847 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3848 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3850 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3855 */
            ({ /* cicili#Let3857 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
              // ----------
              print_StringBuffer_char (new_sb , (buffer  +  cursor  ), size );
            });
          }) : ({ /* cicili#Let3864 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let3866 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3867 */
                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn3869 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn3874 */
                  ({ /* cicili#Let3876 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                    // ----------
                    print_StringBuffer_char (new_sb , (buffer  +  cursor  ), size );
                  });
                }) : ({ /* cicili#Let3883 */
                  // ----------
                  ;
                  ({ /* cicili#Progn3885 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3894 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3896 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3897 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3899 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3901 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3903 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3908 */
            ({ /* cicili#Let3910 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let3917 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let3919 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn3920 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3922 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn3924 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn3926 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn3931 */
                  ({ /* cicili#Let3933 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                    // ----------
                    print_StringBuffer_char (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let3940 */
                  // ----------
                  ;
                  ({ /* cicili#Progn3942 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3956 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3958 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3959 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3961 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3963 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3965 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3970 */
            ({ /* cicili#Let3972 */
              int blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block3976 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let3978 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let3983 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let3985 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn3986 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3988 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn3990 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn3992 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn3997 */
                  ({ /* cicili#Let3999 */
                    int blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block4003 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let4005 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let4010 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4012 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4020 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4022 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4023 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4029 */
          { /* cicili#Block4031 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let4037 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let4039 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4040 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4046 */
                { /* cicili#Block4048 */
                  free (buffer );
                  (*this ) = FreedStringBuffer_char ();
                }
              }
          });
        }
    });
  }
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , copySlice_StringBuffer_char , copy_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4058 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4063 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4068 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_char__H_IMPL__ */ 
bool null_terminated_Vector_char  = true ;
#ifndef __Vector_char__H_IMPL__
#define __Vector_char__H_IMPL__
#ifndef __Maybe_Vector_char_x__H_IMPL__
#define __Maybe_Vector_char_x__H_IMPL__
void free_Maybe_Vector_char_x (Maybe_Vector_char_x * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_Vector_char_x__H_Table * const get_Maybe_Vector_char_x__H_Table () {
  static const Maybe_Vector_char_x__H_Table table  = { free_Maybe_Vector_char_x };
  return (&table );
}
Maybe_Vector_char_x Just_Vector_char_x (Vector_char_x value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4090 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char_x Nothing_Vector_char_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4095 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char_x__H_IMPL__ */ 
#ifndef __Box_Vector_char__H_IMPL__
#define __Box_Vector_char__H_IMPL__
Box_Vector_char new_Box_Vector_char (Vector_char_x pointer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4102 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_char_x *)malloc (sizeof(Vector_char_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_char_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_char clone_Box_Vector_char (Box_Vector_char rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4111 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4113 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4114 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4116 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4118 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4123 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4126 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4132 */
            // ----------
            ;
            ({ /* cicili#Progn4134 */
              Gone_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x take_Box_Vector_char (Box_Vector_char * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4142 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4144 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4145 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4147 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4149 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4154 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4158 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4164 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4169 */
            // ----------
            ;
            ({ /* cicili#Progn4171 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x get_Box_Vector_char (Box_Vector_char rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4179 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4181 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4182 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4184 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4186 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4191 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4198 */
            // ----------
            ;
            ({ /* cicili#Progn4200 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_char (Box_Vector_char * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4209 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4211 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4212 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4214 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4216 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4222 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4225 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4233 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4236 */
                    free_Vector_char_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Vector_char_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let4246 */
          // ----------
          ;
          ({ /* cicili#Let4248 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4253 */
              }
          });
        }
    });
  }
}
const Box_Vector_char__H_Table * const get_Box_Vector_char__H_Table () {
  static const Box_Vector_char__H_Table table  = { free_Box_Vector_char , new_Box_Vector_char , clone_Box_Vector_char , take_Box_Vector_char , get_Box_Vector_char };
  return (&table );
}
Box_Vector_char __h_Hold_Vector_char_x (Vector_char_x * pointer , int * count , size_t address ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4264 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_char Gone_Vector_char_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4269 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_char__H_IMPL__ */ 
Vector_char pure_Vector_char (int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_char (step , step );
}
Vector_char pureCapacity_Vector_char (int capacity , int step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Buffer_char (newCapacity_StringBuffer_char (capacity , step , null_terminated_Vector_char ));
}
char * toArray_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4283 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4287 */
        __auto_type match4286  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4286 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4290 */
          bool __h_case_result  = (true  &&  (((match4286 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4291 */
                (unboxed  =  (((match4286 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4296 */
              ({ /* cicili#Let4300 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4302 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4303 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4308 */
                      ({ /* cicili#Let4312 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4314 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4315 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4320 */
                              buffer ;
                            }) : ({ /* cicili#Let4324 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let4326 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4327 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4332 */
                                    buffer ;
                                  }) : ({ /* cicili#Let4336 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4338 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4342 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4344 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4345 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4347 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4352 */
                            ({ /* cicili#Let4355 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4359 */
                                __auto_type match4358  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4358 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4362 */
                                  bool __h_case_result  = (true  &&  (((match4358 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4363 */
                                        (unboxed  =  (((match4358 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4368 */
                                      ({ /* cicili#Let4372 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4374 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4375 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4380 */
                                              ({ /* cicili#Let4384 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4386 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4387 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4392 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4396 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4398 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4399 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4404 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let4408 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4410 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4414 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4416 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4417 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4419 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4424 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4429 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4431 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4435 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4437 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4441 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4443 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4447 */
              // ----------
              ;
              ({ /* cicili#Progn4449 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_char wrap_Vector_char (const char item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_char (16, 16);
}
int show_Vector_char (CFile file , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto int show_ (int index , Vector_char vector );
  int showWithSize (int index , int size , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let4459 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4463 */
          __auto_type match4462  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4462 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4466 */
            bool __h_case_result  = (true  &&  (((match4462 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4467 */
                  (unboxed  =  (((match4462 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4472 */
                ({ /* cicili#Let4476 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4478 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4479 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4484 */
                        ({ /* cicili#Let4488 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4490 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4491 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4496 */
                                ({ /* cicili#Let4498 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4509 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let4511 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4512 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4517 */
                                      ({ /* cicili#Let4519 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let4530 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4532 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4536 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4538 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4539 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4541 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4543 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4548 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4552 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4554 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4558 */
                // ----------
                ;
                ({ /* cicili#Progn4560 */
                  0;
                });
              }));
          });
        });
      });
  }
  int show_ (int index , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let4564 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4568 */
          __auto_type match4567  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4567 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4571 */
            bool __h_case_result  = (true  &&  (((match4567 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4572 */
                  (unboxed  =  (((match4567 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4577 */
                ({ /* cicili#Let4581 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4583 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4584 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4589 */
                        ({ /* cicili#Let4593 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4595 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4596 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4598 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4603 */
                                ({ /* cicili#Let4605 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4616 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let4618 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4619 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn4621 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4626 */
                                      ({ /* cicili#Let4628 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let4639 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4641 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4645 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4647 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4648 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4650 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4652 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4657 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4661 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4663 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4667 */
                // ----------
                ;
                ({ /* cicili#Progn4669 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Vector_char copy_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4674 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4678 */
        __auto_type match4677  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4677 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4681 */
          bool __h_case_result  = (true  &&  (((match4677 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4682 */
                (unboxed  =  (((match4677 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4687 */
              ({ /* cicili#Let4691 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4693 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4694 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4699 */
                      ({ /* cicili#Let4703 */
                        // ----------
                        ;
                        ({ /* cicili#Let4705 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4709 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let4715 */
                              // ----------
                              ;
                              ({ /* cicili#Let4717 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4721 */
                                    Buffer_char (copy_StringBuffer_char (sb ));
                                  }) : ({ /* cicili#Let4727 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4729 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4734 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4736 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4737 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4739 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4741 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4746 */
                            ({ /* cicili#Let4749 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4753 */
                                __auto_type match4752  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4752 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4756 */
                                  bool __h_case_result  = (true  &&  (((match4752 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4757 */
                                        (unboxed  =  (((match4752 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4762 */
                                      ({ /* cicili#Let4766 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4768 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4769 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4774 */
                                              ({ /* cicili#Let4778 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4780 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4784 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let4790 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4792 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4796 */
                                                            Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let4802 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4804 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4809 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4811 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4812 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4817 */
                                                    copy_Vector_char (veci );
                                                  }) : ({ /* cicili#Let4822 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4824 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4829 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4831 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4836 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4838 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4843 */
              // ----------
              ;
              ({ /* cicili#Progn4845 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char replaceAt_Vector_char (Vector_char vector , char item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4851 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4855 */
        __auto_type match4854  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4854 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4858 */
          bool __h_case_result  = (true  &&  (((match4854 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4859 */
                (unboxed  =  (((match4854 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4864 */
              ({ /* cicili#Let4868 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4870 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4871 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4876 */
                      ({ /* cicili#Progn4878 */
                        { /* cicili#Let4882 */
                          __auto_type match4881  = take_Box_Vector_char ((&vector ));
                          typeof((((match4881 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let4885 */
                            bool __h_case_result  = (true  &&  (((match4881 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4886 */
                                  (ptr  =  (((match4881 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block4892 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let4896 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4898 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4899 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4901 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4906 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn4909 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_char (sb );
                                  }) : Buffer_char (sb ));
                              }) : ({ /* cicili#Let4915 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let4917 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4918 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn4920 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4925 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn4928 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_char (sb );
                                        }) : Buffer_char (sb ));
                                    }) : ({ /* cicili#Let4934 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4936 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let4941 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4943 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4944 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4946 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4948 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4953 */
                            ({ /* cicili#Let4956 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4960 */
                                __auto_type match4959  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4959 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4963 */
                                  bool __h_case_result  = (true  &&  (((match4959 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4964 */
                                        (unboxed  =  (((match4959 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4969 */
                                      ({ /* cicili#Let4973 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4975 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4976 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4981 */
                                              ({ /* cicili#Let4985 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4987 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4988 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn4990 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4995 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let4998 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5008 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5010 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5011 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5013 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5018 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5021 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5031 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5033 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5037 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5039 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5040 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5042 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5047 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5052 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5054 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5059 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5061 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5066 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5068 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5073 */
              // ----------
              ;
              ({ /* cicili#Progn5075 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char deleteAt_Vector_char (Vector_char vector , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5081 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5085 */
        __auto_type match5084  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5084 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5088 */
          bool __h_case_result  = (true  &&  (((match5084 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5089 */
                (unboxed  =  (((match5084 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5094 */
              ({ /* cicili#Let5098 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5100 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5101 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5106 */
                      ({ /* cicili#Progn5108 */
                        { /* cicili#Let5112 */
                          __auto_type match5111  = take_Box_Vector_char ((&vector ));
                          typeof((((match5111 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5115 */
                            bool __h_case_result  = (true  &&  (((match5111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5116 */
                                  (ptr  =  (((match5111 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5122 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5126 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let5128 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5129 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5131 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn5133 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5135 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5140 */
                                ({ /* cicili#Progn5142 */
                                  for (int i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let5150 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let5152 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn5153 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn5155 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn5157 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn5159 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5164 */
                                      ({ /* cicili#Progn5166 */
                                        for (int i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_char (MakeNullTerminatedBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let5174 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5176 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5181 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5183 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5184 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5186 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5188 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5193 */
                            ({ /* cicili#Let5196 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5200 */
                                __auto_type match5199  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5199 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5203 */
                                  bool __h_case_result  = (true  &&  (((match5199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5204 */
                                        (unboxed  =  (((match5199 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5209 */
                                      ({ /* cicili#Let5213 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5215 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5216 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5221 */
                                              ({ /* cicili#Let5225 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5227 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5228 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5230 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5235 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5238 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5247 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5249 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5250 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5252 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5257 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5260 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5269 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5271 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5275 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5277 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5278 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5280 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5285 */
                                                    deleteAt_Vector_char (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5290 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5292 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5297 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5299 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5304 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5306 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5311 */
              // ----------
              ;
              ({ /* cicili#Progn5313 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char insertAt_Vector_char (Vector_char vector , char item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5319 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5323 */
        __auto_type match5322  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5322 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5326 */
          bool __h_case_result  = (true  &&  (((match5322 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5327 */
                (unboxed  =  (((match5322 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5332 */
              ({ /* cicili#Let5336 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5338 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5339 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5344 */
                      ({ /* cicili#Let5346 */
                        StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                        // ----------
                        { /* cicili#Let5352 */
                          __auto_type match5351  = take_Box_Vector_char ((&vector ));
                          typeof((((match5351 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5355 */
                            bool __h_case_result  = (true  &&  (((match5351 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5356 */
                                  (ptr  =  (((match5351 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5362 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5366 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5368 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5369 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5371 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5376 */
                                ({ /* cicili#Progn5378 */
                                  for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_char (new_sb );
                                });
                              }) : ({ /* cicili#Let5385 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5387 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5388 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5390 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5395 */
                                      ({ /* cicili#Progn5397 */
                                        for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_char (new_sb );
                                      });
                                    }) : ({ /* cicili#Let5404 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5406 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5411 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5413 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5414 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5416 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5418 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5423 */
                            ({ /* cicili#Let5426 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5430 */
                                __auto_type match5429  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5429 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5433 */
                                  bool __h_case_result  = (true  &&  (((match5429 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5434 */
                                        (unboxed  =  (((match5429 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5439 */
                                      ({ /* cicili#Let5443 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5445 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5446 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5451 */
                                              ({ /* cicili#Let5455 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5457 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5458 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5460 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5465 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5468 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5478 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5480 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5481 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5483 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5488 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5491 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5501 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5503 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5507 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5509 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5510 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5512 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5517 */
                                                    insertAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5522 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5524 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5529 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5531 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5536 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5538 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5543 */
              // ----------
              ;
              ({ /* cicili#Progn5545 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char reverse_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5551 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5555 */
        __auto_type match5554  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5554 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5558 */
          bool __h_case_result  = (true  &&  (((match5554 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5559 */
                (unboxed  =  (((match5554 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5564 */
              ({ /* cicili#Let5568 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5570 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5571 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5576 */
                      ({ /* cicili#Let5580 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let5582 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5583 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn5585 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5587 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5589 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5594 */
                              ({ /* cicili#Let5596 */
                                char tmp ;
                                // ----------
                                { /* cicili#Let5600 */
                                  __auto_type match5599  = take_Box_Vector_char ((&vector ));
                                  typeof((((match5599 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5603 */
                                    bool __h_case_result  = (true  &&  (((match5599 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5604 */
                                          (ptr  =  (((match5599 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block5610 */
                                        free (ptr );
                                      }
                                  });
                                }
                                for (int i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                    tmp  = (*(buffer  +  i  ));
                                    (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                    (*(buffer  +  (j  -  1 ) )) = tmp ;
                                }
                                Buffer_char (MakeStringBuffer_char (buffer , cursor , size , step ));
                              });
                            }) : ({ /* cicili#Let5618 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let5620 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn5621 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5623 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn5625 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn5627 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5632 */
                                    ({ /* cicili#Let5634 */
                                      char tmp ;
                                      // ----------
                                      { /* cicili#Let5638 */
                                        __auto_type match5637  = take_Box_Vector_char ((&vector ));
                                        typeof((((match5637 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5641 */
                                          bool __h_case_result  = (true  &&  (((match5637 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5642 */
                                                (ptr  =  (((match5637 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block5648 */
                                              free (ptr );
                                            }
                                        });
                                      }
                                      for (int i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                          tmp  = (*(buffer  +  i  ));
                                          (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                          (*(buffer  +  (j  -  1 ) )) = tmp ;
                                      }
                                      Buffer_char (MakeNullTerminatedBuffer_char (buffer , cursor , size , step ));
                                    });
                                  }) : ({ /* cicili#Let5656 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5658 */
                                      clone_Box_Vector_char (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5663 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5665 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5666 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5668 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5670 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5675 */
                            ({ /* cicili#Let5678 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5682 */
                                __auto_type match5681  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5681 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5685 */
                                  bool __h_case_result  = (true  &&  (((match5681 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5686 */
                                        (unboxed  =  (((match5681 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5691 */
                                      ({ /* cicili#Let5695 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5697 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5698 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5703 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let5710 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5712 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5713 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5718 */
                                                    reverse_Vector_char (veci );
                                                  }) : ({ /* cicili#Let5723 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5725 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5730 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5732 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5737 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5739 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5744 */
              // ----------
              ;
              ({ /* cicili#Progn5746 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5752 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let5756 */
        __auto_type match5755  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5755 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5759 */
          bool __h_case_result  = (true  &&  (((match5755 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5760 */
                (unboxed  =  (((match5755 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5765 */
              ({ /* cicili#Let5769 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5771 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5772 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5777 */
                      ({ /* cicili#Progn5779 */
                        { /* cicili#Let5783 */
                          __auto_type match5782  = take_Box_Vector_char ((&lvector ));
                          typeof((((match5782 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5786 */
                            bool __h_case_result  = (true  &&  (((match5782 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5787 */
                                  (ptr  =  (((match5782 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5793 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                      });
                    }) : ({ /* cicili#Let5801 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5803 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5804 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5806 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5808 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5813 */
                            ({ /* cicili#Let5816 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5820 */
                                __auto_type match5819  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5819 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5823 */
                                  bool __h_case_result  = (true  &&  (((match5819 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5824 */
                                        (unboxed  =  (((match5819 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5829 */
                                      ({ /* cicili#Let5833 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5835 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5836 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5841 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let5850 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5852 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5853 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5858 */
                                                    append_Vector_char (veci , rvector );
                                                  }) : ({ /* cicili#Let5863 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5865 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5870 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5872 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5877 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5879 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5884 */
              // ----------
              ;
              ({ /* cicili#Progn5886 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char push_Vector_char (char item , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5892 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5896 */
        __auto_type match5895  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5895 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5899 */
          bool __h_case_result  = (true  &&  (((match5895 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5900 */
                (unboxed  =  (((match5895 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5905 */
              ({ /* cicili#Let5909 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5911 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5912 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5917 */
                      ({ /* cicili#Progn5919 */
                        { /* cicili#Let5923 */
                          __auto_type match5922  = take_Box_Vector_char ((&vector ));
                          typeof((((match5922 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5926 */
                            bool __h_case_result  = (true  &&  (((match5922 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5927 */
                                  (ptr  =  (((match5922 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5933 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (put_StringBuffer_char (sb , item ));
                      });
                    }) : ({ /* cicili#Let5939 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5941 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5942 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5944 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5946 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5951 */
                            ({ /* cicili#Let5954 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5958 */
                                __auto_type match5957  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5957 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5961 */
                                  bool __h_case_result  = (true  &&  (((match5957 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5962 */
                                        (unboxed  =  (((match5957 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5967 */
                                      ({ /* cicili#Let5971 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5973 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5974 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5979 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let5986 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5988 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5989 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5994 */
                                                    push_Vector_char (item , veci );
                                                  }) : ({ /* cicili#Let5999 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6001 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6006 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6008 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6013 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6015 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6020 */
              // ----------
              ;
              ({ /* cicili#Progn6022 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char take_Vector_char (int len , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6028 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6032 */
        __auto_type match6031  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6031 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6035 */
          bool __h_case_result  = (true  &&  (((match6031 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6036 */
                (unboxed  =  (((match6031 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6041 */
              ({ /* cicili#Let6045 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6047 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6048 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6053 */
                      ({ /* cicili#Let6057 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6059 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6060 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6065 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6077 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6079 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6080 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6085 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let6097 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6099 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6105 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6107 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6108 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6110 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6115 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), 0, 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), 0, len ) : Slice_char (clone_Box_Vector_char (vec ), 0, 0)));
                          }) : ({ /* cicili#Let6127 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6129 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6134 */
              // ----------
              ;
              ({ /* cicili#Progn6136 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char last_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6142 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6146 */
        __auto_type match6145  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6145 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6149 */
          bool __h_case_result  = (true  &&  (((match6145 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6150 */
                (unboxed  =  (((match6145 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6155 */
              ({ /* cicili#Let6159 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6161 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6162 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6167 */
                      ({ /* cicili#Let6171 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6173 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6174 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6179 */
                              Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let6185 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6187 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6188 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6193 */
                                    Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let6199 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6201 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6206 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6208 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6209 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6211 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6216 */
                            Slice_char (clone_Box_Vector_char (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let6222 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6224 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6229 */
              // ----------
              ;
              ({ /* cicili#Progn6231 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char init_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6237 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6241 */
        __auto_type match6240  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6240 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6244 */
          bool __h_case_result  = (true  &&  (((match6240 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6245 */
                (unboxed  =  (((match6240 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6250 */
              ({ /* cicili#Let6254 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6256 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6257 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6262 */
                      ({ /* cicili#Let6266 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6268 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6269 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6274 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6280 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6282 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6283 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6288 */
                                    Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let6294 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6296 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6301 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6303 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6304 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6306 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6308 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6313 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6319 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6321 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6326 */
              // ----------
              ;
              ({ /* cicili#Progn6328 */
                None_char ();
              });
            }));
        });
      });
    });
}
int hasLen_Vector_char (Vector_char vector , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6333 */
      int len  = len_Vector_char (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
int len_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6340 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6344 */
        __auto_type match6343  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6343 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6347 */
          bool __h_case_result  = (true  &&  (((match6343 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6348 */
                (unboxed  =  (((match6343 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6353 */
              ({ /* cicili#Let6357 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6359 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6360 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6365 */
                      ({ /* cicili#Let6369 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6371 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6372 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6377 */
                              cursor ;
                            }) : ({ /* cicili#Let6381 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6383 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6384 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6389 */
                                    cursor ;
                                  }) : ({ /* cicili#Let6393 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6395 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6399 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6401 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6402 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6407 */
                            size ;
                          }) : ({ /* cicili#Let6411 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6413 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6417 */
              // ----------
              ;
              ({ /* cicili#Progn6419 */
                0;
              });
            }));
        });
      });
    });
}
Vector_char tail_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_Vector_char (1, vector );
}
Vector_char drop_Vector_char (int len , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6427 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6431 */
        __auto_type match6430  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6430 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6434 */
          bool __h_case_result  = (true  &&  (((match6430 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6435 */
                (unboxed  =  (((match6430 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6440 */
              ({ /* cicili#Let6444 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6446 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6447 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6452 */
                      ({ /* cicili#Let6456 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6458 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6459 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6464 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6476 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6478 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6479 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6484 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let6496 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6498 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6504 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6506 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6507 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6509 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6514 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let6519 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6521 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6526 */
              // ----------
              ;
              ({ /* cicili#Progn6528 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6535 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6539 */
        __auto_type match6538  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6538 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6542 */
          bool __h_case_result  = (true  &&  (((match6538 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6543 */
                (unboxed  =  (((match6538 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6548 */
              ({ /* cicili#Let6552 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6554 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6555 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6560 */
                      ({ /* cicili#Let6564 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6566 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6567 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6569 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6574 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let6581 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6583 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6584 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6586 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6591 */
                                    (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                                  }) : ({ /* cicili#Let6598 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6600 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6605 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6607 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6608 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6610 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6615 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let6620 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6622 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6627 */
              // ----------
              ;
              ({ /* cicili#Progn6629 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Vector_char (int index , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6636 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6640 */
        __auto_type match6639  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6639 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6643 */
          bool __h_case_result  = (true  &&  (((match6639 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6644 */
                (unboxed  =  (((match6639 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6649 */
              ({ /* cicili#Let6653 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6655 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6656 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6661 */
                      ({ /* cicili#Let6665 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6667 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6668 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6670 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6675 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let6682 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6684 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6685 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6687 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6692 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                                  }) : ({ /* cicili#Let6699 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6701 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6706 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6708 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6709 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6711 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6713 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6718 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let6725 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6727 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6732 */
              // ----------
              ;
              ({ /* cicili#Progn6734 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Vector_char_x (Vector_char_x * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6739 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6743 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let6745 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6746 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6752 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let6758 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let6760 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6761 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6767 */
                  free_Box_Vector_char ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Vector_char__H_Table * const get_Vector_char__H_Table () {
  static Vector_char__H_Table table  = { free_Vector_char_x , pure_Vector_char , pureCapacity_Vector_char , toArray_Vector_char , wrap_Vector_char , show_Vector_char , copy_Vector_char , replaceAt_Vector_char , deleteAt_Vector_char , insertAt_Vector_char , reverse_Vector_char , append_Vector_char , push_Vector_char , take_Vector_char , last_Vector_char , init_Vector_char , hasLen_Vector_char , len_Vector_char , tail_Vector_char , drop_Vector_char , head_Vector_char , nth_Vector_char };
  return (&table );
}
Vector_char Buffer_char (StringBuffer_char buffer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6777 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_char (__h_stack_push (instance ));
  }
}
Vector_char Slice_char (Vector_char vector , int cursor , int size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6785 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_char (__h_stack_push (instance ));
  }
}
Vector_char None_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6792 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h___t });
    return new_Box_Vector_char (__h_stack_push (instance ));
  }
}
#endif /* __Vector_char__H_IMPL__ */ 
#ifndef __Maybe_Vector_char__H_IMPL__
#define __Maybe_Vector_char__H_IMPL__
void free_Maybe_Vector_char (Maybe_Vector_char * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_Vector_char__H_Table * const get_Maybe_Vector_char__H_Table () {
  static const Maybe_Vector_char__H_Table table  = { free_Maybe_Vector_char };
  return (&table );
}
Maybe_Vector_char Just_Vector_char (Vector_char value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6810 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char Nothing_Vector_char () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let6815 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char__H_IMPL__ */ 
int main () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_init_haskell ();
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem  __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free_main))) = __h_stack ();
__h_stack_push_separator ();
#else
printf ("Cicili Haskell is not included!\n");
exit (EXIT_FAILURE);
#endif
  ({ /* cicili#Let6831 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6833 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6836 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6839 */
      __auto_type v03  = ({ /* cicili#Let6842 */
        StringBuffer_int tmp_buf6841  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6841 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6851 */
      __auto_type v04  = ({ /* cicili#Let6854 */
        StringBuffer_int tmp_buf6853  = newCapacity_StringBuffer_int (2, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6853 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6863 */
      __auto_type v05  = ({ /* cicili#Let6866 */
        StringBuffer_char tmp_buf6865  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf6865 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6875 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6879 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6883 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6886 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6889 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6892 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6895 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6898 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v16  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6901 */
      __auto_type v16  = last_Vector_int (v03 );
      // ----------
      ((void)((v16 . __h_table )-> freeData ));
      v16 ;
    });
    __auto_type v17  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6904 */
      __auto_type v17  = last_Vector_char (v05 );
      // ----------
      ((void)((v17 . __h_table )-> freeData ));
      v17 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6907 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6910 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6913 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    // ----------
    printf ("v03: ");
    show_Vector_int (stdout , v03 );
    putchar ('\n');
    printf ("v05: ");
    show_Vector_char (stdout , v05 );
    putchar ('\n');
    printf ("length 5 of v03: %d\n", len_Vector_int (v03 ));
    printf ("has length 6 of v05: %d\n", hasLen_Vector_char (v05 , 6));
    printf ("has length 12 of v05: %d\n", hasLen_Vector_char (v05 , 12));
    { /* cicili#Block6920 */
      { /* cicili#Let6924 */
        __auto_type match6923  = nth_Vector_int (3, v03 );
        typeof((((match6923 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let6927 */
          bool __h_case_result  = (true  &&  (((match6923 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6928 */
                (i  =  (((match6923 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6934 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let6939 */
              // ----------
              ;
              { /* cicili#Block6941 */
                { /* cicili#Block6946 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let6950 */
        __auto_type match6949  = nth_Vector_char (5, v05 );
        typeof((((match6949 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let6953 */
          bool __h_case_result  = (true  &&  (((match6949 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6954 */
                (c  =  (((match6949 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6960 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let6965 */
              // ----------
              ;
              { /* cicili#Block6967 */
                { /* cicili#Block6972 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let6976 */
        __auto_type match6975  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let6979 */
          bool __h_case_result  = (true  &&  ((match6975 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6984 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let6989 */
              // ----------
              ;
              { /* cicili#Block6991 */
                { /* cicili#Block6996 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7000 */
        __auto_type match6999  = head_Vector_int (v08 );
        typeof((((match6999 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7003 */
          bool __h_case_result  = (true  &&  (((match6999 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7004 */
                (i  =  (((match6999 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7010 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7015 */
              // ----------
              ;
              { /* cicili#Block7017 */
                { /* cicili#Block7022 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7026 */
        __auto_type match7025  = head_Vector_char (v09 );
        typeof((((match7025 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7029 */
          bool __h_case_result  = (true  &&  (((match7025 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7030 */
                (c  =  (((match7025 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7036 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7041 */
              // ----------
              ;
              { /* cicili#Block7043 */
                { /* cicili#Block7048 */
                  printf ("status: %d\n", -104);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      printf ("v08: ");
      show_Vector_int (stdout , v08 );
      putchar ('\n');
      printf ("v09: ");
      show_Vector_char (stdout , v09 );
      putchar ('\n');
      { /* cicili#Let7052 */
        __auto_type match7051  = nth_Vector_int (1, v08 );
        typeof((((match7051 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7055 */
          bool __h_case_result  = (true  &&  (((match7051 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7056 */
                (i  =  (((match7051 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7062 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7067 */
              // ----------
              ;
              { /* cicili#Block7069 */
                { /* cicili#Block7074 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7078 */
        __auto_type match7077  = nth_Vector_char (2, v09 );
        typeof((((match7077 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7081 */
          bool __h_case_result  = (true  &&  (((match7077 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7082 */
                (c  =  (((match7077 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7088 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7093 */
              // ----------
              ;
              { /* cicili#Block7095 */
                { /* cicili#Block7100 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7104 */
        __auto_type match7103  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let7107 */
          bool __h_case_result  = (true  &&  ((match7103 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7112 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let7117 */
              // ----------
              ;
              { /* cicili#Block7119 */
                { /* cicili#Block7124 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7127 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let7131 */
          __auto_type match7130  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7130 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7134 */
            bool __h_case_result  = (true  &&  (((match7130 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7135 */
                  (unboxed  =  (((match7130 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7141 */
                { /* cicili#Let7145 */
                  // ----------
                  ;
                  ({ /* cicili#Let7147 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7152 */
                        { /* cicili#Block7154 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7159 */
                        // ----------
                        ;
                        { /* cicili#Block7161 */
                          { /* cicili#Block7166 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7171 */
                // ----------
                ;
                ({ /* cicili#Let7173 */
                  bool __h_case_result  = (true  &&  ((match7130 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7178 */
                      { /* cicili#Block7183 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7186 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let7190 */
          __auto_type match7189  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7189 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7193 */
            bool __h_case_result  = (true  &&  (((match7189 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7194 */
                  (unboxed  =  (((match7189 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7200 */
                { /* cicili#Let7204 */
                  // ----------
                  ;
                  ({ /* cicili#Let7206 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7211 */
                        { /* cicili#Block7213 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7218 */
                        // ----------
                        ;
                        { /* cicili#Block7220 */
                          { /* cicili#Block7225 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7230 */
                // ----------
                ;
                ({ /* cicili#Let7232 */
                  bool __h_case_result  = (true  &&  ((match7189 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7237 */
                      { /* cicili#Block7242 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7245 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let7249 */
          __auto_type match7248  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7248 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7252 */
            bool __h_case_result  = (true  &&  (((match7248 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7253 */
                  (unboxed  =  (((match7248 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7259 */
                { /* cicili#Let7263 */
                  // ----------
                  ;
                  ({ /* cicili#Let7265 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7270 */
                        { /* cicili#Block7272 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7277 */
                        // ----------
                        ;
                        { /* cicili#Block7279 */
                          { /* cicili#Block7284 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7289 */
                // ----------
                ;
                ({ /* cicili#Let7291 */
                  bool __h_case_result  = (true  &&  ((match7248 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7296 */
                      { /* cicili#Block7301 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7304 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let7308 */
          __auto_type match7307  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7307 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7311 */
            bool __h_case_result  = (true  &&  (((match7307 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7312 */
                  (unboxed  =  (((match7307 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7318 */
                { /* cicili#Let7322 */
                  // ----------
                  ;
                  ({ /* cicili#Let7324 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7329 */
                        { /* cicili#Block7331 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7336 */
                        // ----------
                        ;
                        { /* cicili#Block7338 */
                          { /* cicili#Block7343 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7348 */
                // ----------
                ;
                ({ /* cicili#Let7350 */
                  bool __h_case_result  = (true  &&  ((match7307 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7355 */
                      { /* cicili#Block7360 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7363 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let7367 */
          __auto_type match7366  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7366 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7370 */
            bool __h_case_result  = (true  &&  (((match7366 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7371 */
                  (unboxed  =  (((match7366 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7377 */
                { /* cicili#Let7381 */
                  // ----------
                  ;
                  ({ /* cicili#Let7383 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7388 */
                        { /* cicili#Block7390 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7395 */
                        // ----------
                        ;
                        { /* cicili#Block7397 */
                          { /* cicili#Block7402 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7407 */
                // ----------
                ;
                ({ /* cicili#Let7409 */
                  bool __h_case_result  = (true  &&  ((match7366 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7414 */
                      { /* cicili#Block7419 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7422 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let7426 */
          __auto_type match7425  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7425 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7429 */
            bool __h_case_result  = (true  &&  (((match7425 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7430 */
                  (unboxed  =  (((match7425 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7436 */
                { /* cicili#Let7440 */
                  // ----------
                  ;
                  ({ /* cicili#Let7442 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7447 */
                        { /* cicili#Block7449 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7454 */
                        // ----------
                        ;
                        { /* cicili#Block7456 */
                          { /* cicili#Block7461 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7466 */
                // ----------
                ;
                ({ /* cicili#Let7468 */
                  bool __h_case_result  = (true  &&  ((match7425 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7473 */
                      { /* cicili#Block7478 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7481 */
        __auto_type __h_matchbox  = v16 ;
        // ----------
        { /* cicili#Let7485 */
          __auto_type match7484  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7484 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7488 */
            bool __h_case_result  = (true  &&  (((match7484 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7489 */
                  (unboxed  =  (((match7484 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7495 */
                { /* cicili#Let7499 */
                  // ----------
                  ;
                  ({ /* cicili#Let7501 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7506 */
                        { /* cicili#Block7508 */
                          printf ("last of v03: ");
                          show_Vector_int (stdout , v16 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7513 */
                        // ----------
                        ;
                        { /* cicili#Block7515 */
                          { /* cicili#Block7520 */
                            printf ("status: %d\n", -121);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7525 */
                // ----------
                ;
                ({ /* cicili#Let7527 */
                  bool __h_case_result  = (true  &&  ((match7484 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7532 */
                      { /* cicili#Block7537 */
                        printf ("status: %d\n", -120);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7540 */
        __auto_type __h_matchbox  = v17 ;
        // ----------
        { /* cicili#Let7544 */
          __auto_type match7543  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7543 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7547 */
            bool __h_case_result  = (true  &&  (((match7543 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7548 */
                  (unboxed  =  (((match7543 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7554 */
                { /* cicili#Let7558 */
                  // ----------
                  ;
                  ({ /* cicili#Let7560 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7565 */
                        { /* cicili#Block7567 */
                          printf ("last of v05: ");
                          show_Vector_char (stdout , v17 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7572 */
                        // ----------
                        ;
                        { /* cicili#Block7574 */
                          { /* cicili#Block7579 */
                            printf ("status: %d\n", -123);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7584 */
                // ----------
                ;
                ({ /* cicili#Let7586 */
                  bool __h_case_result  = (true  &&  ((match7543 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7591 */
                      { /* cicili#Block7596 */
                        printf ("status: %d\n", -122);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7599 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let7603 */
          __auto_type match7602  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7602 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7606 */
            bool __h_case_result  = (true  &&  (((match7602 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7607 */
                  (unboxed  =  (((match7602 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7613 */
                { /* cicili#Let7617 */
                  // ----------
                  ;
                  ({ /* cicili#Let7619 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7624 */
                        { /* cicili#Block7626 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7631 */
                        // ----------
                        ;
                        { /* cicili#Block7633 */
                          { /* cicili#Block7638 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7643 */
                // ----------
                ;
                ({ /* cicili#Let7645 */
                  bool __h_case_result  = (true  &&  ((match7602 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7650 */
                      { /* cicili#Block7655 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7658 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let7662 */
          __auto_type match7661  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7661 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7665 */
            bool __h_case_result  = (true  &&  (((match7661 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7666 */
                  (unboxed  =  (((match7661 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7672 */
                { /* cicili#Let7676 */
                  // ----------
                  ;
                  ({ /* cicili#Let7678 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7683 */
                        { /* cicili#Block7685 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7690 */
                        // ----------
                        ;
                        { /* cicili#Block7692 */
                          { /* cicili#Block7697 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7702 */
                // ----------
                ;
                ({ /* cicili#Let7704 */
                  bool __h_case_result  = (true  &&  ((match7661 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7709 */
                      { /* cicili#Block7714 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7717 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let7721 */
          __auto_type match7720  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7720 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7724 */
            bool __h_case_result  = (true  &&  (((match7720 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7725 */
                  (unboxed  =  (((match7720 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7731 */
                { /* cicili#Let7735 */
                  // ----------
                  ;
                  ({ /* cicili#Let7737 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7742 */
                        { /* cicili#Block7744 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7749 */
                        // ----------
                        ;
                        { /* cicili#Block7751 */
                          { /* cicili#Block7756 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7761 */
                // ----------
                ;
                ({ /* cicili#Let7763 */
                  bool __h_case_result  = (true  &&  ((match7720 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7768 */
                      { /* cicili#Block7773 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7776 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7778 */
          __auto_type v033  = ({ /* cicili#Let7781 */
            StringBuffer_int tmp_buf7780  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7780 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7790 */
          __auto_type v055  = ({ /* cicili#Let7793 */
            StringBuffer_char tmp_buf7792  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7792 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7802 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7805 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7808 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7811 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7814 */
          __auto_type v0333  = ({ /* cicili#Let7817 */
            StringBuffer_int tmp_buf7816  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7816 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7826 */
          __auto_type v0555  = ({ /* cicili#Let7829 */
            StringBuffer_char tmp_buf7828  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7828 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7838 */
          __auto_type v0444  = ({ /* cicili#Let7841 */
            StringBuffer_int tmp_buf7840  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7840 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7850 */
          __auto_type v0666  = ({ /* cicili#Let7853 */
            StringBuffer_char tmp_buf7852  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7852 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7862 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7865 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7868 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7871 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7874 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7877 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7880 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7883 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7886 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7889 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7892 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7895 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7898 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let7902 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let7906 */
            __auto_type match7905  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7905 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let7909 */
              bool __h_case_result  = (true  &&  (((match7905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7910 */
                    (unboxed  =  (((match7905 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7916 */
                  { /* cicili#Let7920 */
                    // ----------
                    ;
                    ({ /* cicili#Let7922 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block7927 */
                          { /* cicili#Block7929 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let7934 */
                          // ----------
                          ;
                          { /* cicili#Block7936 */
                            { /* cicili#Block7941 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let7946 */
                  // ----------
                  ;
                  ({ /* cicili#Let7948 */
                    bool __h_case_result  = (true  &&  ((match7905 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7953 */
                        { /* cicili#Block7958 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let7961 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let7965 */
            __auto_type match7964  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7964 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let7968 */
              bool __h_case_result  = (true  &&  (((match7964 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7969 */
                    (unboxed  =  (((match7964 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7975 */
                  { /* cicili#Let7979 */
                    // ----------
                    ;
                    ({ /* cicili#Let7981 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block7986 */
                          { /* cicili#Block7988 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let7993 */
                          // ----------
                          ;
                          { /* cicili#Block7995 */
                            { /* cicili#Block8000 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8005 */
                  // ----------
                  ;
                  ({ /* cicili#Let8007 */
                    bool __h_case_result  = (true  &&  ((match7964 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8012 */
                        { /* cicili#Block8017 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8020 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let8024 */
            __auto_type match8023  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8023 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8027 */
              bool __h_case_result  = (true  &&  (((match8023 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8028 */
                    (unboxed  =  (((match8023 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8034 */
                  { /* cicili#Let8038 */
                    // ----------
                    ;
                    ({ /* cicili#Let8040 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8045 */
                          { /* cicili#Block8047 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8052 */
                          // ----------
                          ;
                          { /* cicili#Block8054 */
                            { /* cicili#Block8059 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8064 */
                  // ----------
                  ;
                  ({ /* cicili#Let8066 */
                    bool __h_case_result  = (true  &&  ((match8023 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8071 */
                        { /* cicili#Block8076 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8079 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let8083 */
            __auto_type match8082  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8082 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8086 */
              bool __h_case_result  = (true  &&  (((match8082 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8087 */
                    (unboxed  =  (((match8082 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8093 */
                  { /* cicili#Let8097 */
                    // ----------
                    ;
                    ({ /* cicili#Let8099 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8104 */
                          { /* cicili#Block8106 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8111 */
                          // ----------
                          ;
                          { /* cicili#Block8113 */
                            { /* cicili#Block8118 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8123 */
                  // ----------
                  ;
                  ({ /* cicili#Let8125 */
                    bool __h_case_result  = (true  &&  ((match8082 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8130 */
                        { /* cicili#Block8135 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8138 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let8142 */
            __auto_type match8141  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8141 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8145 */
              bool __h_case_result  = (true  &&  (((match8141 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8146 */
                    (unboxed  =  (((match8141 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8152 */
                  { /* cicili#Let8156 */
                    // ----------
                    ;
                    ({ /* cicili#Let8158 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8163 */
                          { /* cicili#Block8165 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8170 */
                          // ----------
                          ;
                          { /* cicili#Block8172 */
                            { /* cicili#Block8177 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8182 */
                  // ----------
                  ;
                  ({ /* cicili#Let8184 */
                    bool __h_case_result  = (true  &&  ((match8141 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8189 */
                        { /* cicili#Block8194 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8197 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let8201 */
            __auto_type match8200  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8200 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8204 */
              bool __h_case_result  = (true  &&  (((match8200 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8205 */
                    (unboxed  =  (((match8200 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8211 */
                  { /* cicili#Let8215 */
                    // ----------
                    ;
                    ({ /* cicili#Let8217 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8222 */
                          { /* cicili#Block8224 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8229 */
                          // ----------
                          ;
                          { /* cicili#Block8231 */
                            { /* cicili#Block8236 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8241 */
                  // ----------
                  ;
                  ({ /* cicili#Let8243 */
                    bool __h_case_result  = (true  &&  ((match8200 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8248 */
                        { /* cicili#Block8253 */
                          printf ("status: %d\n", -137);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        printf ("v27: ");
        show_Vector_int (stdout , v27 );
        putchar ('\n');
        printf ("v28: ");
        show_Vector_char (stdout , v28 );
        putchar ('\n');
        ({ /* cicili#Let8256 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let8260 */
            __auto_type match8259  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8259 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8263 */
              bool __h_case_result  = (true  &&  (((match8259 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8264 */
                    (unboxed  =  (((match8259 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8270 */
                  { /* cicili#Let8274 */
                    // ----------
                    ;
                    ({ /* cicili#Let8276 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8281 */
                          { /* cicili#Block8283 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8288 */
                          // ----------
                          ;
                          { /* cicili#Block8290 */
                            { /* cicili#Block8295 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8300 */
                  // ----------
                  ;
                  ({ /* cicili#Let8302 */
                    bool __h_case_result  = (true  &&  ((match8259 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8307 */
                        { /* cicili#Block8312 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8315 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let8319 */
            __auto_type match8318  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8318 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8322 */
              bool __h_case_result  = (true  &&  (((match8318 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8323 */
                    (unboxed  =  (((match8318 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8329 */
                  { /* cicili#Let8333 */
                    // ----------
                    ;
                    ({ /* cicili#Let8335 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8340 */
                          { /* cicili#Block8342 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8347 */
                          // ----------
                          ;
                          { /* cicili#Block8349 */
                            { /* cicili#Block8354 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8359 */
                  // ----------
                  ;
                  ({ /* cicili#Let8361 */
                    bool __h_case_result  = (true  &&  ((match8318 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8366 */
                        { /* cicili#Block8371 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8374 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let8378 */
            __auto_type match8377  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8377 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8381 */
              bool __h_case_result  = (true  &&  (((match8377 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8382 */
                    (unboxed  =  (((match8377 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8388 */
                  { /* cicili#Let8392 */
                    // ----------
                    ;
                    ({ /* cicili#Let8394 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8399 */
                          { /* cicili#Block8401 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8406 */
                          // ----------
                          ;
                          { /* cicili#Block8408 */
                            { /* cicili#Block8413 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8418 */
                  // ----------
                  ;
                  ({ /* cicili#Let8420 */
                    bool __h_case_result  = (true  &&  ((match8377 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8425 */
                        { /* cicili#Block8430 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8433 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let8437 */
            __auto_type match8436  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8436 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8440 */
              bool __h_case_result  = (true  &&  (((match8436 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8441 */
                    (unboxed  =  (((match8436 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8447 */
                  { /* cicili#Let8451 */
                    // ----------
                    ;
                    ({ /* cicili#Let8453 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8458 */
                          { /* cicili#Block8460 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8465 */
                          // ----------
                          ;
                          { /* cicili#Block8467 */
                            { /* cicili#Block8472 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8477 */
                  // ----------
                  ;
                  ({ /* cicili#Let8479 */
                    bool __h_case_result  = (true  &&  ((match8436 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8484 */
                        { /* cicili#Block8489 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8492 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let8496 */
            __auto_type match8495  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8495 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8499 */
              bool __h_case_result  = (true  &&  (((match8495 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8500 */
                    (unboxed  =  (((match8495 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8506 */
                  { /* cicili#Let8510 */
                    // ----------
                    ;
                    ({ /* cicili#Let8512 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8517 */
                          { /* cicili#Block8519 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8524 */
                          // ----------
                          ;
                          { /* cicili#Block8526 */
                            { /* cicili#Block8531 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8536 */
                  // ----------
                  ;
                  ({ /* cicili#Let8538 */
                    bool __h_case_result  = (true  &&  ((match8495 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8543 */
                        { /* cicili#Block8548 */
                          printf ("status: %d\n", -147);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
      });
      ({ /* cicili#Let8551 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8553 */
          __auto_type v033  = ({ /* cicili#Let8556 */
            StringBuffer_int tmp_buf8555  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8555 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8565 */
          __auto_type v055  = ({ /* cicili#Let8568 */
            StringBuffer_char tmp_buf8567  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8567 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8577 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8580 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8583 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8586 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8589 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8592 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8595 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8598 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8601 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8604 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8607 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8610 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8613 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8616 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8619 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8622 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8625 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8628 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8631 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8634 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8637 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8640 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        // ----------
        ({ /* cicili#Let8644 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let8648 */
            __auto_type match8647  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8647 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8651 */
              bool __h_case_result  = (true  &&  (((match8647 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8652 */
                    (unboxed  =  (((match8647 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8658 */
                  { /* cicili#Let8662 */
                    // ----------
                    ;
                    ({ /* cicili#Let8664 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8669 */
                          { /* cicili#Block8671 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8676 */
                          // ----------
                          ;
                          { /* cicili#Block8678 */
                            { /* cicili#Block8683 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8688 */
                  // ----------
                  ;
                  ({ /* cicili#Let8690 */
                    bool __h_case_result  = (true  &&  ((match8647 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8695 */
                        { /* cicili#Block8700 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8703 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let8707 */
            __auto_type match8706  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8706 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8710 */
              bool __h_case_result  = (true  &&  (((match8706 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8711 */
                    (unboxed  =  (((match8706 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8717 */
                  { /* cicili#Let8721 */
                    // ----------
                    ;
                    ({ /* cicili#Let8723 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8728 */
                          { /* cicili#Block8730 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8735 */
                          // ----------
                          ;
                          { /* cicili#Block8737 */
                            { /* cicili#Block8742 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8747 */
                  // ----------
                  ;
                  ({ /* cicili#Let8749 */
                    bool __h_case_result  = (true  &&  ((match8706 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8754 */
                        { /* cicili#Block8759 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8762 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let8766 */
            __auto_type match8765  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8765 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8769 */
              bool __h_case_result  = (true  &&  (((match8765 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8770 */
                    (unboxed  =  (((match8765 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8776 */
                  { /* cicili#Let8780 */
                    // ----------
                    ;
                    ({ /* cicili#Let8782 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8787 */
                          { /* cicili#Block8789 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8794 */
                          // ----------
                          ;
                          { /* cicili#Block8796 */
                            { /* cicili#Block8801 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8806 */
                  // ----------
                  ;
                  ({ /* cicili#Let8808 */
                    bool __h_case_result  = (true  &&  ((match8765 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8813 */
                        { /* cicili#Block8818 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8821 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let8825 */
            __auto_type match8824  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8824 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8828 */
              bool __h_case_result  = (true  &&  (((match8824 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8829 */
                    (unboxed  =  (((match8824 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8835 */
                  { /* cicili#Let8839 */
                    // ----------
                    ;
                    ({ /* cicili#Let8841 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8846 */
                          { /* cicili#Block8848 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8853 */
                          // ----------
                          ;
                          { /* cicili#Block8855 */
                            { /* cicili#Block8860 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8865 */
                  // ----------
                  ;
                  ({ /* cicili#Let8867 */
                    bool __h_case_result  = (true  &&  ((match8824 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8872 */
                        { /* cicili#Block8877 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8880 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let8884 */
            __auto_type match8883  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8883 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8887 */
              bool __h_case_result  = (true  &&  (((match8883 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8888 */
                    (unboxed  =  (((match8883 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8894 */
                  { /* cicili#Let8898 */
                    // ----------
                    ;
                    ({ /* cicili#Let8900 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8905 */
                          { /* cicili#Block8907 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8912 */
                          // ----------
                          ;
                          { /* cicili#Block8914 */
                            { /* cicili#Block8919 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8924 */
                  // ----------
                  ;
                  ({ /* cicili#Let8926 */
                    bool __h_case_result  = (true  &&  ((match8883 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8931 */
                        { /* cicili#Block8936 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8939 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let8943 */
            __auto_type match8942  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8942 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8946 */
              bool __h_case_result  = (true  &&  (((match8942 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8947 */
                    (unboxed  =  (((match8942 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8953 */
                  { /* cicili#Let8957 */
                    // ----------
                    ;
                    ({ /* cicili#Let8959 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8964 */
                          { /* cicili#Block8966 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8971 */
                          // ----------
                          ;
                          { /* cicili#Block8973 */
                            { /* cicili#Block8978 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8983 */
                  // ----------
                  ;
                  ({ /* cicili#Let8985 */
                    bool __h_case_result  = (true  &&  ((match8942 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8990 */
                        { /* cicili#Block8995 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8998 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let9002 */
            __auto_type match9001  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9001 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9005 */
              bool __h_case_result  = (true  &&  (((match9001 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9006 */
                    (unboxed  =  (((match9001 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9012 */
                  { /* cicili#Let9016 */
                    // ----------
                    ;
                    ({ /* cicili#Let9018 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9023 */
                          { /* cicili#Block9025 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9030 */
                          // ----------
                          ;
                          { /* cicili#Block9032 */
                            { /* cicili#Block9037 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9042 */
                  // ----------
                  ;
                  ({ /* cicili#Let9044 */
                    bool __h_case_result  = (true  &&  ((match9001 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9049 */
                        { /* cicili#Block9054 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9057 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let9061 */
            __auto_type match9060  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9060 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9064 */
              bool __h_case_result  = (true  &&  (((match9060 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9065 */
                    (unboxed  =  (((match9060 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9071 */
                  { /* cicili#Let9075 */
                    // ----------
                    ;
                    ({ /* cicili#Let9077 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9082 */
                          { /* cicili#Block9084 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9089 */
                          // ----------
                          ;
                          { /* cicili#Block9091 */
                            { /* cicili#Block9096 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9101 */
                  // ----------
                  ;
                  ({ /* cicili#Let9103 */
                    bool __h_case_result  = (true  &&  ((match9060 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9108 */
                        { /* cicili#Block9113 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9116 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let9120 */
            __auto_type match9119  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9119 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9123 */
              bool __h_case_result  = (true  &&  (((match9119 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9124 */
                    (unboxed  =  (((match9119 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9130 */
                  { /* cicili#Let9134 */
                    // ----------
                    ;
                    ({ /* cicili#Let9136 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9141 */
                          { /* cicili#Block9143 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9148 */
                          // ----------
                          ;
                          { /* cicili#Block9150 */
                            { /* cicili#Block9155 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9160 */
                  // ----------
                  ;
                  ({ /* cicili#Let9162 */
                    bool __h_case_result  = (true  &&  ((match9119 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9167 */
                        { /* cicili#Block9172 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9175 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let9179 */
            __auto_type match9178  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9178 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9182 */
              bool __h_case_result  = (true  &&  (((match9178 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9183 */
                    (unboxed  =  (((match9178 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9189 */
                  { /* cicili#Let9193 */
                    // ----------
                    ;
                    ({ /* cicili#Let9195 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9200 */
                          { /* cicili#Block9202 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9207 */
                          // ----------
                          ;
                          { /* cicili#Block9209 */
                            { /* cicili#Block9214 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9219 */
                  // ----------
                  ;
                  ({ /* cicili#Let9221 */
                    bool __h_case_result  = (true  &&  ((match9178 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9226 */
                        { /* cicili#Block9231 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9234 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let9238 */
            __auto_type match9237  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9237 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9241 */
              bool __h_case_result  = (true  &&  (((match9237 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9242 */
                    (unboxed  =  (((match9237 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9248 */
                  { /* cicili#Let9252 */
                    // ----------
                    ;
                    ({ /* cicili#Let9254 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9259 */
                          { /* cicili#Block9261 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9266 */
                          // ----------
                          ;
                          { /* cicili#Block9268 */
                            { /* cicili#Block9273 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9278 */
                  // ----------
                  ;
                  ({ /* cicili#Let9280 */
                    bool __h_case_result  = (true  &&  ((match9237 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9285 */
                        { /* cicili#Block9290 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9293 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let9297 */
            __auto_type match9296  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9296 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9300 */
              bool __h_case_result  = (true  &&  (((match9296 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9301 */
                    (unboxed  =  (((match9296 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9307 */
                  { /* cicili#Let9311 */
                    // ----------
                    ;
                    ({ /* cicili#Let9313 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9318 */
                          { /* cicili#Block9320 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9325 */
                          // ----------
                          ;
                          { /* cicili#Block9327 */
                            { /* cicili#Block9332 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9337 */
                  // ----------
                  ;
                  ({ /* cicili#Let9339 */
                    bool __h_case_result  = (true  &&  ((match9296 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9344 */
                        { /* cicili#Block9349 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
      });
    }
  });
}
