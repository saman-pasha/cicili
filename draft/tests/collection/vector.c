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
    StringBuffer_int (*resize) (StringBuffer_int sb , size_t size );
    StringBuffer_int (*new) (size_t step , bool null_terminated );
    StringBuffer_int (*newCapacity) (size_t capacity , size_t step , bool null_terminated );
    StringBuffer_int (*copySlice) (StringBuffer_int sb , size_t cursor , size_t size );
    StringBuffer_int (*copy) (StringBuffer_int sb );
    StringBuffer_int (*put) (StringBuffer_int sb , const int data );
    StringBuffer_int (*print) (StringBuffer_int sb , const int * data , size_t len );
} StringBuffer_int__H_Table;
typedef struct StringBuffer_int {
  const StringBuffer_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion164 */
    struct { /* ciciliStruct165 */
      int * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct166 */
      int * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct167 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_int;
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , size_t cursor , size_t size , size_t step );
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
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t size );
StringBuffer_int new_StringBuffer_int (size_t step , bool null_terminated );
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step , bool null_terminated );
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t cursor , size_t size );
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb );
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data );
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , size_t len );
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
  union { /* ciciliUnion235 */
    struct { /* ciciliStruct236 */
      Vector_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct237 */
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
  union { /* ciciliUnion267 */
    struct { /* ciciliStruct268 */
      Vector_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct269 */
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
    Vector_int (*resize) (Vector_int vector , size_t len );
    Vector_int (*pure) (size_t step );
    Vector_int (*pureCapacity) (size_t capacity , size_t step );
    int * (*toArray) (Vector_int vector );
    Vector_int (*wrap) (const int item );
    size_t (*show) (CFile file , Vector_int vector );
    Vector_int (*copy) (Vector_int vector );
    Vector_int (*replaceAt) (Vector_int vector , int item , size_t index );
    Vector_int (*deleteAt) (Vector_int vector , size_t index );
    Vector_int (*insertAt) (Vector_int vector , int item , size_t index );
    Vector_int (*reverse) (Vector_int vector );
    Vector_int (*append) (Vector_int lvector , Vector_int rvector );
    Vector_int (*push) (int item , Vector_int vector );
    Vector_int (*take) (size_t len , Vector_int vector );
    Vector_int (*last) (Vector_int vector );
    Vector_int (*init) (Vector_int vector );
    size_t (*hasLen) (Vector_int vector , size_t desired );
    size_t (*len) (Vector_int vector );
    Vector_int (*tail) (Vector_int vector );
    Vector_int (*drop) (size_t index , Vector_int vector );
    Maybe_int (*head) (Vector_int list );
    Maybe_int (*nth) (size_t index , Vector_int vector );
} Vector_int__H_Table;
typedef struct class_Vector_int {
  const Vector_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion329 */
    struct { /* ciciliStruct330 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct331 */
      Vector_int __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct332 */
    } None , _ ;
  } __h_data ;
} class_Vector_int;
Vector_int Buffer_int (StringBuffer_int buffer );
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size );
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
Vector_int resize_Vector_int (Vector_int vector , size_t len );
Vector_int pure_Vector_int (size_t step );
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step );
int * toArray_Vector_int (Vector_int vector );
Vector_int wrap_Vector_int (const int item );
size_t show_Vector_int (CFile file , Vector_int vector );
Vector_int copy_Vector_int (Vector_int vector );
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index );
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index );
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index );
Vector_int reverse_Vector_int (Vector_int vector );
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector );
Vector_int push_Vector_int (int item , Vector_int vector );
Vector_int take_Vector_int (size_t len , Vector_int vector );
Vector_int last_Vector_int (Vector_int vector );
Vector_int init_Vector_int (Vector_int vector );
size_t hasLen_Vector_int (Vector_int vector , size_t desired );
size_t len_Vector_int (Vector_int vector );
Vector_int tail_Vector_int (Vector_int vector );
Vector_int drop_Vector_int (size_t index , Vector_int vector );
Maybe_int head_Vector_int (Vector_int list );
Maybe_int nth_Vector_int (size_t index , Vector_int vector );
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
  union { /* ciciliUnion430 */
    struct { /* ciciliStruct431 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct432 */
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
  { /* cicili#Let462 */
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
  { /* cicili#Let467 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __StringBuffer_int__H_IMPL__
#define __StringBuffer_int__H_IMPL__
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let479 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let481 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn482 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn484 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn486 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn491 */
            ({ /* cicili#Let493 */
              int * new_buffer  = realloc (buffer , (len  *  sizeof(int) ));
              // ----------
              MakeStringBuffer_int (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
            });
          }) : ({ /* cicili#Let498 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let500 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn501 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn503 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn505 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn510 */
                  ({ /* cicili#Let512 */
                    int * new_buffer  = realloc (buffer , (len  *  sizeof(int) ));
                    // ----------
                    MakeNullTerminatedBuffer_int (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
                  });
                }) : ({ /* cicili#Let517 */
                  // ----------
                  ;
                  ({ /* cicili#Progn519 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int new_StringBuffer_int (size_t step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return newCapacity_StringBuffer_int (step , step , null_terminated );
}
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ((null_terminated ) ? ({ /* cicili#Let531 */
        int * buffer  = malloc (((capacity  +  1 ) *  sizeof(int) ));
        StringBuffer_int sb  = MakeNullTerminatedBuffer_int (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((int)'\0');
        sb ;
      }) : ({ /* cicili#Let535 */
        int * buffer  = malloc ((capacity  *  sizeof(int) ));
        StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t pos , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let544 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let546 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn547 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn549 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn551 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn556 */
            ({ /* cicili#Let558 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let567 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let569 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn570 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn572 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn574 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn579 */
                  ({ /* cicili#Let581 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let590 */
                  // ----------
                  ;
                  ({ /* cicili#Progn592 */
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
  return ({ /* cicili#Let601 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let603 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn604 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn606 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn608 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn610 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn615 */
            ({ /* cicili#Let617 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let624 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let626 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn627 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn629 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn631 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn633 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn638 */
                  ({ /* cicili#Let640 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                    // ----------
                    print_StringBuffer_int (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let647 */
                  // ----------
                  ;
                  ({ /* cicili#Progn649 */
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
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let663 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let665 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn666 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn668 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn670 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn672 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn677 */
            ({ /* cicili#Let679 */
              size_t blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block683 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let685 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let690 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let692 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn693 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn695 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn697 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn699 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn704 */
                  ({ /* cicili#Let706 */
                    size_t blen  = (len  *  sizeof(int) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block710 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let712 */
                          int * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(int) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((int)'\0');
                    MakeNullTerminatedBuffer_int (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let717 */
                  // ----------
                  ;
                  ({ /* cicili#Progn719 */
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
  { /* cicili#Let727 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let729 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn730 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block736 */
          { /* cicili#Block738 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
      else
        { /* cicili#Let744 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let746 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn747 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block753 */
                { /* cicili#Block755 */
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
  static const StringBuffer_int__H_Table table  = { free_StringBuffer_int , resize_StringBuffer_int , new_StringBuffer_int , newCapacity_StringBuffer_int , copySlice_StringBuffer_int , copy_StringBuffer_int , put_StringBuffer_int , print_StringBuffer_int };
  return (&table );
}
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let765 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , size_t cursor , size_t size , size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let770 */
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
  { /* cicili#Let775 */
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
  { /* cicili#Let797 */
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
  { /* cicili#Let802 */
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
  return ({ /* cicili#Let809 */
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
  return ({ /* cicili#Let818 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let820 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn821 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn823 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn825 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn830 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn833 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let839 */
            // ----------
            ;
            ({ /* cicili#Progn841 */
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
  return ({ /* cicili#Let849 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let851 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn852 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn854 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn856 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn861 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let865 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block871 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let876 */
            // ----------
            ;
            ({ /* cicili#Progn878 */
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
  return ({ /* cicili#Let886 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let888 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn889 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn891 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn893 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn898 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let905 */
            // ----------
            ;
            ({ /* cicili#Progn907 */
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
  { /* cicili#Let916 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let918 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn919 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn921 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn923 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block929 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block932 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block940 */
                if ((*count ) ==  1 )
                  { /* cicili#Block943 */
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
        { /* cicili#Let953 */
          // ----------
          ;
          ({ /* cicili#Let955 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block960 */
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
  { /* cicili#Let971 */
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
  { /* cicili#Let976 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let982 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let986 */
        __auto_type match985  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match985 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let989 */
          bool __h_case_result  = (true  &&  (((match985 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn990 */
                (unboxed  =  (((match985 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn995 */
              ({ /* cicili#Let999 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1001 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1002 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1007 */
                      ({ /* cicili#Progn1009 */
                        { /* cicili#Let1013 */
                          __auto_type match1012  = take_Box_Vector_int ((&vector ));
                          typeof((((match1012 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1016 */
                            bool __h_case_result  = (true  &&  (((match1012 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1017 */
                                  (ptr  =  (((match1012 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1023 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (resize_StringBuffer_int (sb , len ));
                      });
                    }) : ({ /* cicili#Let1029 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1031 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1032 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1034 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1039 */
                            ({ /* cicili#Let1042 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1046 */
                                __auto_type match1045  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1045 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1049 */
                                  bool __h_case_result  = (true  &&  (((match1045 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1050 */
                                        (unboxed  =  (((match1045 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1055 */
                                      ({ /* cicili#Let1059 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1061 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1062 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1067 */
                                              ({ /* cicili#Let1071 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1073 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1074 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1076 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1081 */
                                                      ({ /* cicili#Let1083 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , false );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1091 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1093 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1094 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1096 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1101 */
                                                            ({ /* cicili#Let1103 */
                                                              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , true );
                                                              // ----------
                                                              Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                            });
                                                          }) : ({ /* cicili#Let1111 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1113 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1117 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1119 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1120 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1125 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1130 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1132 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1137 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1139 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1144 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1146 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1151 */
              // ----------
              ;
              ({ /* cicili#Progn1153 */
                clone_Box_Vector_int (vector );
              });
            }));
        });
      });
    });
}
Vector_int pure_Vector_int (size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_int (step , step );
}
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step ) {
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
  return ({ /* cicili#Let1167 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1171 */
        __auto_type match1170  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1170 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1174 */
          bool __h_case_result  = (true  &&  (((match1170 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1175 */
                (unboxed  =  (((match1170 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1180 */
              ({ /* cicili#Let1184 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1186 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1187 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1192 */
                      ({ /* cicili#Let1196 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1198 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1199 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1204 */
                              buffer ;
                            }) : ({ /* cicili#Let1208 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let1210 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1211 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1216 */
                                    buffer ;
                                  }) : ({ /* cicili#Let1220 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1222 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1226 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1228 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1229 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1231 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1236 */
                            ({ /* cicili#Let1239 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1243 */
                                __auto_type match1242  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1242 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1246 */
                                  bool __h_case_result  = (true  &&  (((match1242 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1247 */
                                        (unboxed  =  (((match1242 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1252 */
                                      ({ /* cicili#Let1256 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1258 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1259 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1264 */
                                              ({ /* cicili#Let1268 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1270 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1271 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1276 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1280 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1282 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1283 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1288 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let1292 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1294 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1298 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1300 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1301 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1303 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1308 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1313 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1315 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1319 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1321 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1325 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1327 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1331 */
              // ----------
              ;
              ({ /* cicili#Progn1333 */
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
  return ({ /* cicili#Let1338 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1340 */
        __auto_type new_vec  = pureCapacity_Vector_int (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_int (item , new_vec );
    });
}
size_t show_Vector_int (CFile file , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto size_t show_ (size_t index , Vector_int vector );
  size_t showWithSize (size_t index , size_t size , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1350 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1354 */
          __auto_type match1353  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1353 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1357 */
            bool __h_case_result  = (true  &&  (((match1353 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1358 */
                  (unboxed  =  (((match1353 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1363 */
                ({ /* cicili#Let1367 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1369 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1370 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1375 */
                        ({ /* cicili#Let1379 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1381 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1382 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1387 */
                                ({ /* cicili#Let1389 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1400 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let1402 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1403 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1408 */
                                      ({ /* cicili#Let1410 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1421 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1423 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1427 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1429 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1430 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1432 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1434 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1439 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1443 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1445 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1449 */
                // ----------
                ;
                ({ /* cicili#Progn1451 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1455 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1459 */
          __auto_type match1458  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1458 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1462 */
            bool __h_case_result  = (true  &&  (((match1458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1463 */
                  (unboxed  =  (((match1458 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1468 */
                ({ /* cicili#Let1472 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1474 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1475 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1480 */
                        ({ /* cicili#Let1484 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1486 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1487 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1489 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1494 */
                                ({ /* cicili#Let1496 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1507 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1509 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1510 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1512 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1517 */
                                      ({ /* cicili#Let1519 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1530 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1532 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1536 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1538 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1539 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1541 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1543 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1548 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1552 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1554 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1558 */
                // ----------
                ;
                ({ /* cicili#Progn1560 */
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
  return ({ /* cicili#Let1565 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1569 */
        __auto_type match1568  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1568 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1572 */
          bool __h_case_result  = (true  &&  (((match1568 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1573 */
                (unboxed  =  (((match1568 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1578 */
              ({ /* cicili#Let1582 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1584 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1585 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1590 */
                      ({ /* cicili#Let1594 */
                        // ----------
                        ;
                        ({ /* cicili#Let1596 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1600 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1606 */
                              // ----------
                              ;
                              ({ /* cicili#Let1608 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1612 */
                                    Buffer_int (copy_StringBuffer_int (sb ));
                                  }) : ({ /* cicili#Let1618 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1620 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1625 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1627 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1628 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1630 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1632 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1637 */
                            ({ /* cicili#Let1640 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1644 */
                                __auto_type match1643  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1643 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1647 */
                                  bool __h_case_result  = (true  &&  (((match1643 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1648 */
                                        (unboxed  =  (((match1643 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1653 */
                                      ({ /* cicili#Let1657 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1659 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1660 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1665 */
                                              ({ /* cicili#Let1669 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1671 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1675 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1681 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1683 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1687 */
                                                            Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let1693 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1695 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1700 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1702 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1703 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1708 */
                                                    copy_Vector_int (veci );
                                                  }) : ({ /* cicili#Let1713 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1715 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1720 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1722 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1727 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1729 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1734 */
              // ----------
              ;
              ({ /* cicili#Progn1736 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1742 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1746 */
        __auto_type match1745  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1745 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1749 */
          bool __h_case_result  = (true  &&  (((match1745 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1750 */
                (unboxed  =  (((match1745 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1755 */
              ({ /* cicili#Let1759 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1761 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1762 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1767 */
                      ({ /* cicili#Progn1769 */
                        { /* cicili#Let1773 */
                          __auto_type match1772  = take_Box_Vector_int ((&vector ));
                          typeof((((match1772 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1776 */
                            bool __h_case_result  = (true  &&  (((match1772 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1777 */
                                  (ptr  =  (((match1772 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1783 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1787 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1789 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1790 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1792 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1797 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn1800 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_int (sb );
                                  }) : Buffer_int (sb ));
                              }) : ({ /* cicili#Let1806 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1808 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1809 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1811 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1816 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn1819 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (sb );
                                        }) : Buffer_int (sb ));
                                    }) : ({ /* cicili#Let1825 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1827 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1832 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1834 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1835 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1837 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1839 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1844 */
                            ({ /* cicili#Let1847 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1851 */
                                __auto_type match1850  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1850 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1854 */
                                  bool __h_case_result  = (true  &&  (((match1850 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1855 */
                                        (unboxed  =  (((match1850 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1860 */
                                      ({ /* cicili#Let1864 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1866 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1867 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1872 */
                                              ({ /* cicili#Let1876 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1878 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1879 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1881 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1886 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1889 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1899 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1901 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1902 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1904 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1909 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let1912 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
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
                                                    replaceAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
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
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
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
                      ({ /* cicili#Progn1999 */
                        { /* cicili#Let2003 */
                          __auto_type match2002  = take_Box_Vector_int ((&vector ));
                          typeof((((match2002 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2006 */
                            bool __h_case_result  = (true  &&  (((match2002 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2007 */
                                  (ptr  =  (((match2002 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2013 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2017 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let2019 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2020 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn2022 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn2024 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2026 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2031 */
                                ({ /* cicili#Progn2033 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let2041 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let2043 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2044 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn2046 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn2048 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2050 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2055 */
                                      ({ /* cicili#Progn2057 */
                                        for (size_t i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_int (MakeNullTerminatedBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let2065 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2067 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2072 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2074 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2075 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2077 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2079 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2084 */
                            ({ /* cicili#Let2087 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2091 */
                                __auto_type match2090  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2090 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2094 */
                                  bool __h_case_result  = (true  &&  (((match2090 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2095 */
                                        (unboxed  =  (((match2090 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2100 */
                                      ({ /* cicili#Let2104 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2106 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2107 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2112 */
                                              ({ /* cicili#Let2116 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2118 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2119 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2121 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2126 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2129 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2138 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2140 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2141 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2143 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2148 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2151 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2160 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2162 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2166 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2168 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2169 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2171 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2176 */
                                                    deleteAt_Vector_int (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let2181 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2183 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2188 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2190 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2195 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2197 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2202 */
              // ----------
              ;
              ({ /* cicili#Progn2204 */
                clone_Box_Vector_int (vector );
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2210 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2214 */
        __auto_type match2213  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2213 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2217 */
          bool __h_case_result  = (true  &&  (((match2213 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2218 */
                (unboxed  =  (((match2213 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2223 */
              ({ /* cicili#Let2227 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2229 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2230 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2235 */
                      ({ /* cicili#Let2237 */
                        StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                        // ----------
                        { /* cicili#Let2243 */
                          __auto_type match2242  = take_Box_Vector_int ((&vector ));
                          typeof((((match2242 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2246 */
                            bool __h_case_result  = (true  &&  (((match2242 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2247 */
                                  (ptr  =  (((match2242 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2253 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2257 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2259 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2260 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2262 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2267 */
                                ({ /* cicili#Progn2269 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_int (new_sb );
                                });
                              }) : ({ /* cicili#Let2276 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let2278 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2279 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn2281 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2286 */
                                      ({ /* cicili#Progn2288 */
                                        for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_int (new_sb );
                                      });
                                    }) : ({ /* cicili#Let2295 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2297 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2302 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2304 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2305 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2307 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2309 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2314 */
                            ({ /* cicili#Let2317 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2321 */
                                __auto_type match2320  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2320 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2324 */
                                  bool __h_case_result  = (true  &&  (((match2320 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2325 */
                                        (unboxed  =  (((match2320 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2330 */
                                      ({ /* cicili#Let2334 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2336 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2337 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2342 */
                                              ({ /* cicili#Let2346 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2348 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2349 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2351 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2356 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2359 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2369 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2371 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2372 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2374 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2379 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2382 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2392 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2394 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2398 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2400 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2401 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2403 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2408 */
                                                    insertAt_Vector_int (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let2413 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2415 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2420 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2422 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2427 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2429 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2434 */
              // ----------
              ;
              ({ /* cicili#Progn2436 */
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
  return ({ /* cicili#Let2442 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2446 */
        __auto_type match2445  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2445 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2449 */
          bool __h_case_result  = (true  &&  (((match2445 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2450 */
                (unboxed  =  (((match2445 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2455 */
              ({ /* cicili#Let2459 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2461 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2462 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2467 */
                      ({ /* cicili#Let2471 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2473 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2474 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2476 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2478 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2480 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2485 */
                              ({ /* cicili#Let2487 */
                                int tmp ;
                                // ----------
                                { /* cicili#Let2491 */
                                  __auto_type match2490  = take_Box_Vector_int ((&vector ));
                                  typeof((((match2490 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2494 */
                                    bool __h_case_result  = (true  &&  (((match2490 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2495 */
                                          (ptr  =  (((match2490 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2501 */
                                        free (ptr );
                                      }
                                  });
                                }
                                for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                    tmp  = (*(buffer  +  i  ));
                                    (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                    (*(buffer  +  (j  -  1 ) )) = tmp ;
                                }
                                Buffer_int (MakeStringBuffer_int (buffer , cursor , size , step ));
                              });
                            }) : ({ /* cicili#Let2509 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let2511 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2512 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2514 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2516 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn2518 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2523 */
                                    ({ /* cicili#Let2525 */
                                      int tmp ;
                                      // ----------
                                      { /* cicili#Let2529 */
                                        __auto_type match2528  = take_Box_Vector_int ((&vector ));
                                        typeof((((match2528 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2532 */
                                          bool __h_case_result  = (true  &&  (((match2528 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2533 */
                                                (ptr  =  (((match2528 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2539 */
                                              free (ptr );
                                            }
                                        });
                                      }
                                      for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                          tmp  = (*(buffer  +  i  ));
                                          (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                          (*(buffer  +  (j  -  1 ) )) = tmp ;
                                      }
                                      Buffer_int (MakeNullTerminatedBuffer_int (buffer , cursor , size , step ));
                                    });
                                  }) : ({ /* cicili#Let2547 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2549 */
                                      clone_Box_Vector_int (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2554 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2556 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2557 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2559 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2561 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2566 */
                            ({ /* cicili#Let2569 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2573 */
                                __auto_type match2572  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2572 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2576 */
                                  bool __h_case_result  = (true  &&  (((match2572 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2577 */
                                        (unboxed  =  (((match2572 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2582 */
                                      ({ /* cicili#Let2586 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2588 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2589 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2594 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2601 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2603 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2604 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2609 */
                                                    reverse_Vector_int (veci );
                                                  }) : ({ /* cicili#Let2614 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2616 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2621 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2623 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2628 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2630 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2635 */
              // ----------
              ;
              ({ /* cicili#Progn2637 */
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
  return ({ /* cicili#Let2643 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2647 */
        __auto_type match2646  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2646 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2650 */
          bool __h_case_result  = (true  &&  (((match2646 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2651 */
                (unboxed  =  (((match2646 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2656 */
              ({ /* cicili#Let2660 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2662 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2663 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2668 */
                      ({ /* cicili#Progn2670 */
                        { /* cicili#Let2674 */
                          __auto_type match2673  = take_Box_Vector_int ((&lvector ));
                          typeof((((match2673 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2677 */
                            bool __h_case_result  = (true  &&  (((match2673 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2678 */
                                  (ptr  =  (((match2673 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2684 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                      });
                    }) : ({ /* cicili#Let2692 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2694 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2695 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2697 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2699 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2704 */
                            ({ /* cicili#Let2707 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2711 */
                                __auto_type match2710  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2710 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2714 */
                                  bool __h_case_result  = (true  &&  (((match2710 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2715 */
                                        (unboxed  =  (((match2710 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2720 */
                                      ({ /* cicili#Let2724 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2726 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2727 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2732 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2741 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2743 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2744 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2749 */
                                                    append_Vector_int (veci , rvector );
                                                  }) : ({ /* cicili#Let2754 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2756 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2761 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2763 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2768 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2770 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2775 */
              // ----------
              ;
              ({ /* cicili#Progn2777 */
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
  return ({ /* cicili#Let2783 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2787 */
        __auto_type match2786  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2786 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2790 */
          bool __h_case_result  = (true  &&  (((match2786 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2791 */
                (unboxed  =  (((match2786 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2796 */
              ({ /* cicili#Let2800 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2802 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2803 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2808 */
                      ({ /* cicili#Progn2810 */
                        { /* cicili#Let2814 */
                          __auto_type match2813  = take_Box_Vector_int ((&vector ));
                          typeof((((match2813 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2817 */
                            bool __h_case_result  = (true  &&  (((match2813 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2818 */
                                  (ptr  =  (((match2813 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2824 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (put_StringBuffer_int (sb , item ));
                      });
                    }) : ({ /* cicili#Let2830 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2832 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2833 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2835 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2837 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2842 */
                            ({ /* cicili#Let2845 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2849 */
                                __auto_type match2848  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2848 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2852 */
                                  bool __h_case_result  = (true  &&  (((match2848 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2853 */
                                        (unboxed  =  (((match2848 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2858 */
                                      ({ /* cicili#Let2862 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2864 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2865 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2870 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2877 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2879 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2880 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2885 */
                                                    push_Vector_int (item , veci );
                                                  }) : ({ /* cicili#Let2890 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2892 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2897 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2899 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2904 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2906 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2911 */
              // ----------
              ;
              ({ /* cicili#Progn2913 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let2919 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2923 */
        __auto_type match2922  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2922 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2926 */
          bool __h_case_result  = (true  &&  (((match2922 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2927 */
                (unboxed  =  (((match2922 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2932 */
              ({ /* cicili#Let2936 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2938 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2939 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2944 */
                      ({ /* cicili#Let2948 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2950 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2951 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2956 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2968 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let2970 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2971 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2976 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let2988 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn2990 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2996 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2998 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn2999 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3001 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3006 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), 0, 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), 0, len ) : Slice_int (clone_Box_Vector_int (vec ), 0, 0)));
                          }) : ({ /* cicili#Let3018 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3020 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3025 */
              // ----------
              ;
              ({ /* cicili#Progn3027 */
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
  return ({ /* cicili#Let3033 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3037 */
        __auto_type match3036  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3036 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3040 */
          bool __h_case_result  = (true  &&  (((match3036 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3041 */
                (unboxed  =  (((match3036 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3046 */
              ({ /* cicili#Let3050 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3052 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3053 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3058 */
                      ({ /* cicili#Let3062 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3064 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3065 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3070 */
                              Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let3076 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3078 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3079 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3084 */
                                    Slice_int (clone_Box_Vector_int (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let3090 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3092 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3097 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3099 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3100 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3102 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3107 */
                            Slice_int (clone_Box_Vector_int (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let3113 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3115 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3120 */
              // ----------
              ;
              ({ /* cicili#Progn3122 */
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
  return ({ /* cicili#Let3128 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3132 */
        __auto_type match3131  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3131 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3135 */
          bool __h_case_result  = (true  &&  (((match3131 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3136 */
                (unboxed  =  (((match3131 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3141 */
              ({ /* cicili#Let3145 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3147 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3148 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3153 */
                      ({ /* cicili#Let3157 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3159 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3160 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3165 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3171 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3173 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3174 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3179 */
                                    Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let3185 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3187 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3192 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3194 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3195 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3197 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3199 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3204 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3210 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3212 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3217 */
              // ----------
              ;
              ({ /* cicili#Progn3219 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3224 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3231 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3235 */
        __auto_type match3234  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3234 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3238 */
          bool __h_case_result  = (true  &&  (((match3234 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3239 */
                (unboxed  =  (((match3234 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3244 */
              ({ /* cicili#Let3248 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3250 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3251 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3256 */
                      ({ /* cicili#Let3260 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3262 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3263 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3268 */
                              cursor ;
                            }) : ({ /* cicili#Let3272 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3274 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3275 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3280 */
                                    cursor ;
                                  }) : ({ /* cicili#Let3284 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3286 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3290 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3292 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3293 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3298 */
                            size ;
                          }) : ({ /* cicili#Let3302 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3304 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3308 */
              // ----------
              ;
              ({ /* cicili#Progn3310 */
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
Vector_int drop_Vector_int (size_t len , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3318 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3322 */
        __auto_type match3321  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3321 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3325 */
          bool __h_case_result  = (true  &&  (((match3321 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3326 */
                (unboxed  =  (((match3321 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3331 */
              ({ /* cicili#Let3335 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3337 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3338 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3343 */
                      ({ /* cicili#Let3347 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3349 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3350 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3355 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3367 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3369 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3370 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3375 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let3387 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3389 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3395 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3397 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3398 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3400 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3405 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3410 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3412 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3417 */
              // ----------
              ;
              ({ /* cicili#Progn3419 */
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
  return ({ /* cicili#Let3426 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3430 */
        __auto_type match3429  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3429 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3433 */
          bool __h_case_result  = (true  &&  (((match3429 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3434 */
                (unboxed  =  (((match3429 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3439 */
              ({ /* cicili#Let3443 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3445 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3446 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3451 */
                      ({ /* cicili#Let3455 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3457 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3458 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3460 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3465 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3472 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3474 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3475 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3477 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3482 */
                                    (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                                  }) : ({ /* cicili#Let3489 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3491 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3496 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3498 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3499 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3501 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3506 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3511 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3513 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3518 */
              // ----------
              ;
              ({ /* cicili#Progn3520 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let3527 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3531 */
        __auto_type match3530  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3530 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3534 */
          bool __h_case_result  = (true  &&  (((match3530 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3535 */
                (unboxed  =  (((match3530 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3540 */
              ({ /* cicili#Let3544 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3546 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3547 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3552 */
                      ({ /* cicili#Let3556 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3558 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3559 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3561 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3566 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3573 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3575 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3576 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3578 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3583 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                                  }) : ({ /* cicili#Let3590 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3592 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3597 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3599 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3600 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3602 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3604 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3609 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3616 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3618 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3623 */
              // ----------
              ;
              ({ /* cicili#Progn3625 */
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
  { /* cicili#Let3630 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3634 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3636 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3637 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3643 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3649 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3651 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3652 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3658 */
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
  static Vector_int__H_Table table  = { free_Vector_int_x , resize_Vector_int , pure_Vector_int , pureCapacity_Vector_int , toArray_Vector_int , wrap_Vector_int , show_Vector_int , copy_Vector_int , replaceAt_Vector_int , deleteAt_Vector_int , insertAt_Vector_int , reverse_Vector_int , append_Vector_int , push_Vector_int , take_Vector_int , last_Vector_int , init_Vector_int , hasLen_Vector_int , len_Vector_int , tail_Vector_int , drop_Vector_int , head_Vector_int , nth_Vector_int };
  return (&table );
}
Vector_int Buffer_int (StringBuffer_int buffer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3668 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (__h_stack_push (instance ));
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let3676 */
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
  { /* cicili#Let3683 */
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
  { /* cicili#Let3701 */
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
  { /* cicili#Let3706 */
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
  union { /* ciciliUnion3732 */
    struct { /* ciciliStruct3733 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3734 */
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
    StringBuffer_char (*resize) (StringBuffer_char sb , size_t size );
    StringBuffer_char (*new) (size_t step , bool null_terminated );
    StringBuffer_char (*newCapacity) (size_t capacity , size_t step , bool null_terminated );
    StringBuffer_char (*copySlice) (StringBuffer_char sb , size_t cursor , size_t size );
    StringBuffer_char (*copy) (StringBuffer_char sb );
    StringBuffer_char (*put) (StringBuffer_char sb , const char data );
    StringBuffer_char (*print) (StringBuffer_char sb , const char * data , size_t len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3779 */
    struct { /* ciciliStruct3780 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct3781 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct3782 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , size_t cursor , size_t size , size_t step );
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
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t size );
StringBuffer_char new_StringBuffer_char (size_t step , bool null_terminated );
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step , bool null_terminated );
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t cursor , size_t size );
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len );
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
  union { /* ciciliUnion3850 */
    struct { /* ciciliStruct3851 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3852 */
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
  union { /* ciciliUnion3882 */
    struct { /* ciciliStruct3883 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3884 */
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
    Vector_char (*resize) (Vector_char vector , size_t len );
    Vector_char (*pure) (size_t step );
    Vector_char (*pureCapacity) (size_t capacity , size_t step );
    char * (*toArray) (Vector_char vector );
    Vector_char (*wrap) (const char item );
    size_t (*show) (CFile file , Vector_char vector );
    Vector_char (*copy) (Vector_char vector );
    Vector_char (*replaceAt) (Vector_char vector , char item , size_t index );
    Vector_char (*deleteAt) (Vector_char vector , size_t index );
    Vector_char (*insertAt) (Vector_char vector , char item , size_t index );
    Vector_char (*reverse) (Vector_char vector );
    Vector_char (*append) (Vector_char lvector , Vector_char rvector );
    Vector_char (*push) (char item , Vector_char vector );
    Vector_char (*take) (size_t len , Vector_char vector );
    Vector_char (*last) (Vector_char vector );
    Vector_char (*init) (Vector_char vector );
    size_t (*hasLen) (Vector_char vector , size_t desired );
    size_t (*len) (Vector_char vector );
    Vector_char (*tail) (Vector_char vector );
    Vector_char (*drop) (size_t index , Vector_char vector );
    Maybe_char (*head) (Vector_char list );
    Maybe_char (*nth) (size_t index , Vector_char vector );
} Vector_char__H_Table;
typedef struct class_Vector_char {
  const Vector_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3944 */
    struct { /* ciciliStruct3945 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3946 */
      Vector_char __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3947 */
    } None , _ ;
  } __h_data ;
} class_Vector_char;
Vector_char Buffer_char (StringBuffer_char buffer );
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size );
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
Vector_char resize_Vector_char (Vector_char vector , size_t len );
Vector_char pure_Vector_char (size_t step );
Vector_char pureCapacity_Vector_char (size_t capacity , size_t step );
char * toArray_Vector_char (Vector_char vector );
Vector_char wrap_Vector_char (const char item );
size_t show_Vector_char (CFile file , Vector_char vector );
Vector_char copy_Vector_char (Vector_char vector );
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index );
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index );
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index );
Vector_char reverse_Vector_char (Vector_char vector );
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector );
Vector_char push_Vector_char (char item , Vector_char vector );
Vector_char take_Vector_char (size_t len , Vector_char vector );
Vector_char last_Vector_char (Vector_char vector );
Vector_char init_Vector_char (Vector_char vector );
size_t hasLen_Vector_char (Vector_char vector , size_t desired );
size_t len_Vector_char (Vector_char vector );
Vector_char tail_Vector_char (Vector_char vector );
Vector_char drop_Vector_char (size_t index , Vector_char vector );
Maybe_char head_Vector_char (Vector_char list );
Maybe_char nth_Vector_char (size_t index , Vector_char vector );
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
  union { /* ciciliUnion4045 */
    struct { /* ciciliStruct4046 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct4047 */
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
  { /* cicili#Let4077 */
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
  { /* cicili#Let4082 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4094 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4096 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4097 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4099 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4101 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4106 */
            ({ /* cicili#Let4108 */
              char * new_buffer  = realloc (buffer , (len  *  sizeof(char) ));
              // ----------
              MakeStringBuffer_char (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
            });
          }) : ({ /* cicili#Let4113 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4115 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn4116 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4118 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4120 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4125 */
                  ({ /* cicili#Let4127 */
                    char * new_buffer  = realloc (buffer , (len  *  sizeof(char) ));
                    // ----------
                    MakeNullTerminatedBuffer_char (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
                  });
                }) : ({ /* cicili#Let4132 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4134 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char new_StringBuffer_char (size_t step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return newCapacity_StringBuffer_char (step , step , null_terminated );
}
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step , bool null_terminated ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ((null_terminated ) ? ({ /* cicili#Let4146 */
        char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let4150 */
        char * buffer  = malloc ((capacity  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4159 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4161 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4162 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4164 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4166 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4171 */
            ({ /* cicili#Let4173 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let4182 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4184 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn4185 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4187 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4189 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4194 */
                  ({ /* cicili#Let4196 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let4205 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4207 */
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
  return ({ /* cicili#Let4216 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4218 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4219 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4221 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4223 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4225 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4230 */
            ({ /* cicili#Let4232 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let4239 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4241 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn4242 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4244 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn4246 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4248 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4253 */
                  ({ /* cicili#Let4255 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                    // ----------
                    print_StringBuffer_char (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let4262 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4264 */
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
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4278 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4280 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4281 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4283 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4285 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4287 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4292 */
            ({ /* cicili#Let4294 */
              size_t blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4298 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4300 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4305 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4307 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn4308 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4310 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn4312 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4314 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4319 */
                  ({ /* cicili#Let4321 */
                    size_t blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block4325 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let4327 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let4332 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4334 */
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
  { /* cicili#Let4342 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4344 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4345 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4351 */
          { /* cicili#Block4353 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let4359 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let4361 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4362 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4368 */
                { /* cicili#Block4370 */
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
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , resize_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , copySlice_StringBuffer_char , copy_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , size_t cursor , size_t size , size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4380 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , size_t cursor , size_t size , size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let4385 */
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
  { /* cicili#Let4390 */
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
  { /* cicili#Let4412 */
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
  { /* cicili#Let4417 */
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
  return ({ /* cicili#Let4424 */
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
  return ({ /* cicili#Let4433 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4435 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4436 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4438 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4440 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4445 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4448 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4454 */
            // ----------
            ;
            ({ /* cicili#Progn4456 */
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
  return ({ /* cicili#Let4464 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4466 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4467 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4469 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4471 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4476 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4480 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4486 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4491 */
            // ----------
            ;
            ({ /* cicili#Progn4493 */
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
  return ({ /* cicili#Let4501 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4503 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4504 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4506 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4508 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4513 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4520 */
            // ----------
            ;
            ({ /* cicili#Progn4522 */
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
  { /* cicili#Let4531 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4533 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4534 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4536 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4538 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4544 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4547 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4555 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4558 */
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
        { /* cicili#Let4568 */
          // ----------
          ;
          ({ /* cicili#Let4570 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4575 */
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
  { /* cicili#Let4586 */
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
  { /* cicili#Let4591 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_char__H_IMPL__ */ 
Vector_char resize_Vector_char (Vector_char vector , size_t len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let4597 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4601 */
        __auto_type match4600  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4600 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4604 */
          bool __h_case_result  = (true  &&  (((match4600 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4605 */
                (unboxed  =  (((match4600 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4610 */
              ({ /* cicili#Let4614 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4616 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4617 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4622 */
                      ({ /* cicili#Progn4624 */
                        { /* cicili#Let4628 */
                          __auto_type match4627  = take_Box_Vector_char ((&vector ));
                          typeof((((match4627 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let4631 */
                            bool __h_case_result  = (true  &&  (((match4627 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4632 */
                                  (ptr  =  (((match4627 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block4638 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (resize_StringBuffer_char (sb , len ));
                      });
                    }) : ({ /* cicili#Let4644 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let4646 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4647 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4649 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4654 */
                            ({ /* cicili#Let4657 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4661 */
                                __auto_type match4660  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4660 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4664 */
                                  bool __h_case_result  = (true  &&  (((match4660 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4665 */
                                        (unboxed  =  (((match4660 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4670 */
                                      ({ /* cicili#Let4674 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4676 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4677 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4682 */
                                              ({ /* cicili#Let4686 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4688 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4689 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn4691 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4696 */
                                                      ({ /* cicili#Let4698 */
                                                        StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , false );
                                                        // ----------
                                                        Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let4706 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4708 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4709 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn4711 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4716 */
                                                            ({ /* cicili#Let4718 */
                                                              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , true );
                                                              // ----------
                                                              Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                            });
                                                          }) : ({ /* cicili#Let4726 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4728 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4732 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4734 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4735 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4740 */
                                                    resize_Vector_char (veci , len );
                                                  }) : ({ /* cicili#Let4745 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4747 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4752 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4754 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4759 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4761 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4766 */
              // ----------
              ;
              ({ /* cicili#Progn4768 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char pure_Vector_char (size_t step ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return pureCapacity_Vector_char (step , step );
}
Vector_char pureCapacity_Vector_char (size_t capacity , size_t step ) {
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
  return ({ /* cicili#Let4782 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4786 */
        __auto_type match4785  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4785 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4789 */
          bool __h_case_result  = (true  &&  (((match4785 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4790 */
                (unboxed  =  (((match4785 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4795 */
              ({ /* cicili#Let4799 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4801 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4802 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4807 */
                      ({ /* cicili#Let4811 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4813 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4814 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4819 */
                              buffer ;
                            }) : ({ /* cicili#Let4823 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let4825 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4826 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4831 */
                                    buffer ;
                                  }) : ({ /* cicili#Let4835 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4837 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4841 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4843 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4844 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4846 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4851 */
                            ({ /* cicili#Let4854 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4858 */
                                __auto_type match4857  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4857 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4861 */
                                  bool __h_case_result  = (true  &&  (((match4857 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4862 */
                                        (unboxed  =  (((match4857 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4867 */
                                      ({ /* cicili#Let4871 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4873 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4874 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4879 */
                                              ({ /* cicili#Let4883 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4885 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4886 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4891 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4895 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let4897 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4898 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn4903 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let4907 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn4909 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4913 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4915 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4916 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4918 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4923 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4928 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4930 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4934 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4936 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4940 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4942 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4946 */
              // ----------
              ;
              ({ /* cicili#Progn4948 */
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
  return ({ /* cicili#Let4953 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4955 */
        __auto_type new_vec  = pureCapacity_Vector_char (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Vector_char (item , new_vec );
    });
}
size_t show_Vector_char (CFile file , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  auto size_t show_ (size_t index , Vector_char vector );
  size_t showWithSize (size_t index , size_t size , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let4965 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4969 */
          __auto_type match4968  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4968 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4972 */
            bool __h_case_result  = (true  &&  (((match4968 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4973 */
                  (unboxed  =  (((match4968 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4978 */
                ({ /* cicili#Let4982 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4984 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4985 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4990 */
                        ({ /* cicili#Let4994 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4996 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4997 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5002 */
                                ({ /* cicili#Let5004 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5015 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let5017 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn5018 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5023 */
                                      ({ /* cicili#Let5025 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let5036 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5038 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5042 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5044 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5045 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5047 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5049 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5054 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5058 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5060 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5064 */
                // ----------
                ;
                ({ /* cicili#Progn5066 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let5070 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let5074 */
          __auto_type match5073  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5073 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5077 */
            bool __h_case_result  = (true  &&  (((match5073 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5078 */
                  (unboxed  =  (((match5073 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5083 */
                ({ /* cicili#Let5087 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let5089 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5090 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5095 */
                        ({ /* cicili#Let5099 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5101 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5102 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5104 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5109 */
                                ({ /* cicili#Let5111 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5122 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5124 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5125 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5127 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5132 */
                                      ({ /* cicili#Let5134 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let5145 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5147 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5151 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5153 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5154 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5156 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5158 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5163 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5167 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5169 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5173 */
                // ----------
                ;
                ({ /* cicili#Progn5175 */
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
  return ({ /* cicili#Let5180 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5184 */
        __auto_type match5183  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5183 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5187 */
          bool __h_case_result  = (true  &&  (((match5183 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5188 */
                (unboxed  =  (((match5183 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5193 */
              ({ /* cicili#Let5197 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5199 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5200 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5205 */
                      ({ /* cicili#Let5209 */
                        // ----------
                        ;
                        ({ /* cicili#Let5211 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5215 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let5221 */
                              // ----------
                              ;
                              ({ /* cicili#Let5223 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5227 */
                                    Buffer_char (copy_StringBuffer_char (sb ));
                                  }) : ({ /* cicili#Let5233 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5235 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5240 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5242 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5243 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5245 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5247 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5252 */
                            ({ /* cicili#Let5255 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5259 */
                                __auto_type match5258  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5258 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5262 */
                                  bool __h_case_result  = (true  &&  (((match5258 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5263 */
                                        (unboxed  =  (((match5258 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5268 */
                                      ({ /* cicili#Let5272 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5274 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5275 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5280 */
                                              ({ /* cicili#Let5284 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5286 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5290 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let5296 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5298 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5302 */
                                                            Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let5308 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5310 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5315 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5317 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5318 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5323 */
                                                    copy_Vector_char (veci );
                                                  }) : ({ /* cicili#Let5328 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5330 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5335 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5337 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5342 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5344 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5349 */
              // ----------
              ;
              ({ /* cicili#Progn5351 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5357 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5361 */
        __auto_type match5360  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5360 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5364 */
          bool __h_case_result  = (true  &&  (((match5360 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5365 */
                (unboxed  =  (((match5360 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5370 */
              ({ /* cicili#Let5374 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5376 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5377 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5382 */
                      ({ /* cicili#Progn5384 */
                        { /* cicili#Let5388 */
                          __auto_type match5387  = take_Box_Vector_char ((&vector ));
                          typeof((((match5387 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5391 */
                            bool __h_case_result  = (true  &&  (((match5387 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5392 */
                                  (ptr  =  (((match5387 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5398 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5402 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5404 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5405 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5407 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5412 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn5415 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_char (sb );
                                  }) : Buffer_char (sb ));
                              }) : ({ /* cicili#Let5421 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5423 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5424 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5426 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5431 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn5434 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_char (sb );
                                        }) : Buffer_char (sb ));
                                    }) : ({ /* cicili#Let5440 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5442 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5447 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5449 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5450 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5452 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5454 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5459 */
                            ({ /* cicili#Let5462 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5466 */
                                __auto_type match5465  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5465 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5469 */
                                  bool __h_case_result  = (true  &&  (((match5465 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5470 */
                                        (unboxed  =  (((match5465 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5475 */
                                      ({ /* cicili#Let5479 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5481 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5482 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5487 */
                                              ({ /* cicili#Let5491 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5493 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5494 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5496 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5501 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5504 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5514 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5516 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5517 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5519 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5524 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5527 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5537 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5539 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5543 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5545 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5546 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5548 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5553 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5558 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5560 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5565 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5567 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5572 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5574 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5579 */
              // ----------
              ;
              ({ /* cicili#Progn5581 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5587 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5591 */
        __auto_type match5590  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5590 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5594 */
          bool __h_case_result  = (true  &&  (((match5590 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5595 */
                (unboxed  =  (((match5590 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5600 */
              ({ /* cicili#Let5604 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5606 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5607 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5612 */
                      ({ /* cicili#Progn5614 */
                        { /* cicili#Let5618 */
                          __auto_type match5617  = take_Box_Vector_char ((&vector ));
                          typeof((((match5617 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5621 */
                            bool __h_case_result  = (true  &&  (((match5617 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5622 */
                                  (ptr  =  (((match5617 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5628 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5632 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let5634 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5635 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5637 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn5639 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5641 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5646 */
                                ({ /* cicili#Progn5648 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let5656 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let5658 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn5659 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn5661 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn5663 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn5665 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5670 */
                                      ({ /* cicili#Progn5672 */
                                        for (size_t i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_char (MakeNullTerminatedBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let5680 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5682 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5687 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5689 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5690 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5692 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5694 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5699 */
                            ({ /* cicili#Let5702 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5706 */
                                __auto_type match5705  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5705 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5709 */
                                  bool __h_case_result  = (true  &&  (((match5705 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5710 */
                                        (unboxed  =  (((match5705 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5715 */
                                      ({ /* cicili#Let5719 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5721 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5722 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5727 */
                                              ({ /* cicili#Let5731 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5733 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5734 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5736 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5741 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5744 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5753 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5755 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5756 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5758 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5763 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5766 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let5775 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5777 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5781 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5783 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5784 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5786 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5791 */
                                                    deleteAt_Vector_char (veci , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let5796 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5798 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5803 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5805 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5810 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5812 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5817 */
              // ----------
              ;
              ({ /* cicili#Progn5819 */
                clone_Box_Vector_char (vector );
              });
            }));
        });
      });
    });
}
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let5825 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5829 */
        __auto_type match5828  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5828 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5832 */
          bool __h_case_result  = (true  &&  (((match5828 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5833 */
                (unboxed  =  (((match5828 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5838 */
              ({ /* cicili#Let5842 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5844 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5845 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5850 */
                      ({ /* cicili#Let5852 */
                        StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                        // ----------
                        { /* cicili#Let5858 */
                          __auto_type match5857  = take_Box_Vector_char ((&vector ));
                          typeof((((match5857 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5861 */
                            bool __h_case_result  = (true  &&  (((match5857 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5862 */
                                  (ptr  =  (((match5857 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5868 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5872 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5874 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5875 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5877 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5882 */
                                ({ /* cicili#Progn5884 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_char (new_sb );
                                });
                              }) : ({ /* cicili#Let5891 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5893 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5894 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5896 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5901 */
                                      ({ /* cicili#Progn5903 */
                                        for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_char (new_sb );
                                      });
                                    }) : ({ /* cicili#Let5910 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5912 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5917 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5919 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5920 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5922 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5924 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5929 */
                            ({ /* cicili#Let5932 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5936 */
                                __auto_type match5935  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5935 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5939 */
                                  bool __h_case_result  = (true  &&  (((match5935 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5940 */
                                        (unboxed  =  (((match5935 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5945 */
                                      ({ /* cicili#Let5949 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5951 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5952 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5957 */
                                              ({ /* cicili#Let5961 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5963 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5964 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5966 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5971 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5974 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5984 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5986 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5987 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5989 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5994 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let5997 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let6007 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6009 */
                                                              vec ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6013 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) curi ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6015 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6016 */
                                                        (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn6018 */
                                                        (curi  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6023 */
                                                    insertAt_Vector_char (veci , item , (cur  +  curi  +  index  ));
                                                  }) : ({ /* cicili#Let6028 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6030 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6035 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6037 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6042 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6044 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6049 */
              // ----------
              ;
              ({ /* cicili#Progn6051 */
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
  return ({ /* cicili#Let6057 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6061 */
        __auto_type match6060  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6060 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6064 */
          bool __h_case_result  = (true  &&  (((match6060 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6065 */
                (unboxed  =  (((match6060 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6070 */
              ({ /* cicili#Let6074 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6076 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6077 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6082 */
                      ({ /* cicili#Let6086 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let6088 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn6089 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn6091 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn6093 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn6095 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6100 */
                              ({ /* cicili#Let6102 */
                                char tmp ;
                                // ----------
                                { /* cicili#Let6106 */
                                  __auto_type match6105  = take_Box_Vector_char ((&vector ));
                                  typeof((((match6105 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6109 */
                                    bool __h_case_result  = (true  &&  (((match6105 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6110 */
                                          (ptr  =  (((match6105 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block6116 */
                                        free (ptr );
                                      }
                                  });
                                }
                                for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                    tmp  = (*(buffer  +  i  ));
                                    (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                    (*(buffer  +  (j  -  1 ) )) = tmp ;
                                }
                                Buffer_char (MakeStringBuffer_char (buffer , cursor , size , step ));
                              });
                            }) : ({ /* cicili#Let6124 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let6126 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn6127 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn6129 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn6131 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn6133 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6138 */
                                    ({ /* cicili#Let6140 */
                                      char tmp ;
                                      // ----------
                                      { /* cicili#Let6144 */
                                        __auto_type match6143  = take_Box_Vector_char ((&vector ));
                                        typeof((((match6143 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6147 */
                                          bool __h_case_result  = (true  &&  (((match6143 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6148 */
                                                (ptr  =  (((match6143 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block6154 */
                                              free (ptr );
                                            }
                                        });
                                      }
                                      for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                          tmp  = (*(buffer  +  i  ));
                                          (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                          (*(buffer  +  (j  -  1 ) )) = tmp ;
                                      }
                                      Buffer_char (MakeNullTerminatedBuffer_char (buffer , cursor , size , step ));
                                    });
                                  }) : ({ /* cicili#Let6162 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6164 */
                                      clone_Box_Vector_char (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6169 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6171 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6172 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6174 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6176 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6181 */
                            ({ /* cicili#Let6184 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6188 */
                                __auto_type match6187  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6187 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6191 */
                                  bool __h_case_result  = (true  &&  (((match6187 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6192 */
                                        (unboxed  =  (((match6187 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6197 */
                                      ({ /* cicili#Let6201 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6203 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6204 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6209 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let6216 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6218 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6219 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6224 */
                                                    reverse_Vector_char (veci );
                                                  }) : ({ /* cicili#Let6229 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6231 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6236 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6238 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6243 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6245 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6250 */
              // ----------
              ;
              ({ /* cicili#Progn6252 */
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
  return ({ /* cicili#Let6258 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let6262 */
        __auto_type match6261  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6261 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6265 */
          bool __h_case_result  = (true  &&  (((match6261 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6266 */
                (unboxed  =  (((match6261 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6271 */
              ({ /* cicili#Let6275 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6277 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6278 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6283 */
                      ({ /* cicili#Progn6285 */
                        { /* cicili#Let6289 */
                          __auto_type match6288  = take_Box_Vector_char ((&lvector ));
                          typeof((((match6288 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6292 */
                            bool __h_case_result  = (true  &&  (((match6288 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6293 */
                                  (ptr  =  (((match6288 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6299 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                      });
                    }) : ({ /* cicili#Let6307 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6309 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6310 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6312 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6314 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6319 */
                            ({ /* cicili#Let6322 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6326 */
                                __auto_type match6325  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6325 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6329 */
                                  bool __h_case_result  = (true  &&  (((match6325 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6330 */
                                        (unboxed  =  (((match6325 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6335 */
                                      ({ /* cicili#Let6339 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6341 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6342 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6347 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let6356 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6358 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6359 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6364 */
                                                    append_Vector_char (veci , rvector );
                                                  }) : ({ /* cicili#Let6369 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6371 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6376 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6378 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6383 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6385 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6390 */
              // ----------
              ;
              ({ /* cicili#Progn6392 */
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
  return ({ /* cicili#Let6398 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6402 */
        __auto_type match6401  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6401 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6405 */
          bool __h_case_result  = (true  &&  (((match6401 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6406 */
                (unboxed  =  (((match6401 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6411 */
              ({ /* cicili#Let6415 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6417 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6418 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6423 */
                      ({ /* cicili#Progn6425 */
                        { /* cicili#Let6429 */
                          __auto_type match6428  = take_Box_Vector_char ((&vector ));
                          typeof((((match6428 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6432 */
                            bool __h_case_result  = (true  &&  (((match6428 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6433 */
                                  (ptr  =  (((match6428 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6439 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (put_StringBuffer_char (sb , item ));
                      });
                    }) : ({ /* cicili#Let6445 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6447 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6448 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6450 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6452 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6457 */
                            ({ /* cicili#Let6460 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6464 */
                                __auto_type match6463  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6463 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6467 */
                                  bool __h_case_result  = (true  &&  (((match6463 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6468 */
                                        (unboxed  =  (((match6463 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6473 */
                                      ({ /* cicili#Let6477 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6479 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6480 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6485 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let6492 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6494 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6495 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6500 */
                                                    push_Vector_char (item , veci );
                                                  }) : ({ /* cicili#Let6505 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6507 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6512 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6514 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
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
Vector_char take_Vector_char (size_t len , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6534 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6538 */
        __auto_type match6537  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6537 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6541 */
          bool __h_case_result  = (true  &&  (((match6537 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6542 */
                (unboxed  =  (((match6537 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6547 */
              ({ /* cicili#Let6551 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6553 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6554 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6559 */
                      ({ /* cicili#Let6563 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6565 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6566 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6571 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6583 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6585 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6586 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6591 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let6603 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6605 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6611 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6613 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6614 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6616 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6621 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), 0, 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), 0, len ) : Slice_char (clone_Box_Vector_char (vec ), 0, 0)));
                          }) : ({ /* cicili#Let6633 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6635 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6640 */
              // ----------
              ;
              ({ /* cicili#Progn6642 */
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
  return ({ /* cicili#Let6648 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6652 */
        __auto_type match6651  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6651 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6655 */
          bool __h_case_result  = (true  &&  (((match6651 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6656 */
                (unboxed  =  (((match6651 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6661 */
              ({ /* cicili#Let6665 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6667 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6668 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6673 */
                      ({ /* cicili#Let6677 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6679 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6680 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6685 */
                              Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                            }) : ({ /* cicili#Let6691 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6693 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6694 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6699 */
                                    Slice_char (clone_Box_Vector_char (vector ), (cursor  -  1 ), 1);
                                  }) : ({ /* cicili#Let6705 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6707 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6712 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6714 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6715 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6717 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6722 */
                            Slice_char (clone_Box_Vector_char (vec ), (size  -  1 ), 1);
                          }) : ({ /* cicili#Let6728 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6730 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6735 */
              // ----------
              ;
              ({ /* cicili#Progn6737 */
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
  return ({ /* cicili#Let6743 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6747 */
        __auto_type match6746  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6746 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6750 */
          bool __h_case_result  = (true  &&  (((match6746 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6751 */
                (unboxed  =  (((match6746 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6756 */
              ({ /* cicili#Let6760 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6762 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6763 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6768 */
                      ({ /* cicili#Let6772 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6774 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6775 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6780 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6786 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6788 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6789 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6794 */
                                    Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let6800 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6802 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6807 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6809 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6810 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6812 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6814 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6819 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6825 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6827 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6832 */
              // ----------
              ;
              ({ /* cicili#Progn6834 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_char (Vector_char vector , size_t desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6839 */
      size_t len  = len_Vector_char (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_char (Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6846 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6850 */
        __auto_type match6849  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6849 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6853 */
          bool __h_case_result  = (true  &&  (((match6849 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6854 */
                (unboxed  =  (((match6849 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6859 */
              ({ /* cicili#Let6863 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6865 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6866 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6871 */
                      ({ /* cicili#Let6875 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6877 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6878 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6883 */
                              cursor ;
                            }) : ({ /* cicili#Let6887 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6889 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6890 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6895 */
                                    cursor ;
                                  }) : ({ /* cicili#Let6899 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6901 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6905 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6907 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6908 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6913 */
                            size ;
                          }) : ({ /* cicili#Let6917 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6919 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6923 */
              // ----------
              ;
              ({ /* cicili#Progn6925 */
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
Vector_char drop_Vector_char (size_t len , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let6933 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6937 */
        __auto_type match6936  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6936 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6940 */
          bool __h_case_result  = (true  &&  (((match6936 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6941 */
                (unboxed  =  (((match6936 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6946 */
              ({ /* cicili#Let6950 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6952 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6953 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6958 */
                      ({ /* cicili#Let6962 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6964 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6965 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6970 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6982 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let6984 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn6985 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6990 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let7002 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7004 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7010 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7012 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7013 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7015 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7020 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let7025 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7027 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7032 */
              // ----------
              ;
              ({ /* cicili#Progn7034 */
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
  return ({ /* cicili#Let7041 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7045 */
        __auto_type match7044  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7044 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7048 */
          bool __h_case_result  = (true  &&  (((match7044 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7049 */
                (unboxed  =  (((match7044 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7054 */
              ({ /* cicili#Let7058 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7060 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7061 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7066 */
                      ({ /* cicili#Let7070 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7072 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7073 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7075 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7080 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let7087 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7089 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn7090 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7092 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7097 */
                                    (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                                  }) : ({ /* cicili#Let7104 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7106 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7111 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7113 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7114 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7116 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7121 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let7126 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7128 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7133 */
              // ----------
              ;
              ({ /* cicili#Progn7135 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Vector_char (size_t index , Vector_char vector ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let7142 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7146 */
        __auto_type match7145  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7145 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7149 */
          bool __h_case_result  = (true  &&  (((match7145 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7150 */
                (unboxed  =  (((match7145 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7155 */
              ({ /* cicili#Let7159 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7161 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7162 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7167 */
                      ({ /* cicili#Let7171 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7173 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7174 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7176 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7181 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let7188 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7190 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn7191 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7193 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7198 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                                  }) : ({ /* cicili#Let7205 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7207 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7212 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7214 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7215 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7217 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7219 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7224 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let7231 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7233 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7238 */
              // ----------
              ;
              ({ /* cicili#Progn7240 */
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
  { /* cicili#Let7245 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let7249 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let7251 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7252 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block7258 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let7264 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let7266 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7267 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7273 */
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
  static Vector_char__H_Table table  = { free_Vector_char_x , resize_Vector_char , pure_Vector_char , pureCapacity_Vector_char , toArray_Vector_char , wrap_Vector_char , show_Vector_char , copy_Vector_char , replaceAt_Vector_char , deleteAt_Vector_char , insertAt_Vector_char , reverse_Vector_char , append_Vector_char , push_Vector_char , take_Vector_char , last_Vector_char , init_Vector_char , hasLen_Vector_char , len_Vector_char , tail_Vector_char , drop_Vector_char , head_Vector_char , nth_Vector_char };
  return (&table );
}
Vector_char Buffer_char (StringBuffer_char buffer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let7283 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_char (__h_stack_push (instance ));
  }
}
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let7291 */
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
  { /* cicili#Let7298 */
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
  { /* cicili#Let7316 */
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
  { /* cicili#Let7321 */
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
  ({ /* cicili#Let7337 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7339 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7342 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7345 */
      __auto_type v03  = ({ /* cicili#Let7348 */
        StringBuffer_int tmp_buf7347  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf7347 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7357 */
      __auto_type v04  = ({ /* cicili#Let7360 */
        StringBuffer_int tmp_buf7359  = newCapacity_StringBuffer_int (2, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf7359 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7369 */
      __auto_type v05  = ({ /* cicili#Let7372 */
        StringBuffer_char tmp_buf7371  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf7371 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7381 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7385 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7389 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7392 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7395 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7398 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7401 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7404 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v16  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7407 */
      __auto_type v16  = last_Vector_int (v03 );
      // ----------
      ((void)((v16 . __h_table )-> freeData ));
      v16 ;
    });
    __auto_type v17  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7410 */
      __auto_type v17  = last_Vector_char (v05 );
      // ----------
      ((void)((v17 . __h_table )-> freeData ));
      v17 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7413 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7416 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7419 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7422 */
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
    printf ("length 5 of v03: %ld\n", len_Vector_int (v03 ));
    printf ("has length 6 of v05: %ld\n", hasLen_Vector_char (v05 , 6));
    printf ("has length 12 of v05: %ld\n", hasLen_Vector_char (v05 , 12));
    { /* cicili#Block7429 */
      { /* cicili#Let7433 */
        __auto_type match7432  = nth_Vector_int (3, v03 );
        typeof((((match7432 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7436 */
          bool __h_case_result  = (true  &&  (((match7432 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7437 */
                (i  =  (((match7432 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7443 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let7448 */
              // ----------
              ;
              { /* cicili#Block7450 */
                { /* cicili#Block7455 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7459 */
        __auto_type match7458  = nth_Vector_char (5, v05 );
        typeof((((match7458 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7462 */
          bool __h_case_result  = (true  &&  (((match7458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7463 */
                (c  =  (((match7458 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7469 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let7474 */
              // ----------
              ;
              { /* cicili#Block7476 */
                { /* cicili#Block7481 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7485 */
        __auto_type match7484  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let7488 */
          bool __h_case_result  = (true  &&  ((match7484 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7493 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let7498 */
              // ----------
              ;
              { /* cicili#Block7500 */
                { /* cicili#Block7505 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7509 */
        __auto_type match7508  = head_Vector_int (v08 );
        typeof((((match7508 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7512 */
          bool __h_case_result  = (true  &&  (((match7508 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7513 */
                (i  =  (((match7508 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7519 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7524 */
              // ----------
              ;
              { /* cicili#Block7526 */
                { /* cicili#Block7531 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7535 */
        __auto_type match7534  = head_Vector_char (v09 );
        typeof((((match7534 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7538 */
          bool __h_case_result  = (true  &&  (((match7534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7539 */
                (c  =  (((match7534 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7545 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7550 */
              // ----------
              ;
              { /* cicili#Block7552 */
                { /* cicili#Block7557 */
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
      { /* cicili#Let7561 */
        __auto_type match7560  = nth_Vector_int (1, v08 );
        typeof((((match7560 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7564 */
          bool __h_case_result  = (true  &&  (((match7560 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7565 */
                (i  =  (((match7560 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7571 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7576 */
              // ----------
              ;
              { /* cicili#Block7578 */
                { /* cicili#Block7583 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7587 */
        __auto_type match7586  = nth_Vector_char (2, v09 );
        typeof((((match7586 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7590 */
          bool __h_case_result  = (true  &&  (((match7586 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7591 */
                (c  =  (((match7586 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7597 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7602 */
              // ----------
              ;
              { /* cicili#Block7604 */
                { /* cicili#Block7609 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7613 */
        __auto_type match7612  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let7616 */
          bool __h_case_result  = (true  &&  ((match7612 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7621 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let7626 */
              // ----------
              ;
              { /* cicili#Block7628 */
                { /* cicili#Block7633 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7636 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let7640 */
          __auto_type match7639  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7639 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7643 */
            bool __h_case_result  = (true  &&  (((match7639 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7644 */
                  (unboxed  =  (((match7639 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7650 */
                { /* cicili#Let7654 */
                  // ----------
                  ;
                  ({ /* cicili#Let7656 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7661 */
                        { /* cicili#Block7663 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7668 */
                        // ----------
                        ;
                        { /* cicili#Block7670 */
                          { /* cicili#Block7675 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7680 */
                // ----------
                ;
                ({ /* cicili#Let7682 */
                  bool __h_case_result  = (true  &&  ((match7639 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7687 */
                      { /* cicili#Block7692 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7695 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let7699 */
          __auto_type match7698  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7698 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7702 */
            bool __h_case_result  = (true  &&  (((match7698 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7703 */
                  (unboxed  =  (((match7698 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7709 */
                { /* cicili#Let7713 */
                  // ----------
                  ;
                  ({ /* cicili#Let7715 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7720 */
                        { /* cicili#Block7722 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7727 */
                        // ----------
                        ;
                        { /* cicili#Block7729 */
                          { /* cicili#Block7734 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7739 */
                // ----------
                ;
                ({ /* cicili#Let7741 */
                  bool __h_case_result  = (true  &&  ((match7698 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7746 */
                      { /* cicili#Block7751 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7754 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let7758 */
          __auto_type match7757  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7757 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7761 */
            bool __h_case_result  = (true  &&  (((match7757 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7762 */
                  (unboxed  =  (((match7757 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7768 */
                { /* cicili#Let7772 */
                  // ----------
                  ;
                  ({ /* cicili#Let7774 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7779 */
                        { /* cicili#Block7781 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7786 */
                        // ----------
                        ;
                        { /* cicili#Block7788 */
                          { /* cicili#Block7793 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7798 */
                // ----------
                ;
                ({ /* cicili#Let7800 */
                  bool __h_case_result  = (true  &&  ((match7757 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7805 */
                      { /* cicili#Block7810 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7813 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let7817 */
          __auto_type match7816  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7816 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7820 */
            bool __h_case_result  = (true  &&  (((match7816 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7821 */
                  (unboxed  =  (((match7816 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7827 */
                { /* cicili#Let7831 */
                  // ----------
                  ;
                  ({ /* cicili#Let7833 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7838 */
                        { /* cicili#Block7840 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7845 */
                        // ----------
                        ;
                        { /* cicili#Block7847 */
                          { /* cicili#Block7852 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7857 */
                // ----------
                ;
                ({ /* cicili#Let7859 */
                  bool __h_case_result  = (true  &&  ((match7816 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7864 */
                      { /* cicili#Block7869 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7872 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let7876 */
          __auto_type match7875  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7875 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7879 */
            bool __h_case_result  = (true  &&  (((match7875 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7880 */
                  (unboxed  =  (((match7875 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7886 */
                { /* cicili#Let7890 */
                  // ----------
                  ;
                  ({ /* cicili#Let7892 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7897 */
                        { /* cicili#Block7899 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7904 */
                        // ----------
                        ;
                        { /* cicili#Block7906 */
                          { /* cicili#Block7911 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7916 */
                // ----------
                ;
                ({ /* cicili#Let7918 */
                  bool __h_case_result  = (true  &&  ((match7875 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7923 */
                      { /* cicili#Block7928 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7931 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let7935 */
          __auto_type match7934  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7934 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7938 */
            bool __h_case_result  = (true  &&  (((match7934 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7939 */
                  (unboxed  =  (((match7934 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7945 */
                { /* cicili#Let7949 */
                  // ----------
                  ;
                  ({ /* cicili#Let7951 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7956 */
                        { /* cicili#Block7958 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7963 */
                        // ----------
                        ;
                        { /* cicili#Block7965 */
                          { /* cicili#Block7970 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7975 */
                // ----------
                ;
                ({ /* cicili#Let7977 */
                  bool __h_case_result  = (true  &&  ((match7934 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7982 */
                      { /* cicili#Block7987 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7990 */
        __auto_type __h_matchbox  = v16 ;
        // ----------
        { /* cicili#Let7994 */
          __auto_type match7993  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7993 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7997 */
            bool __h_case_result  = (true  &&  (((match7993 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7998 */
                  (unboxed  =  (((match7993 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8004 */
                { /* cicili#Let8008 */
                  // ----------
                  ;
                  ({ /* cicili#Let8010 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8015 */
                        { /* cicili#Block8017 */
                          printf ("last of v03: ");
                          show_Vector_int (stdout , v16 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8022 */
                        // ----------
                        ;
                        { /* cicili#Block8024 */
                          { /* cicili#Block8029 */
                            printf ("status: %d\n", -121);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8034 */
                // ----------
                ;
                ({ /* cicili#Let8036 */
                  bool __h_case_result  = (true  &&  ((match7993 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8041 */
                      { /* cicili#Block8046 */
                        printf ("status: %d\n", -120);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8049 */
        __auto_type __h_matchbox  = v17 ;
        // ----------
        { /* cicili#Let8053 */
          __auto_type match8052  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8052 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8056 */
            bool __h_case_result  = (true  &&  (((match8052 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8057 */
                  (unboxed  =  (((match8052 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8063 */
                { /* cicili#Let8067 */
                  // ----------
                  ;
                  ({ /* cicili#Let8069 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8074 */
                        { /* cicili#Block8076 */
                          printf ("last of v05: ");
                          show_Vector_char (stdout , v17 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8081 */
                        // ----------
                        ;
                        { /* cicili#Block8083 */
                          { /* cicili#Block8088 */
                            printf ("status: %d\n", -123);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8093 */
                // ----------
                ;
                ({ /* cicili#Let8095 */
                  bool __h_case_result  = (true  &&  ((match8052 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8100 */
                      { /* cicili#Block8105 */
                        printf ("status: %d\n", -122);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8108 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let8112 */
          __auto_type match8111  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8111 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8115 */
            bool __h_case_result  = (true  &&  (((match8111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8116 */
                  (unboxed  =  (((match8111 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8122 */
                { /* cicili#Let8126 */
                  // ----------
                  ;
                  ({ /* cicili#Let8128 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8133 */
                        { /* cicili#Block8135 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8140 */
                        // ----------
                        ;
                        { /* cicili#Block8142 */
                          { /* cicili#Block8147 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8152 */
                // ----------
                ;
                ({ /* cicili#Let8154 */
                  bool __h_case_result  = (true  &&  ((match8111 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8159 */
                      { /* cicili#Block8164 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8167 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let8171 */
          __auto_type match8170  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8170 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8174 */
            bool __h_case_result  = (true  &&  (((match8170 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8175 */
                  (unboxed  =  (((match8170 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8181 */
                { /* cicili#Let8185 */
                  // ----------
                  ;
                  ({ /* cicili#Let8187 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8192 */
                        { /* cicili#Block8194 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8199 */
                        // ----------
                        ;
                        { /* cicili#Block8201 */
                          { /* cicili#Block8206 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8211 */
                // ----------
                ;
                ({ /* cicili#Let8213 */
                  bool __h_case_result  = (true  &&  ((match8170 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8218 */
                      { /* cicili#Block8223 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8226 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let8230 */
          __auto_type match8229  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8229 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8233 */
            bool __h_case_result  = (true  &&  (((match8229 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8234 */
                  (unboxed  =  (((match8229 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8240 */
                { /* cicili#Let8244 */
                  // ----------
                  ;
                  ({ /* cicili#Let8246 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8251 */
                        { /* cicili#Block8253 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8258 */
                        // ----------
                        ;
                        { /* cicili#Block8260 */
                          { /* cicili#Block8265 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8270 */
                // ----------
                ;
                ({ /* cicili#Let8272 */
                  bool __h_case_result  = (true  &&  ((match8229 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8277 */
                      { /* cicili#Block8282 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8285 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let8289 */
          __auto_type match8288  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8288 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8292 */
            bool __h_case_result  = (true  &&  (((match8288 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8293 */
                  (unboxed  =  (((match8288 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8299 */
                { /* cicili#Let8303 */
                  // ----------
                  ;
                  ({ /* cicili#Let8305 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8310 */
                        { /* cicili#Block8312 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8317 */
                        // ----------
                        ;
                        { /* cicili#Block8319 */
                          { /* cicili#Block8324 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8329 */
                // ----------
                ;
                ({ /* cicili#Let8331 */
                  bool __h_case_result  = (true  &&  ((match8288 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8336 */
                      { /* cicili#Block8341 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8344 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8346 */
          __auto_type v033  = ({ /* cicili#Let8349 */
            StringBuffer_int tmp_buf8348  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8348 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8358 */
          __auto_type v055  = ({ /* cicili#Let8361 */
            StringBuffer_char tmp_buf8360  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8360 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8370 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8373 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8376 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8379 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8382 */
          __auto_type v0333  = ({ /* cicili#Let8385 */
            StringBuffer_int tmp_buf8384  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8384 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8394 */
          __auto_type v0555  = ({ /* cicili#Let8397 */
            StringBuffer_char tmp_buf8396  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8396 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8406 */
          __auto_type v0444  = ({ /* cicili#Let8409 */
            StringBuffer_int tmp_buf8408  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8408 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8418 */
          __auto_type v0666  = ({ /* cicili#Let8421 */
            StringBuffer_char tmp_buf8420  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8420 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8430 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8433 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8436 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8439 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8442 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8445 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8448 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8451 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8454 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8457 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8460 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8463 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8466 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let8470 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let8474 */
            __auto_type match8473  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8473 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8477 */
              bool __h_case_result  = (true  &&  (((match8473 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8478 */
                    (unboxed  =  (((match8473 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8484 */
                  { /* cicili#Let8488 */
                    // ----------
                    ;
                    ({ /* cicili#Let8490 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8495 */
                          { /* cicili#Block8497 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8502 */
                          // ----------
                          ;
                          { /* cicili#Block8504 */
                            { /* cicili#Block8509 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8514 */
                  // ----------
                  ;
                  ({ /* cicili#Let8516 */
                    bool __h_case_result  = (true  &&  ((match8473 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8521 */
                        { /* cicili#Block8526 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8529 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let8533 */
            __auto_type match8532  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8532 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8536 */
              bool __h_case_result  = (true  &&  (((match8532 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8537 */
                    (unboxed  =  (((match8532 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8543 */
                  { /* cicili#Let8547 */
                    // ----------
                    ;
                    ({ /* cicili#Let8549 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8554 */
                          { /* cicili#Block8556 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8561 */
                          // ----------
                          ;
                          { /* cicili#Block8563 */
                            { /* cicili#Block8568 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8573 */
                  // ----------
                  ;
                  ({ /* cicili#Let8575 */
                    bool __h_case_result  = (true  &&  ((match8532 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8580 */
                        { /* cicili#Block8585 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8588 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let8592 */
            __auto_type match8591  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8591 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8595 */
              bool __h_case_result  = (true  &&  (((match8591 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8596 */
                    (unboxed  =  (((match8591 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8602 */
                  { /* cicili#Let8606 */
                    // ----------
                    ;
                    ({ /* cicili#Let8608 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8613 */
                          { /* cicili#Block8615 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8620 */
                          // ----------
                          ;
                          { /* cicili#Block8622 */
                            { /* cicili#Block8627 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8632 */
                  // ----------
                  ;
                  ({ /* cicili#Let8634 */
                    bool __h_case_result  = (true  &&  ((match8591 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8639 */
                        { /* cicili#Block8644 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8647 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let8651 */
            __auto_type match8650  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8650 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8654 */
              bool __h_case_result  = (true  &&  (((match8650 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8655 */
                    (unboxed  =  (((match8650 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8661 */
                  { /* cicili#Let8665 */
                    // ----------
                    ;
                    ({ /* cicili#Let8667 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8672 */
                          { /* cicili#Block8674 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8679 */
                          // ----------
                          ;
                          { /* cicili#Block8681 */
                            { /* cicili#Block8686 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8691 */
                  // ----------
                  ;
                  ({ /* cicili#Let8693 */
                    bool __h_case_result  = (true  &&  ((match8650 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8698 */
                        { /* cicili#Block8703 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8706 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let8710 */
            __auto_type match8709  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8709 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8713 */
              bool __h_case_result  = (true  &&  (((match8709 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8714 */
                    (unboxed  =  (((match8709 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8720 */
                  { /* cicili#Let8724 */
                    // ----------
                    ;
                    ({ /* cicili#Let8726 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8731 */
                          { /* cicili#Block8733 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8738 */
                          // ----------
                          ;
                          { /* cicili#Block8740 */
                            { /* cicili#Block8745 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8750 */
                  // ----------
                  ;
                  ({ /* cicili#Let8752 */
                    bool __h_case_result  = (true  &&  ((match8709 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8757 */
                        { /* cicili#Block8762 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8765 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let8769 */
            __auto_type match8768  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8768 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8772 */
              bool __h_case_result  = (true  &&  (((match8768 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8773 */
                    (unboxed  =  (((match8768 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8779 */
                  { /* cicili#Let8783 */
                    // ----------
                    ;
                    ({ /* cicili#Let8785 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8790 */
                          { /* cicili#Block8792 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8797 */
                          // ----------
                          ;
                          { /* cicili#Block8799 */
                            { /* cicili#Block8804 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8809 */
                  // ----------
                  ;
                  ({ /* cicili#Let8811 */
                    bool __h_case_result  = (true  &&  ((match8768 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8816 */
                        { /* cicili#Block8821 */
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
        ({ /* cicili#Let8824 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let8828 */
            __auto_type match8827  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8827 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8831 */
              bool __h_case_result  = (true  &&  (((match8827 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8832 */
                    (unboxed  =  (((match8827 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8838 */
                  { /* cicili#Let8842 */
                    // ----------
                    ;
                    ({ /* cicili#Let8844 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8849 */
                          { /* cicili#Block8851 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8856 */
                          // ----------
                          ;
                          { /* cicili#Block8858 */
                            { /* cicili#Block8863 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8868 */
                  // ----------
                  ;
                  ({ /* cicili#Let8870 */
                    bool __h_case_result  = (true  &&  ((match8827 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8875 */
                        { /* cicili#Block8880 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8883 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let8887 */
            __auto_type match8886  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8886 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8890 */
              bool __h_case_result  = (true  &&  (((match8886 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8891 */
                    (unboxed  =  (((match8886 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8897 */
                  { /* cicili#Let8901 */
                    // ----------
                    ;
                    ({ /* cicili#Let8903 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8908 */
                          { /* cicili#Block8910 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8915 */
                          // ----------
                          ;
                          { /* cicili#Block8917 */
                            { /* cicili#Block8922 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8927 */
                  // ----------
                  ;
                  ({ /* cicili#Let8929 */
                    bool __h_case_result  = (true  &&  ((match8886 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8934 */
                        { /* cicili#Block8939 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8942 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let8946 */
            __auto_type match8945  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8945 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8949 */
              bool __h_case_result  = (true  &&  (((match8945 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8950 */
                    (unboxed  =  (((match8945 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8956 */
                  { /* cicili#Let8960 */
                    // ----------
                    ;
                    ({ /* cicili#Let8962 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8967 */
                          { /* cicili#Block8969 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8974 */
                          // ----------
                          ;
                          { /* cicili#Block8976 */
                            { /* cicili#Block8981 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8986 */
                  // ----------
                  ;
                  ({ /* cicili#Let8988 */
                    bool __h_case_result  = (true  &&  ((match8945 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8993 */
                        { /* cicili#Block8998 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9001 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let9005 */
            __auto_type match9004  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9004 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9008 */
              bool __h_case_result  = (true  &&  (((match9004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9009 */
                    (unboxed  =  (((match9004 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9015 */
                  { /* cicili#Let9019 */
                    // ----------
                    ;
                    ({ /* cicili#Let9021 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9026 */
                          { /* cicili#Block9028 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9033 */
                          // ----------
                          ;
                          { /* cicili#Block9035 */
                            { /* cicili#Block9040 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9045 */
                  // ----------
                  ;
                  ({ /* cicili#Let9047 */
                    bool __h_case_result  = (true  &&  ((match9004 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9052 */
                        { /* cicili#Block9057 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9060 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let9064 */
            __auto_type match9063  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9063 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9067 */
              bool __h_case_result  = (true  &&  (((match9063 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9068 */
                    (unboxed  =  (((match9063 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9074 */
                  { /* cicili#Let9078 */
                    // ----------
                    ;
                    ({ /* cicili#Let9080 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9085 */
                          { /* cicili#Block9087 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9092 */
                          // ----------
                          ;
                          { /* cicili#Block9094 */
                            { /* cicili#Block9099 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9104 */
                  // ----------
                  ;
                  ({ /* cicili#Let9106 */
                    bool __h_case_result  = (true  &&  ((match9063 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9111 */
                        { /* cicili#Block9116 */
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
      ({ /* cicili#Let9119 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9121 */
          __auto_type v033  = ({ /* cicili#Let9124 */
            StringBuffer_int tmp_buf9123  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf9123 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9133 */
          __auto_type v055  = ({ /* cicili#Let9136 */
            StringBuffer_char tmp_buf9135  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf9135 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9145 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9148 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9151 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9154 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9157 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9160 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9163 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9166 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9169 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9172 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9175 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9178 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9181 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9184 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9187 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9190 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9193 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9196 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9199 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9202 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9205 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9208 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9211 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9214 */
          __auto_type vt61  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9217 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9220 */
          __auto_type v461  = resize_Vector_char (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9223 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9226 */
          __auto_type vt101  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9229 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9232 */
          __auto_type v481  = resize_Vector_char (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let9236 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let9240 */
            __auto_type match9239  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9239 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9243 */
              bool __h_case_result  = (true  &&  (((match9239 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9244 */
                    (unboxed  =  (((match9239 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9250 */
                  { /* cicili#Let9254 */
                    // ----------
                    ;
                    ({ /* cicili#Let9256 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9261 */
                          { /* cicili#Block9263 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9268 */
                          // ----------
                          ;
                          { /* cicili#Block9270 */
                            { /* cicili#Block9275 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9280 */
                  // ----------
                  ;
                  ({ /* cicili#Let9282 */
                    bool __h_case_result  = (true  &&  ((match9239 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9287 */
                        { /* cicili#Block9292 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9295 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let9299 */
            __auto_type match9298  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9298 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9302 */
              bool __h_case_result  = (true  &&  (((match9298 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9303 */
                    (unboxed  =  (((match9298 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9309 */
                  { /* cicili#Let9313 */
                    // ----------
                    ;
                    ({ /* cicili#Let9315 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9320 */
                          { /* cicili#Block9322 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9327 */
                          // ----------
                          ;
                          { /* cicili#Block9329 */
                            { /* cicili#Block9334 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9339 */
                  // ----------
                  ;
                  ({ /* cicili#Let9341 */
                    bool __h_case_result  = (true  &&  ((match9298 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9346 */
                        { /* cicili#Block9351 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9354 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let9358 */
            __auto_type match9357  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9357 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9361 */
              bool __h_case_result  = (true  &&  (((match9357 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9362 */
                    (unboxed  =  (((match9357 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9368 */
                  { /* cicili#Let9372 */
                    // ----------
                    ;
                    ({ /* cicili#Let9374 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9379 */
                          { /* cicili#Block9381 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9386 */
                          // ----------
                          ;
                          { /* cicili#Block9388 */
                            { /* cicili#Block9393 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9398 */
                  // ----------
                  ;
                  ({ /* cicili#Let9400 */
                    bool __h_case_result  = (true  &&  ((match9357 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9405 */
                        { /* cicili#Block9410 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9413 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let9417 */
            __auto_type match9416  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9416 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9420 */
              bool __h_case_result  = (true  &&  (((match9416 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9421 */
                    (unboxed  =  (((match9416 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9427 */
                  { /* cicili#Let9431 */
                    // ----------
                    ;
                    ({ /* cicili#Let9433 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9438 */
                          { /* cicili#Block9440 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9445 */
                          // ----------
                          ;
                          { /* cicili#Block9447 */
                            { /* cicili#Block9452 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9457 */
                  // ----------
                  ;
                  ({ /* cicili#Let9459 */
                    bool __h_case_result  = (true  &&  ((match9416 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9464 */
                        { /* cicili#Block9469 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9472 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let9476 */
            __auto_type match9475  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9475 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9479 */
              bool __h_case_result  = (true  &&  (((match9475 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9480 */
                    (unboxed  =  (((match9475 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9486 */
                  { /* cicili#Let9490 */
                    // ----------
                    ;
                    ({ /* cicili#Let9492 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9497 */
                          { /* cicili#Block9499 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9504 */
                          // ----------
                          ;
                          { /* cicili#Block9506 */
                            { /* cicili#Block9511 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9516 */
                  // ----------
                  ;
                  ({ /* cicili#Let9518 */
                    bool __h_case_result  = (true  &&  ((match9475 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9523 */
                        { /* cicili#Block9528 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9531 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let9535 */
            __auto_type match9534  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9534 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9538 */
              bool __h_case_result  = (true  &&  (((match9534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9539 */
                    (unboxed  =  (((match9534 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9545 */
                  { /* cicili#Let9549 */
                    // ----------
                    ;
                    ({ /* cicili#Let9551 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9556 */
                          { /* cicili#Block9558 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9563 */
                          // ----------
                          ;
                          { /* cicili#Block9565 */
                            { /* cicili#Block9570 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9575 */
                  // ----------
                  ;
                  ({ /* cicili#Let9577 */
                    bool __h_case_result  = (true  &&  ((match9534 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9582 */
                        { /* cicili#Block9587 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9590 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let9594 */
            __auto_type match9593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9593 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9597 */
              bool __h_case_result  = (true  &&  (((match9593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9598 */
                    (unboxed  =  (((match9593 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9604 */
                  { /* cicili#Let9608 */
                    // ----------
                    ;
                    ({ /* cicili#Let9610 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9615 */
                          { /* cicili#Block9617 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9622 */
                          // ----------
                          ;
                          { /* cicili#Block9624 */
                            { /* cicili#Block9629 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9634 */
                  // ----------
                  ;
                  ({ /* cicili#Let9636 */
                    bool __h_case_result  = (true  &&  ((match9593 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9641 */
                        { /* cicili#Block9646 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9649 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let9653 */
            __auto_type match9652  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9652 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9656 */
              bool __h_case_result  = (true  &&  (((match9652 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9657 */
                    (unboxed  =  (((match9652 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9663 */
                  { /* cicili#Let9667 */
                    // ----------
                    ;
                    ({ /* cicili#Let9669 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9674 */
                          { /* cicili#Block9676 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9681 */
                          // ----------
                          ;
                          { /* cicili#Block9683 */
                            { /* cicili#Block9688 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9693 */
                  // ----------
                  ;
                  ({ /* cicili#Let9695 */
                    bool __h_case_result  = (true  &&  ((match9652 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9700 */
                        { /* cicili#Block9705 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9708 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let9712 */
            __auto_type match9711  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9711 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9715 */
              bool __h_case_result  = (true  &&  (((match9711 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9716 */
                    (unboxed  =  (((match9711 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9722 */
                  { /* cicili#Let9726 */
                    // ----------
                    ;
                    ({ /* cicili#Let9728 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9733 */
                          { /* cicili#Block9735 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9740 */
                          // ----------
                          ;
                          { /* cicili#Block9742 */
                            { /* cicili#Block9747 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9752 */
                  // ----------
                  ;
                  ({ /* cicili#Let9754 */
                    bool __h_case_result  = (true  &&  ((match9711 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9759 */
                        { /* cicili#Block9764 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9767 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let9771 */
            __auto_type match9770  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9770 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9774 */
              bool __h_case_result  = (true  &&  (((match9770 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9775 */
                    (unboxed  =  (((match9770 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9781 */
                  { /* cicili#Let9785 */
                    // ----------
                    ;
                    ({ /* cicili#Let9787 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9792 */
                          { /* cicili#Block9794 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9799 */
                          // ----------
                          ;
                          { /* cicili#Block9801 */
                            { /* cicili#Block9806 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9811 */
                  // ----------
                  ;
                  ({ /* cicili#Let9813 */
                    bool __h_case_result  = (true  &&  ((match9770 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9818 */
                        { /* cicili#Block9823 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9826 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let9830 */
            __auto_type match9829  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9829 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9833 */
              bool __h_case_result  = (true  &&  (((match9829 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9834 */
                    (unboxed  =  (((match9829 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9840 */
                  { /* cicili#Let9844 */
                    // ----------
                    ;
                    ({ /* cicili#Let9846 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9851 */
                          { /* cicili#Block9853 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9858 */
                          // ----------
                          ;
                          { /* cicili#Block9860 */
                            { /* cicili#Block9865 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9870 */
                  // ----------
                  ;
                  ({ /* cicili#Let9872 */
                    bool __h_case_result  = (true  &&  ((match9829 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9877 */
                        { /* cicili#Block9882 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9885 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let9889 */
            __auto_type match9888  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9888 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9892 */
              bool __h_case_result  = (true  &&  (((match9888 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9893 */
                    (unboxed  =  (((match9888 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9899 */
                  { /* cicili#Let9903 */
                    // ----------
                    ;
                    ({ /* cicili#Let9905 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9910 */
                          { /* cicili#Block9912 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9917 */
                          // ----------
                          ;
                          { /* cicili#Block9919 */
                            { /* cicili#Block9924 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9929 */
                  // ----------
                  ;
                  ({ /* cicili#Let9931 */
                    bool __h_case_result  = (true  &&  ((match9888 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9936 */
                        { /* cicili#Block9941 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9944 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let9948 */
            __auto_type match9947  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9947 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9951 */
              bool __h_case_result  = (true  &&  (((match9947 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9952 */
                    (unboxed  =  (((match9947 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9958 */
                  { /* cicili#Let9962 */
                    // ----------
                    ;
                    ({ /* cicili#Let9964 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9969 */
                          { /* cicili#Block9971 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9976 */
                          // ----------
                          ;
                          { /* cicili#Block9978 */
                            { /* cicili#Block9983 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9988 */
                  // ----------
                  ;
                  ({ /* cicili#Let9990 */
                    bool __h_case_result  = (true  &&  ((match9947 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9995 */
                        { /* cicili#Block10000 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10003 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let10007 */
            __auto_type match10006  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10006 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10010 */
              bool __h_case_result  = (true  &&  (((match10006 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10011 */
                    (unboxed  =  (((match10006 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10017 */
                  { /* cicili#Let10021 */
                    // ----------
                    ;
                    ({ /* cicili#Let10023 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10028 */
                          { /* cicili#Block10030 */
                            printf ("resize 15 v244: ");
                            show_Vector_char (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10035 */
                          // ----------
                          ;
                          { /* cicili#Block10037 */
                            { /* cicili#Block10042 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10047 */
                  // ----------
                  ;
                  ({ /* cicili#Let10049 */
                    bool __h_case_result  = (true  &&  ((match10006 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10054 */
                        { /* cicili#Block10059 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10062 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let10066 */
            __auto_type match10065  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10065 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10069 */
              bool __h_case_result  = (true  &&  (((match10065 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10070 */
                    (unboxed  =  (((match10065 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10076 */
                  { /* cicili#Let10080 */
                    // ----------
                    ;
                    ({ /* cicili#Let10082 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10087 */
                          { /* cicili#Block10089 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10094 */
                          // ----------
                          ;
                          { /* cicili#Block10096 */
                            { /* cicili#Block10101 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10106 */
                  // ----------
                  ;
                  ({ /* cicili#Let10108 */
                    bool __h_case_result  = (true  &&  ((match10065 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10113 */
                        { /* cicili#Block10118 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10121 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let10125 */
            __auto_type match10124  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10124 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10128 */
              bool __h_case_result  = (true  &&  (((match10124 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10129 */
                    (unboxed  =  (((match10124 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10135 */
                  { /* cicili#Let10139 */
                    // ----------
                    ;
                    ({ /* cicili#Let10141 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10146 */
                          { /* cicili#Block10148 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_Vector_char (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10153 */
                          // ----------
                          ;
                          { /* cicili#Block10155 */
                            { /* cicili#Block10160 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10165 */
                  // ----------
                  ;
                  ({ /* cicili#Let10167 */
                    bool __h_case_result  = (true  &&  ((match10124 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10172 */
                        { /* cicili#Block10177 */
                          printf ("status: %d\n", -179);
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
