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
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , int pos , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let483 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let485 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn486 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn488 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn490 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn495 */
            ({ /* cicili#Let497 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let506 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let508 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn509 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn511 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn513 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn518 */
                  ({ /* cicili#Let520 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let529 */
                  // ----------
                  ;
                  ({ /* cicili#Progn531 */
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
  return ({ /* cicili#Let540 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let542 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn543 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn545 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn547 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn549 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn554 */
            ({ /* cicili#Let556 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let563 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let565 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn566 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn568 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn570 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn572 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn577 */
                  ({ /* cicili#Let579 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                    // ----------
                    print_StringBuffer_int (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let586 */
                  // ----------
                  ;
                  ({ /* cicili#Progn588 */
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
  return ({ /* cicili#Let602 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let604 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn605 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn607 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn609 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn611 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn616 */
            ({ /* cicili#Let618 */
              int blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block622 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let624 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let629 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let631 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn632 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn634 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn636 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn638 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn643 */
                  ({ /* cicili#Let645 */
                    int blen  = (len  *  sizeof(int) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block649 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let651 */
                          int * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(int) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((int)'\0');
                    MakeNullTerminatedBuffer_int (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let656 */
                  // ----------
                  ;
                  ({ /* cicili#Progn658 */
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
  { /* cicili#Let666 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let668 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn669 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block675 */
          { /* cicili#Block677 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
      else
        { /* cicili#Let683 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let685 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn686 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block692 */
                { /* cicili#Block694 */
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
  { /* cicili#Let704 */
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
  { /* cicili#Let709 */
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
  { /* cicili#Let714 */
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
  { /* cicili#Let736 */
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
  { /* cicili#Let741 */
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
  return ({ /* cicili#Let748 */
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
  return ({ /* cicili#Let757 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let759 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn760 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn762 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn764 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn769 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn772 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let778 */
            // ----------
            ;
            ({ /* cicili#Progn780 */
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
  return ({ /* cicili#Let788 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let790 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn791 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn793 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn795 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn800 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let804 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block810 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let815 */
            // ----------
            ;
            ({ /* cicili#Progn817 */
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
  return ({ /* cicili#Let825 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let827 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn828 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn830 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn832 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn837 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let844 */
            // ----------
            ;
            ({ /* cicili#Progn846 */
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
  { /* cicili#Let855 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let857 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn858 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn860 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn862 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block868 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block871 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block879 */
                if ((*count ) ==  1 )
                  { /* cicili#Block882 */
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
        { /* cicili#Let892 */
          // ----------
          ;
          ({ /* cicili#Let894 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block899 */
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
  { /* cicili#Let910 */
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
  { /* cicili#Let915 */
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
  return ({ /* cicili#Let929 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let933 */
        __auto_type match932  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match932 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let936 */
          bool __h_case_result  = (true  &&  (((match932 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn937 */
                (unboxed  =  (((match932 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn942 */
              ({ /* cicili#Let946 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let948 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn949 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn954 */
                      ({ /* cicili#Let958 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let960 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn961 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn966 */
                              buffer ;
                            }) : ({ /* cicili#Let970 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let972 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn973 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn978 */
                                    buffer ;
                                  }) : ({ /* cicili#Let982 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn984 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let988 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let990 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn991 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn993 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn998 */
                            ({ /* cicili#Let1001 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1005 */
                                __auto_type match1004  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1004 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1008 */
                                  bool __h_case_result  = (true  &&  (((match1004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1009 */
                                        (unboxed  =  (((match1004 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1014 */
                                      ({ /* cicili#Let1018 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1020 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1021 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1026 */
                                              ({ /* cicili#Let1030 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1032 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1033 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1038 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1042 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1044 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1045 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1050 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let1054 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1056 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1060 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1062 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1063 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1065 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1070 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1075 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1077 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1081 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1083 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1087 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1089 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1093 */
              // ----------
              ;
              ({ /* cicili#Progn1095 */
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
  return ({ /* cicili#Let1100 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1102 */
        __auto_type new_vec  = pureCapacity_Vector_int (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_int (item , new_vec );
    });
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
    return ({ /* cicili#Let1112 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1116 */
          __auto_type match1115  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1115 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1119 */
            bool __h_case_result  = (true  &&  (((match1115 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1120 */
                  (unboxed  =  (((match1115 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1125 */
                ({ /* cicili#Let1129 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1131 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1132 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1137 */
                        ({ /* cicili#Let1141 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1143 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1144 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1149 */
                                ({ /* cicili#Let1151 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1162 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let1164 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1165 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1170 */
                                      ({ /* cicili#Let1172 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1183 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1185 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1189 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1191 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1192 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1194 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1196 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1201 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1205 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1207 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1211 */
                // ----------
                ;
                ({ /* cicili#Progn1213 */
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
    return ({ /* cicili#Let1217 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1221 */
          __auto_type match1220  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1220 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1224 */
            bool __h_case_result  = (true  &&  (((match1220 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1225 */
                  (unboxed  =  (((match1220 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1230 */
                ({ /* cicili#Let1234 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1236 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1237 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1242 */
                        ({ /* cicili#Let1246 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1248 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1249 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1251 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1256 */
                                ({ /* cicili#Let1258 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1269 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1271 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1272 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1274 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1279 */
                                      ({ /* cicili#Let1281 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1292 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1294 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1298 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1300 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1301 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1303 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1305 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1310 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1314 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1316 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1320 */
                // ----------
                ;
                ({ /* cicili#Progn1322 */
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
  return ({ /* cicili#Let1327 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1331 */
        __auto_type match1330  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1330 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1334 */
          bool __h_case_result  = (true  &&  (((match1330 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1335 */
                (unboxed  =  (((match1330 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1340 */
              ({ /* cicili#Let1344 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1346 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1347 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1352 */
                      ({ /* cicili#Let1356 */
                        // ----------
                        ;
                        ({ /* cicili#Let1358 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1362 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1368 */
                              // ----------
                              ;
                              ({ /* cicili#Let1370 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1374 */
                                    Buffer_int (copy_StringBuffer_int (sb ));
                                  }) : ({ /* cicili#Let1380 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1382 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1387 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1389 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1390 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1392 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1394 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1399 */
                            ({ /* cicili#Let1402 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1406 */
                                __auto_type match1405  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1405 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1409 */
                                  bool __h_case_result  = (true  &&  (((match1405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1410 */
                                        (unboxed  =  (((match1405 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1415 */
                                      ({ /* cicili#Let1419 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1421 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1422 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1427 */
                                              ({ /* cicili#Let1431 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1433 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1437 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1443 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1445 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1449 */
                                                            Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let1455 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1457 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1462 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1464 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1465 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1470 */
                                                    copy_Vector_int (veci );
                                                  }) : ({ /* cicili#Let1475 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1477 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1482 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1484 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1489 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1491 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1496 */
              // ----------
              ;
              ({ /* cicili#Progn1498 */
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
  return ({ /* cicili#Let1504 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1508 */
        __auto_type match1507  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1507 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1511 */
          bool __h_case_result  = (true  &&  (((match1507 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1512 */
                (unboxed  =  (((match1507 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1517 */
              ({ /* cicili#Let1521 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1523 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1524 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1529 */
                      ({ /* cicili#Progn1531 */
                        { /* cicili#Let1535 */
                          __auto_type match1534  = take_Box_Vector_int ((&vector ));
                          typeof((((match1534 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1538 */
                            bool __h_case_result  = (true  &&  (((match1534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1539 */
                                  (ptr  =  (((match1534 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1545 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1549 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1551 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1552 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1554 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1559 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn1562 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_int (sb );
                                  }) : Buffer_int (sb ));
                              }) : ({ /* cicili#Let1568 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1570 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1571 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1573 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1578 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn1581 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (sb );
                                        }) : Buffer_int (sb ));
                                    }) : ({ /* cicili#Let1587 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1589 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1594 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1596 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1597 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1599 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1601 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1606 */
                            ({ /* cicili#Let1609 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1613 */
                                __auto_type match1612  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1612 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1616 */
                                  bool __h_case_result  = (true  &&  (((match1612 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1617 */
                                        (unboxed  =  (((match1612 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1622 */
                                      ({ /* cicili#Let1626 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1628 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1629 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1634 */
                                              ({ /* cicili#Let1638 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1640 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1641 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1643 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1648 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1651 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1661 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1663 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1664 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1666 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1671 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let1674 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let1684 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1686 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1690 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1692 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1693 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1695 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1700 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let1705 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1707 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1712 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1714 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1719 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1721 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1726 */
              // ----------
              ;
              ({ /* cicili#Progn1728 */
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
  return ({ /* cicili#Let1734 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1738 */
        __auto_type match1737  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1737 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1741 */
          bool __h_case_result  = (true  &&  (((match1737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1742 */
                (unboxed  =  (((match1737 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1747 */
              ({ /* cicili#Let1751 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1753 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1754 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1759 */
                      ({ /* cicili#Progn1761 */
                        { /* cicili#Let1765 */
                          __auto_type match1764  = take_Box_Vector_int ((&vector ));
                          typeof((((match1764 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1768 */
                            bool __h_case_result  = (true  &&  (((match1764 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1769 */
                                  (ptr  =  (((match1764 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1775 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1779 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let1781 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn1782 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn1784 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn1786 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn1788 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1793 */
                                ({ /* cicili#Progn1795 */
                                  for (int i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let1803 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let1805 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn1806 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn1808 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn1810 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn1812 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1817 */
                                      ({ /* cicili#Progn1819 */
                                        for (int i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_int (MakeNullTerminatedBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let1827 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1829 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1834 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1836 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1837 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1839 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1841 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1846 */
                            ({ /* cicili#Let1849 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1853 */
                                __auto_type match1852  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1852 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1856 */
                                  bool __h_case_result  = (true  &&  (((match1852 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1857 */
                                        (unboxed  =  (((match1852 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1862 */
                                      ({ /* cicili#Let1866 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1868 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1869 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1874 */
                                              ({ /* cicili#Let1878 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1880 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1881 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1883 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1888 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1891 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1900 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1902 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1903 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1905 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1910 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let1913 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let1922 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1924 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1928 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1930 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1931 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1933 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1938 */
                                                    deleteAt_Vector_int (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let1943 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1945 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1950 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1952 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1957 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1959 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1964 */
              // ----------
              ;
              ({ /* cicili#Progn1966 */
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
  return ({ /* cicili#Let1972 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1976 */
        __auto_type match1975  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1975 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1979 */
          bool __h_case_result  = (true  &&  (((match1975 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1980 */
                (unboxed  =  (((match1975 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1985 */
              ({ /* cicili#Let1989 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1991 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1992 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1997 */
                      ({ /* cicili#Let1999 */
                        StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                        // ----------
                        { /* cicili#Let2005 */
                          __auto_type match2004  = take_Box_Vector_int ((&vector ));
                          typeof((((match2004 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2008 */
                            bool __h_case_result  = (true  &&  (((match2004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2009 */
                                  (ptr  =  (((match2004 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2015 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2019 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2021 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2022 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2024 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2029 */
                                ({ /* cicili#Progn2031 */
                                  for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_int (new_sb );
                                });
                              }) : ({ /* cicili#Let2038 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let2040 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2041 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn2043 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2048 */
                                      ({ /* cicili#Progn2050 */
                                        for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_int (new_sb );
                                      });
                                    }) : ({ /* cicili#Let2057 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2059 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2064 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2066 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2067 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2069 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2071 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2076 */
                            ({ /* cicili#Let2079 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2083 */
                                __auto_type match2082  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2082 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2086 */
                                  bool __h_case_result  = (true  &&  (((match2082 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2087 */
                                        (unboxed  =  (((match2082 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2092 */
                                      ({ /* cicili#Let2096 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2098 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2099 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2104 */
                                              ({ /* cicili#Let2108 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2110 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2111 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2113 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2118 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2121 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2131 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2133 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2134 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2136 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2141 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2144 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2154 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2156 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2160 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2162 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2163 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2165 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2170 */
                                                    insertAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let2175 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2177 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2182 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2184 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2189 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2191 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2196 */
              // ----------
              ;
              ({ /* cicili#Progn2198 */
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
  return ({ /* cicili#Let2204 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2208 */
        __auto_type match2207  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2207 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2211 */
          bool __h_case_result  = (true  &&  (((match2207 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2212 */
                (unboxed  =  (((match2207 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2217 */
              ({ /* cicili#Let2221 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2223 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2224 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2229 */
                      ({ /* cicili#Let2233 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2235 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2236 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2238 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2240 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2242 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2247 */
                              ({ /* cicili#Let2249 */
                                int tmp ;
                                // ----------
                                { /* cicili#Let2253 */
                                  __auto_type match2252  = take_Box_Vector_int ((&vector ));
                                  typeof((((match2252 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2256 */
                                    bool __h_case_result  = (true  &&  (((match2252 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2257 */
                                          (ptr  =  (((match2252 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2263 */
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
                            }) : ({ /* cicili#Let2271 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let2273 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2274 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2276 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2278 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn2280 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2285 */
                                    ({ /* cicili#Let2287 */
                                      int tmp ;
                                      // ----------
                                      { /* cicili#Let2291 */
                                        __auto_type match2290  = take_Box_Vector_int ((&vector ));
                                        typeof((((match2290 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2294 */
                                          bool __h_case_result  = (true  &&  (((match2290 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2295 */
                                                (ptr  =  (((match2290 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2301 */
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
                                  }) : ({ /* cicili#Let2309 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2311 */
                                      clone_Box_Vector_int (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2316 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2318 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2319 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2321 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2323 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2328 */
                            ({ /* cicili#Let2331 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2335 */
                                __auto_type match2334  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2334 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2338 */
                                  bool __h_case_result  = (true  &&  (((match2334 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2339 */
                                        (unboxed  =  (((match2334 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2344 */
                                      ({ /* cicili#Let2348 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2350 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2351 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2356 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2363 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2365 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2366 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2371 */
                                                    reverse_Vector_int (veci );
                                                  }) : ({ /* cicili#Let2376 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2378 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2383 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2385 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2390 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2392 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2397 */
              // ----------
              ;
              ({ /* cicili#Progn2399 */
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
  return ({ /* cicili#Let2405 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2409 */
        __auto_type match2408  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2408 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2412 */
          bool __h_case_result  = (true  &&  (((match2408 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2413 */
                (unboxed  =  (((match2408 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2418 */
              ({ /* cicili#Let2422 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2424 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2425 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2430 */
                      ({ /* cicili#Progn2432 */
                        { /* cicili#Let2436 */
                          __auto_type match2435  = take_Box_Vector_int ((&lvector ));
                          typeof((((match2435 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2439 */
                            bool __h_case_result  = (true  &&  (((match2435 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2440 */
                                  (ptr  =  (((match2435 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2446 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                      });
                    }) : ({ /* cicili#Let2454 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2456 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2457 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2459 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2461 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2466 */
                            ({ /* cicili#Let2469 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2473 */
                                __auto_type match2472  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2472 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2476 */
                                  bool __h_case_result  = (true  &&  (((match2472 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2477 */
                                        (unboxed  =  (((match2472 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2482 */
                                      ({ /* cicili#Let2486 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2488 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2489 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2494 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2503 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2505 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2506 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2511 */
                                                    append_Vector_int (veci , rvector );
                                                  }) : ({ /* cicili#Let2516 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2518 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2523 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2525 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2530 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2532 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2537 */
              // ----------
              ;
              ({ /* cicili#Progn2539 */
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
  return ({ /* cicili#Let2545 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2549 */
        __auto_type match2548  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2548 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2552 */
          bool __h_case_result  = (true  &&  (((match2548 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2553 */
                (unboxed  =  (((match2548 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2558 */
              ({ /* cicili#Let2562 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2564 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2565 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2570 */
                      ({ /* cicili#Progn2572 */
                        { /* cicili#Let2576 */
                          __auto_type match2575  = take_Box_Vector_int ((&vector ));
                          typeof((((match2575 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2579 */
                            bool __h_case_result  = (true  &&  (((match2575 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2580 */
                                  (ptr  =  (((match2575 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2586 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (put_StringBuffer_int (sb , item ));
                      });
                    }) : ({ /* cicili#Let2592 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2594 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2595 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2597 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2599 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2604 */
                            ({ /* cicili#Let2607 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2611 */
                                __auto_type match2610  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2610 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2614 */
                                  bool __h_case_result  = (true  &&  (((match2610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2615 */
                                        (unboxed  =  (((match2610 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2620 */
                                      ({ /* cicili#Let2624 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2626 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2627 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2632 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2639 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2641 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2642 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2647 */
                                                    push_Vector_int (item , veci );
                                                  }) : ({ /* cicili#Let2652 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2654 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2659 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2661 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2666 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2668 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2673 */
              // ----------
              ;
              ({ /* cicili#Progn2675 */
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
  return ({ /* cicili#Let2681 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2685 */
        __auto_type match2684  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2684 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2688 */
          bool __h_case_result  = (true  &&  (((match2684 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2689 */
                (unboxed  =  (((match2684 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2694 */
              ({ /* cicili#Let2698 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2700 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2701 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2706 */
                      ({ /* cicili#Let2710 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2712 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2713 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2718 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2730 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2732 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2733 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2738 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let2750 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2752 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2758 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2760 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2761 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2763 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2768 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), 0, 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), 0, len ) : Slice_int (clone_Box_Vector_int (vec ), 0, 0)));
                          }) : ({ /* cicili#Let2780 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2782 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2787 */
              // ----------
              ;
              ({ /* cicili#Progn2789 */
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
  return ({ /* cicili#Let2795 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2799 */
        __auto_type match2798  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2798 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2802 */
          bool __h_case_result  = (true  &&  (((match2798 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2803 */
                (unboxed  =  (((match2798 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2808 */
              ({ /* cicili#Let2812 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2814 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2815 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2820 */
                      ({ /* cicili#Let2824 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2826 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2827 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2832 */
                              Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let2838 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2840 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2841 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2846 */
                                    Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let2852 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2854 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2859 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2861 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2862 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2864 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2869 */
                            Slice_int (clone_Box_Vector_int (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let2875 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2877 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2882 */
              // ----------
              ;
              ({ /* cicili#Progn2884 */
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
  return ({ /* cicili#Let2890 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2894 */
        __auto_type match2893  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2893 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2897 */
          bool __h_case_result  = (true  &&  (((match2893 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2898 */
                (unboxed  =  (((match2893 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2903 */
              ({ /* cicili#Let2907 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2909 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2910 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2915 */
                      ({ /* cicili#Let2919 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2921 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2922 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2927 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let2933 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2935 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2936 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2941 */
                                    Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let2947 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2949 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2954 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2956 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2957 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2959 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2961 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2966 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let2972 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2974 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2979 */
              // ----------
              ;
              ({ /* cicili#Progn2981 */
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
  return ({ /* cicili#Let2986 */
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
  return ({ /* cicili#Let2993 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2997 */
        __auto_type match2996  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2996 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3000 */
          bool __h_case_result  = (true  &&  (((match2996 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3001 */
                (unboxed  =  (((match2996 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3006 */
              ({ /* cicili#Let3010 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3012 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3013 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3018 */
                      ({ /* cicili#Let3022 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3024 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3025 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3030 */
                              cursor ;
                            }) : ({ /* cicili#Let3034 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3036 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3037 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3042 */
                                    cursor ;
                                  }) : ({ /* cicili#Let3046 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3048 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3052 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3054 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3055 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3060 */
                            size ;
                          }) : ({ /* cicili#Let3064 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3066 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3070 */
              // ----------
              ;
              ({ /* cicili#Progn3072 */
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
  return ({ /* cicili#Let3080 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3084 */
        __auto_type match3083  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3083 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3087 */
          bool __h_case_result  = (true  &&  (((match3083 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3088 */
                (unboxed  =  (((match3083 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3093 */
              ({ /* cicili#Let3097 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3099 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3100 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3105 */
                      ({ /* cicili#Let3109 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3111 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3112 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3117 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3129 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3131 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3132 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3137 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let3149 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3151 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3157 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3159 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3160 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3162 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3167 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3172 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3174 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3179 */
              // ----------
              ;
              ({ /* cicili#Progn3181 */
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
  return ({ /* cicili#Let3188 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3192 */
        __auto_type match3191  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3191 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3195 */
          bool __h_case_result  = (true  &&  (((match3191 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3196 */
                (unboxed  =  (((match3191 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3201 */
              ({ /* cicili#Let3205 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3207 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3208 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3213 */
                      ({ /* cicili#Let3217 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3219 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3220 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3222 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3227 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3234 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3236 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3237 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3239 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3244 */
                                    (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                                  }) : ({ /* cicili#Let3251 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3253 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3258 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3260 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3261 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3263 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3268 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3273 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3275 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3280 */
              // ----------
              ;
              ({ /* cicili#Progn3282 */
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
  return ({ /* cicili#Let3289 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3293 */
        __auto_type match3292  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3292 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3296 */
          bool __h_case_result  = (true  &&  (((match3292 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3297 */
                (unboxed  =  (((match3292 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3302 */
              ({ /* cicili#Let3306 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3308 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3309 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3314 */
                      ({ /* cicili#Let3318 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3320 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3321 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3323 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3328 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3335 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3337 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3338 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3340 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3345 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                                  }) : ({ /* cicili#Let3352 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3354 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3359 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3361 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3362 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3364 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3366 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3371 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3378 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3380 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3385 */
              // ----------
              ;
              ({ /* cicili#Progn3387 */
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
  { /* cicili#Let3392 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3396 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3398 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3399 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3405 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3411 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3413 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3414 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3420 */
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
  { /* cicili#Let3430 */
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
  { /* cicili#Let3438 */
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
  { /* cicili#Let3445 */
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
  { /* cicili#Let3463 */
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
  { /* cicili#Let3468 */
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
  union { /* ciciliUnion3494 */
    struct { /* ciciliStruct3495 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3496 */
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
  union { /* ciciliUnion3538 */
    struct { /* ciciliStruct3539 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct3540 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct3541 */
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
  union { /* ciciliUnion3604 */
    struct { /* ciciliStruct3605 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3606 */
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
  union { /* ciciliUnion3636 */
    struct { /* ciciliStruct3637 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3638 */
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
  union { /* ciciliUnion3697 */
    struct { /* ciciliStruct3698 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3699 */
      Vector_char __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3700 */
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
  union { /* ciciliUnion3795 */
    struct { /* ciciliStruct3796 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3797 */
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
  { /* cicili#Let3827 */
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
  { /* cicili#Let3832 */
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
  return ((null_terminated ) ? ({ /* cicili#Let3847 */
        char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let3851 */
        char * buffer  = malloc ((capacity  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , int pos , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3860 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3862 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3863 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3865 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3867 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3872 */
            ({ /* cicili#Let3874 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let3883 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let3885 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn3886 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn3888 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn3890 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn3895 */
                  ({ /* cicili#Let3897 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let3906 */
                  // ----------
                  ;
                  ({ /* cicili#Progn3908 */
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
  return ({ /* cicili#Let3917 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3919 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3920 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3922 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3924 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3926 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3931 */
            ({ /* cicili#Let3933 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let3940 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let3942 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn3943 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3945 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn3947 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn3949 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn3954 */
                  ({ /* cicili#Let3956 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                    // ----------
                    print_StringBuffer_char (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let3963 */
                  // ----------
                  ;
                  ({ /* cicili#Progn3965 */
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
  return ({ /* cicili#Let3979 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3981 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3982 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3984 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3986 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3988 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3993 */
            ({ /* cicili#Let3995 */
              int blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block3999 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4001 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4006 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4008 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn4009 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4011 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn4013 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4015 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4020 */
                  ({ /* cicili#Let4022 */
                    int blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block4026 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let4028 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let4033 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4035 */
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
  { /* cicili#Let4043 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4045 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4046 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4052 */
          { /* cicili#Block4054 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let4060 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let4062 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4063 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4069 */
                { /* cicili#Block4071 */
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
  { /* cicili#Let4081 */
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
  { /* cicili#Let4086 */
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
  { /* cicili#Let4091 */
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
  { /* cicili#Let4113 */
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
  { /* cicili#Let4118 */
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
  return ({ /* cicili#Let4125 */
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
  return ({ /* cicili#Let4134 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4136 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4137 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4139 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4141 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4146 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4149 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4155 */
            // ----------
            ;
            ({ /* cicili#Progn4157 */
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
  return ({ /* cicili#Let4165 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4167 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4168 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4170 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4172 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4177 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4181 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4187 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4192 */
            // ----------
            ;
            ({ /* cicili#Progn4194 */
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
  return ({ /* cicili#Let4202 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4204 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4205 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4207 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4209 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4214 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4221 */
            // ----------
            ;
            ({ /* cicili#Progn4223 */
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
  { /* cicili#Let4232 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4234 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4235 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4237 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4239 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4245 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4248 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4256 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4259 */
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
        { /* cicili#Let4269 */
          // ----------
          ;
          ({ /* cicili#Let4271 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4276 */
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
  { /* cicili#Let4287 */
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
  { /* cicili#Let4292 */
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
  return ({ /* cicili#Let4306 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4310 */
        __auto_type match4309  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4309 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4313 */
          bool __h_case_result  = (true  &&  (((match4309 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4314 */
                (unboxed  =  (((match4309 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4319 */
              ({ /* cicili#Let4323 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4325 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4326 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4331 */
                      ({ /* cicili#Let4335 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4337 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4338 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4343 */
                              buffer ;
                            }) : ({ /* cicili#Let4347 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let4349 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4350 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4355 */
                                    buffer ;
                                  }) : ({ /* cicili#Let4359 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4361 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4365 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4367 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4368 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4370 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4375 */
                            ({ /* cicili#Let4378 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4382 */
                                __auto_type match4381  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4381 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4385 */
                                  bool __h_case_result  = (true  &&  (((match4381 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4386 */
                                        (unboxed  =  (((match4381 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4391 */
                                      ({ /* cicili#Let4395 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4397 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4398 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4403 */
                                              ({ /* cicili#Let4407 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4409 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4410 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4415 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4419 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4421 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4422 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4427 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let4431 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4433 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4437 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4439 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4440 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4442 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4447 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4452 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4454 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4458 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4460 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4464 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4466 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4470 */
              // ----------
              ;
              ({ /* cicili#Progn4472 */
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
  return ({ /* cicili#Let4477 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4479 */
        __auto_type new_vec  = pureCapacity_Vector_char (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_char (item , new_vec );
    });
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
    return ({ /* cicili#Let4489 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4493 */
          __auto_type match4492  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4492 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4496 */
            bool __h_case_result  = (true  &&  (((match4492 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4497 */
                  (unboxed  =  (((match4492 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4502 */
                ({ /* cicili#Let4506 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4508 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4509 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4514 */
                        ({ /* cicili#Let4518 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4520 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4521 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4526 */
                                ({ /* cicili#Let4528 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4539 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let4541 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4542 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4547 */
                                      ({ /* cicili#Let4549 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let4560 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4562 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4566 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4568 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4569 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4571 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4573 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4578 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4582 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4584 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4588 */
                // ----------
                ;
                ({ /* cicili#Progn4590 */
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
    return ({ /* cicili#Let4594 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4598 */
          __auto_type match4597  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4597 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4601 */
            bool __h_case_result  = (true  &&  (((match4597 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4602 */
                  (unboxed  =  (((match4597 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4607 */
                ({ /* cicili#Let4611 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4613 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4614 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4619 */
                        ({ /* cicili#Let4623 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4625 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4626 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4628 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4633 */
                                ({ /* cicili#Let4635 */
                                  int sum  = 0;
                                  // ----------
                                  for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4646 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let4648 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4649 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn4651 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4656 */
                                      ({ /* cicili#Let4658 */
                                        int sum  = 0;
                                        // ----------
                                        for (int counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let4669 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4671 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4675 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4677 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4678 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4680 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4682 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4687 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4691 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4693 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4697 */
                // ----------
                ;
                ({ /* cicili#Progn4699 */
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
  return ({ /* cicili#Let4704 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4708 */
        __auto_type match4707  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4707 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4711 */
          bool __h_case_result  = (true  &&  (((match4707 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4712 */
                (unboxed  =  (((match4707 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4717 */
              ({ /* cicili#Let4721 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4723 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4724 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4729 */
                      ({ /* cicili#Let4733 */
                        // ----------
                        ;
                        ({ /* cicili#Let4735 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4739 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let4745 */
                              // ----------
                              ;
                              ({ /* cicili#Let4747 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4751 */
                                    Buffer_char (copy_StringBuffer_char (sb ));
                                  }) : ({ /* cicili#Let4757 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4759 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4764 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4766 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4767 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4769 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4771 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4776 */
                            ({ /* cicili#Let4779 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4783 */
                                __auto_type match4782  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4782 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4786 */
                                  bool __h_case_result  = (true  &&  (((match4782 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4787 */
                                        (unboxed  =  (((match4782 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4792 */
                                      ({ /* cicili#Let4796 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4798 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4799 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4804 */
                                              ({ /* cicili#Let4808 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4810 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4814 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let4820 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4822 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4826 */
                                                            Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let4832 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4834 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4839 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4841 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4842 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4847 */
                                                    copy_Vector_char (veci );
                                                  }) : ({ /* cicili#Let4852 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4854 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4859 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4861 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4866 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4868 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4873 */
              // ----------
              ;
              ({ /* cicili#Progn4875 */
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
  return ({ /* cicili#Let4881 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4885 */
        __auto_type match4884  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4884 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4888 */
          bool __h_case_result  = (true  &&  (((match4884 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4889 */
                (unboxed  =  (((match4884 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4894 */
              ({ /* cicili#Let4898 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4900 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4901 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4906 */
                      ({ /* cicili#Progn4908 */
                        { /* cicili#Let4912 */
                          __auto_type match4911  = take_Box_Vector_char ((&vector ));
                          typeof((((match4911 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let4915 */
                            bool __h_case_result  = (true  &&  (((match4911 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4916 */
                                  (ptr  =  (((match4911 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block4922 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let4926 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4928 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4929 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4931 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4936 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn4939 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_char (sb );
                                  }) : Buffer_char (sb ));
                              }) : ({ /* cicili#Let4945 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let4947 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4948 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn4950 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4955 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn4958 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_char (sb );
                                        }) : Buffer_char (sb ));
                                    }) : ({ /* cicili#Let4964 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4966 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let4971 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4973 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4974 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4976 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4978 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4983 */
                            ({ /* cicili#Let4986 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4990 */
                                __auto_type match4989  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4989 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4993 */
                                  bool __h_case_result  = (true  &&  (((match4989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4994 */
                                        (unboxed  =  (((match4989 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4999 */
                                      ({ /* cicili#Let5003 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5005 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5006 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5011 */
                                              ({ /* cicili#Let5015 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5017 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5018 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5020 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5025 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5028 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5038 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5040 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5041 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5043 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5048 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5051 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5061 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5063 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5067 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5069 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5070 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5072 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5077 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5082 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5084 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5089 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5091 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5096 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5098 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5103 */
              // ----------
              ;
              ({ /* cicili#Progn5105 */
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
  return ({ /* cicili#Let5111 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5115 */
        __auto_type match5114  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5114 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5118 */
          bool __h_case_result  = (true  &&  (((match5114 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5119 */
                (unboxed  =  (((match5114 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5124 */
              ({ /* cicili#Let5128 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5130 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5131 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5136 */
                      ({ /* cicili#Progn5138 */
                        { /* cicili#Let5142 */
                          __auto_type match5141  = take_Box_Vector_char ((&vector ));
                          typeof((((match5141 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5145 */
                            bool __h_case_result  = (true  &&  (((match5141 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5146 */
                                  (ptr  =  (((match5141 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5152 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5156 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let5158 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5159 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5161 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn5163 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5165 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5170 */
                                ({ /* cicili#Progn5172 */
                                  for (int i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let5180 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let5182 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn5183 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn5185 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn5187 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn5189 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5194 */
                                      ({ /* cicili#Progn5196 */
                                        for (int i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_char (MakeNullTerminatedBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let5204 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5206 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5211 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5213 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5214 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5216 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5218 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5223 */
                            ({ /* cicili#Let5226 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5230 */
                                __auto_type match5229  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5229 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5233 */
                                  bool __h_case_result  = (true  &&  (((match5229 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5234 */
                                        (unboxed  =  (((match5229 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5239 */
                                      ({ /* cicili#Let5243 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5245 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5246 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5251 */
                                              ({ /* cicili#Let5255 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5257 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5258 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5260 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5265 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5268 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5277 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5279 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5280 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5282 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5287 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5290 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5299 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5301 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5305 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5307 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5308 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5310 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5315 */
                                                    deleteAt_Vector_char (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5320 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5322 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5327 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5329 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5334 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5336 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5341 */
              // ----------
              ;
              ({ /* cicili#Progn5343 */
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
  return ({ /* cicili#Let5349 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5353 */
        __auto_type match5352  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5352 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5356 */
          bool __h_case_result  = (true  &&  (((match5352 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5357 */
                (unboxed  =  (((match5352 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5362 */
              ({ /* cicili#Let5366 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5368 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5369 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5374 */
                      ({ /* cicili#Let5376 */
                        StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                        // ----------
                        { /* cicili#Let5382 */
                          __auto_type match5381  = take_Box_Vector_char ((&vector ));
                          typeof((((match5381 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5385 */
                            bool __h_case_result  = (true  &&  (((match5381 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5386 */
                                  (ptr  =  (((match5381 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5392 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5396 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5398 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5399 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5401 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5406 */
                                ({ /* cicili#Progn5408 */
                                  for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_char (new_sb );
                                });
                              }) : ({ /* cicili#Let5415 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5417 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5418 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5420 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5425 */
                                      ({ /* cicili#Progn5427 */
                                        for (int i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_char (new_sb );
                                      });
                                    }) : ({ /* cicili#Let5434 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5436 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5441 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5443 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5444 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5446 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5448 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5453 */
                            ({ /* cicili#Let5456 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5460 */
                                __auto_type match5459  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5459 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5463 */
                                  bool __h_case_result  = (true  &&  (((match5459 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5464 */
                                        (unboxed  =  (((match5459 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5469 */
                                      ({ /* cicili#Let5473 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5475 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5476 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5481 */
                                              ({ /* cicili#Let5485 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5487 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5488 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5490 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5495 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5498 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5508 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5510 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5511 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5513 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5518 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5521 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5531 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5533 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5537 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5539 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5540 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5542 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5547 */
                                                    insertAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5552 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5554 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5559 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5561 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5566 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5568 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5573 */
              // ----------
              ;
              ({ /* cicili#Progn5575 */
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
  return ({ /* cicili#Let5581 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5585 */
        __auto_type match5584  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5584 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5588 */
          bool __h_case_result  = (true  &&  (((match5584 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5589 */
                (unboxed  =  (((match5584 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5594 */
              ({ /* cicili#Let5598 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5600 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5601 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5606 */
                      ({ /* cicili#Let5610 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let5612 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5613 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn5615 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5617 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5619 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5624 */
                              ({ /* cicili#Let5626 */
                                char tmp ;
                                // ----------
                                { /* cicili#Let5630 */
                                  __auto_type match5629  = take_Box_Vector_char ((&vector ));
                                  typeof((((match5629 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5633 */
                                    bool __h_case_result  = (true  &&  (((match5629 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5634 */
                                          (ptr  =  (((match5629 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block5640 */
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
                            }) : ({ /* cicili#Let5648 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let5650 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn5651 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5653 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn5655 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn5657 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5662 */
                                    ({ /* cicili#Let5664 */
                                      char tmp ;
                                      // ----------
                                      { /* cicili#Let5668 */
                                        __auto_type match5667  = take_Box_Vector_char ((&vector ));
                                        typeof((((match5667 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5671 */
                                          bool __h_case_result  = (true  &&  (((match5667 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5672 */
                                                (ptr  =  (((match5667 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block5678 */
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
                                  }) : ({ /* cicili#Let5686 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5688 */
                                      clone_Box_Vector_char (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5693 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5695 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5696 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5698 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5700 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5705 */
                            ({ /* cicili#Let5708 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5712 */
                                __auto_type match5711  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5711 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5715 */
                                  bool __h_case_result  = (true  &&  (((match5711 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5716 */
                                        (unboxed  =  (((match5711 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5721 */
                                      ({ /* cicili#Let5725 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5727 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5728 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5733 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let5740 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5742 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5743 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5748 */
                                                    reverse_Vector_char (veci );
                                                  }) : ({ /* cicili#Let5753 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5755 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5760 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5762 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5767 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5769 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5774 */
              // ----------
              ;
              ({ /* cicili#Progn5776 */
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
  return ({ /* cicili#Let5782 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let5786 */
        __auto_type match5785  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5785 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5789 */
          bool __h_case_result  = (true  &&  (((match5785 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5790 */
                (unboxed  =  (((match5785 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5795 */
              ({ /* cicili#Let5799 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5801 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5802 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5807 */
                      ({ /* cicili#Progn5809 */
                        { /* cicili#Let5813 */
                          __auto_type match5812  = take_Box_Vector_char ((&lvector ));
                          typeof((((match5812 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5816 */
                            bool __h_case_result  = (true  &&  (((match5812 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5817 */
                                  (ptr  =  (((match5812 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5823 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                      });
                    }) : ({ /* cicili#Let5831 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5833 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5834 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5836 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5838 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5843 */
                            ({ /* cicili#Let5846 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5850 */
                                __auto_type match5849  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5849 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5853 */
                                  bool __h_case_result  = (true  &&  (((match5849 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5854 */
                                        (unboxed  =  (((match5849 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5859 */
                                      ({ /* cicili#Let5863 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5865 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5866 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5871 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let5880 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5882 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5883 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5888 */
                                                    append_Vector_char (veci , rvector );
                                                  }) : ({ /* cicili#Let5893 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5895 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5900 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5902 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5907 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5909 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5914 */
              // ----------
              ;
              ({ /* cicili#Progn5916 */
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
  return ({ /* cicili#Let5922 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5926 */
        __auto_type match5925  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5925 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5929 */
          bool __h_case_result  = (true  &&  (((match5925 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5930 */
                (unboxed  =  (((match5925 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5935 */
              ({ /* cicili#Let5939 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5941 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5942 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5947 */
                      ({ /* cicili#Progn5949 */
                        { /* cicili#Let5953 */
                          __auto_type match5952  = take_Box_Vector_char ((&vector ));
                          typeof((((match5952 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5956 */
                            bool __h_case_result  = (true  &&  (((match5952 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5957 */
                                  (ptr  =  (((match5952 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5963 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (put_StringBuffer_char (sb , item ));
                      });
                    }) : ({ /* cicili#Let5969 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5971 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5972 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5974 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5976 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5981 */
                            ({ /* cicili#Let5984 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5988 */
                                __auto_type match5987  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5987 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5991 */
                                  bool __h_case_result  = (true  &&  (((match5987 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5992 */
                                        (unboxed  =  (((match5987 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5997 */
                                      ({ /* cicili#Let6001 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6003 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6004 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6009 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let6016 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6018 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6019 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6024 */
                                                    push_Vector_char (item , veci );
                                                  }) : ({ /* cicili#Let6029 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6031 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6036 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6038 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6043 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6045 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6050 */
              // ----------
              ;
              ({ /* cicili#Progn6052 */
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
  return ({ /* cicili#Let6058 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6062 */
        __auto_type match6061  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6061 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6065 */
          bool __h_case_result  = (true  &&  (((match6061 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6066 */
                (unboxed  =  (((match6061 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6071 */
              ({ /* cicili#Let6075 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6077 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6078 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6083 */
                      ({ /* cicili#Let6087 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6089 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6090 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6095 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6107 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6109 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6110 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6115 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let6127 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6129 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6135 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6137 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6138 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6140 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6145 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), 0, 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), 0, len ) : Slice_char (clone_Box_Vector_char (vec ), 0, 0)));
                          }) : ({ /* cicili#Let6157 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6159 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6164 */
              // ----------
              ;
              ({ /* cicili#Progn6166 */
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
  return ({ /* cicili#Let6172 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6176 */
        __auto_type match6175  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6175 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6179 */
          bool __h_case_result  = (true  &&  (((match6175 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6180 */
                (unboxed  =  (((match6175 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6185 */
              ({ /* cicili#Let6189 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6191 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6192 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6197 */
                      ({ /* cicili#Let6201 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6203 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6204 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6209 */
                              Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let6215 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6217 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6218 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6223 */
                                    Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let6229 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6231 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6236 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6238 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6239 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6241 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6246 */
                            Slice_char (clone_Box_Vector_char (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let6252 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6254 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6259 */
              // ----------
              ;
              ({ /* cicili#Progn6261 */
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
  return ({ /* cicili#Let6267 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6271 */
        __auto_type match6270  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6270 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6274 */
          bool __h_case_result  = (true  &&  (((match6270 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6275 */
                (unboxed  =  (((match6270 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6280 */
              ({ /* cicili#Let6284 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6286 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6287 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6292 */
                      ({ /* cicili#Let6296 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6298 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6299 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6304 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6310 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6312 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6313 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6318 */
                                    Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let6324 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6326 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6331 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6333 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6334 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6336 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6338 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6343 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6349 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6351 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6356 */
              // ----------
              ;
              ({ /* cicili#Progn6358 */
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
  return ({ /* cicili#Let6363 */
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
  return ({ /* cicili#Let6370 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6374 */
        __auto_type match6373  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6373 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6377 */
          bool __h_case_result  = (true  &&  (((match6373 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6378 */
                (unboxed  =  (((match6373 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6383 */
              ({ /* cicili#Let6387 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6389 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6390 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6395 */
                      ({ /* cicili#Let6399 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6401 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6402 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6407 */
                              cursor ;
                            }) : ({ /* cicili#Let6411 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6413 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6414 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6419 */
                                    cursor ;
                                  }) : ({ /* cicili#Let6423 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6425 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6429 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6431 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6432 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6437 */
                            size ;
                          }) : ({ /* cicili#Let6441 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6443 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6447 */
              // ----------
              ;
              ({ /* cicili#Progn6449 */
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
  return ({ /* cicili#Let6457 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6461 */
        __auto_type match6460  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6460 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6464 */
          bool __h_case_result  = (true  &&  (((match6460 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6465 */
                (unboxed  =  (((match6460 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6470 */
              ({ /* cicili#Let6474 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6476 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6477 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6482 */
                      ({ /* cicili#Let6486 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6488 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6489 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6494 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6506 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6508 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6509 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6514 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let6526 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6528 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6534 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6536 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6537 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6539 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6544 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let6549 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6551 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6556 */
              // ----------
              ;
              ({ /* cicili#Progn6558 */
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
  return ({ /* cicili#Let6565 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6569 */
        __auto_type match6568  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6568 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6572 */
          bool __h_case_result  = (true  &&  (((match6568 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6573 */
                (unboxed  =  (((match6568 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6578 */
              ({ /* cicili#Let6582 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6584 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6585 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6590 */
                      ({ /* cicili#Let6594 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6596 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6597 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6599 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6604 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let6611 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6613 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6614 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6616 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6621 */
                                    (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                                  }) : ({ /* cicili#Let6628 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6630 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6635 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6637 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6638 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6640 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6645 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let6650 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6652 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6657 */
              // ----------
              ;
              ({ /* cicili#Progn6659 */
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
  return ({ /* cicili#Let6666 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6670 */
        __auto_type match6669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6669 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6673 */
          bool __h_case_result  = (true  &&  (((match6669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6674 */
                (unboxed  =  (((match6669 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6679 */
              ({ /* cicili#Let6683 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6685 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6686 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6691 */
                      ({ /* cicili#Let6695 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6697 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6698 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6700 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6705 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let6712 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6714 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6715 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6717 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6722 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                                  }) : ({ /* cicili#Let6729 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6731 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6736 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6738 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6739 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6741 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6743 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6748 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let6755 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6757 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6762 */
              // ----------
              ;
              ({ /* cicili#Progn6764 */
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
  { /* cicili#Let6769 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6773 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let6775 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6776 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6782 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let6788 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let6790 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6791 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6797 */
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
  { /* cicili#Let6807 */
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
  { /* cicili#Let6815 */
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
  { /* cicili#Let6822 */
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
  { /* cicili#Let6840 */
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
  { /* cicili#Let6845 */
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
  ({ /* cicili#Let6861 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6863 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6866 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6869 */
      __auto_type v03  = ({ /* cicili#Let6872 */
        StringBuffer_int tmp_buf6871  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6871 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6881 */
      __auto_type v04  = ({ /* cicili#Let6884 */
        StringBuffer_int tmp_buf6883  = newCapacity_StringBuffer_int (2, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6883 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6893 */
      __auto_type v05  = ({ /* cicili#Let6896 */
        StringBuffer_char tmp_buf6895  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf6895 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6905 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6909 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6913 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6916 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6919 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6922 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6925 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6928 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v16  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6931 */
      __auto_type v16  = last_Vector_int (v03 );
      // ----------
      ((void)((v16 . __h_table )-> freeData ));
      v16 ;
    });
    __auto_type v17  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6934 */
      __auto_type v17  = last_Vector_char (v05 );
      // ----------
      ((void)((v17 . __h_table )-> freeData ));
      v17 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6937 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6940 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6943 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6946 */
      __auto_type v50  = wrap_Vector_int (1000);
      // ----------
      ((void)((v50 . __h_table )-> freeData ));
      v50 ;
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
    { /* cicili#Block6953 */
      { /* cicili#Let6957 */
        __auto_type match6956  = nth_Vector_int (3, v03 );
        typeof((((match6956 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let6960 */
          bool __h_case_result  = (true  &&  (((match6956 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6961 */
                (i  =  (((match6956 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6967 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let6972 */
              // ----------
              ;
              { /* cicili#Block6974 */
                { /* cicili#Block6979 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let6983 */
        __auto_type match6982  = nth_Vector_char (5, v05 );
        typeof((((match6982 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let6986 */
          bool __h_case_result  = (true  &&  (((match6982 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6987 */
                (c  =  (((match6982 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6993 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let6998 */
              // ----------
              ;
              { /* cicili#Block7000 */
                { /* cicili#Block7005 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7009 */
        __auto_type match7008  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let7012 */
          bool __h_case_result  = (true  &&  ((match7008 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7017 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let7022 */
              // ----------
              ;
              { /* cicili#Block7024 */
                { /* cicili#Block7029 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7033 */
        __auto_type match7032  = head_Vector_int (v08 );
        typeof((((match7032 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7036 */
          bool __h_case_result  = (true  &&  (((match7032 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7037 */
                (i  =  (((match7032 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7043 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7048 */
              // ----------
              ;
              { /* cicili#Block7050 */
                { /* cicili#Block7055 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7059 */
        __auto_type match7058  = head_Vector_char (v09 );
        typeof((((match7058 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7062 */
          bool __h_case_result  = (true  &&  (((match7058 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7063 */
                (c  =  (((match7058 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7069 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7074 */
              // ----------
              ;
              { /* cicili#Block7076 */
                { /* cicili#Block7081 */
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
      { /* cicili#Let7085 */
        __auto_type match7084  = nth_Vector_int (1, v08 );
        typeof((((match7084 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7088 */
          bool __h_case_result  = (true  &&  (((match7084 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7089 */
                (i  =  (((match7084 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7095 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7100 */
              // ----------
              ;
              { /* cicili#Block7102 */
                { /* cicili#Block7107 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7111 */
        __auto_type match7110  = nth_Vector_char (2, v09 );
        typeof((((match7110 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7114 */
          bool __h_case_result  = (true  &&  (((match7110 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7115 */
                (c  =  (((match7110 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7121 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7126 */
              // ----------
              ;
              { /* cicili#Block7128 */
                { /* cicili#Block7133 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7137 */
        __auto_type match7136  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let7140 */
          bool __h_case_result  = (true  &&  ((match7136 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7145 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let7150 */
              // ----------
              ;
              { /* cicili#Block7152 */
                { /* cicili#Block7157 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7160 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let7164 */
          __auto_type match7163  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7163 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7167 */
            bool __h_case_result  = (true  &&  (((match7163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7168 */
                  (unboxed  =  (((match7163 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7174 */
                { /* cicili#Let7178 */
                  // ----------
                  ;
                  ({ /* cicili#Let7180 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7185 */
                        { /* cicili#Block7187 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7192 */
                        // ----------
                        ;
                        { /* cicili#Block7194 */
                          { /* cicili#Block7199 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7204 */
                // ----------
                ;
                ({ /* cicili#Let7206 */
                  bool __h_case_result  = (true  &&  ((match7163 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7211 */
                      { /* cicili#Block7216 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7219 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let7223 */
          __auto_type match7222  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7222 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7226 */
            bool __h_case_result  = (true  &&  (((match7222 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7227 */
                  (unboxed  =  (((match7222 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7233 */
                { /* cicili#Let7237 */
                  // ----------
                  ;
                  ({ /* cicili#Let7239 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7244 */
                        { /* cicili#Block7246 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7251 */
                        // ----------
                        ;
                        { /* cicili#Block7253 */
                          { /* cicili#Block7258 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7263 */
                // ----------
                ;
                ({ /* cicili#Let7265 */
                  bool __h_case_result  = (true  &&  ((match7222 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7270 */
                      { /* cicili#Block7275 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7278 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let7282 */
          __auto_type match7281  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7281 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7285 */
            bool __h_case_result  = (true  &&  (((match7281 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7286 */
                  (unboxed  =  (((match7281 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7292 */
                { /* cicili#Let7296 */
                  // ----------
                  ;
                  ({ /* cicili#Let7298 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7303 */
                        { /* cicili#Block7305 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7310 */
                        // ----------
                        ;
                        { /* cicili#Block7312 */
                          { /* cicili#Block7317 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7322 */
                // ----------
                ;
                ({ /* cicili#Let7324 */
                  bool __h_case_result  = (true  &&  ((match7281 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7329 */
                      { /* cicili#Block7334 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7337 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let7341 */
          __auto_type match7340  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7340 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7344 */
            bool __h_case_result  = (true  &&  (((match7340 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7345 */
                  (unboxed  =  (((match7340 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7351 */
                { /* cicili#Let7355 */
                  // ----------
                  ;
                  ({ /* cicili#Let7357 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7362 */
                        { /* cicili#Block7364 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7369 */
                        // ----------
                        ;
                        { /* cicili#Block7371 */
                          { /* cicili#Block7376 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7381 */
                // ----------
                ;
                ({ /* cicili#Let7383 */
                  bool __h_case_result  = (true  &&  ((match7340 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7388 */
                      { /* cicili#Block7393 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7396 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let7400 */
          __auto_type match7399  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7399 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7403 */
            bool __h_case_result  = (true  &&  (((match7399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7404 */
                  (unboxed  =  (((match7399 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7410 */
                { /* cicili#Let7414 */
                  // ----------
                  ;
                  ({ /* cicili#Let7416 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7421 */
                        { /* cicili#Block7423 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7428 */
                        // ----------
                        ;
                        { /* cicili#Block7430 */
                          { /* cicili#Block7435 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7440 */
                // ----------
                ;
                ({ /* cicili#Let7442 */
                  bool __h_case_result  = (true  &&  ((match7399 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7447 */
                      { /* cicili#Block7452 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7455 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let7459 */
          __auto_type match7458  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7458 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7462 */
            bool __h_case_result  = (true  &&  (((match7458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7463 */
                  (unboxed  =  (((match7458 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7469 */
                { /* cicili#Let7473 */
                  // ----------
                  ;
                  ({ /* cicili#Let7475 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7480 */
                        { /* cicili#Block7482 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7487 */
                        // ----------
                        ;
                        { /* cicili#Block7489 */
                          { /* cicili#Block7494 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7499 */
                // ----------
                ;
                ({ /* cicili#Let7501 */
                  bool __h_case_result  = (true  &&  ((match7458 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7506 */
                      { /* cicili#Block7511 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7514 */
        __auto_type __h_matchbox  = v16 ;
        // ----------
        { /* cicili#Let7518 */
          __auto_type match7517  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7517 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7521 */
            bool __h_case_result  = (true  &&  (((match7517 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7522 */
                  (unboxed  =  (((match7517 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7528 */
                { /* cicili#Let7532 */
                  // ----------
                  ;
                  ({ /* cicili#Let7534 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7539 */
                        { /* cicili#Block7541 */
                          printf ("last of v03: ");
                          show_Vector_int (stdout , v16 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7546 */
                        // ----------
                        ;
                        { /* cicili#Block7548 */
                          { /* cicili#Block7553 */
                            printf ("status: %d\n", -121);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7558 */
                // ----------
                ;
                ({ /* cicili#Let7560 */
                  bool __h_case_result  = (true  &&  ((match7517 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7565 */
                      { /* cicili#Block7570 */
                        printf ("status: %d\n", -120);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7573 */
        __auto_type __h_matchbox  = v17 ;
        // ----------
        { /* cicili#Let7577 */
          __auto_type match7576  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7576 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7580 */
            bool __h_case_result  = (true  &&  (((match7576 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7581 */
                  (unboxed  =  (((match7576 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7587 */
                { /* cicili#Let7591 */
                  // ----------
                  ;
                  ({ /* cicili#Let7593 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7598 */
                        { /* cicili#Block7600 */
                          printf ("last of v05: ");
                          show_Vector_char (stdout , v17 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7605 */
                        // ----------
                        ;
                        { /* cicili#Block7607 */
                          { /* cicili#Block7612 */
                            printf ("status: %d\n", -123);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7617 */
                // ----------
                ;
                ({ /* cicili#Let7619 */
                  bool __h_case_result  = (true  &&  ((match7576 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7624 */
                      { /* cicili#Block7629 */
                        printf ("status: %d\n", -122);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7632 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let7636 */
          __auto_type match7635  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7635 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7639 */
            bool __h_case_result  = (true  &&  (((match7635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7640 */
                  (unboxed  =  (((match7635 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7646 */
                { /* cicili#Let7650 */
                  // ----------
                  ;
                  ({ /* cicili#Let7652 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7657 */
                        { /* cicili#Block7659 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7664 */
                        // ----------
                        ;
                        { /* cicili#Block7666 */
                          { /* cicili#Block7671 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7676 */
                // ----------
                ;
                ({ /* cicili#Let7678 */
                  bool __h_case_result  = (true  &&  ((match7635 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7683 */
                      { /* cicili#Block7688 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7691 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let7695 */
          __auto_type match7694  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7694 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7698 */
            bool __h_case_result  = (true  &&  (((match7694 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7699 */
                  (unboxed  =  (((match7694 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7705 */
                { /* cicili#Let7709 */
                  // ----------
                  ;
                  ({ /* cicili#Let7711 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7716 */
                        { /* cicili#Block7718 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7723 */
                        // ----------
                        ;
                        { /* cicili#Block7725 */
                          { /* cicili#Block7730 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7735 */
                // ----------
                ;
                ({ /* cicili#Let7737 */
                  bool __h_case_result  = (true  &&  ((match7694 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7742 */
                      { /* cicili#Block7747 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7750 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let7754 */
          __auto_type match7753  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7753 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7757 */
            bool __h_case_result  = (true  &&  (((match7753 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7758 */
                  (unboxed  =  (((match7753 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7764 */
                { /* cicili#Let7768 */
                  // ----------
                  ;
                  ({ /* cicili#Let7770 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7775 */
                        { /* cicili#Block7777 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7782 */
                        // ----------
                        ;
                        { /* cicili#Block7784 */
                          { /* cicili#Block7789 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7794 */
                // ----------
                ;
                ({ /* cicili#Let7796 */
                  bool __h_case_result  = (true  &&  ((match7753 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7801 */
                      { /* cicili#Block7806 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7809 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let7813 */
          __auto_type match7812  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7812 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7816 */
            bool __h_case_result  = (true  &&  (((match7812 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7817 */
                  (unboxed  =  (((match7812 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7823 */
                { /* cicili#Let7827 */
                  // ----------
                  ;
                  ({ /* cicili#Let7829 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7834 */
                        { /* cicili#Block7836 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7841 */
                        // ----------
                        ;
                        { /* cicili#Block7843 */
                          { /* cicili#Block7848 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7853 */
                // ----------
                ;
                ({ /* cicili#Let7855 */
                  bool __h_case_result  = (true  &&  ((match7812 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7860 */
                      { /* cicili#Block7865 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7868 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7870 */
          __auto_type v033  = ({ /* cicili#Let7873 */
            StringBuffer_int tmp_buf7872  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7872 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7882 */
          __auto_type v055  = ({ /* cicili#Let7885 */
            StringBuffer_char tmp_buf7884  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7884 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7894 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7897 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7900 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7903 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7906 */
          __auto_type v0333  = ({ /* cicili#Let7909 */
            StringBuffer_int tmp_buf7908  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7908 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7918 */
          __auto_type v0555  = ({ /* cicili#Let7921 */
            StringBuffer_char tmp_buf7920  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7920 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7930 */
          __auto_type v0444  = ({ /* cicili#Let7933 */
            StringBuffer_int tmp_buf7932  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7932 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7942 */
          __auto_type v0666  = ({ /* cicili#Let7945 */
            StringBuffer_char tmp_buf7944  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7944 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7954 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7957 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7960 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7963 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7966 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7969 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7972 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7975 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7978 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7981 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7984 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7987 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7990 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let7994 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let7998 */
            __auto_type match7997  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7997 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8001 */
              bool __h_case_result  = (true  &&  (((match7997 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8002 */
                    (unboxed  =  (((match7997 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8008 */
                  { /* cicili#Let8012 */
                    // ----------
                    ;
                    ({ /* cicili#Let8014 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8019 */
                          { /* cicili#Block8021 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8026 */
                          // ----------
                          ;
                          { /* cicili#Block8028 */
                            { /* cicili#Block8033 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8038 */
                  // ----------
                  ;
                  ({ /* cicili#Let8040 */
                    bool __h_case_result  = (true  &&  ((match7997 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8045 */
                        { /* cicili#Block8050 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8053 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let8057 */
            __auto_type match8056  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8056 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8060 */
              bool __h_case_result  = (true  &&  (((match8056 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8061 */
                    (unboxed  =  (((match8056 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8067 */
                  { /* cicili#Let8071 */
                    // ----------
                    ;
                    ({ /* cicili#Let8073 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8078 */
                          { /* cicili#Block8080 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8085 */
                          // ----------
                          ;
                          { /* cicili#Block8087 */
                            { /* cicili#Block8092 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8097 */
                  // ----------
                  ;
                  ({ /* cicili#Let8099 */
                    bool __h_case_result  = (true  &&  ((match8056 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8104 */
                        { /* cicili#Block8109 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8112 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let8116 */
            __auto_type match8115  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8115 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8119 */
              bool __h_case_result  = (true  &&  (((match8115 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8120 */
                    (unboxed  =  (((match8115 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8126 */
                  { /* cicili#Let8130 */
                    // ----------
                    ;
                    ({ /* cicili#Let8132 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8137 */
                          { /* cicili#Block8139 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8144 */
                          // ----------
                          ;
                          { /* cicili#Block8146 */
                            { /* cicili#Block8151 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8156 */
                  // ----------
                  ;
                  ({ /* cicili#Let8158 */
                    bool __h_case_result  = (true  &&  ((match8115 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8163 */
                        { /* cicili#Block8168 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8171 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let8175 */
            __auto_type match8174  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8174 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8178 */
              bool __h_case_result  = (true  &&  (((match8174 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8179 */
                    (unboxed  =  (((match8174 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8185 */
                  { /* cicili#Let8189 */
                    // ----------
                    ;
                    ({ /* cicili#Let8191 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8196 */
                          { /* cicili#Block8198 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8203 */
                          // ----------
                          ;
                          { /* cicili#Block8205 */
                            { /* cicili#Block8210 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8215 */
                  // ----------
                  ;
                  ({ /* cicili#Let8217 */
                    bool __h_case_result  = (true  &&  ((match8174 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8222 */
                        { /* cicili#Block8227 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8230 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let8234 */
            __auto_type match8233  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8233 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8237 */
              bool __h_case_result  = (true  &&  (((match8233 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8238 */
                    (unboxed  =  (((match8233 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8244 */
                  { /* cicili#Let8248 */
                    // ----------
                    ;
                    ({ /* cicili#Let8250 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8255 */
                          { /* cicili#Block8257 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8262 */
                          // ----------
                          ;
                          { /* cicili#Block8264 */
                            { /* cicili#Block8269 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8274 */
                  // ----------
                  ;
                  ({ /* cicili#Let8276 */
                    bool __h_case_result  = (true  &&  ((match8233 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8281 */
                        { /* cicili#Block8286 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8289 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let8293 */
            __auto_type match8292  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8292 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8296 */
              bool __h_case_result  = (true  &&  (((match8292 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8297 */
                    (unboxed  =  (((match8292 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8303 */
                  { /* cicili#Let8307 */
                    // ----------
                    ;
                    ({ /* cicili#Let8309 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8314 */
                          { /* cicili#Block8316 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8321 */
                          // ----------
                          ;
                          { /* cicili#Block8323 */
                            { /* cicili#Block8328 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8333 */
                  // ----------
                  ;
                  ({ /* cicili#Let8335 */
                    bool __h_case_result  = (true  &&  ((match8292 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8340 */
                        { /* cicili#Block8345 */
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
        ({ /* cicili#Let8348 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let8352 */
            __auto_type match8351  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8351 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8355 */
              bool __h_case_result  = (true  &&  (((match8351 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8356 */
                    (unboxed  =  (((match8351 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8362 */
                  { /* cicili#Let8366 */
                    // ----------
                    ;
                    ({ /* cicili#Let8368 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8373 */
                          { /* cicili#Block8375 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8380 */
                          // ----------
                          ;
                          { /* cicili#Block8382 */
                            { /* cicili#Block8387 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8392 */
                  // ----------
                  ;
                  ({ /* cicili#Let8394 */
                    bool __h_case_result  = (true  &&  ((match8351 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8399 */
                        { /* cicili#Block8404 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8407 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let8411 */
            __auto_type match8410  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8410 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8414 */
              bool __h_case_result  = (true  &&  (((match8410 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8415 */
                    (unboxed  =  (((match8410 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8421 */
                  { /* cicili#Let8425 */
                    // ----------
                    ;
                    ({ /* cicili#Let8427 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8432 */
                          { /* cicili#Block8434 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8439 */
                          // ----------
                          ;
                          { /* cicili#Block8441 */
                            { /* cicili#Block8446 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8451 */
                  // ----------
                  ;
                  ({ /* cicili#Let8453 */
                    bool __h_case_result  = (true  &&  ((match8410 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8458 */
                        { /* cicili#Block8463 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8466 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let8470 */
            __auto_type match8469  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8469 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8473 */
              bool __h_case_result  = (true  &&  (((match8469 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8474 */
                    (unboxed  =  (((match8469 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8480 */
                  { /* cicili#Let8484 */
                    // ----------
                    ;
                    ({ /* cicili#Let8486 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8491 */
                          { /* cicili#Block8493 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8498 */
                          // ----------
                          ;
                          { /* cicili#Block8500 */
                            { /* cicili#Block8505 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8510 */
                  // ----------
                  ;
                  ({ /* cicili#Let8512 */
                    bool __h_case_result  = (true  &&  ((match8469 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8517 */
                        { /* cicili#Block8522 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8525 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let8529 */
            __auto_type match8528  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8528 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8532 */
              bool __h_case_result  = (true  &&  (((match8528 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8533 */
                    (unboxed  =  (((match8528 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8539 */
                  { /* cicili#Let8543 */
                    // ----------
                    ;
                    ({ /* cicili#Let8545 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8550 */
                          { /* cicili#Block8552 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8557 */
                          // ----------
                          ;
                          { /* cicili#Block8559 */
                            { /* cicili#Block8564 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8569 */
                  // ----------
                  ;
                  ({ /* cicili#Let8571 */
                    bool __h_case_result  = (true  &&  ((match8528 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8576 */
                        { /* cicili#Block8581 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8584 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let8588 */
            __auto_type match8587  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8587 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8591 */
              bool __h_case_result  = (true  &&  (((match8587 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8592 */
                    (unboxed  =  (((match8587 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8598 */
                  { /* cicili#Let8602 */
                    // ----------
                    ;
                    ({ /* cicili#Let8604 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8609 */
                          { /* cicili#Block8611 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8616 */
                          // ----------
                          ;
                          { /* cicili#Block8618 */
                            { /* cicili#Block8623 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8628 */
                  // ----------
                  ;
                  ({ /* cicili#Let8630 */
                    bool __h_case_result  = (true  &&  ((match8587 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8635 */
                        { /* cicili#Block8640 */
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
      ({ /* cicili#Let8643 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8645 */
          __auto_type v033  = ({ /* cicili#Let8648 */
            StringBuffer_int tmp_buf8647  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8647 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8657 */
          __auto_type v055  = ({ /* cicili#Let8660 */
            StringBuffer_char tmp_buf8659  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8659 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8669 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8672 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8675 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8678 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8681 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8684 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8687 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8690 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8693 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8696 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8699 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8702 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8705 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8708 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8711 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8714 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8717 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8720 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8723 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8726 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8729 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8732 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        // ----------
        ({ /* cicili#Let8736 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let8740 */
            __auto_type match8739  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8739 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8743 */
              bool __h_case_result  = (true  &&  (((match8739 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8744 */
                    (unboxed  =  (((match8739 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8750 */
                  { /* cicili#Let8754 */
                    // ----------
                    ;
                    ({ /* cicili#Let8756 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8761 */
                          { /* cicili#Block8763 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8768 */
                          // ----------
                          ;
                          { /* cicili#Block8770 */
                            { /* cicili#Block8775 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8780 */
                  // ----------
                  ;
                  ({ /* cicili#Let8782 */
                    bool __h_case_result  = (true  &&  ((match8739 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8787 */
                        { /* cicili#Block8792 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8795 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let8799 */
            __auto_type match8798  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8798 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8802 */
              bool __h_case_result  = (true  &&  (((match8798 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8803 */
                    (unboxed  =  (((match8798 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8809 */
                  { /* cicili#Let8813 */
                    // ----------
                    ;
                    ({ /* cicili#Let8815 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8820 */
                          { /* cicili#Block8822 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8827 */
                          // ----------
                          ;
                          { /* cicili#Block8829 */
                            { /* cicili#Block8834 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8839 */
                  // ----------
                  ;
                  ({ /* cicili#Let8841 */
                    bool __h_case_result  = (true  &&  ((match8798 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8846 */
                        { /* cicili#Block8851 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8854 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let8858 */
            __auto_type match8857  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8857 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8861 */
              bool __h_case_result  = (true  &&  (((match8857 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8862 */
                    (unboxed  =  (((match8857 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8868 */
                  { /* cicili#Let8872 */
                    // ----------
                    ;
                    ({ /* cicili#Let8874 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8879 */
                          { /* cicili#Block8881 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8886 */
                          // ----------
                          ;
                          { /* cicili#Block8888 */
                            { /* cicili#Block8893 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8898 */
                  // ----------
                  ;
                  ({ /* cicili#Let8900 */
                    bool __h_case_result  = (true  &&  ((match8857 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8905 */
                        { /* cicili#Block8910 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8913 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let8917 */
            __auto_type match8916  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8916 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8920 */
              bool __h_case_result  = (true  &&  (((match8916 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8921 */
                    (unboxed  =  (((match8916 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8927 */
                  { /* cicili#Let8931 */
                    // ----------
                    ;
                    ({ /* cicili#Let8933 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8938 */
                          { /* cicili#Block8940 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8945 */
                          // ----------
                          ;
                          { /* cicili#Block8947 */
                            { /* cicili#Block8952 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8957 */
                  // ----------
                  ;
                  ({ /* cicili#Let8959 */
                    bool __h_case_result  = (true  &&  ((match8916 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8964 */
                        { /* cicili#Block8969 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8972 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let8976 */
            __auto_type match8975  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8975 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8979 */
              bool __h_case_result  = (true  &&  (((match8975 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8980 */
                    (unboxed  =  (((match8975 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8986 */
                  { /* cicili#Let8990 */
                    // ----------
                    ;
                    ({ /* cicili#Let8992 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8997 */
                          { /* cicili#Block8999 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9004 */
                          // ----------
                          ;
                          { /* cicili#Block9006 */
                            { /* cicili#Block9011 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9016 */
                  // ----------
                  ;
                  ({ /* cicili#Let9018 */
                    bool __h_case_result  = (true  &&  ((match8975 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9023 */
                        { /* cicili#Block9028 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9031 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let9035 */
            __auto_type match9034  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9034 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9038 */
              bool __h_case_result  = (true  &&  (((match9034 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9039 */
                    (unboxed  =  (((match9034 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9045 */
                  { /* cicili#Let9049 */
                    // ----------
                    ;
                    ({ /* cicili#Let9051 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9056 */
                          { /* cicili#Block9058 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9063 */
                          // ----------
                          ;
                          { /* cicili#Block9065 */
                            { /* cicili#Block9070 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9075 */
                  // ----------
                  ;
                  ({ /* cicili#Let9077 */
                    bool __h_case_result  = (true  &&  ((match9034 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9082 */
                        { /* cicili#Block9087 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9090 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let9094 */
            __auto_type match9093  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9093 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9097 */
              bool __h_case_result  = (true  &&  (((match9093 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9098 */
                    (unboxed  =  (((match9093 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9104 */
                  { /* cicili#Let9108 */
                    // ----------
                    ;
                    ({ /* cicili#Let9110 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9115 */
                          { /* cicili#Block9117 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9122 */
                          // ----------
                          ;
                          { /* cicili#Block9124 */
                            { /* cicili#Block9129 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9134 */
                  // ----------
                  ;
                  ({ /* cicili#Let9136 */
                    bool __h_case_result  = (true  &&  ((match9093 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9141 */
                        { /* cicili#Block9146 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9149 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let9153 */
            __auto_type match9152  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9152 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9156 */
              bool __h_case_result  = (true  &&  (((match9152 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9157 */
                    (unboxed  =  (((match9152 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9163 */
                  { /* cicili#Let9167 */
                    // ----------
                    ;
                    ({ /* cicili#Let9169 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9174 */
                          { /* cicili#Block9176 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9181 */
                          // ----------
                          ;
                          { /* cicili#Block9183 */
                            { /* cicili#Block9188 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9193 */
                  // ----------
                  ;
                  ({ /* cicili#Let9195 */
                    bool __h_case_result  = (true  &&  ((match9152 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9200 */
                        { /* cicili#Block9205 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9208 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let9212 */
            __auto_type match9211  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9211 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9215 */
              bool __h_case_result  = (true  &&  (((match9211 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9216 */
                    (unboxed  =  (((match9211 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9222 */
                  { /* cicili#Let9226 */
                    // ----------
                    ;
                    ({ /* cicili#Let9228 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9233 */
                          { /* cicili#Block9235 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9240 */
                          // ----------
                          ;
                          { /* cicili#Block9242 */
                            { /* cicili#Block9247 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9252 */
                  // ----------
                  ;
                  ({ /* cicili#Let9254 */
                    bool __h_case_result  = (true  &&  ((match9211 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9259 */
                        { /* cicili#Block9264 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9267 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let9271 */
            __auto_type match9270  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9270 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9274 */
              bool __h_case_result  = (true  &&  (((match9270 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9275 */
                    (unboxed  =  (((match9270 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9281 */
                  { /* cicili#Let9285 */
                    // ----------
                    ;
                    ({ /* cicili#Let9287 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9292 */
                          { /* cicili#Block9294 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9299 */
                          // ----------
                          ;
                          { /* cicili#Block9301 */
                            { /* cicili#Block9306 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9311 */
                  // ----------
                  ;
                  ({ /* cicili#Let9313 */
                    bool __h_case_result  = (true  &&  ((match9270 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9318 */
                        { /* cicili#Block9323 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9326 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let9330 */
            __auto_type match9329  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9329 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9333 */
              bool __h_case_result  = (true  &&  (((match9329 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9334 */
                    (unboxed  =  (((match9329 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9340 */
                  { /* cicili#Let9344 */
                    // ----------
                    ;
                    ({ /* cicili#Let9346 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9351 */
                          { /* cicili#Block9353 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9358 */
                          // ----------
                          ;
                          { /* cicili#Block9360 */
                            { /* cicili#Block9365 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9370 */
                  // ----------
                  ;
                  ({ /* cicili#Let9372 */
                    bool __h_case_result  = (true  &&  ((match9329 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9377 */
                        { /* cicili#Block9382 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9385 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let9389 */
            __auto_type match9388  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9388 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9392 */
              bool __h_case_result  = (true  &&  (((match9388 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9393 */
                    (unboxed  =  (((match9388 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9399 */
                  { /* cicili#Let9403 */
                    // ----------
                    ;
                    ({ /* cicili#Let9405 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9410 */
                          { /* cicili#Block9412 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9417 */
                          // ----------
                          ;
                          { /* cicili#Block9419 */
                            { /* cicili#Block9424 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9429 */
                  // ----------
                  ;
                  ({ /* cicili#Let9431 */
                    bool __h_case_result  = (true  &&  ((match9388 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9436 */
                        { /* cicili#Block9441 */
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
