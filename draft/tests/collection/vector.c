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
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_int StringBuffer_int ;
typedef void (*free_StringBuffer_int_t) (StringBuffer_int * this );
typedef struct StringBuffer_int__H_Table {
  free_StringBuffer_int_t freeData ;
    StringBuffer_int (*resize) (StringBuffer_int sb , size_t size );
    StringBuffer_int (*new) (size_t step );
    StringBuffer_int (*newCapacity) (size_t capacity , size_t step );
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
    } Buffered , _1 ;
    struct { /* ciciliStruct166 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_int;
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_int FreedStringBuffer_int ();
__attribute__((weak)) StringBuffer_int Default_StringBuffer_int () {
  return FreedStringBuffer_int ();
}
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t size );
StringBuffer_int new_StringBuffer_int (size_t step );
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step );
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t cursor , size_t size );
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb );
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data );
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , size_t len );
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table ();
void free_StringBuffer_int (StringBuffer_int * this );
#endif /* __StringBuffer_int__H_DECL__ */ 
typedef int * Vector_int_ptr_t ;
typedef struct ciciliEAKgBucA0WqTOxnJO9jpXbgu9ck_ {
  Vector_int_ptr_t __h_0_mem ;
  Vector_int_ptr_t __h_1_mem ;
} ciciliEAKgBucA0WqTOxnJO9jpXbgu9ck_;
typedef ciciliEAKgBucA0WqTOxnJO9jpXbgu9ck_ Vector_int_iter_t ;
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
  union { /* ciciliUnion237 */
    struct { /* ciciliStruct238 */
      Vector_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct239 */
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
  union { /* ciciliUnion269 */
    struct { /* ciciliStruct270 */
      Vector_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct271 */
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
    Vector_int_iter_t (*iterator) (Vector_int vector );
    Vector_int (*resize) (Vector_int vector , size_t len );
    Vector_int (*pure) (size_t step );
    Vector_int (*pureCapacity) (size_t capacity , size_t step );
    Vector_int_ptr_t (*toArray) (Vector_int vector );
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
  union { /* ciciliUnion336 */
    struct { /* ciciliStruct337 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct338 */
      Vector_int __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct339 */
    } None , _ ;
  } __h_data ;
} class_Vector_int;
Vector_int Buffer_int (StringBuffer_int buffer );
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size );
Vector_int None_int ();
__attribute__((weak)) Vector_int Default_Vector_int () {
  return None_int ();
}
Vector_int_iter_t iterator_Vector_int (Vector_int vector );
Vector_int resize_Vector_int (Vector_int vector , size_t len );
Vector_int pure_Vector_int (size_t step );
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step );
Vector_int_ptr_t toArray_Vector_int (Vector_int vector );
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
  union { /* ciciliUnion446 */
    struct { /* ciciliStruct447 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct448 */
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
  { /* cicili#Let478 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let483 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
bool null_terminated_StringBuffer_int  = false ;
bool is_constant_StringBuffer_int  = false ;
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
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              MakeStringBuffer_int (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let516 */
            // ----------
            ;
            ({ /* cicili#Progn518 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int new_StringBuffer_int (size_t step ) {
  return newCapacity_StringBuffer_int (step , step );
}
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step ) {
  return ({ /* cicili#Let529 */
      int * buffer  = malloc ((capacity  *  sizeof(int) ));
      StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
      // ----------
      sb ;
    });
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let538 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let540 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn541 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn543 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn545 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn550 */
            ({ /* cicili#Let552 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let562 */
            // ----------
            ;
            ({ /* cicili#Progn564 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb ) {
  return ({ /* cicili#Let573 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let575 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn576 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn578 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn580 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn582 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn587 */
            ({ /* cicili#Let589 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let596 */
            // ----------
            ;
            ({ /* cicili#Progn598 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , const int data ) {
  return print_StringBuffer_int (sb , (&data ), 1);
}
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , const int * data , size_t len ) {
  return ({ /* cicili#Let612 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let614 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn615 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn617 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn619 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn621 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn626 */
            ({ /* cicili#Let628 */
              size_t blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block632 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let634 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let639 */
            // ----------
            ;
            ({ /* cicili#Progn641 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
  { /* cicili#Let649 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let651 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn652 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block658 */
          { /* cicili#Block660 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
    });
  }
}
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table () {
  static const StringBuffer_int__H_Table table  = { free_StringBuffer_int , resize_StringBuffer_int , new_StringBuffer_int , newCapacity_StringBuffer_int , copySlice_StringBuffer_int , copy_StringBuffer_int , put_StringBuffer_int , print_StringBuffer_int };
  return (&table );
}
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let670 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
  { /* cicili#Let675 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_int__H_IMPL__ */ 
bool null_terminated_Vector_int  = false ;
bool is_constant_Vector_int  = false ;
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
  { /* cicili#Let698 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int_x Nothing_Vector_int_x () {
  { /* cicili#Let703 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int_x__H_IMPL__ */ 
#ifndef __Box_Vector_int__H_IMPL__
#define __Box_Vector_int__H_IMPL__
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer ) {
  return ({ /* cicili#Let710 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_int_x *)malloc (sizeof(Vector_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let719 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let721 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn722 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn724 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn726 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn731 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn734 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let740 */
            // ----------
            ;
            ({ /* cicili#Progn742 */
              Gone_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this ) {
  return ({ /* cicili#Let750 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let752 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn753 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn755 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn757 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn762 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let766 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let774 */
            // ----------
            ;
            ({ /* cicili#Progn776 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let784 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let786 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn787 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn789 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn791 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn796 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let803 */
            // ----------
            ;
            ({ /* cicili#Progn805 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
  { /* cicili#Let814 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let816 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn817 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn819 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn821 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block827 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block830 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block838 */
                if ((*count ) ==  1 )
                  { /* cicili#Block841 */
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
        { /* cicili#Let851 */
          // ----------
          ;
          ({ /* cicili#Let853 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block858 */
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
  { /* cicili#Let869 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
  { /* cicili#Let874 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int_iter_t iterator_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let881 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let885 */
        __auto_type match884  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match884 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let888 */
          bool __h_case_result  = (true  &&  (((match884 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn889 */
                (unboxed  =  (((match884 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn894 */
              ({ /* cicili#Let898 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let900 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn901 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn906 */
                      ({ /* cicili#Let910 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let912 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn913 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn915 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn920 */
                              ((Vector_int_iter_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let925 */
                              // ----------
                              ;
                              ({ /* cicili#Progn927 */
                                ((Vector_int_iter_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let932 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let934 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn935 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn937 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn939 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn944 */
                            ({ /* cicili#Let946 */
                              Vector_int_iter_t iter  = iterator_Vector_int (vec );
                              // ----------
                              ({ /* cicili#Let952 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let954 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn955 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn960 */
                                      ((Vector_int_iter_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let965 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn967 */
                                        ((Vector_int_iter_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let972 */
                            // ----------
                            ;
                            ({ /* cicili#Progn974 */
                              ((Vector_int_iter_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let979 */
              // ----------
              ;
              ({ /* cicili#Progn981 */
                ((Vector_int_iter_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
  return ({ /* cicili#Let987 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let991 */
        __auto_type match990  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match990 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let994 */
          bool __h_case_result  = (true  &&  (((match990 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn995 */
                (unboxed  =  (((match990 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1000 */
              ({ /* cicili#Let1004 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1006 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1007 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1012 */
                      ({ /* cicili#Let1016 */
                        __auto_type match1015  = take_Box_Vector_int ((&vector ));
                        typeof((((match1015 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1019 */
                          bool __h_case_result  = (true  &&  (((match1015 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1020 */
                                (ptr  =  (((match1015 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1025 */
                              ({ /* cicili#Progn1027 */
                                free (((void *)ptr ));
                                Buffer_int (resize_StringBuffer_int (sb , len ));
                              });
                            }) : ({ /* cicili#Let1033 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1035 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1040 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1042 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1043 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1045 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1050 */
                            ({ /* cicili#Let1053 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1057 */
                                __auto_type match1056  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1056 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1060 */
                                  bool __h_case_result  = (true  &&  (((match1056 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1061 */
                                        (unboxed  =  (((match1056 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1066 */
                                      ({ /* cicili#Let1070 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1072 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1073 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1078 */
                                              ({ /* cicili#Let1082 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1084 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1085 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1087 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1092 */
                                                      ({ /* cicili#Let1094 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1102 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1104 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1109 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1111 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1112 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1117 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1122 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1124 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1129 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1131 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1136 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1138 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1143 */
              // ----------
              ;
              ({ /* cicili#Progn1145 */
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
  return Buffer_int (newCapacity_StringBuffer_int (capacity , step ));
}
Vector_int_ptr_t toArray_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let1159 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1163 */
        __auto_type match1162  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1162 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1166 */
          bool __h_case_result  = (true  &&  (((match1162 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1167 */
                (unboxed  =  (((match1162 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1172 */
              ({ /* cicili#Let1176 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1178 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1179 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1184 */
                      ({ /* cicili#Let1188 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1190 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1191 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1196 */
                              buffer ;
                            }) : ({ /* cicili#Let1200 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1202 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1206 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1208 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1209 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1211 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1216 */
                            ({ /* cicili#Let1219 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1223 */
                                __auto_type match1222  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1222 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1226 */
                                  bool __h_case_result  = (true  &&  (((match1222 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1227 */
                                        (unboxed  =  (((match1222 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1232 */
                                      ({ /* cicili#Let1236 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1238 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1239 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1244 */
                                              ({ /* cicili#Let1248 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1250 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1251 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1256 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1260 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1262 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1266 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1268 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1269 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1271 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1276 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1281 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1283 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1287 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1289 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1293 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1295 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1299 */
              // ----------
              ;
              ({ /* cicili#Progn1301 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
  return ({ /* cicili#Let1306 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1308 */
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
    return ({ /* cicili#Let1318 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1322 */
          __auto_type match1321  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1321 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1325 */
            bool __h_case_result  = (true  &&  (((match1321 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1326 */
                  (unboxed  =  (((match1321 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1331 */
                ({ /* cicili#Let1335 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1337 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1338 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1343 */
                        ({ /* cicili#Let1347 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1349 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1350 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1355 */
                                ({ /* cicili#Let1357 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1368 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1370 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1374 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1376 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1377 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1379 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1381 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1386 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1390 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1392 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1396 */
                // ----------
                ;
                ({ /* cicili#Progn1398 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
    return ({ /* cicili#Let1402 */
        __auto_type __h_matchbox  = vector ;
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
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1421 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1422 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1427 */
                        ({ /* cicili#Let1431 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1433 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1434 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1436 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1441 */
                                ({ /* cicili#Let1443 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1454 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1456 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1460 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1462 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1463 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1465 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1467 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1472 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1476 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1478 */
                                0;
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
                      ({ /* cicili#Let1518 */
                        // ----------
                        ;
                        ({ /* cicili#Let1520 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1524 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1530 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1532 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1537 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1539 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1540 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1542 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1544 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1549 */
                            ({ /* cicili#Let1552 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1556 */
                                __auto_type match1555  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1555 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1559 */
                                  bool __h_case_result  = (true  &&  (((match1555 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1560 */
                                        (unboxed  =  (((match1555 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1565 */
                                      ({ /* cicili#Let1569 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1571 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1572 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1577 */
                                              ({ /* cicili#Let1581 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1583 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1587 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1593 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1595 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1600 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1602 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1603 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1608 */
                                                    copySlice_Vector_int (veci , cur , size );
                                                  }) : ({ /* cicili#Let1613 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1615 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1620 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1622 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1627 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1629 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1634 */
              // ----------
              ;
              ({ /* cicili#Progn1636 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let1642 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1646 */
        __auto_type match1645  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1645 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1649 */
          bool __h_case_result  = (true  &&  (((match1645 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1650 */
                (unboxed  =  (((match1645 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1655 */
              ({ /* cicili#Let1659 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1661 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1662 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1667 */
                      ({ /* cicili#Let1671 */
                        // ----------
                        ;
                        ({ /* cicili#Let1673 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1677 */
                              Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                            }) : ({ /* cicili#Let1683 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1685 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1690 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1692 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1693 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1695 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1700 */
                            ({ /* cicili#Let1703 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1707 */
                                __auto_type match1706  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1706 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1710 */
                                  bool __h_case_result  = (true  &&  (((match1706 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1711 */
                                        (unboxed  =  (((match1706 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1716 */
                                      ({ /* cicili#Let1720 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1722 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1723 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1728 */
                                              ({ /* cicili#Let1732 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1734 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1738 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let1744 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1746 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1751 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1753 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1754 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1759 */
                                                    copySlice_Vector_int (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let1764 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1766 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1771 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1773 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1778 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1780 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1785 */
              // ----------
              ;
              ({ /* cicili#Progn1787 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let1793 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1797 */
        __auto_type match1796  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1796 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1800 */
          bool __h_case_result  = (true  &&  (((match1796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1801 */
                (unboxed  =  (((match1796 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1806 */
              ({ /* cicili#Let1810 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1812 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1813 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1818 */
                      ({ /* cicili#Let1822 */
                        __auto_type match1821  = take_Box_Vector_int ((&vector ));
                        typeof((((match1821 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1825 */
                          bool __h_case_result  = (true  &&  (((match1821 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1826 */
                                (ptr  =  (((match1821 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1831 */
                              ({ /* cicili#Progn1833 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let1837 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1839 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1840 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn1842 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn1847 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn1850 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_int (sb );
                                          }) : Buffer_int (sb ));
                                      }) : ({ /* cicili#Let1856 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn1858 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let1863 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1865 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1870 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1872 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1873 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1875 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1877 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1882 */
                            ({ /* cicili#Let1885 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1889 */
                                __auto_type match1888  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1888 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1892 */
                                  bool __h_case_result  = (true  &&  (((match1888 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1893 */
                                        (unboxed  =  (((match1888 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1898 */
                                      ({ /* cicili#Let1902 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1904 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1905 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1910 */
                                              ({ /* cicili#Let1914 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1916 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1917 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1919 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1924 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1927 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1937 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1939 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1944 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1946 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1947 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1952 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let1957 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1959 */
                                                      clone_Box_Vector_int (vec );
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
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1971 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1973 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1978 */
              // ----------
              ;
              ({ /* cicili#Progn1980 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
  return ({ /* cicili#Let1986 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1990 */
        __auto_type match1989  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1989 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1993 */
          bool __h_case_result  = (true  &&  (((match1989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1994 */
                (unboxed  =  (((match1989 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1999 */
              ({ /* cicili#Let2003 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2005 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2006 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2011 */
                      ({ /* cicili#Let2015 */
                        __auto_type match2014  = take_Box_Vector_int ((&vector ));
                        typeof((((match2014 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2018 */
                          bool __h_case_result  = (true  &&  (((match2014 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2019 */
                                (ptr  =  (((match2014 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2024 */
                              ({ /* cicili#Progn2026 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let2030 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2032 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2033 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn2035 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn2037 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn2039 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2044 */
                                        ({ /* cicili#Progn2046 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let2054 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2056 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2061 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2063 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2068 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2070 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2071 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2073 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2075 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2080 */
                            ({ /* cicili#Let2083 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2087 */
                                __auto_type match2086  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2086 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2090 */
                                  bool __h_case_result  = (true  &&  (((match2086 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2091 */
                                        (unboxed  =  (((match2086 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2096 */
                                      ({ /* cicili#Let2100 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2102 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2103 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2108 */
                                              ({ /* cicili#Let2112 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2114 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2115 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2117 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2122 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2125 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2134 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2136 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2141 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2143 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2144 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2149 */
                                                    deleteAt_Vector_int (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2154 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2156 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2161 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2163 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2168 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2170 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2175 */
              // ----------
              ;
              ({ /* cicili#Progn2177 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2183 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2187 */
        __auto_type match2186  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2186 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2190 */
          bool __h_case_result  = (true  &&  (((match2186 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2191 */
                (unboxed  =  (((match2186 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2196 */
              ({ /* cicili#Let2200 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2202 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2203 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2208 */
                      ({ /* cicili#Let2212 */
                        __auto_type match2211  = take_Box_Vector_int ((&vector ));
                        typeof((((match2211 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2215 */
                          bool __h_case_result  = (true  &&  (((match2211 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2216 */
                                (ptr  =  (((match2211 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2221 */
                              ({ /* cicili#Let2223 */
                                StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let2229 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2231 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2232 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2234 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2239 */
                                        ({ /* cicili#Progn2241 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (new_sb );
                                        });
                                      }) : ({ /* cicili#Let2248 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2250 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2255 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2257 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2262 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2264 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2265 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2267 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2269 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2274 */
                            ({ /* cicili#Let2277 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2281 */
                                __auto_type match2280  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2280 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2284 */
                                  bool __h_case_result  = (true  &&  (((match2280 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2285 */
                                        (unboxed  =  (((match2280 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2290 */
                                      ({ /* cicili#Let2294 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2296 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2297 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2302 */
                                              ({ /* cicili#Let2306 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2308 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2309 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2311 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2316 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2319 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2329 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2331 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2336 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2338 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2339 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2344 */
                                                    insertAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2349 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2351 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2356 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2358 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2363 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2365 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2370 */
              // ----------
              ;
              ({ /* cicili#Progn2372 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2378 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2382 */
        __auto_type match2381  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2381 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2385 */
          bool __h_case_result  = (true  &&  (((match2381 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2386 */
                (unboxed  =  (((match2381 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2391 */
              ({ /* cicili#Let2395 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2397 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2398 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2403 */
                      ({ /* cicili#Let2407 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2409 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2410 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2412 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2414 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2416 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2421 */
                              ({ /* cicili#Let2425 */
                                __auto_type match2424  = take_Box_Vector_int ((&vector ));
                                typeof((((match2424 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let2428 */
                                  bool __h_case_result  = (true  &&  (((match2424 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2429 */
                                        (ptr  =  (((match2424 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2434 */
                                      ({ /* cicili#Let2436 */
                                        int tmp ;
                                        // ----------
                                        free (((void *)ptr ));
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_int (MakeStringBuffer_int (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let2444 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2446 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let2451 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2453 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2458 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2460 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2461 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2463 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2465 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2470 */
                            ({ /* cicili#Let2473 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2477 */
                                __auto_type match2476  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2476 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2480 */
                                  bool __h_case_result  = (true  &&  (((match2476 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2481 */
                                        (unboxed  =  (((match2476 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2486 */
                                      ({ /* cicili#Let2490 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2492 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2493 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2498 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2505 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2507 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2508 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2513 */
                                                    reverse_Vector_int (copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2519 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2521 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2526 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2528 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2533 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2535 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2540 */
              // ----------
              ;
              ({ /* cicili#Progn2542 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
  return ({ /* cicili#Let2548 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2552 */
        __auto_type match2551  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2551 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2555 */
          bool __h_case_result  = (true  &&  (((match2551 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2556 */
                (unboxed  =  (((match2551 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2561 */
              ({ /* cicili#Let2565 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2567 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2568 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2573 */
                      ({ /* cicili#Let2577 */
                        __auto_type match2576  = take_Box_Vector_int ((&lvector ));
                        typeof((((match2576 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2580 */
                          bool __h_case_result  = (true  &&  (((match2576 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2581 */
                                (ptr  =  (((match2576 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2586 */
                              ({ /* cicili#Progn2588 */
                                free (((void *)ptr ));
                                Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                              });
                            }) : ({ /* cicili#Let2596 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2598 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2603 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2605 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2606 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2608 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2610 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2615 */
                            ({ /* cicili#Let2618 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2622 */
                                __auto_type match2621  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2621 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2625 */
                                  bool __h_case_result  = (true  &&  (((match2621 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2626 */
                                        (unboxed  =  (((match2621 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2631 */
                                      ({ /* cicili#Let2635 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2637 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2638 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2643 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2652 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2654 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2655 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2660 */
                                                    append_Vector_int (copySlice_Vector_int (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let2666 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2668 */
                                                      clone_Box_Vector_int (vec );
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
                          }) : ({ /* cicili#Let2680 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2682 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2687 */
              // ----------
              ;
              ({ /* cicili#Progn2689 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
  return ({ /* cicili#Let2695 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2699 */
        __auto_type match2698  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2698 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2702 */
          bool __h_case_result  = (true  &&  (((match2698 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2703 */
                (unboxed  =  (((match2698 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2708 */
              ({ /* cicili#Let2712 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2714 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2715 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2720 */
                      ({ /* cicili#Let2724 */
                        __auto_type match2723  = take_Box_Vector_int ((&vector ));
                        typeof((((match2723 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2727 */
                          bool __h_case_result  = (true  &&  (((match2723 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2728 */
                                (ptr  =  (((match2723 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2733 */
                              ({ /* cicili#Progn2735 */
                                free (((void *)ptr ));
                                Buffer_int (put_StringBuffer_int (sb , item ));
                              });
                            }) : ({ /* cicili#Let2741 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2743 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2748 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2750 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2751 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2753 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2755 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2760 */
                            ({ /* cicili#Let2763 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2767 */
                                __auto_type match2766  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2766 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2770 */
                                  bool __h_case_result  = (true  &&  (((match2766 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2771 */
                                        (unboxed  =  (((match2766 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2776 */
                                      ({ /* cicili#Let2780 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2782 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2783 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2788 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2795 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2797 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2798 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2803 */
                                                    push_Vector_int (item , copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2809 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2811 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2816 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2818 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2823 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2825 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2830 */
              // ----------
              ;
              ({ /* cicili#Progn2832 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let2838 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2842 */
        __auto_type match2841  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2841 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2845 */
          bool __h_case_result  = (true  &&  (((match2841 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2846 */
                (unboxed  =  (((match2841 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2851 */
              ({ /* cicili#Let2855 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2857 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2858 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2863 */
                      ({ /* cicili#Let2867 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2869 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2870 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2875 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2887 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2889 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2895 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2897 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2898 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2900 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2902 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2907 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , len ) : Slice_int (clone_Box_Vector_int (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let2919 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2921 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2926 */
              // ----------
              ;
              ({ /* cicili#Progn2928 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int last_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2935 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2939 */
        __auto_type match2938  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2938 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2942 */
          bool __h_case_result  = (true  &&  (((match2938 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2943 */
                (unboxed  =  (((match2938 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2948 */
              ({ /* cicili#Let2952 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2954 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2955 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2960 */
                      ({ /* cicili#Let2964 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2966 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2967 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2969 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2974 */
                              Just_int ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let2979 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2981 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2986 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2988 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2989 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2991 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2993 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2998 */
                            nth_Vector_int ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let3003 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3005 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3010 */
              // ----------
              ;
              ({ /* cicili#Progn3012 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3018 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3022 */
        __auto_type match3021  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3021 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3025 */
          bool __h_case_result  = (true  &&  (((match3021 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3026 */
                (unboxed  =  (((match3021 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3031 */
              ({ /* cicili#Let3035 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3037 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3038 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3043 */
                      ({ /* cicili#Let3047 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3049 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3050 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3055 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3061 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3063 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3068 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3070 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3071 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3073 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3075 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3080 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3086 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3088 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3093 */
              // ----------
              ;
              ({ /* cicili#Progn3095 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
  return ({ /* cicili#Let3100 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3107 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3111 */
        __auto_type match3110  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3110 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3114 */
          bool __h_case_result  = (true  &&  (((match3110 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3115 */
                (unboxed  =  (((match3110 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3120 */
              ({ /* cicili#Let3124 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3126 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3127 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3132 */
                      ({ /* cicili#Let3136 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3138 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3139 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3144 */
                              cursor ;
                            }) : ({ /* cicili#Let3148 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3150 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3154 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3156 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3157 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3162 */
                            size ;
                          }) : ({ /* cicili#Let3166 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3168 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3172 */
              // ----------
              ;
              ({ /* cicili#Progn3174 */
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
  return ({ /* cicili#Let3182 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3186 */
        __auto_type match3185  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3185 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3189 */
          bool __h_case_result  = (true  &&  (((match3185 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3190 */
                (unboxed  =  (((match3185 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3195 */
              ({ /* cicili#Let3199 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3201 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3202 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3207 */
                      ({ /* cicili#Let3211 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3213 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3214 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3219 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3231 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3233 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3238 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3240 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3241 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3243 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3248 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3253 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3255 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3260 */
              // ----------
              ;
              ({ /* cicili#Progn3262 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3269 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3273 */
        __auto_type match3272  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3272 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3276 */
          bool __h_case_result  = (true  &&  (((match3272 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3277 */
                (unboxed  =  (((match3272 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3282 */
              ({ /* cicili#Let3286 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3288 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3289 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3294 */
                      ({ /* cicili#Let3298 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3300 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3301 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3303 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3308 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3315 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3317 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3322 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3324 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3325 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3327 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3332 */
                            nth_Vector_int (cursor , vector );
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
              // ----------
              ;
              ({ /* cicili#Progn3346 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
  return ({ /* cicili#Let3353 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3357 */
        __auto_type match3356  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3356 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3360 */
          bool __h_case_result  = (true  &&  (((match3356 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3361 */
                (unboxed  =  (((match3356 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3366 */
              ({ /* cicili#Let3370 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3372 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3373 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3378 */
                      ({ /* cicili#Let3382 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3384 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3385 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3387 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3392 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3399 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3401 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3406 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3408 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3409 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3411 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3413 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3418 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3425 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3427 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3432 */
              // ----------
              ;
              ({ /* cicili#Progn3434 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
  { /* cicili#Let3439 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3443 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3445 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3446 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3452 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3458 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3460 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3461 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3467 */
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
  { /* cicili#Let3477 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
  { /* cicili#Let3485 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int None_int () {
  { /* cicili#Let3492 */
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
  { /* cicili#Let3510 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
  { /* cicili#Let3515 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let3531 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3533 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3536 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3539 */
      __auto_type v03  = ({ /* cicili#Let3542 */
        StringBuffer_int tmp_buf3541  = newCapacity_StringBuffer_int (5, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3541 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3550 */
      __auto_type v04  = ({ /* cicili#Let3553 */
        StringBuffer_int tmp_buf3552  = newCapacity_StringBuffer_int (7, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3552 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3561 */
      __auto_type v05  = ({ /* cicili#Let3564 */
        StringBuffer_Char tmp_buf3563  = newCapacity_StringBuffer_Char (11, 16);
        // ----------
        Buffer_Char (print_StringBuffer_Char (tmp_buf3563 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3572 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3576 */
      __auto_type v09  = Slice_Char (clone_Box_String (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3580 */
      __auto_type v10  = tail_String (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3583 */
      __auto_type v11  = drop_String (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3586 */
      __auto_type v12  = drop_String (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3589 */
      __auto_type v13  = drop_String (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3592 */
      __auto_type v14  = init_String (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3595 */
      __auto_type v15  = init_String (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3598 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3601 */
      __auto_type v19  = take_String (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3604 */
      __auto_type v20  = take_String (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3607 */
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
    show_String (stdout , v05 );
    putchar ('\n');
    printf ("length 5 of v03: %ld\n", len_Vector_int (v03 ));
    printf ("has length 6 of v05: %ld\n", hasLen_String (v05 , 6));
    printf ("has length 12 of v05: %ld\n", hasLen_String (v05 , 12));
    { /* cicili#Block3614 */
      ({ /* cicili#Let3617 */
        __auto_type v01C1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3619 */
          __auto_type v01C1  = clone_Box_Vector_int (v01 );
          // ----------
          ((void)((v01C1 . __h_table )-> freeData ));
          v01C1 ;
        });
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3622 */
          __auto_type v01P1  = push_Vector_int (40, v01C1 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        ({ /* cicili#Let3626 */
          __auto_type __h_matchbox  = v01P1 ;
          // ----------
          { /* cicili#Let3630 */
            __auto_type match3629  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match3629 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let3633 */
              bool __h_case_result  = (true  &&  (((match3629 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3634 */
                    (unboxed  =  (((match3629 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3640 */
                  { /* cicili#Let3644 */
                    // ----------
                    ;
                    ({ /* cicili#Let3646 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_None_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block3651 */
                          printf ("can't push to v01: any cloned versions or slices refered to it\n");
                        }
                      else
                        { /* cicili#Let3656 */
                          // ----------
                          ;
                          { /* cicili#Block3658 */
                            { /* cicili#Block3663 */
                              printf ("status: %d\n", -90);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
            });
          }
        });
      });
      ({ /* cicili#Let3666 */
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3668 */
          __auto_type v01P1  = push_Vector_int (40, v01 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        { /* cicili#Let3673 */
          __auto_type match3672  = head_Vector_int (v01P1 );
          typeof((((match3672 . __h_data ). Just ). __h_0_mem )) he ;
          // ----------
          ;
          ({ /* cicili#Let3676 */
            bool __h_case_result  = (true  &&  (((match3672 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3677 */
                  (he  =  (((match3672 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3683 */
                printf ("head of v01: %d had not any cloned versions or slices refered to it\n", he );
              }
            else
              { /* cicili#Let3688 */
                // ----------
                ;
                { /* cicili#Block3690 */
                  { /* cicili#Block3695 */
                    printf ("status: %d\n", -91);
                    exit (EXIT_FAILURE );
                  }
                }
              }
          });
        }
      });
      { /* cicili#Let3699 */
        __auto_type match3698  = nth_Vector_int (3, v03 );
        typeof((((match3698 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let3702 */
          bool __h_case_result  = (true  &&  (((match3698 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3703 */
                (i  =  (((match3698 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3709 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let3714 */
              // ----------
              ;
              { /* cicili#Block3716 */
                { /* cicili#Block3721 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3725 */
        __auto_type match3724  = nth_String (5, v05 );
        typeof((((match3724 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let3728 */
          bool __h_case_result  = (true  &&  (((match3724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3729 */
                (c  =  (((match3724 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3735 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let3740 */
              // ----------
              ;
              { /* cicili#Block3742 */
                { /* cicili#Block3747 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3751 */
        __auto_type match3750  = nth_String (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let3754 */
          bool __h_case_result  = (true  &&  ((match3750 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3759 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let3764 */
              // ----------
              ;
              { /* cicili#Block3766 */
                { /* cicili#Block3771 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3775 */
        __auto_type match3774  = head_Vector_int (v08 );
        typeof((((match3774 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let3778 */
          bool __h_case_result  = (true  &&  (((match3774 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3779 */
                (i  =  (((match3774 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3785 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let3790 */
              // ----------
              ;
              { /* cicili#Block3792 */
                { /* cicili#Block3797 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3801 */
        __auto_type match3800  = head_String (v09 );
        typeof((((match3800 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let3804 */
          bool __h_case_result  = (true  &&  (((match3800 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3805 */
                (c  =  (((match3800 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3811 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let3816 */
              // ----------
              ;
              { /* cicili#Block3818 */
                { /* cicili#Block3823 */
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
      show_String (stdout , v09 );
      putchar ('\n');
      { /* cicili#Let3827 */
        __auto_type match3826  = nth_Vector_int (1, v08 );
        typeof((((match3826 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let3830 */
          bool __h_case_result  = (true  &&  (((match3826 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3831 */
                (i  =  (((match3826 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3837 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let3842 */
              // ----------
              ;
              { /* cicili#Block3844 */
                { /* cicili#Block3849 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3853 */
        __auto_type match3852  = nth_String (2, v09 );
        typeof((((match3852 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let3856 */
          bool __h_case_result  = (true  &&  (((match3852 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3857 */
                (c  =  (((match3852 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3863 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let3868 */
              // ----------
              ;
              { /* cicili#Block3870 */
                { /* cicili#Block3875 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let3879 */
        __auto_type match3878  = nth_String (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let3882 */
          bool __h_case_result  = (true  &&  ((match3878 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3887 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let3892 */
              // ----------
              ;
              { /* cicili#Block3894 */
                { /* cicili#Block3899 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let3902 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let3906 */
          __auto_type match3905  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3905 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3909 */
            bool __h_case_result  = (true  &&  (((match3905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3910 */
                  (unboxed  =  (((match3905 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3916 */
                { /* cicili#Let3920 */
                  // ----------
                  ;
                  ({ /* cicili#Let3922 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block3927 */
                        { /* cicili#Block3929 */
                          printf ("tail v05: ");
                          show_String (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let3934 */
                        // ----------
                        ;
                        { /* cicili#Block3936 */
                          { /* cicili#Block3941 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let3946 */
                // ----------
                ;
                ({ /* cicili#Let3948 */
                  bool __h_case_result  = (true  &&  ((match3905 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block3953 */
                      { /* cicili#Block3958 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let3961 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let3965 */
          __auto_type match3964  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3964 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3968 */
            bool __h_case_result  = (true  &&  (((match3964 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3969 */
                  (unboxed  =  (((match3964 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3975 */
                { /* cicili#Let3979 */
                  // ----------
                  ;
                  ({ /* cicili#Let3981 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block3986 */
                        { /* cicili#Block3988 */
                          printf ("v11: drop 7 v05: ");
                          show_String (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let3993 */
                        // ----------
                        ;
                        { /* cicili#Block3995 */
                          { /* cicili#Block4000 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4005 */
                // ----------
                ;
                ({ /* cicili#Let4007 */
                  bool __h_case_result  = (true  &&  ((match3964 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4012 */
                      { /* cicili#Block4017 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4020 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let4024 */
          __auto_type match4023  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4023 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4027 */
            bool __h_case_result  = (true  &&  (((match4023 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4028 */
                  (unboxed  =  (((match4023 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4034 */
                { /* cicili#Let4038 */
                  // ----------
                  ;
                  ({ /* cicili#Let4040 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4045 */
                        { /* cicili#Block4047 */
                          printf ("drop 12 v05: Empty Slice");
                          show_String (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4052 */
                        // ----------
                        ;
                        { /* cicili#Block4054 */
                          { /* cicili#Block4059 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4064 */
                // ----------
                ;
                ({ /* cicili#Let4066 */
                  bool __h_case_result  = (true  &&  ((match4023 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4071 */
                      { /* cicili#Block4076 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4079 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let4083 */
          __auto_type match4082  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4082 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4086 */
            bool __h_case_result  = (true  &&  (((match4082 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4087 */
                  (unboxed  =  (((match4082 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4093 */
                { /* cicili#Let4097 */
                  // ----------
                  ;
                  ({ /* cicili#Let4099 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4104 */
                        { /* cicili#Block4106 */
                          printf ("drop 1 of Slice v11: ");
                          show_String (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4111 */
                        // ----------
                        ;
                        { /* cicili#Block4113 */
                          { /* cicili#Block4118 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4123 */
                // ----------
                ;
                ({ /* cicili#Let4125 */
                  bool __h_case_result  = (true  &&  ((match4082 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4130 */
                      { /* cicili#Block4135 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4138 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let4142 */
          __auto_type match4141  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4141 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4145 */
            bool __h_case_result  = (true  &&  (((match4141 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4146 */
                  (unboxed  =  (((match4141 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4152 */
                { /* cicili#Let4156 */
                  // ----------
                  ;
                  ({ /* cicili#Let4158 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4163 */
                        { /* cicili#Block4165 */
                          printf ("init of Slice v05: ");
                          show_String (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4170 */
                        // ----------
                        ;
                        { /* cicili#Block4172 */
                          { /* cicili#Block4177 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4182 */
                // ----------
                ;
                ({ /* cicili#Let4184 */
                  bool __h_case_result  = (true  &&  ((match4141 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4189 */
                      { /* cicili#Block4194 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4197 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let4201 */
          __auto_type match4200  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4200 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4204 */
            bool __h_case_result  = (true  &&  (((match4200 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4205 */
                  (unboxed  =  (((match4200 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4211 */
                { /* cicili#Let4215 */
                  // ----------
                  ;
                  ({ /* cicili#Let4217 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4222 */
                        { /* cicili#Block4224 */
                          printf ("init of init of Slice v05: ");
                          show_String (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4229 */
                        // ----------
                        ;
                        { /* cicili#Block4231 */
                          { /* cicili#Block4236 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4241 */
                // ----------
                ;
                ({ /* cicili#Let4243 */
                  bool __h_case_result  = (true  &&  ((match4200 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4248 */
                      { /* cicili#Block4253 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      { /* cicili#Let4257 */
        __auto_type match4256  = last_Vector_int (v03 );
        typeof((((match4256 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let4259 */
          bool __h_case_result  = (true  &&  (((match4256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4260 */
                (la  =  (((match4256 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block4266 */
              printf ("last of v03: %d\n", la );
            }
          else
            { /* cicili#Let4271 */
              // ----------
              ;
              { /* cicili#Block4273 */
                { /* cicili#Block4278 */
                  printf ("status: %d\n", -121);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let4282 */
        __auto_type match4281  = last_String (v05 );
        typeof((((match4281 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let4284 */
          bool __h_case_result  = (true  &&  (((match4281 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4285 */
                (la  =  (((match4281 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block4291 */
              printf ("last of v05: %c\n", la );
            }
          else
            { /* cicili#Let4296 */
              // ----------
              ;
              { /* cicili#Block4298 */
                { /* cicili#Block4303 */
                  printf ("status: %d\n", -123);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let4306 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let4310 */
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
            
            if (__h_case_result )
              { /* cicili#Block4320 */
                { /* cicili#Let4324 */
                  // ----------
                  ;
                  ({ /* cicili#Let4326 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4331 */
                        { /* cicili#Block4333 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4338 */
                        // ----------
                        ;
                        { /* cicili#Block4340 */
                          { /* cicili#Block4345 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4350 */
                // ----------
                ;
                ({ /* cicili#Let4352 */
                  bool __h_case_result  = (true  &&  ((match4309 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4357 */
                      { /* cicili#Block4362 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4365 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let4369 */
          __auto_type match4368  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4368 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4372 */
            bool __h_case_result  = (true  &&  (((match4368 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4373 */
                  (unboxed  =  (((match4368 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4379 */
                { /* cicili#Let4383 */
                  // ----------
                  ;
                  ({ /* cicili#Let4385 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4390 */
                        { /* cicili#Block4392 */
                          printf ("take 5 of v05: ");
                          show_String (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4397 */
                        // ----------
                        ;
                        { /* cicili#Block4399 */
                          { /* cicili#Block4404 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4409 */
                // ----------
                ;
                ({ /* cicili#Let4411 */
                  bool __h_case_result  = (true  &&  ((match4368 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4416 */
                      { /* cicili#Block4421 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4424 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let4428 */
          __auto_type match4427  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4427 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4431 */
            bool __h_case_result  = (true  &&  (((match4427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4432 */
                  (unboxed  =  (((match4427 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4438 */
                { /* cicili#Let4442 */
                  // ----------
                  ;
                  ({ /* cicili#Let4444 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4449 */
                        { /* cicili#Block4451 */
                          printf ("take 2 of take 5 of v05: ");
                          show_String (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4456 */
                        // ----------
                        ;
                        { /* cicili#Block4458 */
                          { /* cicili#Block4463 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4468 */
                // ----------
                ;
                ({ /* cicili#Let4470 */
                  bool __h_case_result  = (true  &&  ((match4427 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4475 */
                      { /* cicili#Block4480 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4483 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let4487 */
          __auto_type match4486  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4486 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4490 */
            bool __h_case_result  = (true  &&  (((match4486 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4491 */
                  (unboxed  =  (((match4486 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4497 */
                { /* cicili#Let4501 */
                  // ----------
                  ;
                  ({ /* cicili#Let4503 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4508 */
                        { /* cicili#Block4510 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let4515 */
                        // ----------
                        ;
                        { /* cicili#Block4517 */
                          { /* cicili#Block4522 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let4527 */
                // ----------
                ;
                ({ /* cicili#Let4529 */
                  bool __h_case_result  = (true  &&  ((match4486 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4534 */
                      { /* cicili#Block4539 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let4542 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4544 */
          __auto_type v033  = ({ /* cicili#Let4547 */
            StringBuffer_int tmp_buf4546  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf4546 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4555 */
          __auto_type v055  = ({ /* cicili#Let4558 */
            StringBuffer_Char tmp_buf4557  = newCapacity_StringBuffer_Char (11, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf4557 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4566 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4569 */
          __auto_type v22  = push_String ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4572 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4575 */
          __auto_type v24  = push_String ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4578 */
          __auto_type v0333  = ({ /* cicili#Let4581 */
            StringBuffer_int tmp_buf4580  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf4580 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4589 */
          __auto_type v0555  = ({ /* cicili#Let4592 */
            StringBuffer_Char tmp_buf4591  = newCapacity_StringBuffer_Char (6, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf4591 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4600 */
          __auto_type v0444  = ({ /* cicili#Let4603 */
            StringBuffer_int tmp_buf4602  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf4602 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4611 */
          __auto_type v0666  = ({ /* cicili#Let4614 */
            StringBuffer_Char tmp_buf4613  = newCapacity_StringBuffer_Char (6, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf4613 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4622 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4625 */
          __auto_type v26  = append_String (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4628 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4631 */
          __auto_type v28  = drop_String (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4634 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4637 */
          __auto_type v30  = append_String (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4640 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4643 */
          __auto_type v288  = drop_String (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4646 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4649 */
          __auto_type vt2  = copy_String (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4652 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4655 */
          __auto_type v32  = reverse_String (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4658 */
          __auto_type v33  = reverse_String (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let4662 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let4666 */
            __auto_type match4665  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4665 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4669 */
              bool __h_case_result  = (true  &&  (((match4665 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4670 */
                    (unboxed  =  (((match4665 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4676 */
                  { /* cicili#Let4680 */
                    // ----------
                    ;
                    ({ /* cicili#Let4682 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4687 */
                          { /* cicili#Block4689 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4694 */
                          // ----------
                          ;
                          { /* cicili#Block4696 */
                            { /* cicili#Block4701 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let4706 */
                  // ----------
                  ;
                  ({ /* cicili#Let4708 */
                    bool __h_case_result  = (true  &&  ((match4665 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4713 */
                        { /* cicili#Block4718 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let4721 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let4725 */
            __auto_type match4724  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4724 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4728 */
              bool __h_case_result  = (true  &&  (((match4724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4729 */
                    (unboxed  =  (((match4724 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4735 */
                  { /* cicili#Let4739 */
                    // ----------
                    ;
                    ({ /* cicili#Let4741 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4746 */
                          { /* cicili#Block4748 */
                            printf ("push L to v055: ");
                            show_String (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4753 */
                          // ----------
                          ;
                          { /* cicili#Block4755 */
                            { /* cicili#Block4760 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let4765 */
                  // ----------
                  ;
                  ({ /* cicili#Let4767 */
                    bool __h_case_result  = (true  &&  ((match4724 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4772 */
                        { /* cicili#Block4777 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let4780 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let4784 */
            __auto_type match4783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4783 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4787 */
              bool __h_case_result  = (true  &&  (((match4783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4788 */
                    (unboxed  =  (((match4783 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4794 */
                  { /* cicili#Let4798 */
                    // ----------
                    ;
                    ({ /* cicili#Let4800 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4805 */
                          { /* cicili#Block4807 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4812 */
                          // ----------
                          ;
                          { /* cicili#Block4814 */
                            { /* cicili#Block4819 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let4824 */
                  // ----------
                  ;
                  ({ /* cicili#Let4826 */
                    bool __h_case_result  = (true  &&  ((match4783 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4831 */
                        { /* cicili#Block4836 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let4839 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let4843 */
            __auto_type match4842  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4842 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4846 */
              bool __h_case_result  = (true  &&  (((match4842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4847 */
                    (unboxed  =  (((match4842 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4853 */
                  { /* cicili#Let4857 */
                    // ----------
                    ;
                    ({ /* cicili#Let4859 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4864 */
                          { /* cicili#Block4866 */
                            printf ("push M to Slice v09: ");
                            show_String (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4871 */
                          // ----------
                          ;
                          { /* cicili#Block4873 */
                            { /* cicili#Block4878 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let4883 */
                  // ----------
                  ;
                  ({ /* cicili#Let4885 */
                    bool __h_case_result  = (true  &&  ((match4842 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4890 */
                        { /* cicili#Block4895 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let4898 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let4902 */
            __auto_type match4901  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4901 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4905 */
              bool __h_case_result  = (true  &&  (((match4901 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4906 */
                    (unboxed  =  (((match4901 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4912 */
                  { /* cicili#Let4916 */
                    // ----------
                    ;
                    ({ /* cicili#Let4918 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4923 */
                          { /* cicili#Block4925 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4930 */
                          // ----------
                          ;
                          { /* cicili#Block4932 */
                            { /* cicili#Block4937 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let4942 */
                  // ----------
                  ;
                  ({ /* cicili#Let4944 */
                    bool __h_case_result  = (true  &&  ((match4901 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block4949 */
                        { /* cicili#Block4954 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let4957 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let4961 */
            __auto_type match4960  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4960 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4964 */
              bool __h_case_result  = (true  &&  (((match4960 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4965 */
                    (unboxed  =  (((match4960 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4971 */
                  { /* cicili#Let4975 */
                    // ----------
                    ;
                    ({ /* cicili#Let4977 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4982 */
                          { /* cicili#Block4984 */
                            printf ("append v0555 to v0666: ");
                            show_String (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let4989 */
                          // ----------
                          ;
                          { /* cicili#Block4991 */
                            { /* cicili#Block4996 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5001 */
                  // ----------
                  ;
                  ({ /* cicili#Let5003 */
                    bool __h_case_result  = (true  &&  ((match4960 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5008 */
                        { /* cicili#Block5013 */
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
        show_String (stdout , v28 );
        putchar ('\n');
        ({ /* cicili#Let5016 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let5020 */
            __auto_type match5019  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5019 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5023 */
              bool __h_case_result  = (true  &&  (((match5019 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5024 */
                    (unboxed  =  (((match5019 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5030 */
                  { /* cicili#Let5034 */
                    // ----------
                    ;
                    ({ /* cicili#Let5036 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5041 */
                          { /* cicili#Block5043 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5048 */
                          // ----------
                          ;
                          { /* cicili#Block5050 */
                            { /* cicili#Block5055 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5060 */
                  // ----------
                  ;
                  ({ /* cicili#Let5062 */
                    bool __h_case_result  = (true  &&  ((match5019 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5067 */
                        { /* cicili#Block5072 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5075 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let5079 */
            __auto_type match5078  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5078 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5082 */
              bool __h_case_result  = (true  &&  (((match5078 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5083 */
                    (unboxed  =  (((match5078 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5089 */
                  { /* cicili#Let5093 */
                    // ----------
                    ;
                    ({ /* cicili#Let5095 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5100 */
                          { /* cicili#Block5102 */
                            printf ("append v28 to v0666: ");
                            show_String (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5107 */
                          // ----------
                          ;
                          { /* cicili#Block5109 */
                            { /* cicili#Block5114 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5119 */
                  // ----------
                  ;
                  ({ /* cicili#Let5121 */
                    bool __h_case_result  = (true  &&  ((match5078 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5126 */
                        { /* cicili#Block5131 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5134 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let5138 */
            __auto_type match5137  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5137 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5141 */
              bool __h_case_result  = (true  &&  (((match5137 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5142 */
                    (unboxed  =  (((match5137 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5148 */
                  { /* cicili#Let5152 */
                    // ----------
                    ;
                    ({ /* cicili#Let5154 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5159 */
                          { /* cicili#Block5161 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5166 */
                          // ----------
                          ;
                          { /* cicili#Block5168 */
                            { /* cicili#Block5173 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5178 */
                  // ----------
                  ;
                  ({ /* cicili#Let5180 */
                    bool __h_case_result  = (true  &&  ((match5137 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5185 */
                        { /* cicili#Block5190 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5193 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let5197 */
            __auto_type match5196  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5196 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5200 */
              bool __h_case_result  = (true  &&  (((match5196 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5201 */
                    (unboxed  =  (((match5196 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5207 */
                  { /* cicili#Let5211 */
                    // ----------
                    ;
                    ({ /* cicili#Let5213 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5218 */
                          { /* cicili#Block5220 */
                            printf ("reverse v28: ");
                            show_String (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5225 */
                          // ----------
                          ;
                          { /* cicili#Block5227 */
                            { /* cicili#Block5232 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5237 */
                  // ----------
                  ;
                  ({ /* cicili#Let5239 */
                    bool __h_case_result  = (true  &&  ((match5196 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5244 */
                        { /* cicili#Block5249 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5252 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let5256 */
            __auto_type match5255  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5255 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5259 */
              bool __h_case_result  = (true  &&  (((match5255 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5260 */
                    (unboxed  =  (((match5255 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5266 */
                  { /* cicili#Let5270 */
                    // ----------
                    ;
                    ({ /* cicili#Let5272 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5277 */
                          { /* cicili#Block5279 */
                            printf ("reverse Slice v288: ");
                            show_String (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5284 */
                          // ----------
                          ;
                          { /* cicili#Block5286 */
                            { /* cicili#Block5291 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5296 */
                  // ----------
                  ;
                  ({ /* cicili#Let5298 */
                    bool __h_case_result  = (true  &&  ((match5255 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5303 */
                        { /* cicili#Block5308 */
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
      ({ /* cicili#Let5311 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5313 */
          __auto_type v033  = ({ /* cicili#Let5316 */
            StringBuffer_int tmp_buf5315  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf5315 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5324 */
          __auto_type v055  = ({ /* cicili#Let5327 */
            StringBuffer_Char tmp_buf5326  = newCapacity_StringBuffer_Char (11, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf5326 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5335 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5338 */
          __auto_type v222  = insertAt_String (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5341 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5344 */
          __auto_type v288  = drop_String (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5347 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5350 */
          __auto_type v244  = insertAt_String (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5353 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5356 */
          __auto_type vt4  = copy_String (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5359 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5362 */
          __auto_type v42  = deleteAt_String (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5365 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5368 */
          __auto_type vt8  = drop_String (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5371 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5374 */
          __auto_type v44  = deleteAt_String (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5377 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5380 */
          __auto_type vt6  = copy_String (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5383 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5386 */
          __auto_type v46  = replaceAt_String (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5389 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5392 */
          __auto_type vt10  = drop_String (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5395 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5398 */
          __auto_type v48  = replaceAt_String (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5401 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5404 */
          __auto_type vt61  = copy_String (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5407 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5410 */
          __auto_type v461  = resize_String (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5413 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5416 */
          __auto_type vt101  = drop_String (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5419 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5422 */
          __auto_type v481  = resize_String (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let5426 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let5430 */
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
              
              if (__h_case_result )
                { /* cicili#Block5440 */
                  { /* cicili#Let5444 */
                    // ----------
                    ;
                    ({ /* cicili#Let5446 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5451 */
                          { /* cicili#Block5453 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5458 */
                          // ----------
                          ;
                          { /* cicili#Block5460 */
                            { /* cicili#Block5465 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5470 */
                  // ----------
                  ;
                  ({ /* cicili#Let5472 */
                    bool __h_case_result  = (true  &&  ((match5429 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5477 */
                        { /* cicili#Block5482 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5485 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let5489 */
            __auto_type match5488  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5488 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5492 */
              bool __h_case_result  = (true  &&  (((match5488 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5493 */
                    (unboxed  =  (((match5488 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5499 */
                  { /* cicili#Let5503 */
                    // ----------
                    ;
                    ({ /* cicili#Let5505 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5510 */
                          { /* cicili#Block5512 */
                            printf ("insert L at 3 v055: ");
                            show_String (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5517 */
                          // ----------
                          ;
                          { /* cicili#Block5519 */
                            { /* cicili#Block5524 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5529 */
                  // ----------
                  ;
                  ({ /* cicili#Let5531 */
                    bool __h_case_result  = (true  &&  ((match5488 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5536 */
                        { /* cicili#Block5541 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5544 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let5548 */
            __auto_type match5547  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5547 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5551 */
              bool __h_case_result  = (true  &&  (((match5547 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5552 */
                    (unboxed  =  (((match5547 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5558 */
                  { /* cicili#Let5562 */
                    // ----------
                    ;
                    ({ /* cicili#Let5564 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5569 */
                          { /* cicili#Block5571 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5576 */
                          // ----------
                          ;
                          { /* cicili#Block5578 */
                            { /* cicili#Block5583 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5588 */
                  // ----------
                  ;
                  ({ /* cicili#Let5590 */
                    bool __h_case_result  = (true  &&  ((match5547 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5595 */
                        { /* cicili#Block5600 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5603 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let5607 */
            __auto_type match5606  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5606 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5610 */
              bool __h_case_result  = (true  &&  (((match5606 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5611 */
                    (unboxed  =  (((match5606 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5617 */
                  { /* cicili#Let5621 */
                    // ----------
                    ;
                    ({ /* cicili#Let5623 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5628 */
                          { /* cicili#Block5630 */
                            printf ("insert M at 3 v288: ");
                            show_String (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5635 */
                          // ----------
                          ;
                          { /* cicili#Block5637 */
                            { /* cicili#Block5642 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5647 */
                  // ----------
                  ;
                  ({ /* cicili#Let5649 */
                    bool __h_case_result  = (true  &&  ((match5606 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5654 */
                        { /* cicili#Block5659 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5662 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let5666 */
            __auto_type match5665  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5665 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5669 */
              bool __h_case_result  = (true  &&  (((match5665 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5670 */
                    (unboxed  =  (((match5665 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5676 */
                  { /* cicili#Let5680 */
                    // ----------
                    ;
                    ({ /* cicili#Let5682 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5687 */
                          { /* cicili#Block5689 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5694 */
                          // ----------
                          ;
                          { /* cicili#Block5696 */
                            { /* cicili#Block5701 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5706 */
                  // ----------
                  ;
                  ({ /* cicili#Let5708 */
                    bool __h_case_result  = (true  &&  ((match5665 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5713 */
                        { /* cicili#Block5718 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5721 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let5725 */
            __auto_type match5724  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5724 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5728 */
              bool __h_case_result  = (true  &&  (((match5724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5729 */
                    (unboxed  =  (((match5724 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5735 */
                  { /* cicili#Let5739 */
                    // ----------
                    ;
                    ({ /* cicili#Let5741 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5746 */
                          { /* cicili#Block5748 */
                            printf ("delete at 7 from v244: ");
                            show_String (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5753 */
                          // ----------
                          ;
                          { /* cicili#Block5755 */
                            { /* cicili#Block5760 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5765 */
                  // ----------
                  ;
                  ({ /* cicili#Let5767 */
                    bool __h_case_result  = (true  &&  ((match5724 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5772 */
                        { /* cicili#Block5777 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5780 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let5784 */
            __auto_type match5783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5783 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5787 */
              bool __h_case_result  = (true  &&  (((match5783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5788 */
                    (unboxed  =  (((match5783 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5794 */
                  { /* cicili#Let5798 */
                    // ----------
                    ;
                    ({ /* cicili#Let5800 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5805 */
                          { /* cicili#Block5807 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5812 */
                          // ----------
                          ;
                          { /* cicili#Block5814 */
                            { /* cicili#Block5819 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5824 */
                  // ----------
                  ;
                  ({ /* cicili#Let5826 */
                    bool __h_case_result  = (true  &&  ((match5783 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5831 */
                        { /* cicili#Block5836 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5839 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let5843 */
            __auto_type match5842  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5842 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5846 */
              bool __h_case_result  = (true  &&  (((match5842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5847 */
                    (unboxed  =  (((match5842 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5853 */
                  { /* cicili#Let5857 */
                    // ----------
                    ;
                    ({ /* cicili#Let5859 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5864 */
                          { /* cicili#Block5866 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_String (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5871 */
                          // ----------
                          ;
                          { /* cicili#Block5873 */
                            { /* cicili#Block5878 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5883 */
                  // ----------
                  ;
                  ({ /* cicili#Let5885 */
                    bool __h_case_result  = (true  &&  ((match5842 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5890 */
                        { /* cicili#Block5895 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5898 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let5902 */
            __auto_type match5901  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5901 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5905 */
              bool __h_case_result  = (true  &&  (((match5901 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5906 */
                    (unboxed  =  (((match5901 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5912 */
                  { /* cicili#Let5916 */
                    // ----------
                    ;
                    ({ /* cicili#Let5918 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5923 */
                          { /* cicili#Block5925 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5930 */
                          // ----------
                          ;
                          { /* cicili#Block5932 */
                            { /* cicili#Block5937 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let5942 */
                  // ----------
                  ;
                  ({ /* cicili#Let5944 */
                    bool __h_case_result  = (true  &&  ((match5901 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block5949 */
                        { /* cicili#Block5954 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let5957 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let5961 */
            __auto_type match5960  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match5960 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let5964 */
              bool __h_case_result  = (true  &&  (((match5960 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5965 */
                    (unboxed  =  (((match5960 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5971 */
                  { /* cicili#Let5975 */
                    // ----------
                    ;
                    ({ /* cicili#Let5977 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block5982 */
                          { /* cicili#Block5984 */
                            printf ("replace K at 7 v244: ");
                            show_String (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let5989 */
                          // ----------
                          ;
                          { /* cicili#Block5991 */
                            { /* cicili#Block5996 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6001 */
                  // ----------
                  ;
                  ({ /* cicili#Let6003 */
                    bool __h_case_result  = (true  &&  ((match5960 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6008 */
                        { /* cicili#Block6013 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6016 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let6020 */
            __auto_type match6019  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6019 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6023 */
              bool __h_case_result  = (true  &&  (((match6019 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6024 */
                    (unboxed  =  (((match6019 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6030 */
                  { /* cicili#Let6034 */
                    // ----------
                    ;
                    ({ /* cicili#Let6036 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6041 */
                          { /* cicili#Block6043 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6048 */
                          // ----------
                          ;
                          { /* cicili#Block6050 */
                            { /* cicili#Block6055 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6060 */
                  // ----------
                  ;
                  ({ /* cicili#Let6062 */
                    bool __h_case_result  = (true  &&  ((match6019 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6067 */
                        { /* cicili#Block6072 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6075 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let6079 */
            __auto_type match6078  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6078 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6082 */
              bool __h_case_result  = (true  &&  (((match6078 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6083 */
                    (unboxed  =  (((match6078 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6089 */
                  { /* cicili#Let6093 */
                    // ----------
                    ;
                    ({ /* cicili#Let6095 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6100 */
                          { /* cicili#Block6102 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_String (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6107 */
                          // ----------
                          ;
                          { /* cicili#Block6109 */
                            { /* cicili#Block6114 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6119 */
                  // ----------
                  ;
                  ({ /* cicili#Let6121 */
                    bool __h_case_result  = (true  &&  ((match6078 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6126 */
                        { /* cicili#Block6131 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6134 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let6138 */
            __auto_type match6137  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6137 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6141 */
              bool __h_case_result  = (true  &&  (((match6137 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6142 */
                    (unboxed  =  (((match6137 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6148 */
                  { /* cicili#Let6152 */
                    // ----------
                    ;
                    ({ /* cicili#Let6154 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6159 */
                          { /* cicili#Block6161 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6166 */
                          // ----------
                          ;
                          { /* cicili#Block6168 */
                            { /* cicili#Block6173 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6178 */
                  // ----------
                  ;
                  ({ /* cicili#Let6180 */
                    bool __h_case_result  = (true  &&  ((match6137 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6185 */
                        { /* cicili#Block6190 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6193 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let6197 */
            __auto_type match6196  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6196 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6200 */
              bool __h_case_result  = (true  &&  (((match6196 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6201 */
                    (unboxed  =  (((match6196 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6207 */
                  { /* cicili#Let6211 */
                    // ----------
                    ;
                    ({ /* cicili#Let6213 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6218 */
                          { /* cicili#Block6220 */
                            printf ("resize 15 v244: ");
                            show_String (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6225 */
                          // ----------
                          ;
                          { /* cicili#Block6227 */
                            { /* cicili#Block6232 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6237 */
                  // ----------
                  ;
                  ({ /* cicili#Let6239 */
                    bool __h_case_result  = (true  &&  ((match6196 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6244 */
                        { /* cicili#Block6249 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6252 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let6256 */
            __auto_type match6255  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6255 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6259 */
              bool __h_case_result  = (true  &&  (((match6255 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6260 */
                    (unboxed  =  (((match6255 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6266 */
                  { /* cicili#Let6270 */
                    // ----------
                    ;
                    ({ /* cicili#Let6272 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6277 */
                          { /* cicili#Block6279 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6284 */
                          // ----------
                          ;
                          { /* cicili#Block6286 */
                            { /* cicili#Block6291 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6296 */
                  // ----------
                  ;
                  ({ /* cicili#Let6298 */
                    bool __h_case_result  = (true  &&  ((match6255 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6303 */
                        { /* cicili#Block6308 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6311 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let6315 */
            __auto_type match6314  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match6314 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let6318 */
              bool __h_case_result  = (true  &&  (((match6314 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6319 */
                    (unboxed  =  (((match6314 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6325 */
                  { /* cicili#Let6329 */
                    // ----------
                    ;
                    ({ /* cicili#Let6331 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6336 */
                          { /* cicili#Block6338 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_String (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let6343 */
                          // ----------
                          ;
                          { /* cicili#Block6345 */
                            { /* cicili#Block6350 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let6355 */
                  // ----------
                  ;
                  ({ /* cicili#Let6357 */
                    bool __h_case_result  = (true  &&  ((match6314 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block6362 */
                        { /* cicili#Block6367 */
                          printf ("status: %d\n", -179);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let6370 */
          __auto_type sliceToSlice  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6372 */
            __auto_type sliceToSlice  = drop_String (2, v481 );
            // ----------
            ((void)((sliceToSlice . __h_table )-> freeData ));
            sliceToSlice ;
          });
          // ----------
          { /* cicili#Let6378 */
            __auto_type match6377  = iterator_String (v481 );
            typeof((match6377 . __h_0_mem )) begin ;
            typeof((match6377 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let6381 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn6382 */
                    (begin  =  (match6377 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn6384 */
                    (end  =  (match6377 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6390 */
                  { /* cicili#Block6392 */
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
          { /* cicili#Let6397 */
            __auto_type match6396  = iterator_String (sliceToSlice );
            typeof((match6396 . __h_0_mem )) begin ;
            typeof((match6396 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let6400 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn6401 */
                    (begin  =  (match6396 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn6403 */
                    (end  =  (match6396 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6409 */
                  { /* cicili#Block6411 */
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
        { /* cicili#Let6418 */
          __auto_type __h_cloned6415  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v211 )-> __h_table -> clone )(v211 );
          // ----------
          ({ /* cicili#Let6422 */
            __auto_type __h_matchbox  = __h_cloned6415 ;
            // ----------
            { /* cicili#Let6426 */
              __auto_type match6425  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match6425 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let6429 */
                bool __h_case_result  = (true  &&  (((match6425 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6430 */
                      (unboxed  =  (((match6425 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block6436 */
                    { /* cicili#Let6440 */
                      __auto_type __h_cloned_x6416  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block6442 */
                        { /* cicili#Let6444 */
                          __auto_type __h_iterator6417  = (__h_cloned_x6416 -> __h_table -> iterator )(__h_cloned6415 );
                          // ----------
                          { /* cicili#Let6449 */
                            typeof((__h_iterator6417 . __h_0_mem )) beg ;
                            typeof((__h_iterator6417 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let6451 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn6452 */
                                    (beg  =  (__h_iterator6417 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn6454 */
                                    (end  =  (__h_iterator6417 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block6460 */
                                  while (((beg ++) !=  end  )) {
                                      printf ("%d", (*beg ));
                                  }
                                }
                            });
                          }
                        }
                      }
                    }
                  }
              });
            }
          });
        }
        putchar ('\n');
        { /* cicili#Let6467 */
          __auto_type __h_cloned6464  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v222 )-> __h_table -> clone )(v222 );
          // ----------
          ({ /* cicili#Let6471 */
            __auto_type __h_matchbox  = __h_cloned6464 ;
            // ----------
            { /* cicili#Let6475 */
              __auto_type match6474  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match6474 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let6478 */
                bool __h_case_result  = (true  &&  (((match6474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6479 */
                      (unboxed  =  (((match6474 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block6485 */
                    { /* cicili#Let6489 */
                      __auto_type __h_cloned_x6465  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block6491 */
                        { /* cicili#Let6493 */
                          __auto_type __h_iterator6466  = (__h_cloned_x6465 -> __h_table -> iterator )(__h_cloned6464 );
                          // ----------
                          { /* cicili#Let6498 */
                            typeof((__h_iterator6466 . __h_0_mem )) beg ;
                            typeof((__h_iterator6466 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let6500 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn6501 */
                                    (beg  =  (__h_iterator6466 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn6503 */
                                    (end  =  (__h_iterator6466 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block6509 */
                                  { /* cicili#Block6511 */
                                    (--beg );
                                    while ((beg  !=  (--end ) )) {
                                        printf ("%c", (*end ));
                                    }
                                  }
                                }
                            });
                          }
                        }
                      }
                    }
                  }
              });
            }
          });
        }
        putchar ('\n');
        ({ /* cicili#Let6515 */
          __auto_type cv01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6517 */
            __auto_type cv01  = Buffer_char (MakeStringBuffer_char ("wxyzpqrs", 8, 8, 0));
            // ----------
            ((void)((cv01 . __h_table )-> freeData ));
            cv01 ;
          });
          __auto_type cv02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6524 */
            __auto_type cv02  = drop_Str (2, cv01 );
            // ----------
            ((void)((cv02 . __h_table )-> freeData ));
            cv02 ;
          });
          __auto_type cv03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6527 */
            __auto_type cv03  = push_Str ('P', cv01 );
            // ----------
            ((void)((cv03 . __h_table )-> freeData ));
            cv03 ;
          });
          // ----------
          show_Str (stdout , cv01 );
          putchar ('\n');
          ({ /* cicili#Let6531 */
            __auto_type __h_matchbox  = cv02 ;
            // ----------
            { /* cicili#Let6535 */
              __auto_type match6534  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match6534 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let6538 */
                bool __h_case_result  = (true  &&  (((match6534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6539 */
                      (unboxed  =  (((match6534 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block6545 */
                    { /* cicili#Let6549 */
                      // ----------
                      ;
                      ({ /* cicili#Let6551 */
                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block6556 */
                            { /* cicili#Block6558 */
                              printf ("drop 2 of constant cv01: ");
                              show_Str (stdout , cv02 );
                              putchar ('\n');
                            }
                          }
                        else
                          { /* cicili#Let6563 */
                            // ----------
                            ;
                            { /* cicili#Block6565 */
                              { /* cicili#Block6570 */
                                printf ("status: %d\n", -182);
                                exit (EXIT_FAILURE );
                              }
                            }
                          }
                      });
                    }
                  }
                else
                  { /* cicili#Let6575 */
                    // ----------
                    ;
                    ({ /* cicili#Let6577 */
                      bool __h_case_result  = (true  &&  ((match6534 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6582 */
                          { /* cicili#Block6587 */
                            printf ("status: %d\n", -181);
                            exit (EXIT_FAILURE );
                          }
                        }
                    });
                  }
              });
            }
          });
          ({ /* cicili#Let6590 */
            __auto_type __h_matchbox  = cv03 ;
            // ----------
            { /* cicili#Let6594 */
              __auto_type match6593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match6593 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let6597 */
                bool __h_case_result  = (true  &&  (((match6593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6598 */
                      (unboxed  =  (((match6593 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block6604 */
                    { /* cicili#Let6608 */
                      // ----------
                      ;
                      ({ /* cicili#Let6610 */
                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_None_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block6615 */
                            { /* cicili#Block6617 */
                              printf ("after push P into constant cv01: None");
                              show_Str (stdout , cv03 );
                              putchar ('\n');
                            }
                          }
                        else
                          { /* cicili#Let6622 */
                            // ----------
                            ;
                            { /* cicili#Block6624 */
                              { /* cicili#Block6629 */
                                printf ("status: %d\n", -184);
                                exit (EXIT_FAILURE );
                              }
                            }
                          }
                      });
                    }
                  }
                else
                  { /* cicili#Let6634 */
                    // ----------
                    ;
                    ({ /* cicili#Let6636 */
                      bool __h_case_result  = (true  &&  ((match6593 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block6641 */
                          { /* cicili#Block6646 */
                            printf ("status: %d\n", -183);
                            exit (EXIT_FAILURE );
                          }
                        }
                    });
                  }
              });
            }
          });
        });
        show_Str (stdout , ((Str)(*((Str *)(&v222 )))));
        putchar ('\n');
      });
    }
  });
}
