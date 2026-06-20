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
typedef int * Vector_int_pointer_t ;
typedef struct ciciliKIrwznxv8hB6zaUv4mBlWTEe1Bw_ {
  Vector_int_pointer_t __h_0_mem ;
  Vector_int_pointer_t __h_1_mem ;
} ciciliKIrwznxv8hB6zaUv4mBlWTEe1Bw_;
typedef ciciliKIrwznxv8hB6zaUv4mBlWTEe1Bw_ Vector_int_iterator_t ;
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
  union { /* ciciliUnion241 */
    struct { /* ciciliStruct242 */
      Vector_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct243 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_int_x;
Maybe_Vector_int_x Just_Vector_int_x (Vector_int_x value );
Maybe_Vector_int_x Nothing_Vector_int_x ();
__attribute__((weak)) Maybe_Vector_int_x Default_Maybe_Vector_int_x () {
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
  union { /* ciciliUnion273 */
    struct { /* ciciliStruct274 */
      Vector_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct275 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_int;
Box_Vector_int __h_Hold_Vector_int_x (Vector_int_x * pointer , int * count , size_t address );
Box_Vector_int Gone_Vector_int_x ();
__attribute__((weak)) Box_Vector_int Default_Box_Vector_int () {
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
    Vector_int_iterator_t (*iterator) (Vector_int vector );
    Vector_int (*resize) (Vector_int vector , size_t len );
    Vector_int (*pure) (size_t step );
    Vector_int (*pureCapacity) (size_t capacity , size_t step );
    int * (*toArray) (Vector_int vector );
    Vector_int (*wrap) (const int item );
    size_t (*show) (CFile file , Vector_int vector );
    Vector_int (*copy) (Vector_int vector );
    Vector_int (*copySlice) (Vector_int vector , size_t pos , size_t len );
    Vector_int (*replaceAt) (Vector_int vector , int item , size_t index );
    Vector_int (*deleteAt) (Vector_int vector , size_t index );
    Vector_int (*insertAt) (Vector_int vector , int item , size_t index );
    Vector_int (*reverse) (Vector_int vector );
    Vector_int (*append) (Vector_int lvector , Vector_int rvector );
    Vector_int (*push) (int item , Vector_int vector );
    Vector_int (*take) (size_t len , Vector_int vector );
    Maybe_int (*last) (Vector_int vector );
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
  union { /* ciciliUnion339 */
    struct { /* ciciliStruct340 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct341 */
      Vector_int __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct342 */
    } None , _ ;
  } __h_data ;
} class_Vector_int;
Vector_int Buffer_int (StringBuffer_int buffer );
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size );
Vector_int None_int ();
__attribute__((weak)) Vector_int Default_Vector_int () {
  return None_int ();
}
Vector_int_iterator_t iterator_Vector_int (Vector_int vector );
Vector_int resize_Vector_int (Vector_int vector , size_t len );
Vector_int pure_Vector_int (size_t step );
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step );
int * toArray_Vector_int (Vector_int vector );
Vector_int wrap_Vector_int (const int item );
size_t show_Vector_int (CFile file , Vector_int vector );
Vector_int copy_Vector_int (Vector_int vector );
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len );
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index );
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index );
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index );
Vector_int reverse_Vector_int (Vector_int vector );
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector );
Vector_int push_Vector_int (int item , Vector_int vector );
Vector_int take_Vector_int (size_t len , Vector_int vector );
Maybe_int last_Vector_int (Vector_int vector );
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
  union { /* ciciliUnion448 */
    struct { /* ciciliStruct449 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct450 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_int;
Maybe_Vector_int Just_Vector_int (Vector_int value );
Maybe_Vector_int Nothing_Vector_int ();
__attribute__((weak)) Maybe_Vector_int Default_Maybe_Vector_int () {
  return Nothing_Vector_int ();
}
const Maybe_Vector_int__H_Table * const get_Maybe_Vector_int__H_Table ();
void free_Maybe_Vector_int (Maybe_Vector_int * this );
#endif /* __Maybe_Vector_int__H_DECL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* cicili#Let480 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let485 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __StringBuffer_int__H_IMPL__
#define __StringBuffer_int__H_IMPL__
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t len ) {
  return ({ /* cicili#Let497 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let499 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn500 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn502 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn504 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn509 */
            ({ /* cicili#Let511 */
              int * new_buffer  = realloc (buffer , (len  *  sizeof(int) ));
              // ----------
              MakeStringBuffer_int (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
            });
          }) : ({ /* cicili#Let516 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let518 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn519 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn521 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn523 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn528 */
                  ({ /* cicili#Let530 */
                    int * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(int) ));
                    size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
                    // ----------
                    (*(new_buffer  +  new_cursor  )) = ((int)(*((int *)"\0")));
                    MakeNullTerminatedBuffer_int (new_buffer , new_cursor , len , step );
                  });
                }) : ({ /* cicili#Let535 */
                  // ----------
                  ;
                  ({ /* cicili#Progn537 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int new_StringBuffer_int (size_t step , bool null_terminated ) {
  return newCapacity_StringBuffer_int (step , step , null_terminated );
}
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step , bool null_terminated ) {
  return ((null_terminated ) ? ({ /* cicili#Let549 */
        int * buffer  = malloc (((capacity  +  1 ) *  sizeof(int) ));
        StringBuffer_int sb  = MakeNullTerminatedBuffer_int (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((int)(*((int *)"\0")));
        sb ;
      }) : ({ /* cicili#Let553 */
        int * buffer  = malloc ((capacity  *  sizeof(int) ));
        StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let562 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let564 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn565 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn567 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn569 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn574 */
            ({ /* cicili#Let576 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let585 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let587 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn588 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn590 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn592 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn597 */
                  ({ /* cicili#Let599 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let608 */
                  // ----------
                  ;
                  ({ /* cicili#Progn610 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb ) {
  return ({ /* cicili#Let619 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let621 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn622 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn624 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn626 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn628 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn633 */
            ({ /* cicili#Let635 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let642 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let644 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn645 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn647 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn649 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn651 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn656 */
                  ({ /* cicili#Let658 */
                    StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                    // ----------
                    print_StringBuffer_int (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let665 */
                  // ----------
                  ;
                  ({ /* cicili#Progn667 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data ) {
  return print_StringBuffer_int (sb , (&data ), 1);
}
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , size_t len ) {
  return ({ /* cicili#Let681 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let683 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn684 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn686 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn688 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn690 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn695 */
            ({ /* cicili#Let697 */
              size_t blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block701 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let703 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let708 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let710 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn711 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn713 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn715 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn717 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn722 */
                  ({ /* cicili#Let724 */
                    size_t blen  = (len  *  sizeof(int) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block728 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let730 */
                          int * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(int) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((int)(*((int *)"\0")));
                    MakeNullTerminatedBuffer_int (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let735 */
                  // ----------
                  ;
                  ({ /* cicili#Progn737 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
  { /* cicili#Let745 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let747 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn748 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block754 */
          { /* cicili#Block756 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
      else
        { /* cicili#Let762 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let764 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn765 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block771 */
                { /* cicili#Block773 */
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
  { /* cicili#Let783 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let788 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
  { /* cicili#Let793 */
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
}
const Maybe_Vector_int_x__H_Table * const get_Maybe_Vector_int_x__H_Table () {
  static const Maybe_Vector_int_x__H_Table table  = { free_Maybe_Vector_int_x };
  return (&table );
}
Maybe_Vector_int_x Just_Vector_int_x (Vector_int_x value ) {
  { /* cicili#Let815 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int_x Nothing_Vector_int_x () {
  { /* cicili#Let820 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int_x__H_IMPL__ */ 
#ifndef __Box_Vector_int__H_IMPL__
#define __Box_Vector_int__H_IMPL__
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer ) {
  return ({ /* cicili#Let827 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_int_x *)malloc (sizeof(Vector_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let836 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let838 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn839 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn841 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn843 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn848 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn851 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let857 */
            // ----------
            ;
            ({ /* cicili#Progn859 */
              Gone_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this ) {
  return ({ /* cicili#Let867 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let869 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn870 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn872 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn874 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn879 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let883 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block889 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let894 */
            // ----------
            ;
            ({ /* cicili#Progn896 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let904 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let906 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn907 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn909 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn911 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn916 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let923 */
            // ----------
            ;
            ({ /* cicili#Progn925 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
  { /* cicili#Let934 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let936 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn937 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn939 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn941 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block947 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block950 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block958 */
                if ((*count ) ==  1 )
                  { /* cicili#Block961 */
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
        { /* cicili#Let971 */
          // ----------
          ;
          ({ /* cicili#Let973 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block978 */
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
  { /* cicili#Let989 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
  { /* cicili#Let994 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int_iterator_t iterator_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let1001 */
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
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1020 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1021 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1026 */
                      ({ /* cicili#Let1030 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let1032 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1033 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1035 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1040 */
                              ((Vector_int_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let1045 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let1047 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1048 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn1050 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1055 */
                                    ((Vector_int_iterator_t){ buffer , (buffer  +  cursor  )});
                                  }) : ({ /* cicili#Let1060 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1062 */
                                      ((Vector_int_iterator_t){ NULL , NULL });
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1067 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1069 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1070 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1072 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1074 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1079 */
                            ({ /* cicili#Let1081 */
                              Vector_int_iterator_t iter  = iterator_Vector_int (vec );
                              // ----------
                              ({ /* cicili#Let1087 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let1089 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn1090 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1095 */
                                      ((Vector_int_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let1100 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1102 */
                                        ((Vector_int_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1107 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1109 */
                              ((Vector_int_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1114 */
              // ----------
              ;
              ({ /* cicili#Progn1116 */
                ((Vector_int_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
  return ({ /* cicili#Let1122 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1126 */
        __auto_type match1125  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1125 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1129 */
          bool __h_case_result  = (true  &&  (((match1125 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1130 */
                (unboxed  =  (((match1125 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1135 */
              ({ /* cicili#Let1139 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1141 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1142 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1147 */
                      ({ /* cicili#Progn1149 */
                        { /* cicili#Let1153 */
                          __auto_type match1152  = take_Box_Vector_int ((&vector ));
                          typeof((((match1152 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1156 */
                            bool __h_case_result  = (true  &&  (((match1152 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1157 */
                                  (ptr  =  (((match1152 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1163 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (resize_StringBuffer_int (sb , len ));
                      });
                    }) : ({ /* cicili#Let1169 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1171 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1172 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1174 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1179 */
                            ({ /* cicili#Let1182 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1186 */
                                __auto_type match1185  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1185 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1189 */
                                  bool __h_case_result  = (true  &&  (((match1185 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1190 */
                                        (unboxed  =  (((match1185 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1195 */
                                      ({ /* cicili#Let1199 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1201 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1202 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1207 */
                                              ({ /* cicili#Let1211 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1213 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1214 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1216 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1221 */
                                                      ({ /* cicili#Let1223 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , false );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1231 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1233 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1234 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn1236 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1241 */
                                                            ({ /* cicili#Let1243 */
                                                              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step , true );
                                                              // ----------
                                                              Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                            });
                                                          }) : ({ /* cicili#Let1251 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1253 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1258 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1260 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1261 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1266 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1271 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1273 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1278 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1280 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1285 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1287 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1292 */
              // ----------
              ;
              ({ /* cicili#Progn1294 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int pure_Vector_int (size_t step ) {
  return pureCapacity_Vector_int (step , step );
}
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step ) {
  return Buffer_int (newCapacity_StringBuffer_int (capacity , step , null_terminated_Vector_int ));
}
int * toArray_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let1308 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1312 */
        __auto_type match1311  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1311 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1315 */
          bool __h_case_result  = (true  &&  (((match1311 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1316 */
                (unboxed  =  (((match1311 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1321 */
              ({ /* cicili#Let1325 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1327 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1328 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1333 */
                      ({ /* cicili#Let1337 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1339 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1340 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1345 */
                              buffer ;
                            }) : ({ /* cicili#Let1349 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let1351 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1352 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1357 */
                                    buffer ;
                                  }) : ({ /* cicili#Let1361 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1363 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1367 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1369 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1370 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1372 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1377 */
                            ({ /* cicili#Let1380 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1384 */
                                __auto_type match1383  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1383 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1387 */
                                  bool __h_case_result  = (true  &&  (((match1383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1388 */
                                        (unboxed  =  (((match1383 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1393 */
                                      ({ /* cicili#Let1397 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1399 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1400 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1405 */
                                              ({ /* cicili#Let1409 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1411 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1412 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1417 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1421 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1423 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1424 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1429 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let1433 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1435 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1439 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1441 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1442 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1444 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1449 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1454 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1456 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1460 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1462 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1466 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1468 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1472 */
              // ----------
              ;
              ({ /* cicili#Progn1474 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
  return ({ /* cicili#Let1479 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1481 */
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
  auto size_t show_ (size_t index , Vector_int vector );
  size_t showWithSize (size_t index , size_t size , Vector_int vector ) {
    return ({ /* cicili#Let1491 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1495 */
          __auto_type match1494  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1494 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1498 */
            bool __h_case_result  = (true  &&  (((match1494 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1499 */
                  (unboxed  =  (((match1494 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1504 */
                ({ /* cicili#Let1508 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1510 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1511 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1516 */
                        ({ /* cicili#Let1520 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1522 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1523 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1528 */
                                ({ /* cicili#Let1530 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1541 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let1543 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1544 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1549 */
                                      ({ /* cicili#Let1551 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1562 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1564 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1568 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1570 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1571 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1573 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1575 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1580 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1584 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1586 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1590 */
                // ----------
                ;
                ({ /* cicili#Progn1592 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
    return ({ /* cicili#Let1596 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1600 */
          __auto_type match1599  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1599 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1603 */
            bool __h_case_result  = (true  &&  (((match1599 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1604 */
                  (unboxed  =  (((match1599 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1609 */
                ({ /* cicili#Let1613 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1615 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1616 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1621 */
                        ({ /* cicili#Let1625 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1627 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1628 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1630 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1635 */
                                ({ /* cicili#Let1637 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1648 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let1650 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn1651 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn1653 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1658 */
                                      ({ /* cicili#Let1660 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let1671 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1673 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1677 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1679 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1680 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1682 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1684 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1689 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1693 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1695 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1699 */
                // ----------
                ;
                ({ /* cicili#Progn1701 */
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
  return ({ /* cicili#Let1706 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1710 */
        __auto_type match1709  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1709 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1713 */
          bool __h_case_result  = (true  &&  (((match1709 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1714 */
                (unboxed  =  (((match1709 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1719 */
              ({ /* cicili#Let1723 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1725 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1726 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1731 */
                      ({ /* cicili#Let1735 */
                        // ----------
                        ;
                        ({ /* cicili#Let1737 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1741 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1747 */
                              // ----------
                              ;
                              ({ /* cicili#Let1749 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1753 */
                                    Buffer_int (copy_StringBuffer_int (sb ));
                                  }) : ({ /* cicili#Let1759 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1761 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1766 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1768 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1769 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1771 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1773 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1778 */
                            ({ /* cicili#Let1781 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1785 */
                                __auto_type match1784  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1784 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1788 */
                                  bool __h_case_result  = (true  &&  (((match1784 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1789 */
                                        (unboxed  =  (((match1784 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1794 */
                                      ({ /* cicili#Let1798 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1800 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1801 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1806 */
                                              ({ /* cicili#Let1810 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1812 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1816 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1822 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1824 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn1828 */
                                                            Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let1834 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn1836 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1841 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1843 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1844 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1849 */
                                                    copySlice_Vector_int (veci , cur , size );
                                                  }) : ({ /* cicili#Let1854 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1856 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1861 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1863 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1868 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1870 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1875 */
              // ----------
              ;
              ({ /* cicili#Progn1877 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let1883 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1887 */
        __auto_type match1886  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1886 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1890 */
          bool __h_case_result  = (true  &&  (((match1886 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1891 */
                (unboxed  =  (((match1886 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1896 */
              ({ /* cicili#Let1900 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1902 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1903 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1908 */
                      ({ /* cicili#Let1912 */
                        // ----------
                        ;
                        ({ /* cicili#Let1914 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1918 */
                              Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                            }) : ({ /* cicili#Let1924 */
                              // ----------
                              ;
                              ({ /* cicili#Let1926 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn1930 */
                                    Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                                  }) : ({ /* cicili#Let1936 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn1938 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1943 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1945 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1946 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1948 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1953 */
                            ({ /* cicili#Let1956 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1960 */
                                __auto_type match1959  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1959 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1963 */
                                  bool __h_case_result  = (true  &&  (((match1959 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1964 */
                                        (unboxed  =  (((match1959 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1969 */
                                      ({ /* cicili#Let1973 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1975 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1976 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1981 */
                                              ({ /* cicili#Let1985 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1987 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1991 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let1997 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let1999 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2003 */
                                                            Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                          }) : ({ /* cicili#Let2009 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2011 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2016 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2018 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2019 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2024 */
                                                    copySlice_Vector_int (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let2029 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2031 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2036 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2038 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2043 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2045 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2050 */
              // ----------
              ;
              ({ /* cicili#Progn2052 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2058 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2062 */
        __auto_type match2061  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2061 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2065 */
          bool __h_case_result  = (true  &&  (((match2061 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2066 */
                (unboxed  =  (((match2061 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2071 */
              ({ /* cicili#Let2075 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2077 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2078 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2083 */
                      ({ /* cicili#Progn2085 */
                        { /* cicili#Let2089 */
                          __auto_type match2088  = take_Box_Vector_int ((&vector ));
                          typeof((((match2088 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2092 */
                            bool __h_case_result  = (true  &&  (((match2088 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2093 */
                                  (ptr  =  (((match2088 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2099 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2103 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2105 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2106 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2108 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2113 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn2116 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_int (sb );
                                  }) : Buffer_int (sb ));
                              }) : ({ /* cicili#Let2122 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let2124 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2125 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn2127 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2132 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn2135 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (sb );
                                        }) : Buffer_int (sb ));
                                    }) : ({ /* cicili#Let2141 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2143 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2148 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2150 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2151 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2153 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2155 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2160 */
                            ({ /* cicili#Let2163 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2167 */
                                __auto_type match2166  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2166 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2170 */
                                  bool __h_case_result  = (true  &&  (((match2166 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2171 */
                                        (unboxed  =  (((match2166 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2176 */
                                      ({ /* cicili#Let2180 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2182 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2183 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2188 */
                                              ({ /* cicili#Let2192 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2194 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2195 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2197 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2202 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2205 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2215 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2217 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2218 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2220 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2225 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2228 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2238 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2240 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2245 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2247 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2248 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2253 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2258 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2260 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2265 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2267 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2272 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2274 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2279 */
              // ----------
              ;
              ({ /* cicili#Progn2281 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
  return ({ /* cicili#Let2287 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2291 */
        __auto_type match2290  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2290 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2294 */
          bool __h_case_result  = (true  &&  (((match2290 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2295 */
                (unboxed  =  (((match2290 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2300 */
              ({ /* cicili#Let2304 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2306 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2307 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2312 */
                      ({ /* cicili#Progn2314 */
                        { /* cicili#Let2318 */
                          __auto_type match2317  = take_Box_Vector_int ((&vector ));
                          typeof((((match2317 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2321 */
                            bool __h_case_result  = (true  &&  (((match2317 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2322 */
                                  (ptr  =  (((match2317 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2328 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2332 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let2334 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2335 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn2337 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn2339 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2341 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2346 */
                                ({ /* cicili#Progn2348 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let2356 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let2358 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2359 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn2361 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn2363 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2365 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2370 */
                                      ({ /* cicili#Progn2372 */
                                        for (size_t i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_int (MakeNullTerminatedBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let2380 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2382 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2387 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2389 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2390 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2392 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2394 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2399 */
                            ({ /* cicili#Let2402 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2406 */
                                __auto_type match2405  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2405 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2409 */
                                  bool __h_case_result  = (true  &&  (((match2405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2410 */
                                        (unboxed  =  (((match2405 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2415 */
                                      ({ /* cicili#Let2419 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2421 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2422 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2427 */
                                              ({ /* cicili#Let2431 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2433 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2434 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2436 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2441 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2444 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2453 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2455 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2456 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2458 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2463 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2466 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2475 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2477 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2482 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2484 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2485 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2490 */
                                                    deleteAt_Vector_int (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2495 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2497 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2502 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2504 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2509 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2511 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2516 */
              // ----------
              ;
              ({ /* cicili#Progn2518 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2524 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2528 */
        __auto_type match2527  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2527 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2531 */
          bool __h_case_result  = (true  &&  (((match2527 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2532 */
                (unboxed  =  (((match2527 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2537 */
              ({ /* cicili#Let2541 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2543 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2544 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2549 */
                      ({ /* cicili#Let2551 */
                        StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                        // ----------
                        { /* cicili#Let2557 */
                          __auto_type match2556  = take_Box_Vector_int ((&vector ));
                          typeof((((match2556 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2560 */
                            bool __h_case_result  = (true  &&  (((match2556 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2561 */
                                  (ptr  =  (((match2556 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2567 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2571 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2573 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2574 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2576 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2581 */
                                ({ /* cicili#Progn2583 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_int (new_sb );
                                });
                              }) : ({ /* cicili#Let2590 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let2592 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2593 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn2595 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2600 */
                                      ({ /* cicili#Progn2602 */
                                        for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_int (new_sb );
                                      });
                                    }) : ({ /* cicili#Let2609 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2611 */
                                        clone_Box_Vector_int (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2616 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2618 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2619 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2621 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2623 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2628 */
                            ({ /* cicili#Let2631 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2635 */
                                __auto_type match2634  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2634 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2638 */
                                  bool __h_case_result  = (true  &&  (((match2634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2639 */
                                        (unboxed  =  (((match2634 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2644 */
                                      ({ /* cicili#Let2648 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2650 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2651 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2656 */
                                              ({ /* cicili#Let2660 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2662 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2663 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2665 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2670 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2673 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2683 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2685 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2686 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn2688 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2693 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let2696 */
                                                                StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let2706 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2708 */
                                                              None_int ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2713 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2715 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2716 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2721 */
                                                    insertAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2726 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2728 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2733 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2735 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2740 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2742 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2747 */
              // ----------
              ;
              ({ /* cicili#Progn2749 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2755 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2759 */
        __auto_type match2758  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2758 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2762 */
          bool __h_case_result  = (true  &&  (((match2758 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2763 */
                (unboxed  =  (((match2758 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2768 */
              ({ /* cicili#Let2772 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2774 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2775 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2780 */
                      ({ /* cicili#Let2784 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2786 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2787 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2789 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2791 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2793 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2798 */
                              ({ /* cicili#Let2800 */
                                int tmp ;
                                // ----------
                                { /* cicili#Let2804 */
                                  __auto_type match2803  = take_Box_Vector_int ((&vector ));
                                  typeof((((match2803 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2807 */
                                    bool __h_case_result  = (true  &&  (((match2803 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2808 */
                                          (ptr  =  (((match2803 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2814 */
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
                            }) : ({ /* cicili#Let2822 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let2824 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn2825 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2827 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn2829 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn2831 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn2836 */
                                    ({ /* cicili#Let2838 */
                                      int tmp ;
                                      // ----------
                                      { /* cicili#Let2842 */
                                        __auto_type match2841  = take_Box_Vector_int ((&vector ));
                                        typeof((((match2841 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2845 */
                                          bool __h_case_result  = (true  &&  (((match2841 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2846 */
                                                (ptr  =  (((match2841 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2852 */
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
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2869 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2870 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2872 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2874 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2879 */
                            ({ /* cicili#Let2882 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2886 */
                                __auto_type match2885  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2885 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2889 */
                                  bool __h_case_result  = (true  &&  (((match2885 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2890 */
                                        (unboxed  =  (((match2885 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2895 */
                                      ({ /* cicili#Let2899 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2901 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2902 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2907 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2914 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2916 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2917 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2922 */
                                                    reverse_Vector_int (copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2928 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2930 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2935 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2937 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2942 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2944 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2949 */
              // ----------
              ;
              ({ /* cicili#Progn2951 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
  return ({ /* cicili#Let2957 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2961 */
        __auto_type match2960  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2960 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2964 */
          bool __h_case_result  = (true  &&  (((match2960 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2965 */
                (unboxed  =  (((match2960 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2970 */
              ({ /* cicili#Let2974 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2976 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2977 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2982 */
                      ({ /* cicili#Progn2984 */
                        { /* cicili#Let2988 */
                          __auto_type match2987  = take_Box_Vector_int ((&lvector ));
                          typeof((((match2987 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2991 */
                            bool __h_case_result  = (true  &&  (((match2987 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2992 */
                                  (ptr  =  (((match2987 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2998 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                      });
                    }) : ({ /* cicili#Let3006 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3008 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3009 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3011 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3013 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3018 */
                            ({ /* cicili#Let3021 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3025 */
                                __auto_type match3024  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3024 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3028 */
                                  bool __h_case_result  = (true  &&  (((match3024 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3029 */
                                        (unboxed  =  (((match3024 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3034 */
                                      ({ /* cicili#Let3038 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3040 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3041 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3046 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let3055 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3057 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3058 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3063 */
                                                    append_Vector_int (copySlice_Vector_int (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let3069 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3071 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3076 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3078 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3083 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3085 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3090 */
              // ----------
              ;
              ({ /* cicili#Progn3092 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
  return ({ /* cicili#Let3098 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3102 */
        __auto_type match3101  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3101 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3105 */
          bool __h_case_result  = (true  &&  (((match3101 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3106 */
                (unboxed  =  (((match3101 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3111 */
              ({ /* cicili#Let3115 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3117 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3118 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3123 */
                      ({ /* cicili#Progn3125 */
                        { /* cicili#Let3129 */
                          __auto_type match3128  = take_Box_Vector_int ((&vector ));
                          typeof((((match3128 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let3132 */
                            bool __h_case_result  = (true  &&  (((match3128 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3133 */
                                  (ptr  =  (((match3128 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block3139 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (put_StringBuffer_int (sb , item ));
                      });
                    }) : ({ /* cicili#Let3145 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3147 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3148 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3150 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3152 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3157 */
                            ({ /* cicili#Let3160 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let3164 */
                                __auto_type match3163  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match3163 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let3167 */
                                  bool __h_case_result  = (true  &&  (((match3163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3168 */
                                        (unboxed  =  (((match3163 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3173 */
                                      ({ /* cicili#Let3177 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let3179 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3180 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn3185 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let3192 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3194 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3195 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3200 */
                                                    push_Vector_int (item , copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let3206 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3208 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3213 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3215 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3220 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3222 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3227 */
              // ----------
              ;
              ({ /* cicili#Progn3229 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let3235 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3239 */
        __auto_type match3238  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3238 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3242 */
          bool __h_case_result  = (true  &&  (((match3238 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3243 */
                (unboxed  =  (((match3238 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3248 */
              ({ /* cicili#Let3252 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3254 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3255 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3260 */
                      ({ /* cicili#Let3264 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3266 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3267 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3272 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3284 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3286 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3287 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3292 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let3304 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3306 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3312 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3314 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3315 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3317 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3319 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3324 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , len ) : Slice_int (clone_Box_Vector_int (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let3336 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3338 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3343 */
              // ----------
              ;
              ({ /* cicili#Progn3345 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int last_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3352 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3356 */
        __auto_type match3355  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3355 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3359 */
          bool __h_case_result  = (true  &&  (((match3355 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3360 */
                (unboxed  =  (((match3355 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3365 */
              ({ /* cicili#Let3369 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3371 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3372 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3377 */
                      ({ /* cicili#Let3381 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3383 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3384 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3386 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3391 */
                              Just_int ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let3396 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3398 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3399 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3401 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3406 */
                                    Just_int ((*(buffer  +  (cursor  -  1 ) )));
                                  }) : ({ /* cicili#Let3411 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3413 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3418 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3420 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3421 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3423 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3425 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3430 */
                            nth_Vector_int ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let3435 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3437 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3442 */
              // ----------
              ;
              ({ /* cicili#Progn3444 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3450 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3454 */
        __auto_type match3453  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3453 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3457 */
          bool __h_case_result  = (true  &&  (((match3453 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3458 */
                (unboxed  =  (((match3453 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3463 */
              ({ /* cicili#Let3467 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3469 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3470 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3475 */
                      ({ /* cicili#Let3479 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3481 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3482 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3487 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3493 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3495 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3496 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3501 */
                                    Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let3507 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3509 */
                                      None_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3514 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3516 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3517 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3519 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3521 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3526 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3532 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3534 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3539 */
              // ----------
              ;
              ({ /* cicili#Progn3541 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
  return ({ /* cicili#Let3546 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3553 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3557 */
        __auto_type match3556  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3556 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3560 */
          bool __h_case_result  = (true  &&  (((match3556 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3561 */
                (unboxed  =  (((match3556 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3566 */
              ({ /* cicili#Let3570 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3572 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3573 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3578 */
                      ({ /* cicili#Let3582 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3584 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3585 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3590 */
                              cursor ;
                            }) : ({ /* cicili#Let3594 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3596 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3597 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3602 */
                                    cursor ;
                                  }) : ({ /* cicili#Let3606 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3608 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3612 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3614 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3615 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3620 */
                            size ;
                          }) : ({ /* cicili#Let3624 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3626 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3630 */
              // ----------
              ;
              ({ /* cicili#Progn3632 */
                0;
              });
            }));
        });
      });
    });
}
Vector_int tail_Vector_int (Vector_int vector ) {
  return drop_Vector_int (1, vector );
}
Vector_int drop_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let3640 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3644 */
        __auto_type match3643  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3643 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3647 */
          bool __h_case_result  = (true  &&  (((match3643 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3648 */
                (unboxed  =  (((match3643 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3653 */
              ({ /* cicili#Let3657 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3659 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3660 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3665 */
                      ({ /* cicili#Let3669 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3671 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3672 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3677 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3689 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3691 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3692 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3697 */
                                    (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let3709 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3711 */
                                      Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3717 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3719 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3720 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3722 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3727 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3732 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3734 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3739 */
              // ----------
              ;
              ({ /* cicili#Progn3741 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3748 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3752 */
        __auto_type match3751  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3751 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3755 */
          bool __h_case_result  = (true  &&  (((match3751 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3756 */
                (unboxed  =  (((match3751 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3761 */
              ({ /* cicili#Let3765 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3767 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3768 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3773 */
                      ({ /* cicili#Let3777 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3779 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3780 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3782 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3787 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3794 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3796 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3797 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3799 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3804 */
                                    (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                                  }) : ({ /* cicili#Let3811 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3813 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3818 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3820 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3821 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3823 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3828 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3833 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3835 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3840 */
              // ----------
              ;
              ({ /* cicili#Progn3842 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
  return ({ /* cicili#Let3849 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3853 */
        __auto_type match3852  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3852 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3856 */
          bool __h_case_result  = (true  &&  (((match3852 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3857 */
                (unboxed  =  (((match3852 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3862 */
              ({ /* cicili#Let3866 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3868 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3869 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3874 */
                      ({ /* cicili#Let3878 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3880 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3881 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3883 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3888 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3895 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let3897 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3898 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn3900 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn3905 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                                  }) : ({ /* cicili#Let3912 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn3914 */
                                      Nothing_int ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3919 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3921 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3922 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3924 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3926 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3931 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3938 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3940 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3945 */
              // ----------
              ;
              ({ /* cicili#Progn3947 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
  { /* cicili#Let3952 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3956 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3958 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3959 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3965 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3971 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3973 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3974 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3980 */
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
  static Vector_int__H_Table table  = { free_Vector_int_x , iterator_Vector_int , resize_Vector_int , pure_Vector_int , pureCapacity_Vector_int , toArray_Vector_int , wrap_Vector_int , show_Vector_int , copy_Vector_int , copySlice_Vector_int , replaceAt_Vector_int , deleteAt_Vector_int , insertAt_Vector_int , reverse_Vector_int , append_Vector_int , push_Vector_int , take_Vector_int , last_Vector_int , init_Vector_int , hasLen_Vector_int , len_Vector_int , tail_Vector_int , drop_Vector_int , head_Vector_int , nth_Vector_int };
  return (&table );
}
Vector_int Buffer_int (StringBuffer_int buffer ) {
  { /* cicili#Let3990 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
  { /* cicili#Let3998 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int None_int () {
  { /* cicili#Let4005 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h___t });
    return new_Box_Vector_int (instance );
  }
}
#endif /* __Vector_int__H_IMPL__ */ 
#ifndef __Maybe_Vector_int__H_IMPL__
#define __Maybe_Vector_int__H_IMPL__
void free_Maybe_Vector_int (Maybe_Vector_int * this ) {
}
const Maybe_Vector_int__H_Table * const get_Maybe_Vector_int__H_Table () {
  static const Maybe_Vector_int__H_Table table  = { free_Maybe_Vector_int };
  return (&table );
}
Maybe_Vector_int Just_Vector_int (Vector_int value ) {
  { /* cicili#Let4023 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
  { /* cicili#Let4028 */
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
  union { /* ciciliUnion4054 */
    struct { /* ciciliStruct4055 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct4056 */
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
  union { /* ciciliUnion4101 */
    struct { /* ciciliStruct4102 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _2 ;
    struct { /* ciciliStruct4103 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct4104 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
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
typedef char * Vector_char_pointer_t ;
typedef struct ciciliHHqrW6_aYT4w_AiC5Ix9CZy_qx8_ {
  Vector_char_pointer_t __h_0_mem ;
  Vector_char_pointer_t __h_1_mem ;
} ciciliHHqrW6_aYT4w_AiC5Ix9CZy_qx8_;
typedef ciciliHHqrW6_aYT4w_AiC5Ix9CZy_qx8_ Vector_char_iterator_t ;
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
  union { /* ciciliUnion4178 */
    struct { /* ciciliStruct4179 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct4180 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_char_x;
Maybe_Vector_char_x Just_Vector_char_x (Vector_char_x value );
Maybe_Vector_char_x Nothing_Vector_char_x ();
__attribute__((weak)) Maybe_Vector_char_x Default_Maybe_Vector_char_x () {
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
  union { /* ciciliUnion4210 */
    struct { /* ciciliStruct4211 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct4212 */
    } Gone , _ ;
  } __h_data ;
} Box_Vector_char;
Box_Vector_char __h_Hold_Vector_char_x (Vector_char_x * pointer , int * count , size_t address );
Box_Vector_char Gone_Vector_char_x ();
__attribute__((weak)) Box_Vector_char Default_Box_Vector_char () {
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
    Vector_char_iterator_t (*iterator) (Vector_char vector );
    Vector_char (*resize) (Vector_char vector , size_t len );
    Vector_char (*pure) (size_t step );
    Vector_char (*pureCapacity) (size_t capacity , size_t step );
    char * (*toArray) (Vector_char vector );
    Vector_char (*wrap) (const char item );
    size_t (*show) (CFile file , Vector_char vector );
    Vector_char (*copy) (Vector_char vector );
    Vector_char (*copySlice) (Vector_char vector , size_t pos , size_t len );
    Vector_char (*replaceAt) (Vector_char vector , char item , size_t index );
    Vector_char (*deleteAt) (Vector_char vector , size_t index );
    Vector_char (*insertAt) (Vector_char vector , char item , size_t index );
    Vector_char (*reverse) (Vector_char vector );
    Vector_char (*append) (Vector_char lvector , Vector_char rvector );
    Vector_char (*push) (char item , Vector_char vector );
    Vector_char (*take) (size_t len , Vector_char vector );
    Maybe_char (*last) (Vector_char vector );
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
  union { /* ciciliUnion4276 */
    struct { /* ciciliStruct4277 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct4278 */
      Vector_char __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct4279 */
    } None , _ ;
  } __h_data ;
} class_Vector_char;
Vector_char Buffer_char (StringBuffer_char buffer );
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size );
Vector_char None_char ();
__attribute__((weak)) Vector_char Default_Vector_char () {
  return None_char ();
}
Vector_char_iterator_t iterator_Vector_char (Vector_char vector );
Vector_char resize_Vector_char (Vector_char vector , size_t len );
Vector_char pure_Vector_char (size_t step );
Vector_char pureCapacity_Vector_char (size_t capacity , size_t step );
char * toArray_Vector_char (Vector_char vector );
Vector_char wrap_Vector_char (const char item );
size_t show_Vector_char (CFile file , Vector_char vector );
Vector_char copy_Vector_char (Vector_char vector );
Vector_char copySlice_Vector_char (Vector_char vector , size_t pos , size_t len );
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index );
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index );
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index );
Vector_char reverse_Vector_char (Vector_char vector );
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector );
Vector_char push_Vector_char (char item , Vector_char vector );
Vector_char take_Vector_char (size_t len , Vector_char vector );
Maybe_char last_Vector_char (Vector_char vector );
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
  union { /* ciciliUnion4385 */
    struct { /* ciciliStruct4386 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct4387 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Vector_char;
Maybe_Vector_char Just_Vector_char (Vector_char value );
Maybe_Vector_char Nothing_Vector_char ();
__attribute__((weak)) Maybe_Vector_char Default_Maybe_Vector_char () {
  return Nothing_Vector_char ();
}
const Maybe_Vector_char__H_Table * const get_Maybe_Vector_char__H_Table ();
void free_Maybe_Vector_char (Maybe_Vector_char * this );
#endif /* __Maybe_Vector_char__H_DECL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* cicili#Let4417 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let4422 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t len ) {
  return ({ /* cicili#Let4434 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4436 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4437 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4439 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4441 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4446 */
            ({ /* cicili#Let4448 */
              char * new_buffer  = realloc (buffer , (len  *  sizeof(char) ));
              // ----------
              MakeStringBuffer_char (new_buffer , (((cursor  <  len  )) ? cursor  : len ), len , step );
            });
          }) : ({ /* cicili#Let4453 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4455 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn4456 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4458 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4460 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4465 */
                  ({ /* cicili#Let4467 */
                    char * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(char) ));
                    size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
                    // ----------
                    (*(new_buffer  +  new_cursor  )) = ((char)(*((char *)"\0")));
                    MakeNullTerminatedBuffer_char (new_buffer , new_cursor , len , step );
                  });
                }) : ({ /* cicili#Let4472 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4474 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char new_StringBuffer_char (size_t step , bool null_terminated ) {
  return newCapacity_StringBuffer_char (step , step , null_terminated );
}
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step , bool null_terminated ) {
  return ((null_terminated ) ? ({ /* cicili#Let4486 */
        char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((char)(*((char *)"\0")));
        sb ;
      }) : ({ /* cicili#Let4490 */
        char * buffer  = malloc ((capacity  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let4499 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4501 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn4502 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4504 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4506 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4511 */
            ({ /* cicili#Let4513 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , false );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let4522 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4524 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn4525 */
                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4527 */
                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4529 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4534 */
                  ({ /* cicili#Let4536 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , true );
                    // ----------
                    ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
                  });
                }) : ({ /* cicili#Let4545 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4547 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
  return ({ /* cicili#Let4556 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4558 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4559 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4561 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4563 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4565 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4570 */
            ({ /* cicili#Let4572 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let4579 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4581 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn4582 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4584 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn4586 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4588 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4593 */
                  ({ /* cicili#Let4595 */
                    StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                    // ----------
                    print_StringBuffer_char (new_sb , buffer , cursor );
                  });
                }) : ({ /* cicili#Let4602 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4604 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len ) {
  return ({ /* cicili#Let4618 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4620 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4621 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4623 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4625 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4627 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4632 */
            ({ /* cicili#Let4634 */
              size_t blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4638 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4640 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4645 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            ;
            ({ /* cicili#Let4647 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn4648 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4650 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn4652 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn4654 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4659 */
                  ({ /* cicili#Let4661 */
                    size_t blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block4665 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let4667 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)(*((char *)"\0")));
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let4672 */
                  // ----------
                  ;
                  ({ /* cicili#Progn4674 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let4682 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4684 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4685 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4691 */
          { /* cicili#Block4693 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let4699 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          ;
          ({ /* cicili#Let4701 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn4702 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4708 */
                { /* cicili#Block4710 */
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
  { /* cicili#Let4720 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let4725 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let4730 */
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
}
const Maybe_Vector_char_x__H_Table * const get_Maybe_Vector_char_x__H_Table () {
  static const Maybe_Vector_char_x__H_Table table  = { free_Maybe_Vector_char_x };
  return (&table );
}
Maybe_Vector_char_x Just_Vector_char_x (Vector_char_x value ) {
  { /* cicili#Let4752 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char_x Nothing_Vector_char_x () {
  { /* cicili#Let4757 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char_x__H_IMPL__ */ 
#ifndef __Box_Vector_char__H_IMPL__
#define __Box_Vector_char__H_IMPL__
Box_Vector_char new_Box_Vector_char (Vector_char_x pointer ) {
  return ({ /* cicili#Let4764 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_char_x *)malloc (sizeof(Vector_char_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_char_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_char clone_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4773 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4775 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4776 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4778 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4780 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4785 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4788 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4794 */
            // ----------
            ;
            ({ /* cicili#Progn4796 */
              Gone_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x take_Box_Vector_char (Box_Vector_char * this ) {
  return ({ /* cicili#Let4804 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4806 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4807 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4809 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4811 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4816 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4820 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4826 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4831 */
            // ----------
            ;
            ({ /* cicili#Progn4833 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x get_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4841 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4843 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4844 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4846 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4848 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4853 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4860 */
            // ----------
            ;
            ({ /* cicili#Progn4862 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_char (Box_Vector_char * this ) {
  { /* cicili#Let4871 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4873 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4874 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4876 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4878 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4884 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4887 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4895 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4898 */
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
        { /* cicili#Let4908 */
          // ----------
          ;
          ({ /* cicili#Let4910 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4915 */
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
  { /* cicili#Let4926 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_char Gone_Vector_char_x () {
  { /* cicili#Let4931 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_char__H_IMPL__ */ 
Vector_char_iterator_t iterator_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let4938 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4942 */
        __auto_type match4941  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4941 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4945 */
          bool __h_case_result  = (true  &&  (((match4941 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4946 */
                (unboxed  =  (((match4941 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4951 */
              ({ /* cicili#Let4955 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4957 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4958 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4963 */
                      ({ /* cicili#Let4967 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4969 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4970 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4972 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4977 */
                              ((Vector_char_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let4982 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let4984 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn4985 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn4987 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn4992 */
                                    ((Vector_char_iterator_t){ buffer , (buffer  +  cursor  )});
                                  }) : ({ /* cicili#Let4997 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn4999 */
                                      ((Vector_char_iterator_t){ NULL , NULL });
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5004 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5006 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5007 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5009 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5011 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5016 */
                            ({ /* cicili#Let5018 */
                              Vector_char_iterator_t iter  = iterator_Vector_char (vec );
                              // ----------
                              ({ /* cicili#Let5024 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let5026 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn5027 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5032 */
                                      ((Vector_char_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let5037 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5039 */
                                        ((Vector_char_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5044 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5046 */
                              ((Vector_char_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5051 */
              // ----------
              ;
              ({ /* cicili#Progn5053 */
                ((Vector_char_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_char resize_Vector_char (Vector_char vector , size_t len ) {
  return ({ /* cicili#Let5059 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5063 */
        __auto_type match5062  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5062 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5066 */
          bool __h_case_result  = (true  &&  (((match5062 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5067 */
                (unboxed  =  (((match5062 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5072 */
              ({ /* cicili#Let5076 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5078 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5079 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5084 */
                      ({ /* cicili#Progn5086 */
                        { /* cicili#Let5090 */
                          __auto_type match5089  = take_Box_Vector_char ((&vector ));
                          typeof((((match5089 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5093 */
                            bool __h_case_result  = (true  &&  (((match5089 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5094 */
                                  (ptr  =  (((match5089 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5100 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (resize_StringBuffer_char (sb , len ));
                      });
                    }) : ({ /* cicili#Let5106 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5108 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5109 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5111 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5116 */
                            ({ /* cicili#Let5119 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5123 */
                                __auto_type match5122  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5122 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5126 */
                                  bool __h_case_result  = (true  &&  (((match5122 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5127 */
                                        (unboxed  =  (((match5122 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5132 */
                                      ({ /* cicili#Let5136 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5138 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5139 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5144 */
                                              ({ /* cicili#Let5148 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5150 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5151 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5153 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5158 */
                                                      ({ /* cicili#Let5160 */
                                                        StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , false );
                                                        // ----------
                                                        Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let5168 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5170 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5171 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn5173 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5178 */
                                                            ({ /* cicili#Let5180 */
                                                              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step , true );
                                                              // ----------
                                                              Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                            });
                                                          }) : ({ /* cicili#Let5188 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5190 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5195 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5197 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5198 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5203 */
                                                    resize_Vector_char (veci , len );
                                                  }) : ({ /* cicili#Let5208 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5210 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5215 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5217 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5222 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5224 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5229 */
              // ----------
              ;
              ({ /* cicili#Progn5231 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char pure_Vector_char (size_t step ) {
  return pureCapacity_Vector_char (step , step );
}
Vector_char pureCapacity_Vector_char (size_t capacity , size_t step ) {
  return Buffer_char (newCapacity_StringBuffer_char (capacity , step , null_terminated_Vector_char ));
}
char * toArray_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let5245 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5249 */
        __auto_type match5248  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5248 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5252 */
          bool __h_case_result  = (true  &&  (((match5248 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5253 */
                (unboxed  =  (((match5248 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5258 */
              ({ /* cicili#Let5262 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5264 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5265 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5270 */
                      ({ /* cicili#Let5274 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let5276 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5277 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5282 */
                              buffer ;
                            }) : ({ /* cicili#Let5286 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              // ----------
                              ;
                              ({ /* cicili#Let5288 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn5289 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5294 */
                                    buffer ;
                                  }) : ({ /* cicili#Let5298 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5300 */
                                      NULL ;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5304 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let5306 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5307 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5309 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5314 */
                            ({ /* cicili#Let5317 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let5321 */
                                __auto_type match5320  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5320 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5324 */
                                  bool __h_case_result  = (true  &&  (((match5320 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5325 */
                                        (unboxed  =  (((match5320 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5330 */
                                      ({ /* cicili#Let5334 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5336 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5337 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5342 */
                                              ({ /* cicili#Let5346 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5348 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5349 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5354 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let5358 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5360 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn5361 */
                                                              (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5366 */
                                                            (buffer  +  cursor  );
                                                          }) : ({ /* cicili#Let5370 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5372 */
                                                              NULL ;
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5376 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5378 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5379 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5381 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5386 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let5391 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5393 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5397 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5399 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5403 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5405 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5409 */
              // ----------
              ;
              ({ /* cicili#Progn5411 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_char wrap_Vector_char (const char item ) {
  return ({ /* cicili#Let5416 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5418 */
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
  auto size_t show_ (size_t index , Vector_char vector );
  size_t showWithSize (size_t index , size_t size , Vector_char vector ) {
    return ({ /* cicili#Let5428 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let5432 */
          __auto_type match5431  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5431 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5435 */
            bool __h_case_result  = (true  &&  (((match5431 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5436 */
                  (unboxed  =  (((match5431 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5441 */
                ({ /* cicili#Let5445 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let5447 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5448 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5453 */
                        ({ /* cicili#Let5457 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let5459 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn5460 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5465 */
                                ({ /* cicili#Let5467 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5478 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                ;
                                ({ /* cicili#Let5480 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn5481 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5486 */
                                      ({ /* cicili#Let5488 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let5499 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5501 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5505 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5507 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5508 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5510 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5512 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5517 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5521 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5523 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5527 */
                // ----------
                ;
                ({ /* cicili#Progn5529 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_char vector ) {
    return ({ /* cicili#Let5533 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let5537 */
          __auto_type match5536  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5536 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5540 */
            bool __h_case_result  = (true  &&  (((match5536 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5541 */
                  (unboxed  =  (((match5536 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5546 */
                ({ /* cicili#Let5550 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let5552 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5553 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5558 */
                        ({ /* cicili#Let5562 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5564 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5565 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5567 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5572 */
                                ({ /* cicili#Let5574 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let5585 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let5587 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn5588 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn5590 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5595 */
                                      ({ /* cicili#Let5597 */
                                        size_t sum  = 0;
                                        // ----------
                                        for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                            sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                        }
                                        sum ;
                                      });
                                    }) : ({ /* cicili#Let5608 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5610 */
                                        0;
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5614 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let5616 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5617 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5619 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5621 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5626 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let5630 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5632 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5636 */
                // ----------
                ;
                ({ /* cicili#Progn5638 */
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
  return ({ /* cicili#Let5643 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5647 */
        __auto_type match5646  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5646 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5650 */
          bool __h_case_result  = (true  &&  (((match5646 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5651 */
                (unboxed  =  (((match5646 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5656 */
              ({ /* cicili#Let5660 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5662 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5663 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5668 */
                      ({ /* cicili#Let5672 */
                        // ----------
                        ;
                        ({ /* cicili#Let5674 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5678 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let5684 */
                              // ----------
                              ;
                              ({ /* cicili#Let5686 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5690 */
                                    Buffer_char (copy_StringBuffer_char (sb ));
                                  }) : ({ /* cicili#Let5696 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5698 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5703 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5705 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5706 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5708 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5710 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5715 */
                            ({ /* cicili#Let5718 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5722 */
                                __auto_type match5721  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5721 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5725 */
                                  bool __h_case_result  = (true  &&  (((match5721 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5726 */
                                        (unboxed  =  (((match5721 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5731 */
                                      ({ /* cicili#Let5735 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5737 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5738 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5743 */
                                              ({ /* cicili#Let5747 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5749 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5753 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let5759 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5761 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5765 */
                                                            Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                          }) : ({ /* cicili#Let5771 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5773 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5778 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5780 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5781 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5786 */
                                                    copySlice_Vector_char (veci , cur , size );
                                                  }) : ({ /* cicili#Let5791 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5793 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5798 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5800 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5805 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5807 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5812 */
              // ----------
              ;
              ({ /* cicili#Progn5814 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char copySlice_Vector_char (Vector_char vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let5820 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5824 */
        __auto_type match5823  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5823 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5827 */
          bool __h_case_result  = (true  &&  (((match5823 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5828 */
                (unboxed  =  (((match5823 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5833 */
              ({ /* cicili#Let5837 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5839 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5840 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5845 */
                      ({ /* cicili#Let5849 */
                        // ----------
                        ;
                        ({ /* cicili#Let5851 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5855 */
                              Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                            }) : ({ /* cicili#Let5861 */
                              // ----------
                              ;
                              ({ /* cicili#Let5863 */
                                bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5867 */
                                    Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                                  }) : ({ /* cicili#Let5873 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5875 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5880 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5882 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5883 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5885 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5890 */
                            ({ /* cicili#Let5893 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5897 */
                                __auto_type match5896  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5896 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5900 */
                                  bool __h_case_result  = (true  &&  (((match5896 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5901 */
                                        (unboxed  =  (((match5896 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5906 */
                                      ({ /* cicili#Let5910 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5912 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5913 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5918 */
                                              ({ /* cicili#Let5922 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5924 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5928 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let5934 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let5936 */
                                                        bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn5940 */
                                                            Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                          }) : ({ /* cicili#Let5946 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn5948 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5953 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5955 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5956 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5961 */
                                                    copySlice_Vector_char (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let5966 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5968 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5973 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5975 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5980 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5982 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5987 */
              // ----------
              ;
              ({ /* cicili#Progn5989 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let5995 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5999 */
        __auto_type match5998  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5998 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6002 */
          bool __h_case_result  = (true  &&  (((match5998 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6003 */
                (unboxed  =  (((match5998 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6008 */
              ({ /* cicili#Let6012 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6014 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6015 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6020 */
                      ({ /* cicili#Progn6022 */
                        { /* cicili#Let6026 */
                          __auto_type match6025  = take_Box_Vector_char ((&vector ));
                          typeof((((match6025 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6029 */
                            bool __h_case_result  = (true  &&  (((match6025 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6030 */
                                  (ptr  =  (((match6025 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6036 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let6040 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let6042 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6043 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn6045 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6050 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn6053 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_char (sb );
                                  }) : Buffer_char (sb ));
                              }) : ({ /* cicili#Let6059 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let6061 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6062 */
                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn6064 */
                                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6069 */
                                      (((index  <  cursor  )) ? ({ /* cicili#Progn6072 */
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_char (sb );
                                        }) : Buffer_char (sb ));
                                    }) : ({ /* cicili#Let6078 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6080 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6085 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6087 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6088 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6090 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6092 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6097 */
                            ({ /* cicili#Let6100 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6104 */
                                __auto_type match6103  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6103 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6107 */
                                  bool __h_case_result  = (true  &&  (((match6103 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6108 */
                                        (unboxed  =  (((match6103 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6113 */
                                      ({ /* cicili#Let6117 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6119 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6120 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6125 */
                                              ({ /* cicili#Let6129 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6131 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6132 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6134 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6139 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6142 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6152 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6154 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6155 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn6157 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6162 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let6165 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let6175 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6177 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6182 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6184 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6185 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6190 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6195 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6197 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6202 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6204 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6209 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6211 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6216 */
              // ----------
              ;
              ({ /* cicili#Progn6218 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index ) {
  return ({ /* cicili#Let6224 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6228 */
        __auto_type match6227  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6227 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6231 */
          bool __h_case_result  = (true  &&  (((match6227 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6232 */
                (unboxed  =  (((match6227 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6237 */
              ({ /* cicili#Let6241 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6243 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6244 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6249 */
                      ({ /* cicili#Progn6251 */
                        { /* cicili#Let6255 */
                          __auto_type match6254  = take_Box_Vector_char ((&vector ));
                          typeof((((match6254 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6258 */
                            bool __h_case_result  = (true  &&  (((match6254 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6259 */
                                  (ptr  =  (((match6254 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6265 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let6269 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let6271 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn6272 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6274 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn6276 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn6278 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6283 */
                                ({ /* cicili#Progn6285 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let6293 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                                typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                // ----------
                                ;
                                ({ /* cicili#Let6295 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn6296 */
                                              (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn6298 */
                                              (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn6300 */
                                            (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn6302 */
                                          (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6307 */
                                      ({ /* cicili#Progn6309 */
                                        for (size_t i  = index ; (i  <=  cursor  ); (++i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                        }
                                        Buffer_char (MakeNullTerminatedBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                      });
                                    }) : ({ /* cicili#Let6317 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6319 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6324 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6326 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6327 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6329 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6331 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6336 */
                            ({ /* cicili#Let6339 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6343 */
                                __auto_type match6342  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6342 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6346 */
                                  bool __h_case_result  = (true  &&  (((match6342 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6347 */
                                        (unboxed  =  (((match6342 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6352 */
                                      ({ /* cicili#Let6356 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6358 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6359 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6364 */
                                              ({ /* cicili#Let6368 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6370 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6371 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6373 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6378 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6381 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6390 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6392 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6393 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn6395 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6400 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let6403 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let6412 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6414 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6419 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6421 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6422 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6427 */
                                                    deleteAt_Vector_char (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6432 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6434 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6439 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6441 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6446 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6448 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6453 */
              // ----------
              ;
              ({ /* cicili#Progn6455 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let6461 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6465 */
        __auto_type match6464  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6464 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6468 */
          bool __h_case_result  = (true  &&  (((match6464 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6469 */
                (unboxed  =  (((match6464 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6474 */
              ({ /* cicili#Let6478 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6480 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6481 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6486 */
                      ({ /* cicili#Let6488 */
                        StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                        // ----------
                        { /* cicili#Let6494 */
                          __auto_type match6493  = take_Box_Vector_char ((&vector ));
                          typeof((((match6493 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6497 */
                            bool __h_case_result  = (true  &&  (((match6493 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6498 */
                                  (ptr  =  (((match6493 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6504 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let6508 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let6510 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6511 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn6513 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6518 */
                                ({ /* cicili#Progn6520 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_char (new_sb );
                                });
                              }) : ({ /* cicili#Let6527 */
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                typeof((((new_sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                                // ----------
                                ;
                                ({ /* cicili#Let6529 */
                                  bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6530 */
                                          (buffer  =  (((new_sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn6532 */
                                          (cursor  =  (((new_sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6537 */
                                      ({ /* cicili#Progn6539 */
                                        for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                            (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                        }
                                        (*(buffer  +  index  )) = item ;
                                        Buffer_char (new_sb );
                                      });
                                    }) : ({ /* cicili#Let6546 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6548 */
                                        clone_Box_Vector_char (vector );
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6553 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6555 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6556 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6558 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6560 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6565 */
                            ({ /* cicili#Let6568 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6572 */
                                __auto_type match6571  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6571 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6575 */
                                  bool __h_case_result  = (true  &&  (((match6571 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6576 */
                                        (unboxed  =  (((match6571 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6581 */
                                      ({ /* cicili#Let6585 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6587 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6588 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6593 */
                                              ({ /* cicili#Let6597 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6599 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6600 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn6602 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6607 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let6610 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , false );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let6620 */
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                      typeof((((sbs . __h_data ). NullTerminated ). __h_3_mem )) step ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6622 */
                                                        bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn6623 */
                                                                (buffer  =  (((sbs . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn6625 */
                                                                (step  =  (((sbs . __h_data ). NullTerminated ). __h_3_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6630 */
                                                            (((index  <  size  )) ? ({ /* cicili#Let6633 */
                                                                StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step , true );
                                                                // ----------
                                                                Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                              }) : vec );
                                                          }) : ({ /* cicili#Let6643 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6645 */
                                                              None_char ();
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6650 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6652 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6653 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6658 */
                                                    insertAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let6663 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6665 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6670 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6672 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6677 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6679 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6684 */
              // ----------
              ;
              ({ /* cicili#Progn6686 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char reverse_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6692 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6696 */
        __auto_type match6695  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6695 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6699 */
          bool __h_case_result  = (true  &&  (((match6695 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6700 */
                (unboxed  =  (((match6695 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6705 */
              ({ /* cicili#Let6709 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6711 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6712 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6717 */
                      ({ /* cicili#Let6721 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let6723 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn6724 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn6726 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn6728 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn6730 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6735 */
                              ({ /* cicili#Let6737 */
                                char tmp ;
                                // ----------
                                { /* cicili#Let6741 */
                                  __auto_type match6740  = take_Box_Vector_char ((&vector ));
                                  typeof((((match6740 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6744 */
                                    bool __h_case_result  = (true  &&  (((match6740 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6745 */
                                          (ptr  =  (((match6740 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block6751 */
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
                            }) : ({ /* cicili#Let6759 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
                              // ----------
                              ;
                              ({ /* cicili#Let6761 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn6762 */
                                            (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn6764 */
                                            (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                            true ;
                                          }) ) &&  ({ /* cicili#Progn6766 */
                                          (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                                          true ;
                                        }) ) &&  ({ /* cicili#Progn6768 */
                                        (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6773 */
                                    ({ /* cicili#Let6775 */
                                      char tmp ;
                                      // ----------
                                      { /* cicili#Let6779 */
                                        __auto_type match6778  = take_Box_Vector_char ((&vector ));
                                        typeof((((match6778 . __h_data ). Just ). __h_0_mem )) ptr ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6782 */
                                          bool __h_case_result  = (true  &&  (((match6778 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6783 */
                                                (ptr  =  (((match6778 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block6789 */
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
                                  }) : ({ /* cicili#Let6797 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn6799 */
                                      clone_Box_Vector_char (vector );
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6804 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6806 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6807 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6809 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6811 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6816 */
                            ({ /* cicili#Let6819 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6823 */
                                __auto_type match6822  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6822 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6826 */
                                  bool __h_case_result  = (true  &&  (((match6822 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6827 */
                                        (unboxed  =  (((match6822 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6832 */
                                      ({ /* cicili#Let6836 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6838 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6839 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6844 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let6851 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6853 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6854 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6859 */
                                                    reverse_Vector_char (copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let6865 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6867 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6872 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6874 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6879 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6881 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6886 */
              // ----------
              ;
              ({ /* cicili#Progn6888 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector ) {
  return ({ /* cicili#Let6894 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let6898 */
        __auto_type match6897  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6897 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6901 */
          bool __h_case_result  = (true  &&  (((match6897 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6902 */
                (unboxed  =  (((match6897 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6907 */
              ({ /* cicili#Let6911 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6913 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6914 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6919 */
                      ({ /* cicili#Progn6921 */
                        { /* cicili#Let6925 */
                          __auto_type match6924  = take_Box_Vector_char ((&lvector ));
                          typeof((((match6924 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6928 */
                            bool __h_case_result  = (true  &&  (((match6924 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6929 */
                                  (ptr  =  (((match6924 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6935 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                      });
                    }) : ({ /* cicili#Let6943 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6945 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6946 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6948 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6950 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6955 */
                            ({ /* cicili#Let6958 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6962 */
                                __auto_type match6961  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6961 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6965 */
                                  bool __h_case_result  = (true  &&  (((match6961 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6966 */
                                        (unboxed  =  (((match6961 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6971 */
                                      ({ /* cicili#Let6975 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6977 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6978 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6983 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let6992 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6994 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6995 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7000 */
                                                    append_Vector_char (copySlice_Vector_char (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let7006 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn7008 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let7013 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7015 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let7020 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7022 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7027 */
              // ----------
              ;
              ({ /* cicili#Progn7029 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char push_Vector_char (char item , Vector_char vector ) {
  return ({ /* cicili#Let7035 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7039 */
        __auto_type match7038  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7038 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7042 */
          bool __h_case_result  = (true  &&  (((match7038 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7043 */
                (unboxed  =  (((match7038 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7048 */
              ({ /* cicili#Let7052 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7054 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7055 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7060 */
                      ({ /* cicili#Progn7062 */
                        { /* cicili#Let7066 */
                          __auto_type match7065  = take_Box_Vector_char ((&vector ));
                          typeof((((match7065 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let7069 */
                            bool __h_case_result  = (true  &&  (((match7065 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7070 */
                                  (ptr  =  (((match7065 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block7076 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (put_StringBuffer_char (sb , item ));
                      });
                    }) : ({ /* cicili#Let7082 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7084 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7085 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7087 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7089 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7094 */
                            ({ /* cicili#Let7097 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let7101 */
                                __auto_type match7100  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match7100 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let7104 */
                                  bool __h_case_result  = (true  &&  (((match7100 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7105 */
                                        (unboxed  =  (((match7100 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7110 */
                                      ({ /* cicili#Let7114 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7116 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7117 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7122 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let7129 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7131 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7132 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7137 */
                                                    push_Vector_char (item , copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let7143 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn7145 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let7150 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7152 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let7157 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7159 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7164 */
              // ----------
              ;
              ({ /* cicili#Progn7166 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char take_Vector_char (size_t len , Vector_char vector ) {
  return ({ /* cicili#Let7172 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7176 */
        __auto_type match7175  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7175 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7179 */
          bool __h_case_result  = (true  &&  (((match7175 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7180 */
                (unboxed  =  (((match7175 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7185 */
              ({ /* cicili#Let7189 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7191 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7192 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7197 */
                      ({ /* cicili#Let7201 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7203 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7204 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7209 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let7221 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7223 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn7224 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7229 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let7241 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7243 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7249 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7251 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7252 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7254 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7256 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7261 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , len ) : Slice_char (clone_Box_Vector_char (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let7273 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7275 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7280 */
              // ----------
              ;
              ({ /* cicili#Progn7282 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char last_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let7289 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7293 */
        __auto_type match7292  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7292 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7296 */
          bool __h_case_result  = (true  &&  (((match7292 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7297 */
                (unboxed  =  (((match7292 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7302 */
              ({ /* cicili#Let7306 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7308 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7309 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7314 */
                      ({ /* cicili#Let7318 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7320 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7321 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7323 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7328 */
                              Just_char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let7333 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7335 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn7336 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7338 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7343 */
                                    Just_char ((*(buffer  +  (cursor  -  1 ) )));
                                  }) : ({ /* cicili#Let7348 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7350 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7355 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7357 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7358 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7360 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7362 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7367 */
                            nth_Vector_char ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let7372 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7374 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7379 */
              // ----------
              ;
              ({ /* cicili#Progn7381 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Vector_char init_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let7387 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7391 */
        __auto_type match7390  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7390 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7394 */
          bool __h_case_result  = (true  &&  (((match7390 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7395 */
                (unboxed  =  (((match7390 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7400 */
              ({ /* cicili#Let7404 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7406 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7407 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7412 */
                      ({ /* cicili#Let7416 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7418 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7419 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7424 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let7430 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7432 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn7433 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7438 */
                                    Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                                  }) : ({ /* cicili#Let7444 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7446 */
                                      None_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7451 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7453 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7454 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7456 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7458 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7463 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let7469 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7471 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7476 */
              // ----------
              ;
              ({ /* cicili#Progn7478 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_char (Vector_char vector , size_t desired ) {
  return ({ /* cicili#Let7483 */
      size_t len  = len_Vector_char (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let7490 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7494 */
        __auto_type match7493  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7493 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7497 */
          bool __h_case_result  = (true  &&  (((match7493 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7498 */
                (unboxed  =  (((match7493 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7503 */
              ({ /* cicili#Let7507 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7509 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7510 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7515 */
                      ({ /* cicili#Let7519 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7521 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7522 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7527 */
                              cursor ;
                            }) : ({ /* cicili#Let7531 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7533 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn7534 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7539 */
                                    cursor ;
                                  }) : ({ /* cicili#Let7543 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7545 */
                                      0;
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7549 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7551 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7552 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7557 */
                            size ;
                          }) : ({ /* cicili#Let7561 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7563 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7567 */
              // ----------
              ;
              ({ /* cicili#Progn7569 */
                0;
              });
            }));
        });
      });
    });
}
Vector_char tail_Vector_char (Vector_char vector ) {
  return drop_Vector_char (1, vector );
}
Vector_char drop_Vector_char (size_t len , Vector_char vector ) {
  return ({ /* cicili#Let7577 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7581 */
        __auto_type match7580  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7580 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7584 */
          bool __h_case_result  = (true  &&  (((match7580 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7585 */
                (unboxed  =  (((match7580 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7590 */
              ({ /* cicili#Let7594 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7596 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7597 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7602 */
                      ({ /* cicili#Let7606 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7608 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7609 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7614 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let7626 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7628 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn7629 */
                                      (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7634 */
                                    (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                                  }) : ({ /* cicili#Let7646 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7648 */
                                      Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7654 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7656 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7657 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7659 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7664 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let7669 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7671 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7676 */
              // ----------
              ;
              ({ /* cicili#Progn7678 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let7685 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7689 */
        __auto_type match7688  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7688 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7692 */
          bool __h_case_result  = (true  &&  (((match7688 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7693 */
                (unboxed  =  (((match7688 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7698 */
              ({ /* cicili#Let7702 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7704 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7705 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7710 */
                      ({ /* cicili#Let7714 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7716 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7717 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7719 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7724 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let7731 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7733 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn7734 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7736 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7741 */
                                    (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                                  }) : ({ /* cicili#Let7748 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7750 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7755 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7757 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7758 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7760 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7765 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let7770 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7772 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7777 */
              // ----------
              ;
              ({ /* cicili#Progn7779 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Vector_char (size_t index , Vector_char vector ) {
  return ({ /* cicili#Let7786 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7790 */
        __auto_type match7789  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7789 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7793 */
          bool __h_case_result  = (true  &&  (((match7789 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7794 */
                (unboxed  =  (((match7789 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7799 */
              ({ /* cicili#Let7803 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7805 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7806 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7811 */
                      ({ /* cicili#Let7815 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7817 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7818 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7820 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7825 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let7832 */
                              typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                              typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
                              // ----------
                              ;
                              ({ /* cicili#Let7834 */
                                bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn7835 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7837 */
                                        (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7842 */
                                    ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                                  }) : ({ /* cicili#Let7849 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn7851 */
                                      Nothing_char ();
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7856 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7858 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7859 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7861 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7863 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7868 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let7875 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7877 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7882 */
              // ----------
              ;
              ({ /* cicili#Progn7884 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Vector_char_x (Vector_char_x * this_ptr ) {
  { /* cicili#Let7889 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let7893 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let7895 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7896 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block7902 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let7908 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let7910 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7911 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7917 */
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
  static Vector_char__H_Table table  = { free_Vector_char_x , iterator_Vector_char , resize_Vector_char , pure_Vector_char , pureCapacity_Vector_char , toArray_Vector_char , wrap_Vector_char , show_Vector_char , copy_Vector_char , copySlice_Vector_char , replaceAt_Vector_char , deleteAt_Vector_char , insertAt_Vector_char , reverse_Vector_char , append_Vector_char , push_Vector_char , take_Vector_char , last_Vector_char , init_Vector_char , hasLen_Vector_char , len_Vector_char , tail_Vector_char , drop_Vector_char , head_Vector_char , nth_Vector_char };
  return (&table );
}
Vector_char Buffer_char (StringBuffer_char buffer ) {
  { /* cicili#Let7927 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size ) {
  { /* cicili#Let7935 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char None_char () {
  { /* cicili#Let7942 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h___t });
    return new_Box_Vector_char (instance );
  }
}
#endif /* __Vector_char__H_IMPL__ */ 
#ifndef __Maybe_Vector_char__H_IMPL__
#define __Maybe_Vector_char__H_IMPL__
void free_Maybe_Vector_char (Maybe_Vector_char * this ) {
}
const Maybe_Vector_char__H_Table * const get_Maybe_Vector_char__H_Table () {
  static const Maybe_Vector_char__H_Table table  = { free_Maybe_Vector_char };
  return (&table );
}
Maybe_Vector_char Just_Vector_char (Vector_char value ) {
  { /* cicili#Let7960 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char Nothing_Vector_char () {
  { /* cicili#Let7965 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let7981 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7983 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7986 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7989 */
      __auto_type v03  = ({ /* cicili#Let7992 */
        StringBuffer_int tmp_buf7991  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf7991 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8001 */
      __auto_type v04  = ({ /* cicili#Let8004 */
        StringBuffer_int tmp_buf8003  = newCapacity_StringBuffer_int (2, 16, null_terminated_Vector_int );
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf8003 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8013 */
      __auto_type v05  = ({ /* cicili#Let8016 */
        StringBuffer_char tmp_buf8015  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf8015 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8025 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8029 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8033 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8036 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8039 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8042 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8045 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8048 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8051 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8054 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8057 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8060 */
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
    { /* cicili#Block8067 */
      { /* cicili#Let8071 */
        __auto_type match8070  = nth_Vector_int (3, v03 );
        typeof((((match8070 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let8074 */
          bool __h_case_result  = (true  &&  (((match8070 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8075 */
                (i  =  (((match8070 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8081 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let8086 */
              // ----------
              ;
              { /* cicili#Block8088 */
                { /* cicili#Block8093 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8097 */
        __auto_type match8096  = nth_Vector_char (5, v05 );
        typeof((((match8096 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let8100 */
          bool __h_case_result  = (true  &&  (((match8096 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8101 */
                (c  =  (((match8096 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8107 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let8112 */
              // ----------
              ;
              { /* cicili#Block8114 */
                { /* cicili#Block8119 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8123 */
        __auto_type match8122  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let8126 */
          bool __h_case_result  = (true  &&  ((match8122 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8131 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let8136 */
              // ----------
              ;
              { /* cicili#Block8138 */
                { /* cicili#Block8143 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8147 */
        __auto_type match8146  = head_Vector_int (v08 );
        typeof((((match8146 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let8150 */
          bool __h_case_result  = (true  &&  (((match8146 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8151 */
                (i  =  (((match8146 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8157 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let8162 */
              // ----------
              ;
              { /* cicili#Block8164 */
                { /* cicili#Block8169 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8173 */
        __auto_type match8172  = head_Vector_char (v09 );
        typeof((((match8172 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let8176 */
          bool __h_case_result  = (true  &&  (((match8172 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8177 */
                (c  =  (((match8172 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8183 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let8188 */
              // ----------
              ;
              { /* cicili#Block8190 */
                { /* cicili#Block8195 */
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
      { /* cicili#Let8199 */
        __auto_type match8198  = nth_Vector_int (1, v08 );
        typeof((((match8198 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let8202 */
          bool __h_case_result  = (true  &&  (((match8198 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8203 */
                (i  =  (((match8198 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8209 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let8214 */
              // ----------
              ;
              { /* cicili#Block8216 */
                { /* cicili#Block8221 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8225 */
        __auto_type match8224  = nth_Vector_char (2, v09 );
        typeof((((match8224 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let8228 */
          bool __h_case_result  = (true  &&  (((match8224 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8229 */
                (c  =  (((match8224 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8235 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let8240 */
              // ----------
              ;
              { /* cicili#Block8242 */
                { /* cicili#Block8247 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8251 */
        __auto_type match8250  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let8254 */
          bool __h_case_result  = (true  &&  ((match8250 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8259 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let8264 */
              // ----------
              ;
              { /* cicili#Block8266 */
                { /* cicili#Block8271 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let8274 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let8278 */
          __auto_type match8277  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8277 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8281 */
            bool __h_case_result  = (true  &&  (((match8277 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8282 */
                  (unboxed  =  (((match8277 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8288 */
                { /* cicili#Let8292 */
                  // ----------
                  ;
                  ({ /* cicili#Let8294 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8299 */
                        { /* cicili#Block8301 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8306 */
                        // ----------
                        ;
                        { /* cicili#Block8308 */
                          { /* cicili#Block8313 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8318 */
                // ----------
                ;
                ({ /* cicili#Let8320 */
                  bool __h_case_result  = (true  &&  ((match8277 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8325 */
                      { /* cicili#Block8330 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8333 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let8337 */
          __auto_type match8336  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8336 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8340 */
            bool __h_case_result  = (true  &&  (((match8336 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8341 */
                  (unboxed  =  (((match8336 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8347 */
                { /* cicili#Let8351 */
                  // ----------
                  ;
                  ({ /* cicili#Let8353 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8358 */
                        { /* cicili#Block8360 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8365 */
                        // ----------
                        ;
                        { /* cicili#Block8367 */
                          { /* cicili#Block8372 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8377 */
                // ----------
                ;
                ({ /* cicili#Let8379 */
                  bool __h_case_result  = (true  &&  ((match8336 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8384 */
                      { /* cicili#Block8389 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8392 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let8396 */
          __auto_type match8395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8395 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8399 */
            bool __h_case_result  = (true  &&  (((match8395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8400 */
                  (unboxed  =  (((match8395 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8406 */
                { /* cicili#Let8410 */
                  // ----------
                  ;
                  ({ /* cicili#Let8412 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8417 */
                        { /* cicili#Block8419 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8424 */
                        // ----------
                        ;
                        { /* cicili#Block8426 */
                          { /* cicili#Block8431 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8436 */
                // ----------
                ;
                ({ /* cicili#Let8438 */
                  bool __h_case_result  = (true  &&  ((match8395 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8443 */
                      { /* cicili#Block8448 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8451 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let8455 */
          __auto_type match8454  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8454 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8458 */
            bool __h_case_result  = (true  &&  (((match8454 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8459 */
                  (unboxed  =  (((match8454 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8465 */
                { /* cicili#Let8469 */
                  // ----------
                  ;
                  ({ /* cicili#Let8471 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8476 */
                        { /* cicili#Block8478 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8483 */
                        // ----------
                        ;
                        { /* cicili#Block8485 */
                          { /* cicili#Block8490 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8495 */
                // ----------
                ;
                ({ /* cicili#Let8497 */
                  bool __h_case_result  = (true  &&  ((match8454 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8502 */
                      { /* cicili#Block8507 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8510 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let8514 */
          __auto_type match8513  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8513 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8517 */
            bool __h_case_result  = (true  &&  (((match8513 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8518 */
                  (unboxed  =  (((match8513 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8524 */
                { /* cicili#Let8528 */
                  // ----------
                  ;
                  ({ /* cicili#Let8530 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8535 */
                        { /* cicili#Block8537 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8542 */
                        // ----------
                        ;
                        { /* cicili#Block8544 */
                          { /* cicili#Block8549 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8554 */
                // ----------
                ;
                ({ /* cicili#Let8556 */
                  bool __h_case_result  = (true  &&  ((match8513 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8561 */
                      { /* cicili#Block8566 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8569 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let8573 */
          __auto_type match8572  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8572 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8576 */
            bool __h_case_result  = (true  &&  (((match8572 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8577 */
                  (unboxed  =  (((match8572 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8583 */
                { /* cicili#Let8587 */
                  // ----------
                  ;
                  ({ /* cicili#Let8589 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8594 */
                        { /* cicili#Block8596 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8601 */
                        // ----------
                        ;
                        { /* cicili#Block8603 */
                          { /* cicili#Block8608 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8613 */
                // ----------
                ;
                ({ /* cicili#Let8615 */
                  bool __h_case_result  = (true  &&  ((match8572 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8620 */
                      { /* cicili#Block8625 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      { /* cicili#Let8629 */
        __auto_type match8628  = last_Vector_int (v03 );
        typeof((((match8628 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let8631 */
          bool __h_case_result  = (true  &&  (((match8628 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8632 */
                (la  =  (((match8628 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8638 */
              printf ("last of v03: %d\n", la );
            }
          else
            { /* cicili#Let8643 */
              // ----------
              ;
              { /* cicili#Block8645 */
                { /* cicili#Block8650 */
                  printf ("status: %d\n", -121);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let8654 */
        __auto_type match8653  = last_Vector_char (v05 );
        typeof((((match8653 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let8656 */
          bool __h_case_result  = (true  &&  (((match8653 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8657 */
                (la  =  (((match8653 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block8663 */
              printf ("last of v05: %c\n", la );
            }
          else
            { /* cicili#Let8668 */
              // ----------
              ;
              { /* cicili#Block8670 */
                { /* cicili#Block8675 */
                  printf ("status: %d\n", -123);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let8678 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let8682 */
          __auto_type match8681  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8681 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8685 */
            bool __h_case_result  = (true  &&  (((match8681 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8686 */
                  (unboxed  =  (((match8681 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8692 */
                { /* cicili#Let8696 */
                  // ----------
                  ;
                  ({ /* cicili#Let8698 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8703 */
                        { /* cicili#Block8705 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8710 */
                        // ----------
                        ;
                        { /* cicili#Block8712 */
                          { /* cicili#Block8717 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8722 */
                // ----------
                ;
                ({ /* cicili#Let8724 */
                  bool __h_case_result  = (true  &&  ((match8681 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8729 */
                      { /* cicili#Block8734 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8737 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let8741 */
          __auto_type match8740  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8740 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8744 */
            bool __h_case_result  = (true  &&  (((match8740 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8745 */
                  (unboxed  =  (((match8740 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8751 */
                { /* cicili#Let8755 */
                  // ----------
                  ;
                  ({ /* cicili#Let8757 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8762 */
                        { /* cicili#Block8764 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8769 */
                        // ----------
                        ;
                        { /* cicili#Block8771 */
                          { /* cicili#Block8776 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8781 */
                // ----------
                ;
                ({ /* cicili#Let8783 */
                  bool __h_case_result  = (true  &&  ((match8740 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8788 */
                      { /* cicili#Block8793 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8796 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let8800 */
          __auto_type match8799  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8799 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8803 */
            bool __h_case_result  = (true  &&  (((match8799 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8804 */
                  (unboxed  =  (((match8799 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8810 */
                { /* cicili#Let8814 */
                  // ----------
                  ;
                  ({ /* cicili#Let8816 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8821 */
                        { /* cicili#Block8823 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8828 */
                        // ----------
                        ;
                        { /* cicili#Block8830 */
                          { /* cicili#Block8835 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8840 */
                // ----------
                ;
                ({ /* cicili#Let8842 */
                  bool __h_case_result  = (true  &&  ((match8799 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8847 */
                      { /* cicili#Block8852 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8855 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let8859 */
          __auto_type match8858  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8858 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8862 */
            bool __h_case_result  = (true  &&  (((match8858 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8863 */
                  (unboxed  =  (((match8858 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block8869 */
                { /* cicili#Let8873 */
                  // ----------
                  ;
                  ({ /* cicili#Let8875 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8880 */
                        { /* cicili#Block8882 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let8887 */
                        // ----------
                        ;
                        { /* cicili#Block8889 */
                          { /* cicili#Block8894 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let8899 */
                // ----------
                ;
                ({ /* cicili#Let8901 */
                  bool __h_case_result  = (true  &&  ((match8858 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block8906 */
                      { /* cicili#Block8911 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let8914 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8916 */
          __auto_type v033  = ({ /* cicili#Let8919 */
            StringBuffer_int tmp_buf8918  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8918 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8928 */
          __auto_type v055  = ({ /* cicili#Let8931 */
            StringBuffer_char tmp_buf8930  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8930 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8940 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8943 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8946 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8949 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8952 */
          __auto_type v0333  = ({ /* cicili#Let8955 */
            StringBuffer_int tmp_buf8954  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8954 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8964 */
          __auto_type v0555  = ({ /* cicili#Let8967 */
            StringBuffer_char tmp_buf8966  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8966 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8976 */
          __auto_type v0444  = ({ /* cicili#Let8979 */
            StringBuffer_int tmp_buf8978  = newCapacity_StringBuffer_int (3, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8978 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8988 */
          __auto_type v0666  = ({ /* cicili#Let8991 */
            StringBuffer_char tmp_buf8990  = newCapacity_StringBuffer_char (6, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8990 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9000 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9003 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9006 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9009 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9012 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9015 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9018 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9021 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9024 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9027 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9030 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9033 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9036 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let9040 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let9044 */
            __auto_type match9043  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9043 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9047 */
              bool __h_case_result  = (true  &&  (((match9043 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9048 */
                    (unboxed  =  (((match9043 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9054 */
                  { /* cicili#Let9058 */
                    // ----------
                    ;
                    ({ /* cicili#Let9060 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9065 */
                          { /* cicili#Block9067 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9072 */
                          // ----------
                          ;
                          { /* cicili#Block9074 */
                            { /* cicili#Block9079 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9084 */
                  // ----------
                  ;
                  ({ /* cicili#Let9086 */
                    bool __h_case_result  = (true  &&  ((match9043 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9091 */
                        { /* cicili#Block9096 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9099 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let9103 */
            __auto_type match9102  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9102 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9106 */
              bool __h_case_result  = (true  &&  (((match9102 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9107 */
                    (unboxed  =  (((match9102 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9113 */
                  { /* cicili#Let9117 */
                    // ----------
                    ;
                    ({ /* cicili#Let9119 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9124 */
                          { /* cicili#Block9126 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9131 */
                          // ----------
                          ;
                          { /* cicili#Block9133 */
                            { /* cicili#Block9138 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9143 */
                  // ----------
                  ;
                  ({ /* cicili#Let9145 */
                    bool __h_case_result  = (true  &&  ((match9102 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9150 */
                        { /* cicili#Block9155 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9158 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let9162 */
            __auto_type match9161  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9161 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9165 */
              bool __h_case_result  = (true  &&  (((match9161 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9166 */
                    (unboxed  =  (((match9161 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9172 */
                  { /* cicili#Let9176 */
                    // ----------
                    ;
                    ({ /* cicili#Let9178 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9183 */
                          { /* cicili#Block9185 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9190 */
                          // ----------
                          ;
                          { /* cicili#Block9192 */
                            { /* cicili#Block9197 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9202 */
                  // ----------
                  ;
                  ({ /* cicili#Let9204 */
                    bool __h_case_result  = (true  &&  ((match9161 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9209 */
                        { /* cicili#Block9214 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9217 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let9221 */
            __auto_type match9220  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9220 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9224 */
              bool __h_case_result  = (true  &&  (((match9220 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9225 */
                    (unboxed  =  (((match9220 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9231 */
                  { /* cicili#Let9235 */
                    // ----------
                    ;
                    ({ /* cicili#Let9237 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9242 */
                          { /* cicili#Block9244 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9249 */
                          // ----------
                          ;
                          { /* cicili#Block9251 */
                            { /* cicili#Block9256 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9261 */
                  // ----------
                  ;
                  ({ /* cicili#Let9263 */
                    bool __h_case_result  = (true  &&  ((match9220 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9268 */
                        { /* cicili#Block9273 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9276 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let9280 */
            __auto_type match9279  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9279 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9283 */
              bool __h_case_result  = (true  &&  (((match9279 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9284 */
                    (unboxed  =  (((match9279 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9290 */
                  { /* cicili#Let9294 */
                    // ----------
                    ;
                    ({ /* cicili#Let9296 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9301 */
                          { /* cicili#Block9303 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9308 */
                          // ----------
                          ;
                          { /* cicili#Block9310 */
                            { /* cicili#Block9315 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9320 */
                  // ----------
                  ;
                  ({ /* cicili#Let9322 */
                    bool __h_case_result  = (true  &&  ((match9279 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9327 */
                        { /* cicili#Block9332 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9335 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let9339 */
            __auto_type match9338  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9338 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9342 */
              bool __h_case_result  = (true  &&  (((match9338 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9343 */
                    (unboxed  =  (((match9338 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9349 */
                  { /* cicili#Let9353 */
                    // ----------
                    ;
                    ({ /* cicili#Let9355 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9360 */
                          { /* cicili#Block9362 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9367 */
                          // ----------
                          ;
                          { /* cicili#Block9369 */
                            { /* cicili#Block9374 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9379 */
                  // ----------
                  ;
                  ({ /* cicili#Let9381 */
                    bool __h_case_result  = (true  &&  ((match9338 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9386 */
                        { /* cicili#Block9391 */
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
        ({ /* cicili#Let9394 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let9398 */
            __auto_type match9397  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9397 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9401 */
              bool __h_case_result  = (true  &&  (((match9397 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9402 */
                    (unboxed  =  (((match9397 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9408 */
                  { /* cicili#Let9412 */
                    // ----------
                    ;
                    ({ /* cicili#Let9414 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9419 */
                          { /* cicili#Block9421 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9426 */
                          // ----------
                          ;
                          { /* cicili#Block9428 */
                            { /* cicili#Block9433 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9438 */
                  // ----------
                  ;
                  ({ /* cicili#Let9440 */
                    bool __h_case_result  = (true  &&  ((match9397 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9445 */
                        { /* cicili#Block9450 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9453 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let9457 */
            __auto_type match9456  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9456 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9460 */
              bool __h_case_result  = (true  &&  (((match9456 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9461 */
                    (unboxed  =  (((match9456 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9467 */
                  { /* cicili#Let9471 */
                    // ----------
                    ;
                    ({ /* cicili#Let9473 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9478 */
                          { /* cicili#Block9480 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9485 */
                          // ----------
                          ;
                          { /* cicili#Block9487 */
                            { /* cicili#Block9492 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9497 */
                  // ----------
                  ;
                  ({ /* cicili#Let9499 */
                    bool __h_case_result  = (true  &&  ((match9456 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9504 */
                        { /* cicili#Block9509 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9512 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let9516 */
            __auto_type match9515  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9515 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9519 */
              bool __h_case_result  = (true  &&  (((match9515 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9520 */
                    (unboxed  =  (((match9515 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9526 */
                  { /* cicili#Let9530 */
                    // ----------
                    ;
                    ({ /* cicili#Let9532 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9537 */
                          { /* cicili#Block9539 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9544 */
                          // ----------
                          ;
                          { /* cicili#Block9546 */
                            { /* cicili#Block9551 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9556 */
                  // ----------
                  ;
                  ({ /* cicili#Let9558 */
                    bool __h_case_result  = (true  &&  ((match9515 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9563 */
                        { /* cicili#Block9568 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9571 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let9575 */
            __auto_type match9574  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9574 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9578 */
              bool __h_case_result  = (true  &&  (((match9574 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9579 */
                    (unboxed  =  (((match9574 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9585 */
                  { /* cicili#Let9589 */
                    // ----------
                    ;
                    ({ /* cicili#Let9591 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9596 */
                          { /* cicili#Block9598 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9603 */
                          // ----------
                          ;
                          { /* cicili#Block9605 */
                            { /* cicili#Block9610 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9615 */
                  // ----------
                  ;
                  ({ /* cicili#Let9617 */
                    bool __h_case_result  = (true  &&  ((match9574 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9622 */
                        { /* cicili#Block9627 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9630 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let9634 */
            __auto_type match9633  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9633 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9637 */
              bool __h_case_result  = (true  &&  (((match9633 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9638 */
                    (unboxed  =  (((match9633 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9644 */
                  { /* cicili#Let9648 */
                    // ----------
                    ;
                    ({ /* cicili#Let9650 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9655 */
                          { /* cicili#Block9657 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9662 */
                          // ----------
                          ;
                          { /* cicili#Block9664 */
                            { /* cicili#Block9669 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9674 */
                  // ----------
                  ;
                  ({ /* cicili#Let9676 */
                    bool __h_case_result  = (true  &&  ((match9633 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9681 */
                        { /* cicili#Block9686 */
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
      ({ /* cicili#Let9689 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9691 */
          __auto_type v033  = ({ /* cicili#Let9694 */
            StringBuffer_int tmp_buf9693  = newCapacity_StringBuffer_int (5, 16, null_terminated_Vector_int );
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf9693 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9703 */
          __auto_type v055  = ({ /* cicili#Let9706 */
            StringBuffer_char tmp_buf9705  = newCapacity_StringBuffer_char (11, 16, null_terminated_Vector_char );
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf9705 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9715 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9718 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9721 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9724 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9727 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9730 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9733 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9736 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9739 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9742 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9745 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9748 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9751 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9754 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9757 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9760 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9763 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9766 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9769 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9772 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9775 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9778 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9781 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9784 */
          __auto_type vt61  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9787 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9790 */
          __auto_type v461  = resize_Vector_char (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9793 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9796 */
          __auto_type vt101  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9799 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9802 */
          __auto_type v481  = resize_Vector_char (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let9806 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let9810 */
            __auto_type match9809  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9809 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9813 */
              bool __h_case_result  = (true  &&  (((match9809 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9814 */
                    (unboxed  =  (((match9809 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9820 */
                  { /* cicili#Let9824 */
                    // ----------
                    ;
                    ({ /* cicili#Let9826 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9831 */
                          { /* cicili#Block9833 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9838 */
                          // ----------
                          ;
                          { /* cicili#Block9840 */
                            { /* cicili#Block9845 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9850 */
                  // ----------
                  ;
                  ({ /* cicili#Let9852 */
                    bool __h_case_result  = (true  &&  ((match9809 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9857 */
                        { /* cicili#Block9862 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9865 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let9869 */
            __auto_type match9868  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9868 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9872 */
              bool __h_case_result  = (true  &&  (((match9868 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9873 */
                    (unboxed  =  (((match9868 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9879 */
                  { /* cicili#Let9883 */
                    // ----------
                    ;
                    ({ /* cicili#Let9885 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9890 */
                          { /* cicili#Block9892 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9897 */
                          // ----------
                          ;
                          { /* cicili#Block9899 */
                            { /* cicili#Block9904 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9909 */
                  // ----------
                  ;
                  ({ /* cicili#Let9911 */
                    bool __h_case_result  = (true  &&  ((match9868 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9916 */
                        { /* cicili#Block9921 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9924 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let9928 */
            __auto_type match9927  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9927 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9931 */
              bool __h_case_result  = (true  &&  (((match9927 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9932 */
                    (unboxed  =  (((match9927 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9938 */
                  { /* cicili#Let9942 */
                    // ----------
                    ;
                    ({ /* cicili#Let9944 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9949 */
                          { /* cicili#Block9951 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9956 */
                          // ----------
                          ;
                          { /* cicili#Block9958 */
                            { /* cicili#Block9963 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9968 */
                  // ----------
                  ;
                  ({ /* cicili#Let9970 */
                    bool __h_case_result  = (true  &&  ((match9927 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9975 */
                        { /* cicili#Block9980 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9983 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let9987 */
            __auto_type match9986  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9986 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9990 */
              bool __h_case_result  = (true  &&  (((match9986 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9991 */
                    (unboxed  =  (((match9986 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9997 */
                  { /* cicili#Let10001 */
                    // ----------
                    ;
                    ({ /* cicili#Let10003 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10008 */
                          { /* cicili#Block10010 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10015 */
                          // ----------
                          ;
                          { /* cicili#Block10017 */
                            { /* cicili#Block10022 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10027 */
                  // ----------
                  ;
                  ({ /* cicili#Let10029 */
                    bool __h_case_result  = (true  &&  ((match9986 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10034 */
                        { /* cicili#Block10039 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10042 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let10046 */
            __auto_type match10045  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10045 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10049 */
              bool __h_case_result  = (true  &&  (((match10045 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10050 */
                    (unboxed  =  (((match10045 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10056 */
                  { /* cicili#Let10060 */
                    // ----------
                    ;
                    ({ /* cicili#Let10062 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10067 */
                          { /* cicili#Block10069 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10074 */
                          // ----------
                          ;
                          { /* cicili#Block10076 */
                            { /* cicili#Block10081 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10086 */
                  // ----------
                  ;
                  ({ /* cicili#Let10088 */
                    bool __h_case_result  = (true  &&  ((match10045 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10093 */
                        { /* cicili#Block10098 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10101 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let10105 */
            __auto_type match10104  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10104 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10108 */
              bool __h_case_result  = (true  &&  (((match10104 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10109 */
                    (unboxed  =  (((match10104 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10115 */
                  { /* cicili#Let10119 */
                    // ----------
                    ;
                    ({ /* cicili#Let10121 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10126 */
                          { /* cicili#Block10128 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10133 */
                          // ----------
                          ;
                          { /* cicili#Block10135 */
                            { /* cicili#Block10140 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10145 */
                  // ----------
                  ;
                  ({ /* cicili#Let10147 */
                    bool __h_case_result  = (true  &&  ((match10104 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10152 */
                        { /* cicili#Block10157 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10160 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let10164 */
            __auto_type match10163  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10163 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10167 */
              bool __h_case_result  = (true  &&  (((match10163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10168 */
                    (unboxed  =  (((match10163 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10174 */
                  { /* cicili#Let10178 */
                    // ----------
                    ;
                    ({ /* cicili#Let10180 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10185 */
                          { /* cicili#Block10187 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10192 */
                          // ----------
                          ;
                          { /* cicili#Block10194 */
                            { /* cicili#Block10199 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10204 */
                  // ----------
                  ;
                  ({ /* cicili#Let10206 */
                    bool __h_case_result  = (true  &&  ((match10163 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10211 */
                        { /* cicili#Block10216 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10219 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let10223 */
            __auto_type match10222  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10222 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10226 */
              bool __h_case_result  = (true  &&  (((match10222 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10227 */
                    (unboxed  =  (((match10222 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10233 */
                  { /* cicili#Let10237 */
                    // ----------
                    ;
                    ({ /* cicili#Let10239 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10244 */
                          { /* cicili#Block10246 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10251 */
                          // ----------
                          ;
                          { /* cicili#Block10253 */
                            { /* cicili#Block10258 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10263 */
                  // ----------
                  ;
                  ({ /* cicili#Let10265 */
                    bool __h_case_result  = (true  &&  ((match10222 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10270 */
                        { /* cicili#Block10275 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10278 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let10282 */
            __auto_type match10281  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10281 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10285 */
              bool __h_case_result  = (true  &&  (((match10281 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10286 */
                    (unboxed  =  (((match10281 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10292 */
                  { /* cicili#Let10296 */
                    // ----------
                    ;
                    ({ /* cicili#Let10298 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10303 */
                          { /* cicili#Block10305 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10310 */
                          // ----------
                          ;
                          { /* cicili#Block10312 */
                            { /* cicili#Block10317 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10322 */
                  // ----------
                  ;
                  ({ /* cicili#Let10324 */
                    bool __h_case_result  = (true  &&  ((match10281 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10329 */
                        { /* cicili#Block10334 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10337 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let10341 */
            __auto_type match10340  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10340 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10344 */
              bool __h_case_result  = (true  &&  (((match10340 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10345 */
                    (unboxed  =  (((match10340 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10351 */
                  { /* cicili#Let10355 */
                    // ----------
                    ;
                    ({ /* cicili#Let10357 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10362 */
                          { /* cicili#Block10364 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10369 */
                          // ----------
                          ;
                          { /* cicili#Block10371 */
                            { /* cicili#Block10376 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10381 */
                  // ----------
                  ;
                  ({ /* cicili#Let10383 */
                    bool __h_case_result  = (true  &&  ((match10340 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10388 */
                        { /* cicili#Block10393 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10396 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let10400 */
            __auto_type match10399  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10399 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10403 */
              bool __h_case_result  = (true  &&  (((match10399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10404 */
                    (unboxed  =  (((match10399 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10410 */
                  { /* cicili#Let10414 */
                    // ----------
                    ;
                    ({ /* cicili#Let10416 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10421 */
                          { /* cicili#Block10423 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10428 */
                          // ----------
                          ;
                          { /* cicili#Block10430 */
                            { /* cicili#Block10435 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10440 */
                  // ----------
                  ;
                  ({ /* cicili#Let10442 */
                    bool __h_case_result  = (true  &&  ((match10399 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10447 */
                        { /* cicili#Block10452 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10455 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let10459 */
            __auto_type match10458  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10458 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10462 */
              bool __h_case_result  = (true  &&  (((match10458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10463 */
                    (unboxed  =  (((match10458 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10469 */
                  { /* cicili#Let10473 */
                    // ----------
                    ;
                    ({ /* cicili#Let10475 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10480 */
                          { /* cicili#Block10482 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10487 */
                          // ----------
                          ;
                          { /* cicili#Block10489 */
                            { /* cicili#Block10494 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10499 */
                  // ----------
                  ;
                  ({ /* cicili#Let10501 */
                    bool __h_case_result  = (true  &&  ((match10458 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10506 */
                        { /* cicili#Block10511 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10514 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let10518 */
            __auto_type match10517  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10517 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10521 */
              bool __h_case_result  = (true  &&  (((match10517 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10522 */
                    (unboxed  =  (((match10517 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10528 */
                  { /* cicili#Let10532 */
                    // ----------
                    ;
                    ({ /* cicili#Let10534 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10539 */
                          { /* cicili#Block10541 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10546 */
                          // ----------
                          ;
                          { /* cicili#Block10548 */
                            { /* cicili#Block10553 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10558 */
                  // ----------
                  ;
                  ({ /* cicili#Let10560 */
                    bool __h_case_result  = (true  &&  ((match10517 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10565 */
                        { /* cicili#Block10570 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10573 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let10577 */
            __auto_type match10576  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10576 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10580 */
              bool __h_case_result  = (true  &&  (((match10576 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10581 */
                    (unboxed  =  (((match10576 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10587 */
                  { /* cicili#Let10591 */
                    // ----------
                    ;
                    ({ /* cicili#Let10593 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10598 */
                          { /* cicili#Block10600 */
                            printf ("resize 15 v244: ");
                            show_Vector_char (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10605 */
                          // ----------
                          ;
                          { /* cicili#Block10607 */
                            { /* cicili#Block10612 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10617 */
                  // ----------
                  ;
                  ({ /* cicili#Let10619 */
                    bool __h_case_result  = (true  &&  ((match10576 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10624 */
                        { /* cicili#Block10629 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10632 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let10636 */
            __auto_type match10635  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10635 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10639 */
              bool __h_case_result  = (true  &&  (((match10635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10640 */
                    (unboxed  =  (((match10635 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10646 */
                  { /* cicili#Let10650 */
                    // ----------
                    ;
                    ({ /* cicili#Let10652 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10657 */
                          { /* cicili#Block10659 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10664 */
                          // ----------
                          ;
                          { /* cicili#Block10666 */
                            { /* cicili#Block10671 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10676 */
                  // ----------
                  ;
                  ({ /* cicili#Let10678 */
                    bool __h_case_result  = (true  &&  ((match10635 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10683 */
                        { /* cicili#Block10688 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10691 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let10695 */
            __auto_type match10694  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10694 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10698 */
              bool __h_case_result  = (true  &&  (((match10694 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10699 */
                    (unboxed  =  (((match10694 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10705 */
                  { /* cicili#Let10709 */
                    // ----------
                    ;
                    ({ /* cicili#Let10711 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10716 */
                          { /* cicili#Block10718 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_Vector_char (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10723 */
                          // ----------
                          ;
                          { /* cicili#Block10725 */
                            { /* cicili#Block10730 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10735 */
                  // ----------
                  ;
                  ({ /* cicili#Let10737 */
                    bool __h_case_result  = (true  &&  ((match10694 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10742 */
                        { /* cicili#Block10747 */
                          printf ("status: %d\n", -179);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10750 */
          __auto_type sliceToSlice  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10752 */
            __auto_type sliceToSlice  = drop_Vector_char (2, v481 );
            // ----------
            ((void)((sliceToSlice . __h_table )-> freeData ));
            sliceToSlice ;
          });
          // ----------
          { /* cicili#Let10758 */
            __auto_type match10757  = iterator_Vector_char (v481 );
            typeof((match10757 . __h_0_mem )) begin ;
            typeof((match10757 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let10761 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn10762 */
                    (begin  =  (match10757 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10764 */
                    (end  =  (match10757 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10770 */
                  { /* cicili#Block10772 */
                    printf ("iterator begin: %s\n", begin );
                    printf ("iterator content: ");
                    while ((begin  !=  end  )) {
                        printf ("%c", (*begin ));
                        (++begin );
                    }
                    printf ("\n");
                  }
                }
            });
          }
          { /* cicili#Let10777 */
            __auto_type match10776  = iterator_Vector_char (sliceToSlice );
            typeof((match10776 . __h_0_mem )) begin ;
            typeof((match10776 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let10780 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn10781 */
                    (begin  =  (match10776 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10783 */
                    (end  =  (match10776 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10789 */
                  { /* cicili#Block10791 */
                    printf ("iterator STS begin: %s\n", begin );
                    printf ("iterator STS content: ");
                    while ((begin  !=  end  )) {
                        printf ("%c", (*begin ));
                        (++begin );
                    }
                    printf ("\n");
                  }
                }
            });
          }
        });
      });
    }
  });
}
