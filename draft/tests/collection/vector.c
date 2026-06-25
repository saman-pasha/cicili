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
typedef int * Vector_int_pointer_t ;
typedef struct ciciliSvHEIAYR_IWj_o1KtdhDKrRIVfc_ {
  Vector_int_pointer_t __h_0_mem ;
  Vector_int_pointer_t __h_1_mem ;
} ciciliSvHEIAYR_IWj_o1KtdhDKrRIVfc_;
typedef ciciliSvHEIAYR_IWj_o1KtdhDKrRIVfc_ Vector_int_iterator_t ;
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
    Vector_int_iterator_t (*iterator) (Vector_int vector );
    Vector_int (*resize) (Vector_int vector , size_t len );
    Vector_int (*pure) (size_t step );
    Vector_int (*pureCapacity) (size_t capacity , size_t step );
    Vector_int_pointer_t (*toArray) (Vector_int vector );
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
Vector_int_iterator_t iterator_Vector_int (Vector_int vector );
Vector_int resize_Vector_int (Vector_int vector , size_t len );
Vector_int pure_Vector_int (size_t step );
Vector_int pureCapacity_Vector_int (size_t capacity , size_t step );
Vector_int_pointer_t toArray_Vector_int (Vector_int vector );
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
Vector_int_iterator_t iterator_Vector_int (Vector_int vector ) {
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
                              ((Vector_int_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let925 */
                              // ----------
                              ;
                              ({ /* cicili#Progn927 */
                                ((Vector_int_iterator_t){ NULL , NULL });
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
                              Vector_int_iterator_t iter  = iterator_Vector_int (vec );
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
                                      ((Vector_int_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let965 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn967 */
                                        ((Vector_int_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let972 */
                            // ----------
                            ;
                            ({ /* cicili#Progn974 */
                              ((Vector_int_iterator_t){ NULL , NULL });
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
                ((Vector_int_iterator_t){ NULL , NULL });
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
Vector_int_pointer_t toArray_Vector_int (Vector_int vector ) {
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
#ifndef __Maybe_Char__H_DECL__
#define __Maybe_Char__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Char Maybe_Char ;
typedef void (*free_Maybe_Char_t) (Maybe_Char * this );
typedef struct Maybe_Char__H_Table {
  free_Maybe_Char_t freeData ;
} Maybe_Char__H_Table;
typedef struct Maybe_Char {
  const Maybe_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3541 */
    struct { /* ciciliStruct3542 */
      Char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3543 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Char;
Maybe_Char Just_Char (Char value );
Maybe_Char Nothing_Char ();
__attribute__((weak)) Maybe_Char Default_Maybe_Char () {
  return Nothing_Char ();
}
const Maybe_Char__H_Table * const get_Maybe_Char__H_Table ();
void free_Maybe_Char (Maybe_Char * this );
#endif /* __Maybe_Char__H_DECL__ */ 
#ifndef __StringBuffer_Char__H_DECL__
#define __StringBuffer_Char__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_Char StringBuffer_Char ;
typedef void (*free_StringBuffer_Char_t) (StringBuffer_Char * this );
typedef struct StringBuffer_Char__H_Table {
  free_StringBuffer_Char_t freeData ;
    StringBuffer_Char (*resize) (StringBuffer_Char sb , size_t size );
    StringBuffer_Char (*new) (size_t step );
    StringBuffer_Char (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_Char (*copySlice) (StringBuffer_Char sb , size_t cursor , size_t size );
    StringBuffer_Char (*copy) (StringBuffer_Char sb );
    StringBuffer_Char (*put) (StringBuffer_Char sb , const Char data );
    StringBuffer_Char (*print) (StringBuffer_Char sb , const Char * data , size_t len );
} StringBuffer_Char__H_Table;
typedef struct StringBuffer_Char {
  const StringBuffer_Char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3588 */
    struct { /* ciciliStruct3589 */
      Char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct3590 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_Char;
StringBuffer_Char MakeStringBuffer_Char (Char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_Char FreedStringBuffer_Char ();
__attribute__((weak)) StringBuffer_Char Default_StringBuffer_Char () {
  return FreedStringBuffer_Char ();
}
StringBuffer_Char resize_StringBuffer_Char (StringBuffer_Char sb , size_t size );
StringBuffer_Char new_StringBuffer_Char (size_t step );
StringBuffer_Char newCapacity_StringBuffer_Char (size_t capacity , size_t step );
StringBuffer_Char copySlice_StringBuffer_Char (StringBuffer_Char sb , size_t cursor , size_t size );
StringBuffer_Char copy_StringBuffer_Char (StringBuffer_Char sb );
StringBuffer_Char put_StringBuffer_Char (StringBuffer_Char sb , const Char data );
StringBuffer_Char print_StringBuffer_Char (StringBuffer_Char sb , const Char * data , size_t len );
const StringBuffer_Char__H_Table * const get_StringBuffer_Char__H_Table ();
void free_StringBuffer_Char (StringBuffer_Char * this );
#endif /* __StringBuffer_Char__H_DECL__ */ 
typedef Char * String_pointer_t ;
typedef struct cicilibs06qci864FLhlAcZ1fZTAS7Yv0_ {
  String_pointer_t __h_0_mem ;
  String_pointer_t __h_1_mem ;
} cicilibs06qci864FLhlAcZ1fZTAS7Yv0_;
typedef cicilibs06qci864FLhlAcZ1fZTAS7Yv0_ String_iterator_t ;
#ifndef __String__H_DECL__
#define __String__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_String class_String ;
typedef class_String * String_x ;
#ifndef __Maybe_String_x__H_DECL__
#define __Maybe_String_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_String_x Maybe_String_x ;
typedef void (*free_Maybe_String_x_t) (Maybe_String_x * this );
typedef struct Maybe_String_x__H_Table {
  free_Maybe_String_x_t freeData ;
} Maybe_String_x__H_Table;
typedef struct Maybe_String_x {
  const Maybe_String_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3661 */
    struct { /* ciciliStruct3662 */
      String_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3663 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_String_x;
Maybe_String_x Just_String_x (String_x value );
Maybe_String_x Nothing_String_x ();
__attribute__((weak)) Maybe_String_x Default_Maybe_String_x () {
  return Nothing_String_x ();
}
const Maybe_String_x__H_Table * const get_Maybe_String_x__H_Table ();
void free_Maybe_String_x (Maybe_String_x * this );
#endif /* __Maybe_String_x__H_DECL__ */ 
#ifndef __Box_String__H_DECL__
#define __Box_String__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_String Box_String ;
typedef void (*free_Box_String_t) (Box_String * this );
typedef struct Box_String__H_Table {
  free_Box_String_t freeData ;
    Box_String (*new) (String_x pointer );
    Box_String (*clone) (Box_String rc );
    Maybe_String_x (*take) (Box_String * this );
    Maybe_String_x (*get) (Box_String rc );
} Box_String__H_Table;
typedef struct Box_String {
  const Box_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3693 */
    struct { /* ciciliStruct3694 */
      String_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3695 */
    } Gone , _ ;
  } __h_data ;
} Box_String;
Box_String __h_Hold_String_x (String_x * pointer , int * count , size_t address );
Box_String Gone_String_x ();
__attribute__((weak)) Box_String Default_Box_String () {
  return Gone_String_x ();
}
Box_String new_Box_String (String_x pointer );
Box_String clone_Box_String (Box_String rc );
Maybe_String_x take_Box_String (Box_String * this );
Maybe_String_x get_Box_String (Box_String rc );
const Box_String__H_Table * const get_Box_String__H_Table ();
void free_Box_String (Box_String * this );
#endif /* __Box_String__H_DECL__ */ 
typedef Box_String String ;
typedef void (*free_String_t) (String_x * this );
typedef struct String__H_Table {
  free_String_t freeData ;
    String_iterator_t (*iterator) (String vector );
    String (*resize) (String vector , size_t len );
    String (*pure) (size_t step );
    String (*pureCapacity) (size_t capacity , size_t step );
    String_pointer_t (*toArray) (String vector );
    String (*wrap) (const Char item );
    size_t (*show) (CFile file , String vector );
    String (*copy) (String vector );
    String (*copySlice) (String vector , size_t pos , size_t len );
    String (*replaceAt) (String vector , Char item , size_t index );
    String (*deleteAt) (String vector , size_t index );
    String (*insertAt) (String vector , Char item , size_t index );
    String (*reverse) (String vector );
    String (*append) (String lvector , String rvector );
    String (*push) (Char item , String vector );
    String (*take) (size_t len , String vector );
    Maybe_Char (*last) (String vector );
    String (*init) (String vector );
    size_t (*hasLen) (String vector , size_t desired );
    size_t (*len) (String vector );
    String (*tail) (String vector );
    String (*drop) (size_t index , String vector );
    Maybe_Char (*head) (String list );
    Maybe_Char (*nth) (size_t index , String vector );
} String__H_Table;
typedef struct class_String {
  const String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion3760 */
    struct { /* ciciliStruct3761 */
      StringBuffer_Char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3762 */
      String __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3763 */
    } None , _ ;
  } __h_data ;
} class_String;
String Buffer_Char (StringBuffer_Char buffer );
String Slice_Char (String vector , size_t cursor , size_t size );
String None_Char ();
__attribute__((weak)) String Default_String () {
  return None_Char ();
}
String_iterator_t iterator_String (String vector );
String resize_String (String vector , size_t len );
String pure_String (size_t step );
String pureCapacity_String (size_t capacity , size_t step );
String_pointer_t toArray_String (String vector );
String wrap_String (const Char item );
size_t show_String (CFile file , String vector );
String copy_String (String vector );
String copySlice_String (String vector , size_t pos , size_t len );
String replaceAt_String (String vector , Char item , size_t index );
String deleteAt_String (String vector , size_t index );
String insertAt_String (String vector , Char item , size_t index );
String reverse_String (String vector );
String append_String (String lvector , String rvector );
String push_String (Char item , String vector );
String take_String (size_t len , String vector );
Maybe_Char last_String (String vector );
String init_String (String vector );
size_t hasLen_String (String vector , size_t desired );
size_t len_String (String vector );
String tail_String (String vector );
String drop_String (size_t index , String vector );
Maybe_Char head_String (String list );
Maybe_Char nth_String (size_t index , String vector );
String__H_Table * const get_String__H_Table ();
void free_String_x (String_x * this );
#endif /* __String__H_DECL__ */ 
#ifndef __Maybe_String__H_DECL__
#define __Maybe_String__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
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
  union { /* ciciliUnion3870 */
    struct { /* ciciliStruct3871 */
      String __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3872 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_String;
Maybe_String Just_String (String value );
Maybe_String Nothing_String ();
__attribute__((weak)) Maybe_String Default_Maybe_String () {
  return Nothing_String ();
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table ();
void free_Maybe_String (Maybe_String * this );
#endif /* __Maybe_String__H_DECL__ */ 
#ifndef __Maybe_Char__H_IMPL__
#define __Maybe_Char__H_IMPL__
void free_Maybe_Char (Maybe_Char * this ) {
}
const Maybe_Char__H_Table * const get_Maybe_Char__H_Table () {
  static const Maybe_Char__H_Table table  = { free_Maybe_Char };
  return (&table );
}
Maybe_Char Just_Char (Char value ) {
  { /* cicili#Let3902 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Char Nothing_Char () {
  { /* cicili#Let3907 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Char__H_IMPL__ */ 
bool null_terminated_StringBuffer_Char  = true ;
bool is_constant_StringBuffer_Char  = false ;
#ifndef __StringBuffer_Char__H_IMPL__
#define __StringBuffer_Char__H_IMPL__
StringBuffer_Char resize_StringBuffer_Char (StringBuffer_Char sb , size_t len ) {
  return ({ /* cicili#Let3921 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3923 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3924 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3926 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3928 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3933 */
            ({ /* cicili#Let3935 */
              Char * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(Char) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              (*(new_buffer  +  new_cursor  )) = ((Char)(*((Char *)"\0")));
              MakeStringBuffer_Char (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let3940 */
            // ----------
            ;
            ({ /* cicili#Progn3942 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char new_StringBuffer_Char (size_t step ) {
  return newCapacity_StringBuffer_Char (step , step );
}
StringBuffer_Char newCapacity_StringBuffer_Char (size_t capacity , size_t step ) {
  return ({ /* cicili#Let3953 */
      Char * buffer  = malloc (((capacity  +  1 ) *  sizeof(Char) ));
      StringBuffer_Char sb  = MakeStringBuffer_Char (buffer , 0, capacity , step );
      // ----------
      (*buffer ) = ((Char)(*((Char *)"\0")));
      sb ;
    });
}
StringBuffer_Char copySlice_StringBuffer_Char (StringBuffer_Char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let3962 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3964 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3965 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3967 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3969 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3974 */
            ({ /* cicili#Let3976 */
              StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_Char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_Char (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let3986 */
            // ----------
            ;
            ({ /* cicili#Progn3988 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char copy_StringBuffer_Char (StringBuffer_Char sb ) {
  return ({ /* cicili#Let3997 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3999 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4000 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4002 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4004 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4006 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4011 */
            ({ /* cicili#Let4013 */
              StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (size , step );
              // ----------
              print_StringBuffer_Char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let4020 */
            // ----------
            ;
            ({ /* cicili#Progn4022 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char put_StringBuffer_Char (StringBuffer_Char sb , const Char data ) {
  return print_StringBuffer_Char (sb , (&data ), 1);
}
StringBuffer_Char print_StringBuffer_Char (StringBuffer_Char sb , const Char * data , size_t len ) {
  return ({ /* cicili#Let4036 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4038 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4039 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4041 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4043 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4045 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4050 */
            ({ /* cicili#Let4052 */
              size_t blen  = (len  *  sizeof(Char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4056 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4058 */
                    Char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(Char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              (*(buffer  +  cursor  +  len  )) = ((Char)(*((Char *)"\0")));
              MakeStringBuffer_Char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4063 */
            // ----------
            ;
            ({ /* cicili#Progn4065 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
void free_StringBuffer_Char (StringBuffer_Char * this ) {
  { /* cicili#Let4073 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4075 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4076 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4082 */
          { /* cicili#Block4084 */
            free (buffer );
            (*this ) = FreedStringBuffer_Char ();
          }
        }
    });
  }
}
const StringBuffer_Char__H_Table * const get_StringBuffer_Char__H_Table () {
  static const StringBuffer_Char__H_Table table  = { free_StringBuffer_Char , resize_StringBuffer_Char , new_StringBuffer_Char , newCapacity_StringBuffer_Char , copySlice_StringBuffer_Char , copy_StringBuffer_Char , put_StringBuffer_Char , print_StringBuffer_Char };
  return (&table );
}
StringBuffer_Char MakeStringBuffer_Char (Char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let4094 */
    StringBuffer_Char instance  = ((StringBuffer_Char){ get_StringBuffer_Char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_Char FreedStringBuffer_Char () {
  { /* cicili#Let4099 */
    StringBuffer_Char instance  = ((StringBuffer_Char){ get_StringBuffer_Char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_Char__H_IMPL__ */ 
bool null_terminated_String  = true ;
bool is_constant_String  = false ;
#ifndef __String__H_IMPL__
#define __String__H_IMPL__
#ifndef __Maybe_String_x__H_IMPL__
#define __Maybe_String_x__H_IMPL__
void free_Maybe_String_x (Maybe_String_x * this ) {
}
const Maybe_String_x__H_Table * const get_Maybe_String_x__H_Table () {
  static const Maybe_String_x__H_Table table  = { free_Maybe_String_x };
  return (&table );
}
Maybe_String_x Just_String_x (String_x value ) {
  { /* cicili#Let4122 */
    Maybe_String_x instance  = ((Maybe_String_x){ get_Maybe_String_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String_x Nothing_String_x () {
  { /* cicili#Let4127 */
    Maybe_String_x instance  = ((Maybe_String_x){ get_Maybe_String_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String_x__H_IMPL__ */ 
#ifndef __Box_String__H_IMPL__
#define __Box_String__H_IMPL__
Box_String new_Box_String (String_x pointer ) {
  return ({ /* cicili#Let4134 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((String_x *)malloc (sizeof(String_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_String_x (holder , count , ((size_t)pointer ));
    });
}
Box_String clone_Box_String (Box_String rc ) {
  return ({ /* cicili#Let4143 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4145 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4146 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4148 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4150 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4155 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4158 */
                (++(*count ));
                __h_Hold_String_x (pointer , count , address );
              }) : Gone_String_x ());
          }) : ({ /* cicili#Let4164 */
            // ----------
            ;
            ({ /* cicili#Progn4166 */
              Gone_String_x ();
            });
          }));
      });
    });
}
Maybe_String_x take_Box_String (Box_String * this ) {
  return ({ /* cicili#Let4174 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4176 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4177 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4179 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4181 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4186 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let4190 */
                __auto_type result  = Just_String_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_String_x ());
          }) : ({ /* cicili#Let4198 */
            // ----------
            ;
            ({ /* cicili#Progn4200 */
              Nothing_String_x ();
            });
          }));
      });
    });
}
Maybe_String_x get_Box_String (Box_String rc ) {
  return ({ /* cicili#Let4208 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4210 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4211 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4213 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4215 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4220 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_String_x ((*pointer )) : Nothing_String_x ());
          }) : ({ /* cicili#Let4227 */
            // ----------
            ;
            ({ /* cicili#Progn4229 */
              Nothing_String_x ();
            });
          }));
      });
    });
}
void free_Box_String (Box_String * this ) {
  { /* cicili#Let4238 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4240 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4241 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4243 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4245 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4251 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4254 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_String_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4262 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4265 */
                    free_String_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_String_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let4275 */
          // ----------
          ;
          ({ /* cicili#Let4277 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4282 */
              }
          });
        }
    });
  }
}
const Box_String__H_Table * const get_Box_String__H_Table () {
  static const Box_String__H_Table table  = { free_Box_String , new_Box_String , clone_Box_String , take_Box_String , get_Box_String };
  return (&table );
}
Box_String __h_Hold_String_x (String_x * pointer , int * count , size_t address ) {
  { /* cicili#Let4293 */
    Box_String instance  = ((Box_String){ get_Box_String__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_String Gone_String_x () {
  { /* cicili#Let4298 */
    Box_String instance  = ((Box_String){ get_Box_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_String__H_IMPL__ */ 
String_iterator_t iterator_String (String vector ) {
  return ({ /* cicili#Let4305 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4309 */
        __auto_type match4308  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4308 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4312 */
          bool __h_case_result  = (true  &&  (((match4308 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4313 */
                (unboxed  =  (((match4308 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4318 */
              ({ /* cicili#Let4322 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4324 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4325 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4330 */
                      ({ /* cicili#Let4334 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4336 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4337 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4339 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4344 */
                              ((String_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let4349 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4351 */
                                ((String_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4356 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4358 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4359 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4361 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4363 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4368 */
                            ({ /* cicili#Let4370 */
                              String_iterator_t iter  = iterator_String (vec );
                              // ----------
                              ({ /* cicili#Let4376 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let4378 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn4379 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4384 */
                                      ((String_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let4389 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4391 */
                                        ((String_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4396 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4398 */
                              ((String_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4403 */
              // ----------
              ;
              ({ /* cicili#Progn4405 */
                ((String_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
String resize_String (String vector , size_t len ) {
  return ({ /* cicili#Let4411 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4415 */
        __auto_type match4414  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4414 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4418 */
          bool __h_case_result  = (true  &&  (((match4414 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4419 */
                (unboxed  =  (((match4414 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4424 */
              ({ /* cicili#Let4428 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4430 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4431 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4436 */
                      ({ /* cicili#Let4440 */
                        __auto_type match4439  = take_Box_String ((&vector ));
                        typeof((((match4439 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let4443 */
                          bool __h_case_result  = (true  &&  (((match4439 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4444 */
                                (ptr  =  (((match4439 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4449 */
                              ({ /* cicili#Progn4451 */
                                free (((void *)ptr ));
                                Buffer_Char (resize_StringBuffer_Char (sb , len ));
                              });
                            }) : ({ /* cicili#Let4457 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4459 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4464 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let4466 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4467 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4469 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4474 */
                            ({ /* cicili#Let4477 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4481 */
                                __auto_type match4480  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4480 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4484 */
                                  bool __h_case_result  = (true  &&  (((match4480 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4485 */
                                        (unboxed  =  (((match4480 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4490 */
                                      ({ /* cicili#Let4494 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4496 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4497 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4502 */
                                              ({ /* cicili#Let4506 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4508 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4509 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn4511 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4516 */
                                                      ({ /* cicili#Let4518 */
                                                        StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (len , step );
                                                        // ----------
                                                        Buffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let4526 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4528 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4533 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4535 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4536 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4541 */
                                                    resize_String (veci , len );
                                                  }) : ({ /* cicili#Let4546 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4548 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4553 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4555 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4560 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4562 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4567 */
              // ----------
              ;
              ({ /* cicili#Progn4569 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String pure_String (size_t step ) {
  return pureCapacity_String (step , step );
}
String pureCapacity_String (size_t capacity , size_t step ) {
  return Buffer_Char (newCapacity_StringBuffer_Char (capacity , step ));
}
String_pointer_t toArray_String (String vector ) {
  return ({ /* cicili#Let4583 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4587 */
        __auto_type match4586  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4586 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4590 */
          bool __h_case_result  = (true  &&  (((match4586 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4591 */
                (unboxed  =  (((match4586 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4596 */
              ({ /* cicili#Let4600 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4602 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4603 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4608 */
                      ({ /* cicili#Let4612 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4614 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4615 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4620 */
                              buffer ;
                            }) : ({ /* cicili#Let4624 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4626 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4630 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4632 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4633 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4635 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4640 */
                            ({ /* cicili#Let4643 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4647 */
                                __auto_type match4646  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4646 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4650 */
                                  bool __h_case_result  = (true  &&  (((match4646 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4651 */
                                        (unboxed  =  (((match4646 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4656 */
                                      ({ /* cicili#Let4660 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4662 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4663 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4668 */
                                              ({ /* cicili#Let4672 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4674 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4675 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4680 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4684 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4686 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4690 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4692 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4693 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4695 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4700 */
                                                    (toArray_String (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4705 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4707 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4711 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4713 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4717 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4719 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4723 */
              // ----------
              ;
              ({ /* cicili#Progn4725 */
                NULL ;
              });
            }));
        });
      });
    });
}
String wrap_String (const Char item ) {
  return ({ /* cicili#Let4730 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4732 */
        __auto_type new_vec  = pureCapacity_String (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_String (item , new_vec );
    });
}
size_t show_String (CFile file , String vector ) {
  auto size_t show_ (size_t index , String vector );
  size_t showWithSize (size_t index , size_t size , String vector ) {
    return ({ /* cicili#Let4742 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4746 */
          __auto_type match4745  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4745 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4749 */
            bool __h_case_result  = (true  &&  (((match4745 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4750 */
                  (unboxed  =  (((match4745 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4755 */
                ({ /* cicili#Let4759 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4761 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4762 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4767 */
                        ({ /* cicili#Let4771 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4773 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4774 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4779 */
                                ({ /* cicili#Let4781 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4792 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4794 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4798 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4800 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4801 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4803 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4805 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4810 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4814 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4816 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4820 */
                // ----------
                ;
                ({ /* cicili#Progn4822 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , String vector ) {
    return ({ /* cicili#Let4826 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4830 */
          __auto_type match4829  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4829 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4833 */
            bool __h_case_result  = (true  &&  (((match4829 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4834 */
                  (unboxed  =  (((match4829 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4839 */
                ({ /* cicili#Let4843 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4845 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4846 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4851 */
                        ({ /* cicili#Let4855 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4857 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4858 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4860 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4865 */
                                ({ /* cicili#Let4867 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4878 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4880 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4884 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4886 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4887 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4889 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4891 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4896 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4900 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4902 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4906 */
                // ----------
                ;
                ({ /* cicili#Progn4908 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
String copy_String (String vector ) {
  return ({ /* cicili#Let4913 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4917 */
        __auto_type match4916  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4916 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4920 */
          bool __h_case_result  = (true  &&  (((match4916 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4921 */
                (unboxed  =  (((match4916 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4926 */
              ({ /* cicili#Let4930 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4932 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4933 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4938 */
                      ({ /* cicili#Let4942 */
                        // ----------
                        ;
                        ({ /* cicili#Let4944 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4948 */
                              Buffer_Char (copy_StringBuffer_Char (sb ));
                            }) : ({ /* cicili#Let4954 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4956 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4961 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4963 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4964 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4966 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4968 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4973 */
                            ({ /* cicili#Let4976 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4980 */
                                __auto_type match4979  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4979 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4983 */
                                  bool __h_case_result  = (true  &&  (((match4979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4984 */
                                        (unboxed  =  (((match4979 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4989 */
                                      ({ /* cicili#Let4993 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4995 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4996 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5001 */
                                              ({ /* cicili#Let5005 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5007 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5011 */
                                                      Buffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let5017 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5019 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5024 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5026 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5027 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5032 */
                                                    copySlice_String (veci , cur , size );
                                                  }) : ({ /* cicili#Let5037 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5039 */
                                                      None_Char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5044 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5046 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5051 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5053 */
                              None_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5058 */
              // ----------
              ;
              ({ /* cicili#Progn5060 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String copySlice_String (String vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let5066 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5070 */
        __auto_type match5069  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5069 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5073 */
          bool __h_case_result  = (true  &&  (((match5069 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5074 */
                (unboxed  =  (((match5069 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5079 */
              ({ /* cicili#Let5083 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5085 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5086 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5091 */
                      ({ /* cicili#Let5095 */
                        // ----------
                        ;
                        ({ /* cicili#Let5097 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5101 */
                              Buffer_Char (copySlice_StringBuffer_Char (sb , pos , len ));
                            }) : ({ /* cicili#Let5107 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5109 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5114 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5116 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5117 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5119 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5124 */
                            ({ /* cicili#Let5127 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5131 */
                                __auto_type match5130  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5130 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5134 */
                                  bool __h_case_result  = (true  &&  (((match5130 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5135 */
                                        (unboxed  =  (((match5130 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5140 */
                                      ({ /* cicili#Let5144 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5146 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5147 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5152 */
                                              ({ /* cicili#Let5156 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5158 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5162 */
                                                      Buffer_Char (copySlice_StringBuffer_Char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let5168 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5170 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5175 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5177 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5178 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5183 */
                                                    copySlice_String (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let5188 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5190 */
                                                      None_Char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5195 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5197 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5202 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5204 */
                              None_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5209 */
              // ----------
              ;
              ({ /* cicili#Progn5211 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String replaceAt_String (String vector , Char item , size_t index ) {
  return ({ /* cicili#Let5217 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5221 */
        __auto_type match5220  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5220 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5224 */
          bool __h_case_result  = (true  &&  (((match5220 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5225 */
                (unboxed  =  (((match5220 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5230 */
              ({ /* cicili#Let5234 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5236 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5237 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5242 */
                      ({ /* cicili#Let5246 */
                        __auto_type match5245  = take_Box_String ((&vector ));
                        typeof((((match5245 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5249 */
                          bool __h_case_result  = (true  &&  (((match5245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5250 */
                                (ptr  =  (((match5245 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5255 */
                              ({ /* cicili#Progn5257 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let5261 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5263 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5264 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5266 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5271 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn5274 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_Char (sb );
                                          }) : Buffer_Char (sb ));
                                      }) : ({ /* cicili#Let5280 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5282 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5287 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5289 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5294 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5296 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5297 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5299 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5301 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5306 */
                            ({ /* cicili#Let5309 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5313 */
                                __auto_type match5312  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5312 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5316 */
                                  bool __h_case_result  = (true  &&  (((match5312 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5317 */
                                        (unboxed  =  (((match5312 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5322 */
                                      ({ /* cicili#Let5326 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5328 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5329 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5334 */
                                              ({ /* cicili#Let5338 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5340 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5341 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5343 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5348 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5351 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (size , step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (put_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5361 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5363 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5368 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5370 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5371 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5376 */
                                                    replaceAt_String (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5381 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5383 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5388 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5390 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5395 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5397 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5402 */
              // ----------
              ;
              ({ /* cicili#Progn5404 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String deleteAt_String (String vector , size_t index ) {
  return ({ /* cicili#Let5410 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5414 */
        __auto_type match5413  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5413 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5417 */
          bool __h_case_result  = (true  &&  (((match5413 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5418 */
                (unboxed  =  (((match5413 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5423 */
              ({ /* cicili#Let5427 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5429 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5430 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5435 */
                      ({ /* cicili#Let5439 */
                        __auto_type match5438  = take_Box_String ((&vector ));
                        typeof((((match5438 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5442 */
                          bool __h_case_result  = (true  &&  (((match5438 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5443 */
                                (ptr  =  (((match5438 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5448 */
                              ({ /* cicili#Progn5450 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let5454 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5456 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5457 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn5459 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn5461 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn5463 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5468 */
                                        ({ /* cicili#Progn5470 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_Char (MakeStringBuffer_Char (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let5478 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5480 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5485 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5487 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5492 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5494 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5495 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5497 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5499 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5504 */
                            ({ /* cicili#Let5507 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5511 */
                                __auto_type match5510  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5510 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5514 */
                                  bool __h_case_result  = (true  &&  (((match5510 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5515 */
                                        (unboxed  =  (((match5510 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5520 */
                                      ({ /* cicili#Let5524 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5526 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5527 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5532 */
                                              ({ /* cicili#Let5536 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5538 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5539 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5541 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5546 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5549 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5558 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5560 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5565 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5567 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5568 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5573 */
                                                    deleteAt_String (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5578 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5580 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5585 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5587 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5592 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5594 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5599 */
              // ----------
              ;
              ({ /* cicili#Progn5601 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String insertAt_String (String vector , Char item , size_t index ) {
  return ({ /* cicili#Let5607 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5611 */
        __auto_type match5610  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5610 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5614 */
          bool __h_case_result  = (true  &&  (((match5610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5615 */
                (unboxed  =  (((match5610 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5620 */
              ({ /* cicili#Let5624 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5626 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5627 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5632 */
                      ({ /* cicili#Let5636 */
                        __auto_type match5635  = take_Box_String ((&vector ));
                        typeof((((match5635 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5639 */
                          bool __h_case_result  = (true  &&  (((match5635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5640 */
                                (ptr  =  (((match5635 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5645 */
                              ({ /* cicili#Let5647 */
                                StringBuffer_Char new_sb  = put_StringBuffer_Char (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let5653 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5655 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5656 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5658 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5663 */
                                        ({ /* cicili#Progn5665 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_Char (new_sb );
                                        });
                                      }) : ({ /* cicili#Let5672 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5674 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5679 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5681 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5686 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5688 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5689 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5691 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5693 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5698 */
                            ({ /* cicili#Let5701 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5705 */
                                __auto_type match5704  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5704 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5708 */
                                  bool __h_case_result  = (true  &&  (((match5704 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5709 */
                                        (unboxed  =  (((match5704 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5714 */
                                      ({ /* cicili#Let5718 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5720 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5721 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5726 */
                                              ({ /* cicili#Let5730 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5732 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5733 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5735 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5740 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5743 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (put_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5753 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5755 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5760 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5762 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5763 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5768 */
                                                    insertAt_String (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5773 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5775 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5780 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5782 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5787 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5789 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5794 */
              // ----------
              ;
              ({ /* cicili#Progn5796 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String reverse_String (String vector ) {
  return ({ /* cicili#Let5802 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5806 */
        __auto_type match5805  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5805 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5809 */
          bool __h_case_result  = (true  &&  (((match5805 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5810 */
                (unboxed  =  (((match5805 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5815 */
              ({ /* cicili#Let5819 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5821 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5822 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5827 */
                      ({ /* cicili#Let5831 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let5833 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5834 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn5836 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5838 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5840 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5845 */
                              ({ /* cicili#Let5849 */
                                __auto_type match5848  = take_Box_String ((&vector ));
                                typeof((((match5848 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let5852 */
                                  bool __h_case_result  = (true  &&  (((match5848 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5853 */
                                        (ptr  =  (((match5848 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5858 */
                                      ({ /* cicili#Let5860 */
                                        Char tmp ;
                                        // ----------
                                        free (((void *)ptr ));
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_Char (MakeStringBuffer_Char (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let5868 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5870 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let5875 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5877 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5882 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5884 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5885 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5887 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5889 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5894 */
                            ({ /* cicili#Let5897 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5901 */
                                __auto_type match5900  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5900 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5904 */
                                  bool __h_case_result  = (true  &&  (((match5900 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5905 */
                                        (unboxed  =  (((match5900 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5910 */
                                      ({ /* cicili#Let5914 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5916 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5917 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5922 */
                                              reverse_String (Buffer_Char (copySlice_StringBuffer_Char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let5929 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5931 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5932 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5937 */
                                                    reverse_String (copySlice_String (veci , cur , size ));
                                                  }) : ({ /* cicili#Let5943 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5945 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5950 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5952 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5957 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5959 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5964 */
              // ----------
              ;
              ({ /* cicili#Progn5966 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String append_String (String lvector , String rvector ) {
  return ({ /* cicili#Let5972 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let5976 */
        __auto_type match5975  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5975 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5979 */
          bool __h_case_result  = (true  &&  (((match5975 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5980 */
                (unboxed  =  (((match5975 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5985 */
              ({ /* cicili#Let5989 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5991 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5992 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5997 */
                      ({ /* cicili#Let6001 */
                        __auto_type match6000  = take_Box_String ((&lvector ));
                        typeof((((match6000 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6004 */
                          bool __h_case_result  = (true  &&  (((match6000 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6005 */
                                (ptr  =  (((match6000 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6010 */
                              ({ /* cicili#Progn6012 */
                                free (((void *)ptr ));
                                Buffer_Char (print_StringBuffer_Char (sb , toArray_String (rvector ), len_String (rvector )));
                              });
                            }) : ({ /* cicili#Let6020 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6022 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6027 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6029 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6030 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6032 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6034 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6039 */
                            ({ /* cicili#Let6042 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6046 */
                                __auto_type match6045  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6045 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6049 */
                                  bool __h_case_result  = (true  &&  (((match6045 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6050 */
                                        (unboxed  =  (((match6045 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6055 */
                                      ({ /* cicili#Let6059 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6061 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6062 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6067 */
                                              Buffer_Char (print_StringBuffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ), toArray_String (rvector ), len_String (rvector )));
                                            }) : ({ /* cicili#Let6076 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6078 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6079 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6084 */
                                                    append_String (copySlice_String (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let6090 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6092 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6097 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6099 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6104 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6106 */
                              clone_Box_String (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6111 */
              // ----------
              ;
              ({ /* cicili#Progn6113 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String push_String (Char item , String vector ) {
  return ({ /* cicili#Let6119 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6123 */
        __auto_type match6122  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6122 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6126 */
          bool __h_case_result  = (true  &&  (((match6122 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6127 */
                (unboxed  =  (((match6122 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6132 */
              ({ /* cicili#Let6136 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6138 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6139 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6144 */
                      ({ /* cicili#Let6148 */
                        __auto_type match6147  = take_Box_String ((&vector ));
                        typeof((((match6147 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6151 */
                          bool __h_case_result  = (true  &&  (((match6147 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6152 */
                                (ptr  =  (((match6147 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6157 */
                              ({ /* cicili#Progn6159 */
                                free (((void *)ptr ));
                                Buffer_Char (put_StringBuffer_Char (sb , item ));
                              });
                            }) : ({ /* cicili#Let6165 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6167 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6172 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6174 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6175 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6177 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6179 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6184 */
                            ({ /* cicili#Let6187 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6191 */
                                __auto_type match6190  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6190 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6194 */
                                  bool __h_case_result  = (true  &&  (((match6190 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6195 */
                                        (unboxed  =  (((match6190 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6200 */
                                      ({ /* cicili#Let6204 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6206 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6207 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6212 */
                                              Buffer_Char (put_StringBuffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let6219 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6221 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6222 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6227 */
                                                    push_String (item , copySlice_String (veci , cur , size ));
                                                  }) : ({ /* cicili#Let6233 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6235 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6240 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6242 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6247 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6249 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6254 */
              // ----------
              ;
              ({ /* cicili#Progn6256 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String take_String (size_t len , String vector ) {
  return ({ /* cicili#Let6262 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6266 */
        __auto_type match6265  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6265 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6269 */
          bool __h_case_result  = (true  &&  (((match6265 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6270 */
                (unboxed  =  (((match6265 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6275 */
              ({ /* cicili#Let6279 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6281 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6282 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6287 */
                      ({ /* cicili#Let6291 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6293 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6294 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6299 */
                              (((len  <=  0 )) ? Slice_Char (clone_Box_String (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_Char (clone_Box_String (vector ), 0, len ) : Slice_Char (clone_Box_String (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6311 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6313 */
                                Slice_Char (clone_Box_String (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6319 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6321 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6322 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6324 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6326 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6331 */
                            (((len  <=  0 )) ? Slice_Char (clone_Box_String (vec ), cursor , 0) : (((len  <  size  )) ? Slice_Char (clone_Box_String (vec ), cursor , len ) : Slice_Char (clone_Box_String (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let6343 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6345 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6350 */
              // ----------
              ;
              ({ /* cicili#Progn6352 */
                None_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char last_String (String vector ) {
  return ({ /* cicili#Let6359 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6363 */
        __auto_type match6362  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6362 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6366 */
          bool __h_case_result  = (true  &&  (((match6362 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6367 */
                (unboxed  =  (((match6362 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6372 */
              ({ /* cicili#Let6376 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6378 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6379 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6384 */
                      ({ /* cicili#Let6388 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6390 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6391 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6393 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6398 */
                              Just_Char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let6403 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6405 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6410 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6412 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6413 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6415 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6417 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6422 */
                            nth_String ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let6427 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6429 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6434 */
              // ----------
              ;
              ({ /* cicili#Progn6436 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
String init_String (String vector ) {
  return ({ /* cicili#Let6442 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6446 */
        __auto_type match6445  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6445 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6449 */
          bool __h_case_result  = (true  &&  (((match6445 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6450 */
                (unboxed  =  (((match6445 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6455 */
              ({ /* cicili#Let6459 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6461 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6462 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6467 */
                      ({ /* cicili#Let6471 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6473 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6474 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6479 */
                              Slice_Char (clone_Box_String (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6485 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6487 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6492 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6494 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6495 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6497 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6499 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6504 */
                            Slice_Char (clone_Box_String (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6510 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6512 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6517 */
              // ----------
              ;
              ({ /* cicili#Progn6519 */
                None_Char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_String (String vector , size_t desired ) {
  return ({ /* cicili#Let6524 */
      size_t len  = len_String (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_String (String vector ) {
  return ({ /* cicili#Let6531 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6535 */
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
          
          ((__h_case_result ) ? ({ /* cicili#Progn6544 */
              ({ /* cicili#Let6548 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6550 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6551 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6556 */
                      ({ /* cicili#Let6560 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6562 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6563 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6568 */
                              cursor ;
                            }) : ({ /* cicili#Let6572 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6574 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6578 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6580 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6581 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6586 */
                            size ;
                          }) : ({ /* cicili#Let6590 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6592 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6596 */
              // ----------
              ;
              ({ /* cicili#Progn6598 */
                0;
              });
            }));
        });
      });
    });
}
String tail_String (String vector ) {
  return drop_String (1, vector );
}
String drop_String (size_t len , String vector ) {
  return ({ /* cicili#Let6606 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6610 */
        __auto_type match6609  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6609 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6613 */
          bool __h_case_result  = (true  &&  (((match6609 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6614 */
                (unboxed  =  (((match6609 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6619 */
              ({ /* cicili#Let6623 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6625 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6626 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6631 */
                      ({ /* cicili#Let6635 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6637 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6638 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6643 */
                              (((len  <=  0 )) ? Slice_Char (clone_Box_String (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_Char (clone_Box_String (vector ), len , (cursor  -  len  )) : Slice_Char (clone_Box_String (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6655 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6657 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6662 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6664 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6665 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6667 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6672 */
                            drop_String ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let6677 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6679 */
                              clone_Box_String (vector );
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
                None_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char head_String (String vector ) {
  return ({ /* cicili#Let6693 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6697 */
        __auto_type match6696  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6696 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6700 */
          bool __h_case_result  = (true  &&  (((match6696 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6701 */
                (unboxed  =  (((match6696 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6706 */
              ({ /* cicili#Let6710 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6712 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6713 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6718 */
                      ({ /* cicili#Let6722 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6724 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6725 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6727 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6732 */
                              (((cursor  >  0 )) ? Just_Char ((*buffer )) : Nothing_Char ());
                            }) : ({ /* cicili#Let6739 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6741 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6746 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6748 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6749 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6751 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6756 */
                            nth_String (cursor , vector );
                          }) : ({ /* cicili#Let6761 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6763 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6768 */
              // ----------
              ;
              ({ /* cicili#Progn6770 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char nth_String (size_t index , String vector ) {
  return ({ /* cicili#Let6777 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6781 */
        __auto_type match6780  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6780 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6784 */
          bool __h_case_result  = (true  &&  (((match6780 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6785 */
                (unboxed  =  (((match6780 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6790 */
              ({ /* cicili#Let6794 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6796 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6797 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6802 */
                      ({ /* cicili#Let6806 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6808 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6809 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6811 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6816 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_Char ((*(buffer  +  index  ))) : Nothing_Char ());
                            }) : ({ /* cicili#Let6823 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6825 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6830 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6832 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6833 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6835 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6837 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6842 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_String ((cursor  +  index  ), vector ) : Nothing_Char ());
                          }) : ({ /* cicili#Let6849 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6851 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6856 */
              // ----------
              ;
              ({ /* cicili#Progn6858 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
void free_String_x (String_x * this_ptr ) {
  { /* cicili#Let6863 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6867 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let6869 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6870 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6876 */
            free_StringBuffer_Char ((&sb ));
          }
        else
          { /* cicili#Let6882 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let6884 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6885 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6891 */
                  free_Box_String ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
String__H_Table * const get_String__H_Table () {
  static String__H_Table table  = { free_String_x , iterator_String , resize_String , pure_String , pureCapacity_String , toArray_String , wrap_String , show_String , copy_String , copySlice_String , replaceAt_String , deleteAt_String , insertAt_String , reverse_String , append_String , push_String , take_String , last_String , init_String , hasLen_String , len_String , tail_String , drop_String , head_String , nth_String };
  return (&table );
}
String Buffer_Char (StringBuffer_Char buffer ) {
  { /* cicili#Let6901 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_String (instance );
  }
}
String Slice_Char (String vector , size_t cursor , size_t size ) {
  { /* cicili#Let6909 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_String (instance );
  }
}
String None_Char () {
  { /* cicili#Let6916 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h___t });
    return new_Box_String (instance );
  }
}
#endif /* __String__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Just_String (String value ) {
  { /* cicili#Let6934 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let6939 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
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
  union { /* ciciliUnion6965 */
    struct { /* ciciliStruct6966 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct6967 */
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
  __h_Buffered_t = 1
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_char StringBuffer_char ;
typedef void (*free_StringBuffer_char_t) (StringBuffer_char * this );
typedef struct StringBuffer_char__H_Table {
  free_StringBuffer_char_t freeData ;
    StringBuffer_char (*resize) (StringBuffer_char sb , size_t size );
    StringBuffer_char (*new) (size_t step );
    StringBuffer_char (*newCapacity) (size_t capacity , size_t step );
    StringBuffer_char (*copySlice) (StringBuffer_char sb , size_t cursor , size_t size );
    StringBuffer_char (*copy) (StringBuffer_char sb );
    StringBuffer_char (*put) (StringBuffer_char sb , const char data );
    StringBuffer_char (*print) (StringBuffer_char sb , const char * data , size_t len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion7012 */
    struct { /* ciciliStruct7013 */
      const char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct7014 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (const char * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
  return FreedStringBuffer_char ();
}
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t size );
StringBuffer_char new_StringBuffer_char (size_t step );
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step );
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t cursor , size_t size );
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len );
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table ();
void free_StringBuffer_char (StringBuffer_char * this );
#endif /* __StringBuffer_char__H_DECL__ */ 
typedef const char * Str_pointer_t ;
typedef struct cicili6gNGnxSDuwJXdBbR7iQ3mtjF4YY_ {
  Str_pointer_t __h_0_mem ;
  Str_pointer_t __h_1_mem ;
} cicili6gNGnxSDuwJXdBbR7iQ3mtjF4YY_;
typedef cicili6gNGnxSDuwJXdBbR7iQ3mtjF4YY_ Str_iterator_t ;
#ifndef __Str__H_DECL__
#define __Str__H_DECL__
#ifndef __H___h_Vector_ctor_t__
#define __H___h_Vector_ctor_t__
typedef enum __h_Vector_ctor_t {
  __h_None_t = 0,
  __h_Slice_t = 1,
  __h_Buffer_t = 2
} __h_Vector_ctor_t;
#endif /* __H___h_Vector_ctor_t__ */ 
typedef struct class_Str class_Str ;
typedef class_Str * Str_x ;
#ifndef __Maybe_Str_x__H_DECL__
#define __Maybe_Str_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Str_x Maybe_Str_x ;
typedef void (*free_Maybe_Str_x_t) (Maybe_Str_x * this );
typedef struct Maybe_Str_x__H_Table {
  free_Maybe_Str_x_t freeData ;
} Maybe_Str_x__H_Table;
typedef struct Maybe_Str_x {
  const Maybe_Str_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion7085 */
    struct { /* ciciliStruct7086 */
      Str_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct7087 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Str_x;
Maybe_Str_x Just_Str_x (Str_x value );
Maybe_Str_x Nothing_Str_x ();
__attribute__((weak)) Maybe_Str_x Default_Maybe_Str_x () {
  return Nothing_Str_x ();
}
const Maybe_Str_x__H_Table * const get_Maybe_Str_x__H_Table ();
void free_Maybe_Str_x (Maybe_Str_x * this );
#endif /* __Maybe_Str_x__H_DECL__ */ 
#ifndef __Box_Str__H_DECL__
#define __Box_Str__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_Str Box_Str ;
typedef void (*free_Box_Str_t) (Box_Str * this );
typedef struct Box_Str__H_Table {
  free_Box_Str_t freeData ;
    Box_Str (*new) (Str_x pointer );
    Box_Str (*clone) (Box_Str rc );
    Maybe_Str_x (*take) (Box_Str * this );
    Maybe_Str_x (*get) (Box_Str rc );
} Box_Str__H_Table;
typedef struct Box_Str {
  const Box_Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion7117 */
    struct { /* ciciliStruct7118 */
      Str_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct7119 */
    } Gone , _ ;
  } __h_data ;
} Box_Str;
Box_Str __h_Hold_Str_x (Str_x * pointer , int * count , size_t address );
Box_Str Gone_Str_x ();
__attribute__((weak)) Box_Str Default_Box_Str () {
  return Gone_Str_x ();
}
Box_Str new_Box_Str (Str_x pointer );
Box_Str clone_Box_Str (Box_Str rc );
Maybe_Str_x take_Box_Str (Box_Str * this );
Maybe_Str_x get_Box_Str (Box_Str rc );
const Box_Str__H_Table * const get_Box_Str__H_Table ();
void free_Box_Str (Box_Str * this );
#endif /* __Box_Str__H_DECL__ */ 
typedef Box_Str Str ;
typedef void (*free_Str_t) (Str_x * this );
typedef struct Str__H_Table {
  free_Str_t freeData ;
    Str_iterator_t (*iterator) (Str vector );
    Str (*resize) (Str vector , size_t len );
    Str (*pure) (size_t step );
    Str (*pureCapacity) (size_t capacity , size_t step );
    Str_pointer_t (*toArray) (Str vector );
    Str (*wrap) (const char item );
    size_t (*show) (CFile file , Str vector );
    Str (*copy) (Str vector );
    Str (*copySlice) (Str vector , size_t pos , size_t len );
    Str (*replaceAt) (Str vector , char item , size_t index );
    Str (*deleteAt) (Str vector , size_t index );
    Str (*insertAt) (Str vector , char item , size_t index );
    Str (*reverse) (Str vector );
    Str (*append) (Str lvector , Str rvector );
    Str (*push) (char item , Str vector );
    Str (*take) (size_t len , Str vector );
    Maybe_char (*last) (Str vector );
    Str (*init) (Str vector );
    size_t (*hasLen) (Str vector , size_t desired );
    size_t (*len) (Str vector );
    Str (*tail) (Str vector );
    Str (*drop) (size_t index , Str vector );
    Maybe_char (*head) (Str list );
    Maybe_char (*nth) (size_t index , Str vector );
} Str__H_Table;
typedef struct class_Str {
  const Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion7184 */
    struct { /* ciciliStruct7185 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct7186 */
      Str __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct7187 */
    } None , _ ;
  } __h_data ;
} class_Str;
Str Buffer_char (StringBuffer_char buffer );
Str Slice_char (Str vector , size_t cursor , size_t size );
Str None_char ();
__attribute__((weak)) Str Default_Str () {
  return None_char ();
}
Str_iterator_t iterator_Str (Str vector );
Str resize_Str (Str vector , size_t len );
Str pure_Str (size_t step );
Str pureCapacity_Str (size_t capacity , size_t step );
Str_pointer_t toArray_Str (Str vector );
Str wrap_Str (const char item );
size_t show_Str (CFile file , Str vector );
Str copy_Str (Str vector );
Str copySlice_Str (Str vector , size_t pos , size_t len );
Str replaceAt_Str (Str vector , char item , size_t index );
Str deleteAt_Str (Str vector , size_t index );
Str insertAt_Str (Str vector , char item , size_t index );
Str reverse_Str (Str vector );
Str append_Str (Str lvector , Str rvector );
Str push_Str (char item , Str vector );
Str take_Str (size_t len , Str vector );
Maybe_char last_Str (Str vector );
Str init_Str (Str vector );
size_t hasLen_Str (Str vector , size_t desired );
size_t len_Str (Str vector );
Str tail_Str (Str vector );
Str drop_Str (size_t index , Str vector );
Maybe_char head_Str (Str list );
Maybe_char nth_Str (size_t index , Str vector );
Str__H_Table * const get_Str__H_Table ();
void free_Str_x (Str_x * this );
#endif /* __Str__H_DECL__ */ 
#ifndef __Maybe_Str__H_DECL__
#define __Maybe_Str__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Str Maybe_Str ;
typedef void (*free_Maybe_Str_t) (Maybe_Str * this );
typedef struct Maybe_Str__H_Table {
  free_Maybe_Str_t freeData ;
} Maybe_Str__H_Table;
typedef struct Maybe_Str {
  const Maybe_Str__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion7294 */
    struct { /* ciciliStruct7295 */
      Str __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct7296 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Str;
Maybe_Str Just_Str (Str value );
Maybe_Str Nothing_Str ();
__attribute__((weak)) Maybe_Str Default_Maybe_Str () {
  return Nothing_Str ();
}
const Maybe_Str__H_Table * const get_Maybe_Str__H_Table ();
void free_Maybe_Str (Maybe_Str * this );
#endif /* __Maybe_Str__H_DECL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* cicili#Let7326 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let7331 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
bool null_terminated_StringBuffer_char  = true ;
bool is_constant_StringBuffer_char  = true ;
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t len ) {
  return FreedStringBuffer_char ();
}
StringBuffer_char new_StringBuffer_char (size_t step ) {
  return newCapacity_StringBuffer_char (step , step );
}
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step ) {
  return FreedStringBuffer_char ();
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let7358 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      // ----------
      ;
      ({ /* cicili#Let7360 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7361 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7363 */
                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7368 */
            MakeStringBuffer_char (((((pos  +  len  ) <=  cursor  )) ? (buffer  +  pos  ) : (((pos  <=  cursor  )) ? (buffer  +  pos  ) : (buffer  +  cursor  ))), ((((pos  +  len  ) <=  cursor  )) ? len  : (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)), ((((pos  +  len  ) <=  cursor  )) ? len  : (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)), 0);
          }) : ({ /* cicili#Let7379 */
            // ----------
            ;
            ({ /* cicili#Progn7381 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
  return ({ /* cicili#Let7390 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      // ----------
      ;
      ({ /* cicili#Let7392 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7393 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7395 */
                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7400 */
            MakeStringBuffer_char (buffer , cursor , cursor , 0);
          }) : ({ /* cicili#Let7405 */
            // ----------
            ;
            ({ /* cicili#Progn7407 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len ) {
  return FreedStringBuffer_char ();
}
void free_StringBuffer_char (StringBuffer_char * this ) {
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , resize_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , copySlice_StringBuffer_char , copy_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (const char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let7430 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let7435 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_char__H_IMPL__ */ 
bool null_terminated_Str  = true ;
bool is_constant_Str  = true ;
#ifndef __Str__H_IMPL__
#define __Str__H_IMPL__
#ifndef __Maybe_Str_x__H_IMPL__
#define __Maybe_Str_x__H_IMPL__
void free_Maybe_Str_x (Maybe_Str_x * this ) {
}
const Maybe_Str_x__H_Table * const get_Maybe_Str_x__H_Table () {
  static const Maybe_Str_x__H_Table table  = { free_Maybe_Str_x };
  return (&table );
}
Maybe_Str_x Just_Str_x (Str_x value ) {
  { /* cicili#Let7458 */
    Maybe_Str_x instance  = ((Maybe_Str_x){ get_Maybe_Str_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Str_x Nothing_Str_x () {
  { /* cicili#Let7463 */
    Maybe_Str_x instance  = ((Maybe_Str_x){ get_Maybe_Str_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Str_x__H_IMPL__ */ 
#ifndef __Box_Str__H_IMPL__
#define __Box_Str__H_IMPL__
Box_Str new_Box_Str (Str_x pointer ) {
  return ({ /* cicili#Let7470 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Str_x *)malloc (sizeof(Str_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Str_x (holder , count , ((size_t)pointer ));
    });
}
Box_Str clone_Box_Str (Box_Str rc ) {
  return ({ /* cicili#Let7479 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let7481 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn7482 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7484 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn7486 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7491 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn7494 */
                (++(*count ));
                __h_Hold_Str_x (pointer , count , address );
              }) : Gone_Str_x ());
          }) : ({ /* cicili#Let7500 */
            // ----------
            ;
            ({ /* cicili#Progn7502 */
              Gone_Str_x ();
            });
          }));
      });
    });
}
Maybe_Str_x take_Box_Str (Box_Str * this ) {
  return ({ /* cicili#Let7510 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let7512 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn7513 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7515 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn7517 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7522 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let7526 */
                __auto_type result  = Just_Str_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Str_x ());
          }) : ({ /* cicili#Let7534 */
            // ----------
            ;
            ({ /* cicili#Progn7536 */
              Nothing_Str_x ();
            });
          }));
      });
    });
}
Maybe_Str_x get_Box_Str (Box_Str rc ) {
  return ({ /* cicili#Let7544 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let7546 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn7547 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7549 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn7551 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7556 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Str_x ((*pointer )) : Nothing_Str_x ());
          }) : ({ /* cicili#Let7563 */
            // ----------
            ;
            ({ /* cicili#Progn7565 */
              Nothing_Str_x ();
            });
          }));
      });
    });
}
void free_Box_Str (Box_Str * this ) {
  { /* cicili#Let7574 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let7576 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn7577 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7579 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn7581 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block7587 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block7590 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Str_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block7598 */
                if ((*count ) ==  1 )
                  { /* cicili#Block7601 */
                    free_Str_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Str_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let7611 */
          // ----------
          ;
          ({ /* cicili#Let7613 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7618 */
              }
          });
        }
    });
  }
}
const Box_Str__H_Table * const get_Box_Str__H_Table () {
  static const Box_Str__H_Table table  = { free_Box_Str , new_Box_Str , clone_Box_Str , take_Box_Str , get_Box_Str };
  return (&table );
}
Box_Str __h_Hold_Str_x (Str_x * pointer , int * count , size_t address ) {
  { /* cicili#Let7629 */
    Box_Str instance  = ((Box_Str){ get_Box_Str__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Str Gone_Str_x () {
  { /* cicili#Let7634 */
    Box_Str instance  = ((Box_Str){ get_Box_Str__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Str__H_IMPL__ */ 
Str_iterator_t iterator_Str (Str vector ) {
  return ({ /* cicili#Let7641 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7645 */
        __auto_type match7644  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7644 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7648 */
          bool __h_case_result  = (true  &&  (((match7644 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7649 */
                (unboxed  =  (((match7644 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7654 */
              ({ /* cicili#Let7658 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7660 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7661 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7666 */
                      ({ /* cicili#Let7670 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let7672 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7673 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7675 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7680 */
                              ((Str_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let7685 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7687 */
                                ((Str_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7692 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let7694 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn7695 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7697 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn7699 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7704 */
                            ({ /* cicili#Let7706 */
                              Str_iterator_t iter  = iterator_Str (vec );
                              // ----------
                              ({ /* cicili#Let7712 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let7714 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn7715 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7720 */
                                      ((Str_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let7725 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7727 */
                                        ((Str_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let7732 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7734 */
                              ((Str_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7739 */
              // ----------
              ;
              ({ /* cicili#Progn7741 */
                ((Str_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Str resize_Str (Str vector , size_t len ) {
  return ({ /* cicili#Let7747 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7751 */
        __auto_type match7750  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7750 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7754 */
          bool __h_case_result  = (true  &&  (((match7750 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7755 */
                (unboxed  =  (((match7750 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7760 */
              ({ /* cicili#Let7764 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7766 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7767 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7772 */
                      ({ /* cicili#Let7776 */
                        __auto_type match7775  = take_Box_Str ((&vector ));
                        typeof((((match7775 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let7779 */
                          bool __h_case_result  = (true  &&  (((match7775 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7780 */
                                (ptr  =  (((match7775 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7785 */
                              ({ /* cicili#Progn7787 */
                                free (((void *)ptr ));
                                Buffer_char (resize_StringBuffer_char (sb , len ));
                              });
                            }) : ({ /* cicili#Let7793 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7795 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7800 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let7802 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7803 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7805 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7810 */
                            ({ /* cicili#Let7813 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let7817 */
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
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7826 */
                                      ({ /* cicili#Let7830 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7832 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7833 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7838 */
                                              ({ /* cicili#Let7842 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7844 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn7845 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn7847 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7852 */
                                                      ({ /* cicili#Let7854 */
                                                        StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step );
                                                        // ----------
                                                        Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let7862 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7864 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7869 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7871 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn7872 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7877 */
                                                    resize_Str (veci , len );
                                                  }) : ({ /* cicili#Let7882 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn7884 */
                                                      clone_Box_Str (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let7889 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7891 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let7896 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7898 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7903 */
              // ----------
              ;
              ({ /* cicili#Progn7905 */
                None_char ();
              });
            }));
        });
      });
    });
}
Str pure_Str (size_t step ) {
  return pureCapacity_Str (step , step );
}
Str pureCapacity_Str (size_t capacity , size_t step ) {
  return Buffer_char (newCapacity_StringBuffer_char (capacity , step ));
}
Str_pointer_t toArray_Str (Str vector ) {
  return ({ /* cicili#Let7919 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let7923 */
        __auto_type match7922  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7922 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7926 */
          bool __h_case_result  = (true  &&  (((match7922 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7927 */
                (unboxed  =  (((match7922 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7932 */
              ({ /* cicili#Let7936 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let7938 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7939 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7944 */
                      ({ /* cicili#Let7948 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let7950 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn7951 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7956 */
                              buffer ;
                            }) : ({ /* cicili#Let7960 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7962 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let7966 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let7968 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn7969 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn7971 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7976 */
                            ({ /* cicili#Let7979 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let7983 */
                                __auto_type match7982  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match7982 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let7986 */
                                  bool __h_case_result  = (true  &&  (((match7982 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7987 */
                                        (unboxed  =  (((match7982 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7992 */
                                      ({ /* cicili#Let7996 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7998 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn7999 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8004 */
                                              ({ /* cicili#Let8008 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8010 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8011 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8016 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let8020 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8022 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8026 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8028 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn8029 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn8031 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8036 */
                                                    (toArray_Str (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let8041 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8043 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8047 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8049 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let8053 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8055 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8059 */
              // ----------
              ;
              ({ /* cicili#Progn8061 */
                NULL ;
              });
            }));
        });
      });
    });
}
Str wrap_Str (const char item ) {
  return ({ /* cicili#Let8066 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8068 */
        __auto_type new_vec  = pureCapacity_Str (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Str (item , new_vec );
    });
}
size_t show_Str (CFile file , Str vector ) {
  auto size_t show_ (size_t index , Str vector );
  size_t showWithSize (size_t index , size_t size , Str vector ) {
    return ({ /* cicili#Let8078 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let8082 */
          __auto_type match8081  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8081 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8085 */
            bool __h_case_result  = (true  &&  (((match8081 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8086 */
                  (unboxed  =  (((match8081 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn8091 */
                ({ /* cicili#Let8095 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let8097 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8098 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8103 */
                        ({ /* cicili#Let8107 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let8109 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8110 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8115 */
                                ({ /* cicili#Let8117 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let8128 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8130 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8134 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let8136 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8137 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8139 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn8141 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8146 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let8150 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8152 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let8156 */
                // ----------
                ;
                ({ /* cicili#Progn8158 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Str vector ) {
    return ({ /* cicili#Let8162 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let8166 */
          __auto_type match8165  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match8165 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let8169 */
            bool __h_case_result  = (true  &&  (((match8165 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8170 */
                  (unboxed  =  (((match8165 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn8175 */
                ({ /* cicili#Let8179 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let8181 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8182 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8187 */
                        ({ /* cicili#Let8191 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let8193 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn8194 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8196 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8201 */
                                ({ /* cicili#Let8203 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let8214 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8216 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8220 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let8222 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8223 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8225 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn8227 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8232 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let8236 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8238 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let8242 */
                // ----------
                ;
                ({ /* cicili#Progn8244 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Str copy_Str (Str vector ) {
  return ({ /* cicili#Let8249 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8253 */
        __auto_type match8252  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8252 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8256 */
          bool __h_case_result  = (true  &&  (((match8252 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8257 */
                (unboxed  =  (((match8252 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8262 */
              ({ /* cicili#Let8266 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8268 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8269 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8274 */
                      ({ /* cicili#Let8278 */
                        // ----------
                        ;
                        ({ /* cicili#Let8280 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8284 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let8290 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8292 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8297 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let8299 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8300 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8302 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn8304 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8309 */
                            ({ /* cicili#Let8312 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let8316 */
                                __auto_type match8315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match8315 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let8319 */
                                  bool __h_case_result  = (true  &&  (((match8315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8320 */
                                        (unboxed  =  (((match8315 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn8325 */
                                      ({ /* cicili#Let8329 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8331 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8332 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8337 */
                                              ({ /* cicili#Let8341 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8343 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8347 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let8353 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8355 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8360 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8362 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn8363 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8368 */
                                                    copySlice_Str (veci , cur , size );
                                                  }) : ({ /* cicili#Let8373 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8375 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8380 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8382 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let8387 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8389 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8394 */
              // ----------
              ;
              ({ /* cicili#Progn8396 */
                None_char ();
              });
            }));
        });
      });
    });
}
Str copySlice_Str (Str vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let8402 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8406 */
        __auto_type match8405  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8405 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8409 */
          bool __h_case_result  = (true  &&  (((match8405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8410 */
                (unboxed  =  (((match8405 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8415 */
              ({ /* cicili#Let8419 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8421 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8422 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8427 */
                      ({ /* cicili#Let8431 */
                        // ----------
                        ;
                        ({ /* cicili#Let8433 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8437 */
                              Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                            }) : ({ /* cicili#Let8443 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8445 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8450 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let8452 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn8453 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn8455 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8460 */
                            ({ /* cicili#Let8463 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let8467 */
                                __auto_type match8466  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match8466 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let8470 */
                                  bool __h_case_result  = (true  &&  (((match8466 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8471 */
                                        (unboxed  =  (((match8466 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn8476 */
                                      ({ /* cicili#Let8480 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8482 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8483 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8488 */
                                              ({ /* cicili#Let8492 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8494 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8498 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let8504 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8506 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8511 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8513 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn8514 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8519 */
                                                    copySlice_Str (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let8524 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8526 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8531 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8533 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let8538 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8540 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8545 */
              // ----------
              ;
              ({ /* cicili#Progn8547 */
                None_char ();
              });
            }));
        });
      });
    });
}
Str replaceAt_Str (Str vector , char item , size_t index ) {
  return None_char ();
}
Str deleteAt_Str (Str vector , size_t index ) {
  return None_char ();
}
Str insertAt_Str (Str vector , char item , size_t index ) {
  return None_char ();
}
Str reverse_Str (Str vector ) {
  return None_char ();
}
Str append_Str (Str lvector , Str rvector ) {
  return None_char ();
}
Str push_Str (char item , Str vector ) {
  return None_char ();
}
Str take_Str (size_t len , Str vector ) {
  return ({ /* cicili#Let8571 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8575 */
        __auto_type match8574  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8574 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8578 */
          bool __h_case_result  = (true  &&  (((match8574 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8579 */
                (unboxed  =  (((match8574 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8584 */
              ({ /* cicili#Let8588 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8590 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8591 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8596 */
                      ({ /* cicili#Let8600 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let8602 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8603 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8608 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Str (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Str (vector ), 0, len ) : Slice_char (clone_Box_Str (vector ), 0, 0)));
                            }) : ({ /* cicili#Let8620 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8622 */
                                Slice_char (clone_Box_Str (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8628 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let8630 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8631 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8633 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn8635 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8640 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Str (vec ), cursor , 0) : (((len  <  size  )) ? Slice_char (clone_Box_Str (vec ), cursor , len ) : Slice_char (clone_Box_Str (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let8652 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8654 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8659 */
              // ----------
              ;
              ({ /* cicili#Progn8661 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char last_Str (Str vector ) {
  return ({ /* cicili#Let8668 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8672 */
        __auto_type match8671  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8671 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8675 */
          bool __h_case_result  = (true  &&  (((match8671 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8676 */
                (unboxed  =  (((match8671 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8681 */
              ({ /* cicili#Let8685 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8687 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8688 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8693 */
                      ({ /* cicili#Let8697 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let8699 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn8700 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8702 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8707 */
                              Just_char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let8712 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8714 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8719 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let8721 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8722 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8724 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn8726 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8731 */
                            nth_Str ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let8736 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8738 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8743 */
              // ----------
              ;
              ({ /* cicili#Progn8745 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Str init_Str (Str vector ) {
  return ({ /* cicili#Let8751 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8755 */
        __auto_type match8754  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8754 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8758 */
          bool __h_case_result  = (true  &&  (((match8754 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8759 */
                (unboxed  =  (((match8754 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8764 */
              ({ /* cicili#Let8768 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8770 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8771 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8776 */
                      ({ /* cicili#Let8780 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let8782 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8783 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8788 */
                              Slice_char (clone_Box_Str (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let8794 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8796 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8801 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let8803 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn8804 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8806 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn8808 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8813 */
                            Slice_char (clone_Box_Str (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let8819 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8821 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8826 */
              // ----------
              ;
              ({ /* cicili#Progn8828 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Str (Str vector , size_t desired ) {
  return ({ /* cicili#Let8833 */
      size_t len  = len_Str (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Str (Str vector ) {
  return ({ /* cicili#Let8840 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8844 */
        __auto_type match8843  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8843 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8847 */
          bool __h_case_result  = (true  &&  (((match8843 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8848 */
                (unboxed  =  (((match8843 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8853 */
              ({ /* cicili#Let8857 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8859 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8860 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8865 */
                      ({ /* cicili#Let8869 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let8871 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8872 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8877 */
                              cursor ;
                            }) : ({ /* cicili#Let8881 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8883 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8887 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let8889 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn8890 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8895 */
                            size ;
                          }) : ({ /* cicili#Let8899 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8901 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8905 */
              // ----------
              ;
              ({ /* cicili#Progn8907 */
                0;
              });
            }));
        });
      });
    });
}
Str tail_Str (Str vector ) {
  return drop_Str (1, vector );
}
Str drop_Str (size_t len , Str vector ) {
  return ({ /* cicili#Let8915 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let8919 */
        __auto_type match8918  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8918 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8922 */
          bool __h_case_result  = (true  &&  (((match8918 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8923 */
                (unboxed  =  (((match8918 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8928 */
              ({ /* cicili#Let8932 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let8934 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn8935 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8940 */
                      ({ /* cicili#Let8944 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let8946 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn8947 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8952 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Str (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Str (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Str (vector ), 0, 0)));
                            }) : ({ /* cicili#Let8964 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8966 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8971 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let8973 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn8974 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn8976 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8981 */
                            drop_Str ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let8986 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8988 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8993 */
              // ----------
              ;
              ({ /* cicili#Progn8995 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Str (Str vector ) {
  return ({ /* cicili#Let9002 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let9006 */
        __auto_type match9005  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match9005 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let9009 */
          bool __h_case_result  = (true  &&  (((match9005 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9010 */
                (unboxed  =  (((match9005 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9015 */
              ({ /* cicili#Let9019 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let9021 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn9022 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9027 */
                      ({ /* cicili#Let9031 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let9033 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn9034 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn9036 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9041 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let9048 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9050 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9055 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let9057 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn9058 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn9060 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9065 */
                            nth_Str (cursor , vector );
                          }) : ({ /* cicili#Let9070 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9072 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9077 */
              // ----------
              ;
              ({ /* cicili#Progn9079 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Str (size_t index , Str vector ) {
  return ({ /* cicili#Let9086 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let9090 */
        __auto_type match9089  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match9089 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let9093 */
          bool __h_case_result  = (true  &&  (((match9089 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9094 */
                (unboxed  =  (((match9089 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9099 */
              ({ /* cicili#Let9103 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let9105 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn9106 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9111 */
                      ({ /* cicili#Let9115 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let9117 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn9118 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn9120 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9125 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let9132 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9134 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9139 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let9141 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn9142 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn9144 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn9146 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9151 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Str ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let9158 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9160 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9165 */
              // ----------
              ;
              ({ /* cicili#Progn9167 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Str_x (Str_x * this_ptr ) {
  { /* cicili#Let9172 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let9176 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let9178 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn9179 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block9185 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let9191 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let9193 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn9194 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9200 */
                  free_Box_Str ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Str__H_Table * const get_Str__H_Table () {
  static Str__H_Table table  = { free_Str_x , iterator_Str , resize_Str , pure_Str , pureCapacity_Str , toArray_Str , wrap_Str , show_Str , copy_Str , copySlice_Str , replaceAt_Str , deleteAt_Str , insertAt_Str , reverse_Str , append_Str , push_Str , take_Str , last_Str , init_Str , hasLen_Str , len_Str , tail_Str , drop_Str , head_Str , nth_Str };
  return (&table );
}
Str Buffer_char (StringBuffer_char buffer ) {
  { /* cicili#Let9210 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Str (instance );
  }
}
Str Slice_char (Str vector , size_t cursor , size_t size ) {
  { /* cicili#Let9218 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Str (instance );
  }
}
Str None_char () {
  { /* cicili#Let9225 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h___t });
    return new_Box_Str (instance );
  }
}
#endif /* __Str__H_IMPL__ */ 
#ifndef __Maybe_Str__H_IMPL__
#define __Maybe_Str__H_IMPL__
void free_Maybe_Str (Maybe_Str * this ) {
}
const Maybe_Str__H_Table * const get_Maybe_Str__H_Table () {
  static const Maybe_Str__H_Table table  = { free_Maybe_Str };
  return (&table );
}
Maybe_Str Just_Str (Str value ) {
  { /* cicili#Let9243 */
    Maybe_Str instance  = ((Maybe_Str){ get_Maybe_Str__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Str Nothing_Str () {
  { /* cicili#Let9248 */
    Maybe_Str instance  = ((Maybe_Str){ get_Maybe_Str__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Str__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let9264 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9266 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9269 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9272 */
      __auto_type v03  = ({ /* cicili#Let9275 */
        StringBuffer_int tmp_buf9274  = newCapacity_StringBuffer_int (5, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf9274 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9283 */
      __auto_type v04  = ({ /* cicili#Let9286 */
        StringBuffer_int tmp_buf9285  = newCapacity_StringBuffer_int (7, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf9285 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9294 */
      __auto_type v05  = ({ /* cicili#Let9297 */
        StringBuffer_Char tmp_buf9296  = newCapacity_StringBuffer_Char (11, 16);
        // ----------
        Buffer_Char (print_StringBuffer_Char (tmp_buf9296 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9305 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9309 */
      __auto_type v09  = Slice_Char (clone_Box_String (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9313 */
      __auto_type v10  = tail_String (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9316 */
      __auto_type v11  = drop_String (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9319 */
      __auto_type v12  = drop_String (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9322 */
      __auto_type v13  = drop_String (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9325 */
      __auto_type v14  = init_String (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9328 */
      __auto_type v15  = init_String (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9331 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9334 */
      __auto_type v19  = take_String (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9337 */
      __auto_type v20  = take_String (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9340 */
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
    { /* cicili#Block9347 */
      ({ /* cicili#Let9350 */
        __auto_type v01C1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9352 */
          __auto_type v01C1  = clone_Box_Vector_int (v01 );
          // ----------
          ((void)((v01C1 . __h_table )-> freeData ));
          v01C1 ;
        });
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9355 */
          __auto_type v01P1  = push_Vector_int (40, v01C1 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        ({ /* cicili#Let9359 */
          __auto_type __h_matchbox  = v01P1 ;
          // ----------
          { /* cicili#Let9363 */
            __auto_type match9362  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9362 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9366 */
              bool __h_case_result  = (true  &&  (((match9362 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9367 */
                    (unboxed  =  (((match9362 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9373 */
                  { /* cicili#Let9377 */
                    // ----------
                    ;
                    ({ /* cicili#Let9379 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_None_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9384 */
                          printf ("can't push to v01: any cloned versions or slices refered to it\n");
                        }
                      else
                        { /* cicili#Let9389 */
                          // ----------
                          ;
                          { /* cicili#Block9391 */
                            { /* cicili#Block9396 */
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
      ({ /* cicili#Let9399 */
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9401 */
          __auto_type v01P1  = push_Vector_int (40, v01 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        { /* cicili#Let9406 */
          __auto_type match9405  = head_Vector_int (v01P1 );
          typeof((((match9405 . __h_data ). Just ). __h_0_mem )) he ;
          // ----------
          ;
          ({ /* cicili#Let9409 */
            bool __h_case_result  = (true  &&  (((match9405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9410 */
                  (he  =  (((match9405 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9416 */
                printf ("head of v01: %d had not any cloned versions or slices refered to it\n", he );
              }
            else
              { /* cicili#Let9421 */
                // ----------
                ;
                { /* cicili#Block9423 */
                  { /* cicili#Block9428 */
                    printf ("status: %d\n", -91);
                    exit (EXIT_FAILURE );
                  }
                }
              }
          });
        }
      });
      { /* cicili#Let9432 */
        __auto_type match9431  = nth_Vector_int (3, v03 );
        typeof((((match9431 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let9435 */
          bool __h_case_result  = (true  &&  (((match9431 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9436 */
                (i  =  (((match9431 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9442 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let9447 */
              // ----------
              ;
              { /* cicili#Block9449 */
                { /* cicili#Block9454 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9458 */
        __auto_type match9457  = nth_String (5, v05 );
        typeof((((match9457 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let9461 */
          bool __h_case_result  = (true  &&  (((match9457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9462 */
                (c  =  (((match9457 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9468 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let9473 */
              // ----------
              ;
              { /* cicili#Block9475 */
                { /* cicili#Block9480 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9484 */
        __auto_type match9483  = nth_String (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let9487 */
          bool __h_case_result  = (true  &&  ((match9483 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9492 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let9497 */
              // ----------
              ;
              { /* cicili#Block9499 */
                { /* cicili#Block9504 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9508 */
        __auto_type match9507  = head_Vector_int (v08 );
        typeof((((match9507 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let9511 */
          bool __h_case_result  = (true  &&  (((match9507 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9512 */
                (i  =  (((match9507 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9518 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let9523 */
              // ----------
              ;
              { /* cicili#Block9525 */
                { /* cicili#Block9530 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9534 */
        __auto_type match9533  = head_String (v09 );
        typeof((((match9533 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let9537 */
          bool __h_case_result  = (true  &&  (((match9533 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9538 */
                (c  =  (((match9533 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9544 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let9549 */
              // ----------
              ;
              { /* cicili#Block9551 */
                { /* cicili#Block9556 */
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
      { /* cicili#Let9560 */
        __auto_type match9559  = nth_Vector_int (1, v08 );
        typeof((((match9559 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let9563 */
          bool __h_case_result  = (true  &&  (((match9559 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9564 */
                (i  =  (((match9559 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9570 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let9575 */
              // ----------
              ;
              { /* cicili#Block9577 */
                { /* cicili#Block9582 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9586 */
        __auto_type match9585  = nth_String (2, v09 );
        typeof((((match9585 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let9589 */
          bool __h_case_result  = (true  &&  (((match9585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9590 */
                (c  =  (((match9585 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9596 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let9601 */
              // ----------
              ;
              { /* cicili#Block9603 */
                { /* cicili#Block9608 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let9612 */
        __auto_type match9611  = nth_String (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let9615 */
          bool __h_case_result  = (true  &&  ((match9611 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9620 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let9625 */
              // ----------
              ;
              { /* cicili#Block9627 */
                { /* cicili#Block9632 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let9635 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let9639 */
          __auto_type match9638  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9638 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9642 */
            bool __h_case_result  = (true  &&  (((match9638 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9643 */
                  (unboxed  =  (((match9638 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9649 */
                { /* cicili#Let9653 */
                  // ----------
                  ;
                  ({ /* cicili#Let9655 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9660 */
                        { /* cicili#Block9662 */
                          printf ("tail v05: ");
                          show_String (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9667 */
                        // ----------
                        ;
                        { /* cicili#Block9669 */
                          { /* cicili#Block9674 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9679 */
                // ----------
                ;
                ({ /* cicili#Let9681 */
                  bool __h_case_result  = (true  &&  ((match9638 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9686 */
                      { /* cicili#Block9691 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let9694 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let9698 */
          __auto_type match9697  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9697 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9701 */
            bool __h_case_result  = (true  &&  (((match9697 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9702 */
                  (unboxed  =  (((match9697 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9708 */
                { /* cicili#Let9712 */
                  // ----------
                  ;
                  ({ /* cicili#Let9714 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9719 */
                        { /* cicili#Block9721 */
                          printf ("v11: drop 7 v05: ");
                          show_String (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9726 */
                        // ----------
                        ;
                        { /* cicili#Block9728 */
                          { /* cicili#Block9733 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9738 */
                // ----------
                ;
                ({ /* cicili#Let9740 */
                  bool __h_case_result  = (true  &&  ((match9697 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9745 */
                      { /* cicili#Block9750 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let9753 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let9757 */
          __auto_type match9756  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9756 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9760 */
            bool __h_case_result  = (true  &&  (((match9756 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9761 */
                  (unboxed  =  (((match9756 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9767 */
                { /* cicili#Let9771 */
                  // ----------
                  ;
                  ({ /* cicili#Let9773 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9778 */
                        { /* cicili#Block9780 */
                          printf ("drop 12 v05: Empty Slice");
                          show_String (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9785 */
                        // ----------
                        ;
                        { /* cicili#Block9787 */
                          { /* cicili#Block9792 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9797 */
                // ----------
                ;
                ({ /* cicili#Let9799 */
                  bool __h_case_result  = (true  &&  ((match9756 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9804 */
                      { /* cicili#Block9809 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let9812 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let9816 */
          __auto_type match9815  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9815 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9819 */
            bool __h_case_result  = (true  &&  (((match9815 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9820 */
                  (unboxed  =  (((match9815 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9826 */
                { /* cicili#Let9830 */
                  // ----------
                  ;
                  ({ /* cicili#Let9832 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9837 */
                        { /* cicili#Block9839 */
                          printf ("drop 1 of Slice v11: ");
                          show_String (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9844 */
                        // ----------
                        ;
                        { /* cicili#Block9846 */
                          { /* cicili#Block9851 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9856 */
                // ----------
                ;
                ({ /* cicili#Let9858 */
                  bool __h_case_result  = (true  &&  ((match9815 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9863 */
                      { /* cicili#Block9868 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let9871 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let9875 */
          __auto_type match9874  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9874 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9878 */
            bool __h_case_result  = (true  &&  (((match9874 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9879 */
                  (unboxed  =  (((match9874 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9885 */
                { /* cicili#Let9889 */
                  // ----------
                  ;
                  ({ /* cicili#Let9891 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9896 */
                        { /* cicili#Block9898 */
                          printf ("init of Slice v05: ");
                          show_String (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9903 */
                        // ----------
                        ;
                        { /* cicili#Block9905 */
                          { /* cicili#Block9910 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9915 */
                // ----------
                ;
                ({ /* cicili#Let9917 */
                  bool __h_case_result  = (true  &&  ((match9874 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9922 */
                      { /* cicili#Block9927 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let9930 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let9934 */
          __auto_type match9933  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match9933 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let9937 */
            bool __h_case_result  = (true  &&  (((match9933 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9938 */
                  (unboxed  =  (((match9933 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9944 */
                { /* cicili#Let9948 */
                  // ----------
                  ;
                  ({ /* cicili#Let9950 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9955 */
                        { /* cicili#Block9957 */
                          printf ("init of init of Slice v05: ");
                          show_String (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let9962 */
                        // ----------
                        ;
                        { /* cicili#Block9964 */
                          { /* cicili#Block9969 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let9974 */
                // ----------
                ;
                ({ /* cicili#Let9976 */
                  bool __h_case_result  = (true  &&  ((match9933 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9981 */
                      { /* cicili#Block9986 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      { /* cicili#Let9990 */
        __auto_type match9989  = last_Vector_int (v03 );
        typeof((((match9989 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let9992 */
          bool __h_case_result  = (true  &&  (((match9989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9993 */
                (la  =  (((match9989 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block9999 */
              printf ("last of v03: %d\n", la );
            }
          else
            { /* cicili#Let10004 */
              // ----------
              ;
              { /* cicili#Block10006 */
                { /* cicili#Block10011 */
                  printf ("status: %d\n", -121);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let10015 */
        __auto_type match10014  = last_String (v05 );
        typeof((((match10014 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let10017 */
          bool __h_case_result  = (true  &&  (((match10014 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10018 */
                (la  =  (((match10014 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10024 */
              printf ("last of v05: %c\n", la );
            }
          else
            { /* cicili#Let10029 */
              // ----------
              ;
              { /* cicili#Block10031 */
                { /* cicili#Block10036 */
                  printf ("status: %d\n", -123);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let10039 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let10043 */
          __auto_type match10042  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10042 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10046 */
            bool __h_case_result  = (true  &&  (((match10042 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10047 */
                  (unboxed  =  (((match10042 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10053 */
                { /* cicili#Let10057 */
                  // ----------
                  ;
                  ({ /* cicili#Let10059 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10064 */
                        { /* cicili#Block10066 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let10071 */
                        // ----------
                        ;
                        { /* cicili#Block10073 */
                          { /* cicili#Block10078 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let10083 */
                // ----------
                ;
                ({ /* cicili#Let10085 */
                  bool __h_case_result  = (true  &&  ((match10042 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10090 */
                      { /* cicili#Block10095 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let10098 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let10102 */
          __auto_type match10101  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10101 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10105 */
            bool __h_case_result  = (true  &&  (((match10101 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10106 */
                  (unboxed  =  (((match10101 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10112 */
                { /* cicili#Let10116 */
                  // ----------
                  ;
                  ({ /* cicili#Let10118 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10123 */
                        { /* cicili#Block10125 */
                          printf ("take 5 of v05: ");
                          show_String (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let10130 */
                        // ----------
                        ;
                        { /* cicili#Block10132 */
                          { /* cicili#Block10137 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let10142 */
                // ----------
                ;
                ({ /* cicili#Let10144 */
                  bool __h_case_result  = (true  &&  ((match10101 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10149 */
                      { /* cicili#Block10154 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let10157 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let10161 */
          __auto_type match10160  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10160 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10164 */
            bool __h_case_result  = (true  &&  (((match10160 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10165 */
                  (unboxed  =  (((match10160 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10171 */
                { /* cicili#Let10175 */
                  // ----------
                  ;
                  ({ /* cicili#Let10177 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10182 */
                        { /* cicili#Block10184 */
                          printf ("take 2 of take 5 of v05: ");
                          show_String (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let10189 */
                        // ----------
                        ;
                        { /* cicili#Block10191 */
                          { /* cicili#Block10196 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let10201 */
                // ----------
                ;
                ({ /* cicili#Let10203 */
                  bool __h_case_result  = (true  &&  ((match10160 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10208 */
                      { /* cicili#Block10213 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let10216 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let10220 */
          __auto_type match10219  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10219 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10223 */
            bool __h_case_result  = (true  &&  (((match10219 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10224 */
                  (unboxed  =  (((match10219 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10230 */
                { /* cicili#Let10234 */
                  // ----------
                  ;
                  ({ /* cicili#Let10236 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10241 */
                        { /* cicili#Block10243 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let10248 */
                        // ----------
                        ;
                        { /* cicili#Block10250 */
                          { /* cicili#Block10255 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let10260 */
                // ----------
                ;
                ({ /* cicili#Let10262 */
                  bool __h_case_result  = (true  &&  ((match10219 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10267 */
                      { /* cicili#Block10272 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let10275 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10277 */
          __auto_type v033  = ({ /* cicili#Let10280 */
            StringBuffer_int tmp_buf10279  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf10279 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10288 */
          __auto_type v055  = ({ /* cicili#Let10291 */
            StringBuffer_Char tmp_buf10290  = newCapacity_StringBuffer_Char (11, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf10290 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10299 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10302 */
          __auto_type v22  = push_String ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10305 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10308 */
          __auto_type v24  = push_String ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10311 */
          __auto_type v0333  = ({ /* cicili#Let10314 */
            StringBuffer_int tmp_buf10313  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf10313 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10322 */
          __auto_type v0555  = ({ /* cicili#Let10325 */
            StringBuffer_Char tmp_buf10324  = newCapacity_StringBuffer_Char (6, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf10324 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10333 */
          __auto_type v0444  = ({ /* cicili#Let10336 */
            StringBuffer_int tmp_buf10335  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf10335 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10344 */
          __auto_type v0666  = ({ /* cicili#Let10347 */
            StringBuffer_Char tmp_buf10346  = newCapacity_StringBuffer_Char (6, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf10346 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10355 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10358 */
          __auto_type v26  = append_String (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10361 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10364 */
          __auto_type v28  = drop_String (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10367 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10370 */
          __auto_type v30  = append_String (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10373 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10376 */
          __auto_type v288  = drop_String (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10379 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10382 */
          __auto_type vt2  = copy_String (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10385 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10388 */
          __auto_type v32  = reverse_String (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10391 */
          __auto_type v33  = reverse_String (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let10395 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let10399 */
            __auto_type match10398  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10398 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10402 */
              bool __h_case_result  = (true  &&  (((match10398 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10403 */
                    (unboxed  =  (((match10398 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10409 */
                  { /* cicili#Let10413 */
                    // ----------
                    ;
                    ({ /* cicili#Let10415 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10420 */
                          { /* cicili#Block10422 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10427 */
                          // ----------
                          ;
                          { /* cicili#Block10429 */
                            { /* cicili#Block10434 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10439 */
                  // ----------
                  ;
                  ({ /* cicili#Let10441 */
                    bool __h_case_result  = (true  &&  ((match10398 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10446 */
                        { /* cicili#Block10451 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10454 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let10458 */
            __auto_type match10457  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10457 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10461 */
              bool __h_case_result  = (true  &&  (((match10457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10462 */
                    (unboxed  =  (((match10457 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10468 */
                  { /* cicili#Let10472 */
                    // ----------
                    ;
                    ({ /* cicili#Let10474 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10479 */
                          { /* cicili#Block10481 */
                            printf ("push L to v055: ");
                            show_String (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10486 */
                          // ----------
                          ;
                          { /* cicili#Block10488 */
                            { /* cicili#Block10493 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10498 */
                  // ----------
                  ;
                  ({ /* cicili#Let10500 */
                    bool __h_case_result  = (true  &&  ((match10457 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10505 */
                        { /* cicili#Block10510 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10513 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let10517 */
            __auto_type match10516  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10516 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10520 */
              bool __h_case_result  = (true  &&  (((match10516 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10521 */
                    (unboxed  =  (((match10516 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10527 */
                  { /* cicili#Let10531 */
                    // ----------
                    ;
                    ({ /* cicili#Let10533 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10538 */
                          { /* cicili#Block10540 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10545 */
                          // ----------
                          ;
                          { /* cicili#Block10547 */
                            { /* cicili#Block10552 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10557 */
                  // ----------
                  ;
                  ({ /* cicili#Let10559 */
                    bool __h_case_result  = (true  &&  ((match10516 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10564 */
                        { /* cicili#Block10569 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10572 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let10576 */
            __auto_type match10575  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10575 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10579 */
              bool __h_case_result  = (true  &&  (((match10575 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10580 */
                    (unboxed  =  (((match10575 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10586 */
                  { /* cicili#Let10590 */
                    // ----------
                    ;
                    ({ /* cicili#Let10592 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10597 */
                          { /* cicili#Block10599 */
                            printf ("push M to Slice v09: ");
                            show_String (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10604 */
                          // ----------
                          ;
                          { /* cicili#Block10606 */
                            { /* cicili#Block10611 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10616 */
                  // ----------
                  ;
                  ({ /* cicili#Let10618 */
                    bool __h_case_result  = (true  &&  ((match10575 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10623 */
                        { /* cicili#Block10628 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10631 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let10635 */
            __auto_type match10634  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10634 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10638 */
              bool __h_case_result  = (true  &&  (((match10634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10639 */
                    (unboxed  =  (((match10634 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10645 */
                  { /* cicili#Let10649 */
                    // ----------
                    ;
                    ({ /* cicili#Let10651 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10656 */
                          { /* cicili#Block10658 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10663 */
                          // ----------
                          ;
                          { /* cicili#Block10665 */
                            { /* cicili#Block10670 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10675 */
                  // ----------
                  ;
                  ({ /* cicili#Let10677 */
                    bool __h_case_result  = (true  &&  ((match10634 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10682 */
                        { /* cicili#Block10687 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10690 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let10694 */
            __auto_type match10693  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10693 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10697 */
              bool __h_case_result  = (true  &&  (((match10693 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10698 */
                    (unboxed  =  (((match10693 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10704 */
                  { /* cicili#Let10708 */
                    // ----------
                    ;
                    ({ /* cicili#Let10710 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10715 */
                          { /* cicili#Block10717 */
                            printf ("append v0555 to v0666: ");
                            show_String (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10722 */
                          // ----------
                          ;
                          { /* cicili#Block10724 */
                            { /* cicili#Block10729 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10734 */
                  // ----------
                  ;
                  ({ /* cicili#Let10736 */
                    bool __h_case_result  = (true  &&  ((match10693 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10741 */
                        { /* cicili#Block10746 */
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
        ({ /* cicili#Let10749 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let10753 */
            __auto_type match10752  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10752 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10756 */
              bool __h_case_result  = (true  &&  (((match10752 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10757 */
                    (unboxed  =  (((match10752 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10763 */
                  { /* cicili#Let10767 */
                    // ----------
                    ;
                    ({ /* cicili#Let10769 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10774 */
                          { /* cicili#Block10776 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10781 */
                          // ----------
                          ;
                          { /* cicili#Block10783 */
                            { /* cicili#Block10788 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10793 */
                  // ----------
                  ;
                  ({ /* cicili#Let10795 */
                    bool __h_case_result  = (true  &&  ((match10752 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10800 */
                        { /* cicili#Block10805 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10808 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let10812 */
            __auto_type match10811  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10811 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10815 */
              bool __h_case_result  = (true  &&  (((match10811 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10816 */
                    (unboxed  =  (((match10811 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10822 */
                  { /* cicili#Let10826 */
                    // ----------
                    ;
                    ({ /* cicili#Let10828 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10833 */
                          { /* cicili#Block10835 */
                            printf ("append v28 to v0666: ");
                            show_String (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10840 */
                          // ----------
                          ;
                          { /* cicili#Block10842 */
                            { /* cicili#Block10847 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10852 */
                  // ----------
                  ;
                  ({ /* cicili#Let10854 */
                    bool __h_case_result  = (true  &&  ((match10811 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10859 */
                        { /* cicili#Block10864 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10867 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let10871 */
            __auto_type match10870  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10870 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10874 */
              bool __h_case_result  = (true  &&  (((match10870 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10875 */
                    (unboxed  =  (((match10870 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10881 */
                  { /* cicili#Let10885 */
                    // ----------
                    ;
                    ({ /* cicili#Let10887 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10892 */
                          { /* cicili#Block10894 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10899 */
                          // ----------
                          ;
                          { /* cicili#Block10901 */
                            { /* cicili#Block10906 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10911 */
                  // ----------
                  ;
                  ({ /* cicili#Let10913 */
                    bool __h_case_result  = (true  &&  ((match10870 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10918 */
                        { /* cicili#Block10923 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10926 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let10930 */
            __auto_type match10929  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10929 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10933 */
              bool __h_case_result  = (true  &&  (((match10929 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10934 */
                    (unboxed  =  (((match10929 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10940 */
                  { /* cicili#Let10944 */
                    // ----------
                    ;
                    ({ /* cicili#Let10946 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block10951 */
                          { /* cicili#Block10953 */
                            printf ("reverse v28: ");
                            show_String (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let10958 */
                          // ----------
                          ;
                          { /* cicili#Block10960 */
                            { /* cicili#Block10965 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let10970 */
                  // ----------
                  ;
                  ({ /* cicili#Let10972 */
                    bool __h_case_result  = (true  &&  ((match10929 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10977 */
                        { /* cicili#Block10982 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let10985 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let10989 */
            __auto_type match10988  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match10988 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let10992 */
              bool __h_case_result  = (true  &&  (((match10988 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10993 */
                    (unboxed  =  (((match10988 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10999 */
                  { /* cicili#Let11003 */
                    // ----------
                    ;
                    ({ /* cicili#Let11005 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11010 */
                          { /* cicili#Block11012 */
                            printf ("reverse Slice v288: ");
                            show_String (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11017 */
                          // ----------
                          ;
                          { /* cicili#Block11019 */
                            { /* cicili#Block11024 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11029 */
                  // ----------
                  ;
                  ({ /* cicili#Let11031 */
                    bool __h_case_result  = (true  &&  ((match10988 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11036 */
                        { /* cicili#Block11041 */
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
      ({ /* cicili#Let11044 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11046 */
          __auto_type v033  = ({ /* cicili#Let11049 */
            StringBuffer_int tmp_buf11048  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf11048 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11057 */
          __auto_type v055  = ({ /* cicili#Let11060 */
            StringBuffer_Char tmp_buf11059  = newCapacity_StringBuffer_Char (11, 16);
            // ----------
            Buffer_Char (print_StringBuffer_Char (tmp_buf11059 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11068 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11071 */
          __auto_type v222  = insertAt_String (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11074 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11077 */
          __auto_type v288  = drop_String (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11080 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11083 */
          __auto_type v244  = insertAt_String (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11086 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11089 */
          __auto_type vt4  = copy_String (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11092 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11095 */
          __auto_type v42  = deleteAt_String (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11098 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11101 */
          __auto_type vt8  = drop_String (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11104 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11107 */
          __auto_type v44  = deleteAt_String (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11110 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11113 */
          __auto_type vt6  = copy_String (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11116 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11119 */
          __auto_type v46  = replaceAt_String (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11122 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11125 */
          __auto_type vt10  = drop_String (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11128 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11131 */
          __auto_type v48  = replaceAt_String (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11134 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11137 */
          __auto_type vt61  = copy_String (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11140 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11143 */
          __auto_type v461  = resize_String (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11146 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11149 */
          __auto_type vt101  = drop_String (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11152 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11155 */
          __auto_type v481  = resize_String (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let11159 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let11163 */
            __auto_type match11162  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11162 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11166 */
              bool __h_case_result  = (true  &&  (((match11162 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11167 */
                    (unboxed  =  (((match11162 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11173 */
                  { /* cicili#Let11177 */
                    // ----------
                    ;
                    ({ /* cicili#Let11179 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11184 */
                          { /* cicili#Block11186 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11191 */
                          // ----------
                          ;
                          { /* cicili#Block11193 */
                            { /* cicili#Block11198 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11203 */
                  // ----------
                  ;
                  ({ /* cicili#Let11205 */
                    bool __h_case_result  = (true  &&  ((match11162 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11210 */
                        { /* cicili#Block11215 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11218 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let11222 */
            __auto_type match11221  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11221 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11225 */
              bool __h_case_result  = (true  &&  (((match11221 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11226 */
                    (unboxed  =  (((match11221 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11232 */
                  { /* cicili#Let11236 */
                    // ----------
                    ;
                    ({ /* cicili#Let11238 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11243 */
                          { /* cicili#Block11245 */
                            printf ("insert L at 3 v055: ");
                            show_String (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11250 */
                          // ----------
                          ;
                          { /* cicili#Block11252 */
                            { /* cicili#Block11257 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11262 */
                  // ----------
                  ;
                  ({ /* cicili#Let11264 */
                    bool __h_case_result  = (true  &&  ((match11221 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11269 */
                        { /* cicili#Block11274 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11277 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let11281 */
            __auto_type match11280  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11280 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11284 */
              bool __h_case_result  = (true  &&  (((match11280 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11285 */
                    (unboxed  =  (((match11280 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11291 */
                  { /* cicili#Let11295 */
                    // ----------
                    ;
                    ({ /* cicili#Let11297 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11302 */
                          { /* cicili#Block11304 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11309 */
                          // ----------
                          ;
                          { /* cicili#Block11311 */
                            { /* cicili#Block11316 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11321 */
                  // ----------
                  ;
                  ({ /* cicili#Let11323 */
                    bool __h_case_result  = (true  &&  ((match11280 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11328 */
                        { /* cicili#Block11333 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11336 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let11340 */
            __auto_type match11339  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11339 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11343 */
              bool __h_case_result  = (true  &&  (((match11339 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11344 */
                    (unboxed  =  (((match11339 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11350 */
                  { /* cicili#Let11354 */
                    // ----------
                    ;
                    ({ /* cicili#Let11356 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11361 */
                          { /* cicili#Block11363 */
                            printf ("insert M at 3 v288: ");
                            show_String (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11368 */
                          // ----------
                          ;
                          { /* cicili#Block11370 */
                            { /* cicili#Block11375 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11380 */
                  // ----------
                  ;
                  ({ /* cicili#Let11382 */
                    bool __h_case_result  = (true  &&  ((match11339 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11387 */
                        { /* cicili#Block11392 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11395 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let11399 */
            __auto_type match11398  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11398 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11402 */
              bool __h_case_result  = (true  &&  (((match11398 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11403 */
                    (unboxed  =  (((match11398 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11409 */
                  { /* cicili#Let11413 */
                    // ----------
                    ;
                    ({ /* cicili#Let11415 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11420 */
                          { /* cicili#Block11422 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11427 */
                          // ----------
                          ;
                          { /* cicili#Block11429 */
                            { /* cicili#Block11434 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11439 */
                  // ----------
                  ;
                  ({ /* cicili#Let11441 */
                    bool __h_case_result  = (true  &&  ((match11398 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11446 */
                        { /* cicili#Block11451 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11454 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let11458 */
            __auto_type match11457  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11457 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11461 */
              bool __h_case_result  = (true  &&  (((match11457 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11462 */
                    (unboxed  =  (((match11457 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11468 */
                  { /* cicili#Let11472 */
                    // ----------
                    ;
                    ({ /* cicili#Let11474 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11479 */
                          { /* cicili#Block11481 */
                            printf ("delete at 7 from v244: ");
                            show_String (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11486 */
                          // ----------
                          ;
                          { /* cicili#Block11488 */
                            { /* cicili#Block11493 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11498 */
                  // ----------
                  ;
                  ({ /* cicili#Let11500 */
                    bool __h_case_result  = (true  &&  ((match11457 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11505 */
                        { /* cicili#Block11510 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11513 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let11517 */
            __auto_type match11516  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11516 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11520 */
              bool __h_case_result  = (true  &&  (((match11516 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11521 */
                    (unboxed  =  (((match11516 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11527 */
                  { /* cicili#Let11531 */
                    // ----------
                    ;
                    ({ /* cicili#Let11533 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11538 */
                          { /* cicili#Block11540 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11545 */
                          // ----------
                          ;
                          { /* cicili#Block11547 */
                            { /* cicili#Block11552 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11557 */
                  // ----------
                  ;
                  ({ /* cicili#Let11559 */
                    bool __h_case_result  = (true  &&  ((match11516 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11564 */
                        { /* cicili#Block11569 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11572 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let11576 */
            __auto_type match11575  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11575 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11579 */
              bool __h_case_result  = (true  &&  (((match11575 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11580 */
                    (unboxed  =  (((match11575 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11586 */
                  { /* cicili#Let11590 */
                    // ----------
                    ;
                    ({ /* cicili#Let11592 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11597 */
                          { /* cicili#Block11599 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_String (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11604 */
                          // ----------
                          ;
                          { /* cicili#Block11606 */
                            { /* cicili#Block11611 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11616 */
                  // ----------
                  ;
                  ({ /* cicili#Let11618 */
                    bool __h_case_result  = (true  &&  ((match11575 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11623 */
                        { /* cicili#Block11628 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11631 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let11635 */
            __auto_type match11634  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11634 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11638 */
              bool __h_case_result  = (true  &&  (((match11634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11639 */
                    (unboxed  =  (((match11634 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11645 */
                  { /* cicili#Let11649 */
                    // ----------
                    ;
                    ({ /* cicili#Let11651 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11656 */
                          { /* cicili#Block11658 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11663 */
                          // ----------
                          ;
                          { /* cicili#Block11665 */
                            { /* cicili#Block11670 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11675 */
                  // ----------
                  ;
                  ({ /* cicili#Let11677 */
                    bool __h_case_result  = (true  &&  ((match11634 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11682 */
                        { /* cicili#Block11687 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11690 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let11694 */
            __auto_type match11693  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11693 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11697 */
              bool __h_case_result  = (true  &&  (((match11693 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11698 */
                    (unboxed  =  (((match11693 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11704 */
                  { /* cicili#Let11708 */
                    // ----------
                    ;
                    ({ /* cicili#Let11710 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11715 */
                          { /* cicili#Block11717 */
                            printf ("replace K at 7 v244: ");
                            show_String (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11722 */
                          // ----------
                          ;
                          { /* cicili#Block11724 */
                            { /* cicili#Block11729 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11734 */
                  // ----------
                  ;
                  ({ /* cicili#Let11736 */
                    bool __h_case_result  = (true  &&  ((match11693 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11741 */
                        { /* cicili#Block11746 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11749 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let11753 */
            __auto_type match11752  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11752 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11756 */
              bool __h_case_result  = (true  &&  (((match11752 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11757 */
                    (unboxed  =  (((match11752 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11763 */
                  { /* cicili#Let11767 */
                    // ----------
                    ;
                    ({ /* cicili#Let11769 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11774 */
                          { /* cicili#Block11776 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11781 */
                          // ----------
                          ;
                          { /* cicili#Block11783 */
                            { /* cicili#Block11788 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11793 */
                  // ----------
                  ;
                  ({ /* cicili#Let11795 */
                    bool __h_case_result  = (true  &&  ((match11752 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11800 */
                        { /* cicili#Block11805 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11808 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let11812 */
            __auto_type match11811  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11811 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11815 */
              bool __h_case_result  = (true  &&  (((match11811 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11816 */
                    (unboxed  =  (((match11811 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11822 */
                  { /* cicili#Let11826 */
                    // ----------
                    ;
                    ({ /* cicili#Let11828 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11833 */
                          { /* cicili#Block11835 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_String (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11840 */
                          // ----------
                          ;
                          { /* cicili#Block11842 */
                            { /* cicili#Block11847 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11852 */
                  // ----------
                  ;
                  ({ /* cicili#Let11854 */
                    bool __h_case_result  = (true  &&  ((match11811 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11859 */
                        { /* cicili#Block11864 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11867 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let11871 */
            __auto_type match11870  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11870 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11874 */
              bool __h_case_result  = (true  &&  (((match11870 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11875 */
                    (unboxed  =  (((match11870 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11881 */
                  { /* cicili#Let11885 */
                    // ----------
                    ;
                    ({ /* cicili#Let11887 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11892 */
                          { /* cicili#Block11894 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11899 */
                          // ----------
                          ;
                          { /* cicili#Block11901 */
                            { /* cicili#Block11906 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11911 */
                  // ----------
                  ;
                  ({ /* cicili#Let11913 */
                    bool __h_case_result  = (true  &&  ((match11870 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11918 */
                        { /* cicili#Block11923 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11926 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let11930 */
            __auto_type match11929  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11929 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11933 */
              bool __h_case_result  = (true  &&  (((match11929 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11934 */
                    (unboxed  =  (((match11929 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11940 */
                  { /* cicili#Let11944 */
                    // ----------
                    ;
                    ({ /* cicili#Let11946 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block11951 */
                          { /* cicili#Block11953 */
                            printf ("resize 15 v244: ");
                            show_String (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let11958 */
                          // ----------
                          ;
                          { /* cicili#Block11960 */
                            { /* cicili#Block11965 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let11970 */
                  // ----------
                  ;
                  ({ /* cicili#Let11972 */
                    bool __h_case_result  = (true  &&  ((match11929 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block11977 */
                        { /* cicili#Block11982 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let11985 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let11989 */
            __auto_type match11988  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match11988 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let11992 */
              bool __h_case_result  = (true  &&  (((match11988 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11993 */
                    (unboxed  =  (((match11988 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11999 */
                  { /* cicili#Let12003 */
                    // ----------
                    ;
                    ({ /* cicili#Let12005 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block12010 */
                          { /* cicili#Block12012 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let12017 */
                          // ----------
                          ;
                          { /* cicili#Block12019 */
                            { /* cicili#Block12024 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let12029 */
                  // ----------
                  ;
                  ({ /* cicili#Let12031 */
                    bool __h_case_result  = (true  &&  ((match11988 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block12036 */
                        { /* cicili#Block12041 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let12044 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let12048 */
            __auto_type match12047  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match12047 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let12051 */
              bool __h_case_result  = (true  &&  (((match12047 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12052 */
                    (unboxed  =  (((match12047 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block12058 */
                  { /* cicili#Let12062 */
                    // ----------
                    ;
                    ({ /* cicili#Let12064 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block12069 */
                          { /* cicili#Block12071 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_String (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let12076 */
                          // ----------
                          ;
                          { /* cicili#Block12078 */
                            { /* cicili#Block12083 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let12088 */
                  // ----------
                  ;
                  ({ /* cicili#Let12090 */
                    bool __h_case_result  = (true  &&  ((match12047 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block12095 */
                        { /* cicili#Block12100 */
                          printf ("status: %d\n", -179);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let12103 */
          __auto_type sliceToSlice  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12105 */
            __auto_type sliceToSlice  = drop_String (2, v481 );
            // ----------
            ((void)((sliceToSlice . __h_table )-> freeData ));
            sliceToSlice ;
          });
          // ----------
          { /* cicili#Let12111 */
            __auto_type match12110  = iterator_String (v481 );
            typeof((match12110 . __h_0_mem )) begin ;
            typeof((match12110 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let12114 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn12115 */
                    (begin  =  (match12110 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn12117 */
                    (end  =  (match12110 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block12123 */
                  { /* cicili#Block12125 */
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
          { /* cicili#Let12130 */
            __auto_type match12129  = iterator_String (sliceToSlice );
            typeof((match12129 . __h_0_mem )) begin ;
            typeof((match12129 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let12133 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn12134 */
                    (begin  =  (match12129 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn12136 */
                    (end  =  (match12129 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block12142 */
                  { /* cicili#Block12144 */
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
        { /* cicili#Let12151 */
          __auto_type __h_cloned12148  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v211 )-> __h_table -> clone )(v211 );
          // ----------
          ({ /* cicili#Let12155 */
            __auto_type __h_matchbox  = __h_cloned12148 ;
            // ----------
            { /* cicili#Let12159 */
              __auto_type match12158  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match12158 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let12162 */
                bool __h_case_result  = (true  &&  (((match12158 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12163 */
                      (unboxed  =  (((match12158 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block12169 */
                    { /* cicili#Let12173 */
                      __auto_type __h_cloned_x12149  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block12175 */
                        { /* cicili#Let12177 */
                          __auto_type __h_iterator12150  = (__h_cloned_x12149 -> __h_table -> iterator )(__h_cloned12148 );
                          // ----------
                          { /* cicili#Let12182 */
                            typeof((__h_iterator12150 . __h_0_mem )) beg ;
                            typeof((__h_iterator12150 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let12184 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn12185 */
                                    (beg  =  (__h_iterator12150 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn12187 */
                                    (end  =  (__h_iterator12150 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block12193 */
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
        { /* cicili#Let12200 */
          __auto_type __h_cloned12197  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v222 )-> __h_table -> clone )(v222 );
          // ----------
          ({ /* cicili#Let12204 */
            __auto_type __h_matchbox  = __h_cloned12197 ;
            // ----------
            { /* cicili#Let12208 */
              __auto_type match12207  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match12207 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let12211 */
                bool __h_case_result  = (true  &&  (((match12207 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12212 */
                      (unboxed  =  (((match12207 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block12218 */
                    { /* cicili#Let12222 */
                      __auto_type __h_cloned_x12198  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block12224 */
                        { /* cicili#Let12226 */
                          __auto_type __h_iterator12199  = (__h_cloned_x12198 -> __h_table -> iterator )(__h_cloned12197 );
                          // ----------
                          { /* cicili#Let12231 */
                            typeof((__h_iterator12199 . __h_0_mem )) beg ;
                            typeof((__h_iterator12199 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let12233 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn12234 */
                                    (beg  =  (__h_iterator12199 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn12236 */
                                    (end  =  (__h_iterator12199 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block12242 */
                                  { /* cicili#Block12244 */
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
        ({ /* cicili#Let12248 */
          __auto_type cv01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12250 */
            __auto_type cv01  = Buffer_char (MakeStringBuffer_char ("wxyzpqrs", 8, 8, 0));
            // ----------
            ((void)((cv01 . __h_table )-> freeData ));
            cv01 ;
          });
          __auto_type cv02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12257 */
            __auto_type cv02  = drop_Str (2, cv01 );
            // ----------
            ((void)((cv02 . __h_table )-> freeData ));
            cv02 ;
          });
          __auto_type cv03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12260 */
            __auto_type cv03  = push_Str ('P', cv01 );
            // ----------
            ((void)((cv03 . __h_table )-> freeData ));
            cv03 ;
          });
          // ----------
          show_Str (stdout , cv01 );
          putchar ('\n');
          ({ /* cicili#Let12264 */
            __auto_type __h_matchbox  = cv02 ;
            // ----------
            { /* cicili#Let12268 */
              __auto_type match12267  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match12267 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let12271 */
                bool __h_case_result  = (true  &&  (((match12267 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12272 */
                      (unboxed  =  (((match12267 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block12278 */
                    { /* cicili#Let12282 */
                      // ----------
                      ;
                      ({ /* cicili#Let12284 */
                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block12289 */
                            { /* cicili#Block12291 */
                              printf ("drop 2 of constant cv01: ");
                              show_Str (stdout , cv02 );
                              putchar ('\n');
                            }
                          }
                        else
                          { /* cicili#Let12296 */
                            // ----------
                            ;
                            { /* cicili#Block12298 */
                              { /* cicili#Block12303 */
                                printf ("status: %d\n", -182);
                                exit (EXIT_FAILURE );
                              }
                            }
                          }
                      });
                    }
                  }
                else
                  { /* cicili#Let12308 */
                    // ----------
                    ;
                    ({ /* cicili#Let12310 */
                      bool __h_case_result  = (true  &&  ((match12267 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block12315 */
                          { /* cicili#Block12320 */
                            printf ("status: %d\n", -181);
                            exit (EXIT_FAILURE );
                          }
                        }
                    });
                  }
              });
            }
          });
          ({ /* cicili#Let12323 */
            __auto_type __h_matchbox  = cv03 ;
            // ----------
            { /* cicili#Let12327 */
              __auto_type match12326  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match12326 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let12330 */
                bool __h_case_result  = (true  &&  (((match12326 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12331 */
                      (unboxed  =  (((match12326 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block12337 */
                    { /* cicili#Let12341 */
                      // ----------
                      ;
                      ({ /* cicili#Let12343 */
                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_None_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block12348 */
                            { /* cicili#Block12350 */
                              printf ("after push P into constant cv01: None");
                              show_Str (stdout , cv03 );
                              putchar ('\n');
                            }
                          }
                        else
                          { /* cicili#Let12355 */
                            // ----------
                            ;
                            { /* cicili#Block12357 */
                              { /* cicili#Block12362 */
                                printf ("status: %d\n", -184);
                                exit (EXIT_FAILURE );
                              }
                            }
                          }
                      });
                    }
                  }
                else
                  { /* cicili#Let12367 */
                    // ----------
                    ;
                    ({ /* cicili#Let12369 */
                      bool __h_case_result  = (true  &&  ((match12326 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block12374 */
                          { /* cicili#Block12379 */
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
