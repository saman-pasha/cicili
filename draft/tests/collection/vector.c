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
typedef struct cicili_gzsFxEwXLsUYWVUDRGSTRAGiBw_ {
  Vector_int_pointer_t __h_0_mem ;
  Vector_int_pointer_t __h_1_mem ;
} cicili_gzsFxEwXLsUYWVUDRGSTRAGiBw_;
typedef cicili_gzsFxEwXLsUYWVUDRGSTRAGiBw_ Vector_int_iterator_t ;
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
  union { /* ciciliUnion335 */
    struct { /* ciciliStruct336 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct337 */
      Vector_int __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct338 */
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
  union { /* ciciliUnion444 */
    struct { /* ciciliStruct445 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct446 */
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
  { /* cicili#Let476 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let481 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
bool null_terminated_StringBuffer_int  = false ;
#ifndef __StringBuffer_int__H_IMPL__
#define __StringBuffer_int__H_IMPL__
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t len ) {
  return ({ /* cicili#Let494 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let496 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn497 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn499 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn501 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn506 */
            ({ /* cicili#Let508 */
              int * new_buffer  = realloc (buffer , (len  *  sizeof(int) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              MakeStringBuffer_int (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let513 */
            // ----------
            ;
            ({ /* cicili#Progn515 */
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
  return ({ /* cicili#Let526 */
      int * buffer  = malloc ((capacity  *  sizeof(int) ));
      StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
      // ----------
      sb ;
    });
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let535 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let537 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn538 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn540 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn542 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn547 */
            ({ /* cicili#Let549 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let558 */
            // ----------
            ;
            ({ /* cicili#Progn560 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb ) {
  return ({ /* cicili#Let569 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let571 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn572 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn574 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn576 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn578 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn583 */
            ({ /* cicili#Let585 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let592 */
            // ----------
            ;
            ({ /* cicili#Progn594 */
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
  return ({ /* cicili#Let608 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let610 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn611 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn613 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn615 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn617 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn622 */
            ({ /* cicili#Let624 */
              size_t blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block628 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let630 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let635 */
            // ----------
            ;
            ({ /* cicili#Progn637 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
  { /* cicili#Let645 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let647 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn648 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block654 */
          { /* cicili#Block656 */
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
  { /* cicili#Let666 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
  { /* cicili#Let671 */
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
  { /* cicili#Let693 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int_x Nothing_Vector_int_x () {
  { /* cicili#Let698 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int_x__H_IMPL__ */ 
#ifndef __Box_Vector_int__H_IMPL__
#define __Box_Vector_int__H_IMPL__
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer ) {
  return ({ /* cicili#Let705 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_int_x *)malloc (sizeof(Vector_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let714 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let716 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn717 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn719 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn721 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn726 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn729 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let735 */
            // ----------
            ;
            ({ /* cicili#Progn737 */
              Gone_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this ) {
  return ({ /* cicili#Let745 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let747 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn748 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn750 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn752 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn757 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let761 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let769 */
            // ----------
            ;
            ({ /* cicili#Progn771 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let779 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let781 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn782 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn784 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn786 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn791 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let798 */
            // ----------
            ;
            ({ /* cicili#Progn800 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
  { /* cicili#Let809 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let811 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn812 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn814 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn816 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block822 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block825 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block833 */
                if ((*count ) ==  1 )
                  { /* cicili#Block836 */
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
        { /* cicili#Let846 */
          // ----------
          ;
          ({ /* cicili#Let848 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block853 */
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
  { /* cicili#Let864 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
  { /* cicili#Let869 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int_iterator_t iterator_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let876 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let880 */
        __auto_type match879  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match879 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let883 */
          bool __h_case_result  = (true  &&  (((match879 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn884 */
                (unboxed  =  (((match879 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn889 */
              ({ /* cicili#Let893 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let895 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn896 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn901 */
                      ({ /* cicili#Let905 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let907 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn908 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn910 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn915 */
                              ((Vector_int_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let920 */
                              // ----------
                              ;
                              ({ /* cicili#Progn922 */
                                ((Vector_int_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let927 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let929 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn930 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn932 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn934 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn939 */
                            ({ /* cicili#Let941 */
                              Vector_int_iterator_t iter  = iterator_Vector_int (vec );
                              // ----------
                              ({ /* cicili#Let947 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let949 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn950 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn955 */
                                      ((Vector_int_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let960 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn962 */
                                        ((Vector_int_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let967 */
                            // ----------
                            ;
                            ({ /* cicili#Progn969 */
                              ((Vector_int_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let974 */
              // ----------
              ;
              ({ /* cicili#Progn976 */
                ((Vector_int_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
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
                      ({ /* cicili#Let1011 */
                        __auto_type match1010  = take_Box_Vector_int ((&vector ));
                        typeof((((match1010 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1014 */
                          bool __h_case_result  = (true  &&  (((match1010 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1015 */
                                (ptr  =  (((match1010 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1020 */
                              ({ /* cicili#Progn1022 */
                                free (ptr );
                                Buffer_int (resize_StringBuffer_int (sb , len ));
                              });
                            }) : ({ /* cicili#Let1028 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1030 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1035 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1037 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1038 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1040 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1045 */
                            ({ /* cicili#Let1048 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1052 */
                                __auto_type match1051  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1051 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1055 */
                                  bool __h_case_result  = (true  &&  (((match1051 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1056 */
                                        (unboxed  =  (((match1051 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1061 */
                                      ({ /* cicili#Let1065 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1067 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1068 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1073 */
                                              ({ /* cicili#Let1077 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1079 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1080 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1082 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1087 */
                                                      ({ /* cicili#Let1089 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1097 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1099 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1104 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1106 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1107 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1112 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1117 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1119 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1124 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1126 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1131 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1133 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1138 */
              // ----------
              ;
              ({ /* cicili#Progn1140 */
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
int * toArray_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let1153 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1157 */
        __auto_type match1156  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1156 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1160 */
          bool __h_case_result  = (true  &&  (((match1156 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1161 */
                (unboxed  =  (((match1156 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1166 */
              ({ /* cicili#Let1170 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1172 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1173 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1178 */
                      ({ /* cicili#Let1182 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1184 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1185 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1190 */
                              buffer ;
                            }) : ({ /* cicili#Let1194 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1196 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1200 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1202 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1203 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1205 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1210 */
                            ({ /* cicili#Let1213 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1217 */
                                __auto_type match1216  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1216 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1220 */
                                  bool __h_case_result  = (true  &&  (((match1216 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1221 */
                                        (unboxed  =  (((match1216 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1226 */
                                      ({ /* cicili#Let1230 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1232 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1233 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1238 */
                                              ({ /* cicili#Let1242 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1244 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1245 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1250 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1254 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1256 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1260 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1262 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1263 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1265 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1270 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1275 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1277 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1281 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1283 */
                                        NULL ;
                                      });
                                    }));
                                });
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
                    }));
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
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
  return ({ /* cicili#Let1300 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1302 */
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
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1343 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1344 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1349 */
                                ({ /* cicili#Let1351 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1362 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1364 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1368 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1370 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1371 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1373 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1375 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1380 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1384 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1386 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1390 */
                // ----------
                ;
                ({ /* cicili#Progn1392 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
    return ({ /* cicili#Let1396 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1400 */
          __auto_type match1399  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1399 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1403 */
            bool __h_case_result  = (true  &&  (((match1399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1404 */
                  (unboxed  =  (((match1399 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1409 */
                ({ /* cicili#Let1413 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1415 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1416 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1421 */
                        ({ /* cicili#Let1425 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1427 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1428 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1430 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1435 */
                                ({ /* cicili#Let1437 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1448 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1450 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1454 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1456 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1457 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1459 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1461 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1466 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1470 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1472 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1476 */
                // ----------
                ;
                ({ /* cicili#Progn1478 */
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
  return ({ /* cicili#Let1483 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1487 */
        __auto_type match1486  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1486 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1490 */
          bool __h_case_result  = (true  &&  (((match1486 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1491 */
                (unboxed  =  (((match1486 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1496 */
              ({ /* cicili#Let1500 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1502 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1503 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1508 */
                      ({ /* cicili#Let1512 */
                        // ----------
                        ;
                        ({ /* cicili#Let1514 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1518 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1524 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1526 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1531 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1533 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1534 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1536 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1538 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1543 */
                            ({ /* cicili#Let1546 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1550 */
                                __auto_type match1549  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1549 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1553 */
                                  bool __h_case_result  = (true  &&  (((match1549 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1554 */
                                        (unboxed  =  (((match1549 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1559 */
                                      ({ /* cicili#Let1563 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1565 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1566 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1571 */
                                              ({ /* cicili#Let1575 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1577 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1581 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1587 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1589 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1594 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1596 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1597 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1602 */
                                                    copySlice_Vector_int (veci , cur , size );
                                                  }) : ({ /* cicili#Let1607 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1609 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1614 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1616 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1621 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1623 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1628 */
              // ----------
              ;
              ({ /* cicili#Progn1630 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let1636 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1640 */
        __auto_type match1639  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1639 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1643 */
          bool __h_case_result  = (true  &&  (((match1639 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1644 */
                (unboxed  =  (((match1639 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1649 */
              ({ /* cicili#Let1653 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1655 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1656 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1661 */
                      ({ /* cicili#Let1665 */
                        // ----------
                        ;
                        ({ /* cicili#Let1667 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1671 */
                              Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                            }) : ({ /* cicili#Let1677 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1679 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1684 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1686 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1687 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1689 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1694 */
                            ({ /* cicili#Let1697 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1701 */
                                __auto_type match1700  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1700 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1704 */
                                  bool __h_case_result  = (true  &&  (((match1700 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1705 */
                                        (unboxed  =  (((match1700 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1710 */
                                      ({ /* cicili#Let1714 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1716 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1717 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1722 */
                                              ({ /* cicili#Let1726 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1728 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1732 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let1738 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1740 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1745 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1747 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1748 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1753 */
                                                    copySlice_Vector_int (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let1758 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1760 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1765 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1767 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1772 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1774 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1779 */
              // ----------
              ;
              ({ /* cicili#Progn1781 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let1787 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1791 */
        __auto_type match1790  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1790 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1794 */
          bool __h_case_result  = (true  &&  (((match1790 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1795 */
                (unboxed  =  (((match1790 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1800 */
              ({ /* cicili#Let1804 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1806 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1807 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1812 */
                      ({ /* cicili#Let1816 */
                        __auto_type match1815  = take_Box_Vector_int ((&vector ));
                        typeof((((match1815 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1819 */
                          bool __h_case_result  = (true  &&  (((match1815 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1820 */
                                (ptr  =  (((match1815 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1825 */
                              ({ /* cicili#Progn1827 */
                                free (ptr );
                                ({ /* cicili#Let1831 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1833 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1834 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn1836 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn1841 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn1844 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_int (sb );
                                          }) : Buffer_int (sb ));
                                      }) : ({ /* cicili#Let1850 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn1852 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let1857 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1859 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1864 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1866 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1867 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1869 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1871 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1876 */
                            ({ /* cicili#Let1879 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1883 */
                                __auto_type match1882  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1882 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1886 */
                                  bool __h_case_result  = (true  &&  (((match1882 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1887 */
                                        (unboxed  =  (((match1882 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1892 */
                                      ({ /* cicili#Let1896 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1898 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1899 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1904 */
                                              ({ /* cicili#Let1908 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1910 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1911 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1913 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1918 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1921 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1931 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1933 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1938 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1940 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1941 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1946 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let1951 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1953 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1958 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1960 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1965 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1967 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1972 */
              // ----------
              ;
              ({ /* cicili#Progn1974 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
  return ({ /* cicili#Let1980 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1984 */
        __auto_type match1983  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1983 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1987 */
          bool __h_case_result  = (true  &&  (((match1983 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1988 */
                (unboxed  =  (((match1983 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1993 */
              ({ /* cicili#Let1997 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1999 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2000 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2005 */
                      ({ /* cicili#Let2009 */
                        __auto_type match2008  = take_Box_Vector_int ((&vector ));
                        typeof((((match2008 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2012 */
                          bool __h_case_result  = (true  &&  (((match2008 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2013 */
                                (ptr  =  (((match2008 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2018 */
                              ({ /* cicili#Progn2020 */
                                free (ptr );
                                ({ /* cicili#Let2024 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2026 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2027 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn2029 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn2031 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn2033 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2038 */
                                        ({ /* cicili#Progn2040 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let2048 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2050 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2055 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2057 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2062 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2064 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2065 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2067 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2069 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2074 */
                            ({ /* cicili#Let2077 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2081 */
                                __auto_type match2080  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2080 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2084 */
                                  bool __h_case_result  = (true  &&  (((match2080 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2085 */
                                        (unboxed  =  (((match2080 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2090 */
                                      ({ /* cicili#Let2094 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2096 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2097 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2102 */
                                              ({ /* cicili#Let2106 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2108 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2109 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2111 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2116 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2119 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2128 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2130 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2135 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2137 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2138 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2143 */
                                                    deleteAt_Vector_int (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2148 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2150 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2155 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2157 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2162 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2164 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2169 */
              // ----------
              ;
              ({ /* cicili#Progn2171 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2177 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2181 */
        __auto_type match2180  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2180 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2184 */
          bool __h_case_result  = (true  &&  (((match2180 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2185 */
                (unboxed  =  (((match2180 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2190 */
              ({ /* cicili#Let2194 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2196 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2197 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2202 */
                      ({ /* cicili#Let2206 */
                        __auto_type match2205  = take_Box_Vector_int ((&vector ));
                        typeof((((match2205 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2209 */
                          bool __h_case_result  = (true  &&  (((match2205 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2210 */
                                (ptr  =  (((match2205 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2215 */
                              ({ /* cicili#Let2217 */
                                StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                                // ----------
                                free (ptr );
                                ({ /* cicili#Let2223 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2225 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2226 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2228 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2233 */
                                        ({ /* cicili#Progn2235 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (new_sb );
                                        });
                                      }) : ({ /* cicili#Let2242 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2244 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2249 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2251 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2256 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2258 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2259 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2261 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2263 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2268 */
                            ({ /* cicili#Let2271 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2275 */
                                __auto_type match2274  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2274 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2278 */
                                  bool __h_case_result  = (true  &&  (((match2274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2279 */
                                        (unboxed  =  (((match2274 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2284 */
                                      ({ /* cicili#Let2288 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2290 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2291 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2296 */
                                              ({ /* cicili#Let2300 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2302 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2303 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2305 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2310 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2313 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2323 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2325 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2330 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2332 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2333 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2338 */
                                                    insertAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2343 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2345 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2350 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2352 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2357 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2359 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2364 */
              // ----------
              ;
              ({ /* cicili#Progn2366 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2372 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2376 */
        __auto_type match2375  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2375 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2379 */
          bool __h_case_result  = (true  &&  (((match2375 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2380 */
                (unboxed  =  (((match2375 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2385 */
              ({ /* cicili#Let2389 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2391 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2392 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2397 */
                      ({ /* cicili#Let2401 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2403 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2404 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2406 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2408 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2410 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2415 */
                              ({ /* cicili#Let2419 */
                                __auto_type match2418  = take_Box_Vector_int ((&vector ));
                                typeof((((match2418 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let2422 */
                                  bool __h_case_result  = (true  &&  (((match2418 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2423 */
                                        (ptr  =  (((match2418 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2428 */
                                      ({ /* cicili#Let2430 */
                                        int tmp ;
                                        // ----------
                                        free (ptr );
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_int (MakeStringBuffer_int (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let2438 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2440 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let2445 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2447 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2452 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2454 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2455 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2457 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2459 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2464 */
                            ({ /* cicili#Let2467 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2471 */
                                __auto_type match2470  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2470 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2474 */
                                  bool __h_case_result  = (true  &&  (((match2470 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2475 */
                                        (unboxed  =  (((match2470 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2480 */
                                      ({ /* cicili#Let2484 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2486 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2487 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2492 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2499 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2501 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2502 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2507 */
                                                    reverse_Vector_int (copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2513 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2515 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2520 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2522 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2527 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2529 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2534 */
              // ----------
              ;
              ({ /* cicili#Progn2536 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
  return ({ /* cicili#Let2542 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2546 */
        __auto_type match2545  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2545 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2549 */
          bool __h_case_result  = (true  &&  (((match2545 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2550 */
                (unboxed  =  (((match2545 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2555 */
              ({ /* cicili#Let2559 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2561 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2562 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2567 */
                      ({ /* cicili#Let2571 */
                        __auto_type match2570  = take_Box_Vector_int ((&lvector ));
                        typeof((((match2570 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2574 */
                          bool __h_case_result  = (true  &&  (((match2570 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2575 */
                                (ptr  =  (((match2570 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2580 */
                              ({ /* cicili#Progn2582 */
                                free (ptr );
                                Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                              });
                            }) : ({ /* cicili#Let2590 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2592 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2597 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2599 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2600 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2602 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2604 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2609 */
                            ({ /* cicili#Let2612 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2616 */
                                __auto_type match2615  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2615 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2619 */
                                  bool __h_case_result  = (true  &&  (((match2615 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2620 */
                                        (unboxed  =  (((match2615 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2625 */
                                      ({ /* cicili#Let2629 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2631 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2632 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2637 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2646 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2648 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2649 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2654 */
                                                    append_Vector_int (copySlice_Vector_int (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let2660 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2662 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2667 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2669 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2674 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2676 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2681 */
              // ----------
              ;
              ({ /* cicili#Progn2683 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
  return ({ /* cicili#Let2689 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2693 */
        __auto_type match2692  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2692 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2696 */
          bool __h_case_result  = (true  &&  (((match2692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2697 */
                (unboxed  =  (((match2692 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2702 */
              ({ /* cicili#Let2706 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2708 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2709 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2714 */
                      ({ /* cicili#Let2718 */
                        __auto_type match2717  = take_Box_Vector_int ((&vector ));
                        typeof((((match2717 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2721 */
                          bool __h_case_result  = (true  &&  (((match2717 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2722 */
                                (ptr  =  (((match2717 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2727 */
                              ({ /* cicili#Progn2729 */
                                free (ptr );
                                Buffer_int (put_StringBuffer_int (sb , item ));
                              });
                            }) : ({ /* cicili#Let2735 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2737 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2742 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2744 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2745 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2747 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2749 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2754 */
                            ({ /* cicili#Let2757 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2761 */
                                __auto_type match2760  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2760 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2764 */
                                  bool __h_case_result  = (true  &&  (((match2760 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2765 */
                                        (unboxed  =  (((match2760 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2770 */
                                      ({ /* cicili#Let2774 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2776 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2777 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2782 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2789 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2791 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2792 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2797 */
                                                    push_Vector_int (item , copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2803 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2805 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2810 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2812 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2817 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2819 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2824 */
              // ----------
              ;
              ({ /* cicili#Progn2826 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let2832 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2836 */
        __auto_type match2835  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2835 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2839 */
          bool __h_case_result  = (true  &&  (((match2835 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2840 */
                (unboxed  =  (((match2835 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2845 */
              ({ /* cicili#Let2849 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2851 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2852 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2857 */
                      ({ /* cicili#Let2861 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2863 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2864 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2869 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2881 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2883 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2889 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2891 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2892 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2894 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2896 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2901 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , len ) : Slice_int (clone_Box_Vector_int (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let2913 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2915 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2920 */
              // ----------
              ;
              ({ /* cicili#Progn2922 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int last_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2929 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2933 */
        __auto_type match2932  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2932 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2936 */
          bool __h_case_result  = (true  &&  (((match2932 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2937 */
                (unboxed  =  (((match2932 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2942 */
              ({ /* cicili#Let2946 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2948 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2949 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2954 */
                      ({ /* cicili#Let2958 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2960 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2961 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2963 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2968 */
                              Just_int ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let2973 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2975 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2980 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2982 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2983 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2985 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2987 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2992 */
                            nth_Vector_int ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let2997 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2999 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3004 */
              // ----------
              ;
              ({ /* cicili#Progn3006 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3012 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3016 */
        __auto_type match3015  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3015 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3019 */
          bool __h_case_result  = (true  &&  (((match3015 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3020 */
                (unboxed  =  (((match3015 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3025 */
              ({ /* cicili#Let3029 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3031 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3032 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3037 */
                      ({ /* cicili#Let3041 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3043 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3044 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3049 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3055 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3057 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3062 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3064 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3065 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3067 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3069 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3074 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3080 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3082 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3087 */
              // ----------
              ;
              ({ /* cicili#Progn3089 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
  return ({ /* cicili#Let3094 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3101 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3105 */
        __auto_type match3104  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3104 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3108 */
          bool __h_case_result  = (true  &&  (((match3104 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3109 */
                (unboxed  =  (((match3104 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3114 */
              ({ /* cicili#Let3118 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3120 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3121 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3126 */
                      ({ /* cicili#Let3130 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3132 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3133 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3138 */
                              cursor ;
                            }) : ({ /* cicili#Let3142 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3144 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3148 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3150 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3151 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3156 */
                            size ;
                          }) : ({ /* cicili#Let3160 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3162 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3166 */
              // ----------
              ;
              ({ /* cicili#Progn3168 */
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
  return ({ /* cicili#Let3176 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3180 */
        __auto_type match3179  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3179 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3183 */
          bool __h_case_result  = (true  &&  (((match3179 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3184 */
                (unboxed  =  (((match3179 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3189 */
              ({ /* cicili#Let3193 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3195 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3196 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3201 */
                      ({ /* cicili#Let3205 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3207 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3208 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3213 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3225 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3227 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3233 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3235 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3236 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3238 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3243 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3248 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3250 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3255 */
              // ----------
              ;
              ({ /* cicili#Progn3257 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3264 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3268 */
        __auto_type match3267  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3267 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3271 */
          bool __h_case_result  = (true  &&  (((match3267 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3272 */
                (unboxed  =  (((match3267 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3277 */
              ({ /* cicili#Let3281 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3283 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3284 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3289 */
                      ({ /* cicili#Let3293 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3295 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3296 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3298 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3303 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3310 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3312 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3317 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3319 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3320 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3322 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3327 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3332 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3334 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3339 */
              // ----------
              ;
              ({ /* cicili#Progn3341 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
  return ({ /* cicili#Let3348 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3352 */
        __auto_type match3351  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3351 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3355 */
          bool __h_case_result  = (true  &&  (((match3351 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3356 */
                (unboxed  =  (((match3351 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3361 */
              ({ /* cicili#Let3365 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3367 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3368 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3373 */
                      ({ /* cicili#Let3377 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3379 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3380 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3382 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3387 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3394 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3396 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3401 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3403 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3404 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3406 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3408 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3413 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3420 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3422 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3427 */
              // ----------
              ;
              ({ /* cicili#Progn3429 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
  { /* cicili#Let3434 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3438 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3440 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3441 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3447 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3453 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3455 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3456 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3462 */
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
  { /* cicili#Let3472 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
  { /* cicili#Let3480 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int None_int () {
  { /* cicili#Let3487 */
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
  { /* cicili#Let3505 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
  { /* cicili#Let3510 */
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
  union { /* ciciliUnion3536 */
    struct { /* ciciliStruct3537 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3538 */
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
  union { /* ciciliUnion3583 */
    struct { /* ciciliStruct3584 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct3585 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , size_t cursor , size_t size , size_t step );
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
typedef char * Vector_char_pointer_t ;
typedef struct cicili5eDw_BcQ_pfJBGo4gWnbKCTVUiU_ {
  Vector_char_pointer_t __h_0_mem ;
  Vector_char_pointer_t __h_1_mem ;
} cicili5eDw_BcQ_pfJBGo4gWnbKCTVUiU_;
typedef cicili5eDw_BcQ_pfJBGo4gWnbKCTVUiU_ Vector_char_iterator_t ;
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
  union { /* ciciliUnion3656 */
    struct { /* ciciliStruct3657 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3658 */
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
  union { /* ciciliUnion3688 */
    struct { /* ciciliStruct3689 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3690 */
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
  union { /* ciciliUnion3754 */
    struct { /* ciciliStruct3755 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3756 */
      Vector_char __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3757 */
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
  union { /* ciciliUnion3863 */
    struct { /* ciciliStruct3864 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3865 */
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
  { /* cicili#Let3895 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let3900 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
bool null_terminated_StringBuffer_char  = true ;
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t len ) {
  return ({ /* cicili#Let3913 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3915 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3916 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3918 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3920 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3925 */
            ({ /* cicili#Let3927 */
              char * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(char) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              (*(new_buffer  +  new_cursor  )) = ((char)(*((char *)"\0")));
              MakeStringBuffer_char (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let3932 */
            // ----------
            ;
            ({ /* cicili#Progn3934 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char new_StringBuffer_char (size_t step ) {
  return newCapacity_StringBuffer_char (step , step );
}
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step ) {
  return ({ /* cicili#Let3945 */
      char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
      StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
      // ----------
      (*buffer ) = ((char)(*((char *)"\0")));
      sb ;
    });
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let3954 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3956 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3957 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3959 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3961 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3966 */
            ({ /* cicili#Let3968 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let3977 */
            // ----------
            ;
            ({ /* cicili#Progn3979 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
  return ({ /* cicili#Let3988 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3990 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3991 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3993 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3995 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3997 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4002 */
            ({ /* cicili#Let4004 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let4011 */
            // ----------
            ;
            ({ /* cicili#Progn4013 */
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
  return ({ /* cicili#Let4027 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let4029 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn4030 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn4032 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn4034 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4036 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4041 */
            ({ /* cicili#Let4043 */
              size_t blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4047 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4049 */
                    char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              (*(buffer  +  cursor  +  len  )) = ((char)(*((char *)"\0")));
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4054 */
            // ----------
            ;
            ({ /* cicili#Progn4056 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let4064 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4066 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4067 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4073 */
          { /* cicili#Block4075 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
    });
  }
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , resize_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , copySlice_StringBuffer_char , copy_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let4085 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let4090 */
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
  { /* cicili#Let4112 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char_x Nothing_Vector_char_x () {
  { /* cicili#Let4117 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char_x__H_IMPL__ */ 
#ifndef __Box_Vector_char__H_IMPL__
#define __Box_Vector_char__H_IMPL__
Box_Vector_char new_Box_Vector_char (Vector_char_x pointer ) {
  return ({ /* cicili#Let4124 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_char_x *)malloc (sizeof(Vector_char_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_char_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_char clone_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4133 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4135 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4136 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4138 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4140 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4145 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4148 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4154 */
            // ----------
            ;
            ({ /* cicili#Progn4156 */
              Gone_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x take_Box_Vector_char (Box_Vector_char * this ) {
  return ({ /* cicili#Let4164 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4166 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4167 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4169 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4171 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4176 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let4180 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4188 */
            // ----------
            ;
            ({ /* cicili#Progn4190 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x get_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4198 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4200 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4201 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4203 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4205 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4210 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4217 */
            // ----------
            ;
            ({ /* cicili#Progn4219 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_char (Box_Vector_char * this ) {
  { /* cicili#Let4228 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4230 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4231 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4233 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4235 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4241 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4244 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4252 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4255 */
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
        { /* cicili#Let4265 */
          // ----------
          ;
          ({ /* cicili#Let4267 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4272 */
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
  { /* cicili#Let4283 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_char Gone_Vector_char_x () {
  { /* cicili#Let4288 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_char__H_IMPL__ */ 
Vector_char_iterator_t iterator_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let4295 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4299 */
        __auto_type match4298  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4298 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4302 */
          bool __h_case_result  = (true  &&  (((match4298 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4303 */
                (unboxed  =  (((match4298 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4308 */
              ({ /* cicili#Let4312 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4314 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4315 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4320 */
                      ({ /* cicili#Let4324 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4326 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4327 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4329 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4334 */
                              ((Vector_char_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let4339 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4341 */
                                ((Vector_char_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4346 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4348 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4349 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4351 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4353 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4358 */
                            ({ /* cicili#Let4360 */
                              Vector_char_iterator_t iter  = iterator_Vector_char (vec );
                              // ----------
                              ({ /* cicili#Let4366 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let4368 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn4369 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4374 */
                                      ((Vector_char_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let4379 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4381 */
                                        ((Vector_char_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4386 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4388 */
                              ((Vector_char_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4393 */
              // ----------
              ;
              ({ /* cicili#Progn4395 */
                ((Vector_char_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_char resize_Vector_char (Vector_char vector , size_t len ) {
  return ({ /* cicili#Let4401 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4405 */
        __auto_type match4404  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4404 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4408 */
          bool __h_case_result  = (true  &&  (((match4404 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4409 */
                (unboxed  =  (((match4404 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4414 */
              ({ /* cicili#Let4418 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4420 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4421 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4426 */
                      ({ /* cicili#Let4430 */
                        __auto_type match4429  = take_Box_Vector_char ((&vector ));
                        typeof((((match4429 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let4433 */
                          bool __h_case_result  = (true  &&  (((match4429 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4434 */
                                (ptr  =  (((match4429 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4439 */
                              ({ /* cicili#Progn4441 */
                                free (ptr );
                                Buffer_char (resize_StringBuffer_char (sb , len ));
                              });
                            }) : ({ /* cicili#Let4447 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4449 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4454 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let4456 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4457 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4459 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4464 */
                            ({ /* cicili#Let4467 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4471 */
                                __auto_type match4470  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4470 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4474 */
                                  bool __h_case_result  = (true  &&  (((match4470 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4475 */
                                        (unboxed  =  (((match4470 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4480 */
                                      ({ /* cicili#Let4484 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4486 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4487 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4492 */
                                              ({ /* cicili#Let4496 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4498 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4499 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn4501 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4506 */
                                                      ({ /* cicili#Let4508 */
                                                        StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step );
                                                        // ----------
                                                        Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let4516 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4518 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4523 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4525 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4526 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4531 */
                                                    resize_Vector_char (veci , len );
                                                  }) : ({ /* cicili#Let4536 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4538 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4543 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4545 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4550 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4552 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4557 */
              // ----------
              ;
              ({ /* cicili#Progn4559 */
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
  return Buffer_char (newCapacity_StringBuffer_char (capacity , step ));
}
char * toArray_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let4572 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4576 */
        __auto_type match4575  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4575 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4579 */
          bool __h_case_result  = (true  &&  (((match4575 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4580 */
                (unboxed  =  (((match4575 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4585 */
              ({ /* cicili#Let4589 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4591 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4592 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4597 */
                      ({ /* cicili#Let4601 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4603 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4604 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4609 */
                              buffer ;
                            }) : ({ /* cicili#Let4613 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4615 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4619 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4621 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4622 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4624 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4629 */
                            ({ /* cicili#Let4632 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4636 */
                                __auto_type match4635  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4635 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4639 */
                                  bool __h_case_result  = (true  &&  (((match4635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4640 */
                                        (unboxed  =  (((match4635 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4645 */
                                      ({ /* cicili#Let4649 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4651 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4652 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4657 */
                                              ({ /* cicili#Let4661 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4663 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4664 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4669 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4673 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4675 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4679 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4681 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4682 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4684 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4689 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4694 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4696 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4700 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4702 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4706 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4708 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4712 */
              // ----------
              ;
              ({ /* cicili#Progn4714 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_char wrap_Vector_char (const char item ) {
  return ({ /* cicili#Let4719 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4721 */
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
    return ({ /* cicili#Let4731 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4735 */
          __auto_type match4734  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4734 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4738 */
            bool __h_case_result  = (true  &&  (((match4734 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4739 */
                  (unboxed  =  (((match4734 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4744 */
                ({ /* cicili#Let4748 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4750 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4751 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4756 */
                        ({ /* cicili#Let4760 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4762 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4763 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4768 */
                                ({ /* cicili#Let4770 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4781 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4783 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4787 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4789 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4790 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4792 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4794 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4799 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4803 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4805 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4809 */
                // ----------
                ;
                ({ /* cicili#Progn4811 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_char vector ) {
    return ({ /* cicili#Let4815 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4819 */
          __auto_type match4818  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4818 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4822 */
            bool __h_case_result  = (true  &&  (((match4818 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4823 */
                  (unboxed  =  (((match4818 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4828 */
                ({ /* cicili#Let4832 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4834 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4835 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4840 */
                        ({ /* cicili#Let4844 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4846 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4847 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4849 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4854 */
                                ({ /* cicili#Let4856 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4867 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4869 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4873 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4875 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4876 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4878 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4880 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4885 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4889 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4891 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4895 */
                // ----------
                ;
                ({ /* cicili#Progn4897 */
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
  return ({ /* cicili#Let4902 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4906 */
        __auto_type match4905  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4905 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4909 */
          bool __h_case_result  = (true  &&  (((match4905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4910 */
                (unboxed  =  (((match4905 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4915 */
              ({ /* cicili#Let4919 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4921 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4922 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4927 */
                      ({ /* cicili#Let4931 */
                        // ----------
                        ;
                        ({ /* cicili#Let4933 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4937 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let4943 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4945 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4950 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4952 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4953 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4955 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4957 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4962 */
                            ({ /* cicili#Let4965 */
                              __auto_type __h_matchbox  = vec ;
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
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4984 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4985 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4990 */
                                              ({ /* cicili#Let4994 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4996 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5000 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let5006 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5008 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5013 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5015 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5016 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5021 */
                                                    copySlice_Vector_char (veci , cur , size );
                                                  }) : ({ /* cicili#Let5026 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5028 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5033 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5035 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5040 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5042 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5047 */
              // ----------
              ;
              ({ /* cicili#Progn5049 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char copySlice_Vector_char (Vector_char vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let5055 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5059 */
        __auto_type match5058  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5058 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5062 */
          bool __h_case_result  = (true  &&  (((match5058 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5063 */
                (unboxed  =  (((match5058 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5068 */
              ({ /* cicili#Let5072 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5074 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5075 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5080 */
                      ({ /* cicili#Let5084 */
                        // ----------
                        ;
                        ({ /* cicili#Let5086 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5090 */
                              Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                            }) : ({ /* cicili#Let5096 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5098 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5103 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5105 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5106 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5108 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5113 */
                            ({ /* cicili#Let5116 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5120 */
                                __auto_type match5119  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5119 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5123 */
                                  bool __h_case_result  = (true  &&  (((match5119 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5124 */
                                        (unboxed  =  (((match5119 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5129 */
                                      ({ /* cicili#Let5133 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5135 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5136 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5141 */
                                              ({ /* cicili#Let5145 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5147 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5151 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let5157 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5159 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5164 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5166 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5167 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5172 */
                                                    copySlice_Vector_char (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let5177 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5179 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5184 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5186 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5191 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5193 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5198 */
              // ----------
              ;
              ({ /* cicili#Progn5200 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let5206 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5210 */
        __auto_type match5209  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5209 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5213 */
          bool __h_case_result  = (true  &&  (((match5209 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5214 */
                (unboxed  =  (((match5209 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5219 */
              ({ /* cicili#Let5223 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5225 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5226 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5231 */
                      ({ /* cicili#Let5235 */
                        __auto_type match5234  = take_Box_Vector_char ((&vector ));
                        typeof((((match5234 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5238 */
                          bool __h_case_result  = (true  &&  (((match5234 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5239 */
                                (ptr  =  (((match5234 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5244 */
                              ({ /* cicili#Progn5246 */
                                free (ptr );
                                ({ /* cicili#Let5250 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5252 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5253 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5255 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5260 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn5263 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_char (sb );
                                          }) : Buffer_char (sb ));
                                      }) : ({ /* cicili#Let5269 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5271 */
                                          clone_Box_Vector_char (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5276 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5278 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5283 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5285 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5286 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5288 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5290 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5295 */
                            ({ /* cicili#Let5298 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5302 */
                                __auto_type match5301  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5301 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5305 */
                                  bool __h_case_result  = (true  &&  (((match5301 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5306 */
                                        (unboxed  =  (((match5301 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5311 */
                                      ({ /* cicili#Let5315 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5317 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5318 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5323 */
                                              ({ /* cicili#Let5327 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5329 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5330 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5332 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5337 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5340 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5350 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5352 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5357 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5359 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5360 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5365 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5370 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5372 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5377 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5379 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5384 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5386 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5391 */
              // ----------
              ;
              ({ /* cicili#Progn5393 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index ) {
  return ({ /* cicili#Let5399 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5403 */
        __auto_type match5402  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5402 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5406 */
          bool __h_case_result  = (true  &&  (((match5402 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5407 */
                (unboxed  =  (((match5402 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5412 */
              ({ /* cicili#Let5416 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5418 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5419 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5424 */
                      ({ /* cicili#Let5428 */
                        __auto_type match5427  = take_Box_Vector_char ((&vector ));
                        typeof((((match5427 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5431 */
                          bool __h_case_result  = (true  &&  (((match5427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5432 */
                                (ptr  =  (((match5427 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5437 */
                              ({ /* cicili#Progn5439 */
                                free (ptr );
                                ({ /* cicili#Let5443 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5445 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5446 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn5448 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn5450 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn5452 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5457 */
                                        ({ /* cicili#Progn5459 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let5467 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5469 */
                                          clone_Box_Vector_char (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5474 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5476 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5481 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5483 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5484 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5486 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5488 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5493 */
                            ({ /* cicili#Let5496 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5500 */
                                __auto_type match5499  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5499 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5503 */
                                  bool __h_case_result  = (true  &&  (((match5499 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5504 */
                                        (unboxed  =  (((match5499 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5509 */
                                      ({ /* cicili#Let5513 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5515 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5516 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5521 */
                                              ({ /* cicili#Let5525 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5527 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5528 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5530 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5535 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5538 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5547 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5549 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5554 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5556 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5557 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5562 */
                                                    deleteAt_Vector_char (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5567 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5569 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5574 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5576 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5581 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5583 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5588 */
              // ----------
              ;
              ({ /* cicili#Progn5590 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let5596 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5600 */
        __auto_type match5599  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5599 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5603 */
          bool __h_case_result  = (true  &&  (((match5599 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5604 */
                (unboxed  =  (((match5599 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5609 */
              ({ /* cicili#Let5613 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5615 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5616 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5621 */
                      ({ /* cicili#Let5625 */
                        __auto_type match5624  = take_Box_Vector_char ((&vector ));
                        typeof((((match5624 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5628 */
                          bool __h_case_result  = (true  &&  (((match5624 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5629 */
                                (ptr  =  (((match5624 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5634 */
                              ({ /* cicili#Let5636 */
                                StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                                // ----------
                                free (ptr );
                                ({ /* cicili#Let5642 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5644 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5645 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn5647 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5652 */
                                        ({ /* cicili#Progn5654 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_char (new_sb );
                                        });
                                      }) : ({ /* cicili#Let5661 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5663 */
                                          clone_Box_Vector_char (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let5668 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5670 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5675 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5677 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5678 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5680 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5682 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5687 */
                            ({ /* cicili#Let5690 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5694 */
                                __auto_type match5693  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5693 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5697 */
                                  bool __h_case_result  = (true  &&  (((match5693 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5698 */
                                        (unboxed  =  (((match5693 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5703 */
                                      ({ /* cicili#Let5707 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5709 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5710 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5715 */
                                              ({ /* cicili#Let5719 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5721 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5722 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5724 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5729 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5732 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5742 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5744 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5749 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5751 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5752 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5757 */
                                                    insertAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5762 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5764 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5769 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5771 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5776 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5778 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5783 */
              // ----------
              ;
              ({ /* cicili#Progn5785 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char reverse_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let5791 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5795 */
        __auto_type match5794  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5794 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5798 */
          bool __h_case_result  = (true  &&  (((match5794 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5799 */
                (unboxed  =  (((match5794 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5804 */
              ({ /* cicili#Let5808 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5810 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5811 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5816 */
                      ({ /* cicili#Let5820 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let5822 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5823 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn5825 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5827 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5829 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5834 */
                              ({ /* cicili#Let5838 */
                                __auto_type match5837  = take_Box_Vector_char ((&vector ));
                                typeof((((match5837 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let5841 */
                                  bool __h_case_result  = (true  &&  (((match5837 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5842 */
                                        (ptr  =  (((match5837 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5847 */
                                      ({ /* cicili#Let5849 */
                                        char tmp ;
                                        // ----------
                                        free (ptr );
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_char (MakeStringBuffer_char (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let5857 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5859 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let5864 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5866 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5871 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5873 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5874 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5876 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5878 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5883 */
                            ({ /* cicili#Let5886 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5890 */
                                __auto_type match5889  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5889 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5893 */
                                  bool __h_case_result  = (true  &&  (((match5889 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5894 */
                                        (unboxed  =  (((match5889 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5899 */
                                      ({ /* cicili#Let5903 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5905 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5906 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5911 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let5918 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5920 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5921 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5926 */
                                                    reverse_Vector_char (copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let5932 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5934 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5939 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5941 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5946 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5948 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5953 */
              // ----------
              ;
              ({ /* cicili#Progn5955 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector ) {
  return ({ /* cicili#Let5961 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let5965 */
        __auto_type match5964  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5964 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5968 */
          bool __h_case_result  = (true  &&  (((match5964 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5969 */
                (unboxed  =  (((match5964 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5974 */
              ({ /* cicili#Let5978 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5980 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5981 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5986 */
                      ({ /* cicili#Let5990 */
                        __auto_type match5989  = take_Box_Vector_char ((&lvector ));
                        typeof((((match5989 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let5993 */
                          bool __h_case_result  = (true  &&  (((match5989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5994 */
                                (ptr  =  (((match5989 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5999 */
                              ({ /* cicili#Progn6001 */
                                free (ptr );
                                Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                              });
                            }) : ({ /* cicili#Let6009 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6011 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6016 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6018 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6019 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6021 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6023 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6028 */
                            ({ /* cicili#Let6031 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6035 */
                                __auto_type match6034  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6034 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6038 */
                                  bool __h_case_result  = (true  &&  (((match6034 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6039 */
                                        (unboxed  =  (((match6034 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6044 */
                                      ({ /* cicili#Let6048 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6050 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6051 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6056 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let6065 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6067 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6068 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6073 */
                                                    append_Vector_char (copySlice_Vector_char (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let6079 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6081 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6086 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6088 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6093 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6095 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6100 */
              // ----------
              ;
              ({ /* cicili#Progn6102 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char push_Vector_char (char item , Vector_char vector ) {
  return ({ /* cicili#Let6108 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6112 */
        __auto_type match6111  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6111 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6115 */
          bool __h_case_result  = (true  &&  (((match6111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6116 */
                (unboxed  =  (((match6111 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6121 */
              ({ /* cicili#Let6125 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6127 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6128 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6133 */
                      ({ /* cicili#Let6137 */
                        __auto_type match6136  = take_Box_Vector_char ((&vector ));
                        typeof((((match6136 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let6140 */
                          bool __h_case_result  = (true  &&  (((match6136 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6141 */
                                (ptr  =  (((match6136 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6146 */
                              ({ /* cicili#Progn6148 */
                                free (ptr );
                                Buffer_char (put_StringBuffer_char (sb , item ));
                              });
                            }) : ({ /* cicili#Let6154 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6156 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6161 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6163 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6164 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6166 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6168 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6173 */
                            ({ /* cicili#Let6176 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6180 */
                                __auto_type match6179  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6179 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6183 */
                                  bool __h_case_result  = (true  &&  (((match6179 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6184 */
                                        (unboxed  =  (((match6179 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6189 */
                                      ({ /* cicili#Let6193 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6195 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6196 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6201 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let6208 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6210 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6211 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6216 */
                                                    push_Vector_char (item , copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let6222 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6224 */
                                                      clone_Box_Vector_char (vec );
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
                          }) : ({ /* cicili#Let6236 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6238 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6243 */
              // ----------
              ;
              ({ /* cicili#Progn6245 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char take_Vector_char (size_t len , Vector_char vector ) {
  return ({ /* cicili#Let6251 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6255 */
        __auto_type match6254  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6254 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6258 */
          bool __h_case_result  = (true  &&  (((match6254 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6259 */
                (unboxed  =  (((match6254 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6264 */
              ({ /* cicili#Let6268 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6270 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6271 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6276 */
                      ({ /* cicili#Let6280 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6282 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6283 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6288 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6300 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6302 */
                                Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6308 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6310 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6311 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6313 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6315 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6320 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , len ) : Slice_char (clone_Box_Vector_char (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let6332 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6334 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6339 */
              // ----------
              ;
              ({ /* cicili#Progn6341 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char last_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6348 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6352 */
        __auto_type match6351  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6351 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6355 */
          bool __h_case_result  = (true  &&  (((match6351 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6356 */
                (unboxed  =  (((match6351 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6361 */
              ({ /* cicili#Let6365 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6367 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6368 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6373 */
                      ({ /* cicili#Let6377 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6379 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6380 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6382 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6387 */
                              Just_char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let6392 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6394 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6399 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6401 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6402 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6404 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6406 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6411 */
                            nth_Vector_char ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let6416 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6418 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6423 */
              // ----------
              ;
              ({ /* cicili#Progn6425 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Vector_char init_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6431 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6435 */
        __auto_type match6434  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6434 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6438 */
          bool __h_case_result  = (true  &&  (((match6434 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6439 */
                (unboxed  =  (((match6434 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6444 */
              ({ /* cicili#Let6448 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6450 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6451 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6456 */
                      ({ /* cicili#Let6460 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6462 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6463 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6468 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6474 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6476 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6481 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6483 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6484 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6486 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6488 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6493 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6499 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6501 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6506 */
              // ----------
              ;
              ({ /* cicili#Progn6508 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_char (Vector_char vector , size_t desired ) {
  return ({ /* cicili#Let6513 */
      size_t len  = len_Vector_char (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6520 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6524 */
        __auto_type match6523  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6523 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6527 */
          bool __h_case_result  = (true  &&  (((match6523 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6528 */
                (unboxed  =  (((match6523 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6533 */
              ({ /* cicili#Let6537 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6539 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6540 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6545 */
                      ({ /* cicili#Let6549 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6551 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6552 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6557 */
                              cursor ;
                            }) : ({ /* cicili#Let6561 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6563 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6567 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6569 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6570 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6575 */
                            size ;
                          }) : ({ /* cicili#Let6579 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6581 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6585 */
              // ----------
              ;
              ({ /* cicili#Progn6587 */
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
  return ({ /* cicili#Let6595 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6599 */
        __auto_type match6598  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6598 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6602 */
          bool __h_case_result  = (true  &&  (((match6598 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6603 */
                (unboxed  =  (((match6598 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6608 */
              ({ /* cicili#Let6612 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6614 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6615 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6620 */
                      ({ /* cicili#Let6624 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6626 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6627 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6632 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6644 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6646 */
                                Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6652 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6654 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6655 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6657 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6662 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let6667 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6669 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6674 */
              // ----------
              ;
              ({ /* cicili#Progn6676 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6683 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6687 */
        __auto_type match6686  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6686 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6690 */
          bool __h_case_result  = (true  &&  (((match6686 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6691 */
                (unboxed  =  (((match6686 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6696 */
              ({ /* cicili#Let6700 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6702 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6703 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6708 */
                      ({ /* cicili#Let6712 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6714 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6715 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6717 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6722 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let6729 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6731 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6736 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6738 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6739 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6741 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6746 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let6751 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6753 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6758 */
              // ----------
              ;
              ({ /* cicili#Progn6760 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Vector_char (size_t index , Vector_char vector ) {
  return ({ /* cicili#Let6767 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6771 */
        __auto_type match6770  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6770 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6774 */
          bool __h_case_result  = (true  &&  (((match6770 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6775 */
                (unboxed  =  (((match6770 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6780 */
              ({ /* cicili#Let6784 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6786 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6787 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6792 */
                      ({ /* cicili#Let6796 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6798 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6799 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6801 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6806 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let6813 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6815 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6820 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6822 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6823 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6825 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6827 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6832 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let6839 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6841 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6846 */
              // ----------
              ;
              ({ /* cicili#Progn6848 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Vector_char_x (Vector_char_x * this_ptr ) {
  { /* cicili#Let6853 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6857 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let6859 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6860 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6866 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let6872 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let6874 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6875 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6881 */
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
  { /* cicili#Let6891 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size ) {
  { /* cicili#Let6899 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char None_char () {
  { /* cicili#Let6906 */
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
  { /* cicili#Let6924 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char Nothing_Vector_char () {
  { /* cicili#Let6929 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let6945 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6947 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6950 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6953 */
      __auto_type v03  = ({ /* cicili#Let6956 */
        StringBuffer_int tmp_buf6955  = newCapacity_StringBuffer_int (5, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6955 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6964 */
      __auto_type v04  = ({ /* cicili#Let6967 */
        StringBuffer_int tmp_buf6966  = newCapacity_StringBuffer_int (2, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6966 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6975 */
      __auto_type v05  = ({ /* cicili#Let6978 */
        StringBuffer_char tmp_buf6977  = newCapacity_StringBuffer_char (11, 16);
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf6977 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6986 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6990 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6994 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6997 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7000 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7003 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7006 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7009 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7012 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7015 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7018 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7021 */
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
    { /* cicili#Block7028 */
      ({ /* cicili#Let7031 */
        __auto_type v01C1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7033 */
          __auto_type v01C1  = clone_Box_Vector_int (v01 );
          // ----------
          ((void)((v01C1 . __h_table )-> freeData ));
          v01C1 ;
        });
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7036 */
          __auto_type v01P1  = push_Vector_int (40, v01C1 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        ({ /* cicili#Let7040 */
          __auto_type __h_matchbox  = v01P1 ;
          // ----------
          { /* cicili#Let7044 */
            __auto_type match7043  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7043 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let7047 */
              bool __h_case_result  = (true  &&  (((match7043 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7048 */
                    (unboxed  =  (((match7043 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7054 */
                  { /* cicili#Let7058 */
                    // ----------
                    ;
                    ({ /* cicili#Let7060 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_None_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block7065 */
                          printf ("can't push to v01: any cloned versions or slices refered to it\n");
                        }
                      else
                        { /* cicili#Let7070 */
                          // ----------
                          ;
                          { /* cicili#Block7072 */
                            { /* cicili#Block7077 */
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
      ({ /* cicili#Let7080 */
        __auto_type v01P1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7082 */
          __auto_type v01P1  = push_Vector_int (40, v01 );
          // ----------
          ((void)((v01P1 . __h_table )-> freeData ));
          v01P1 ;
        });
        // ----------
        { /* cicili#Let7087 */
          __auto_type match7086  = head_Vector_int (v01P1 );
          typeof((((match7086 . __h_data ). Just ). __h_0_mem )) he ;
          // ----------
          ;
          ({ /* cicili#Let7090 */
            bool __h_case_result  = (true  &&  (((match7086 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7091 */
                  (he  =  (((match7086 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7097 */
                printf ("head of v01: %d had not any cloned versions or slices refered to it\n", he );
              }
            else
              { /* cicili#Let7102 */
                // ----------
                ;
                { /* cicili#Block7104 */
                  { /* cicili#Block7109 */
                    printf ("status: %d\n", -91);
                    exit (EXIT_FAILURE );
                  }
                }
              }
          });
        }
      });
      { /* cicili#Let7113 */
        __auto_type match7112  = nth_Vector_int (3, v03 );
        typeof((((match7112 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7116 */
          bool __h_case_result  = (true  &&  (((match7112 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7117 */
                (i  =  (((match7112 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7123 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let7128 */
              // ----------
              ;
              { /* cicili#Block7130 */
                { /* cicili#Block7135 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7139 */
        __auto_type match7138  = nth_Vector_char (5, v05 );
        typeof((((match7138 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7142 */
          bool __h_case_result  = (true  &&  (((match7138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7143 */
                (c  =  (((match7138 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7149 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let7154 */
              // ----------
              ;
              { /* cicili#Block7156 */
                { /* cicili#Block7161 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7165 */
        __auto_type match7164  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let7168 */
          bool __h_case_result  = (true  &&  ((match7164 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7173 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let7178 */
              // ----------
              ;
              { /* cicili#Block7180 */
                { /* cicili#Block7185 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7189 */
        __auto_type match7188  = head_Vector_int (v08 );
        typeof((((match7188 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7192 */
          bool __h_case_result  = (true  &&  (((match7188 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7193 */
                (i  =  (((match7188 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7199 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7204 */
              // ----------
              ;
              { /* cicili#Block7206 */
                { /* cicili#Block7211 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7215 */
        __auto_type match7214  = head_Vector_char (v09 );
        typeof((((match7214 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7218 */
          bool __h_case_result  = (true  &&  (((match7214 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7219 */
                (c  =  (((match7214 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7225 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7230 */
              // ----------
              ;
              { /* cicili#Block7232 */
                { /* cicili#Block7237 */
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
      { /* cicili#Let7241 */
        __auto_type match7240  = nth_Vector_int (1, v08 );
        typeof((((match7240 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7244 */
          bool __h_case_result  = (true  &&  (((match7240 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7245 */
                (i  =  (((match7240 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7251 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7256 */
              // ----------
              ;
              { /* cicili#Block7258 */
                { /* cicili#Block7263 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7267 */
        __auto_type match7266  = nth_Vector_char (2, v09 );
        typeof((((match7266 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7270 */
          bool __h_case_result  = (true  &&  (((match7266 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7271 */
                (c  =  (((match7266 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7277 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7282 */
              // ----------
              ;
              { /* cicili#Block7284 */
                { /* cicili#Block7289 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7293 */
        __auto_type match7292  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let7296 */
          bool __h_case_result  = (true  &&  ((match7292 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7301 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let7306 */
              // ----------
              ;
              { /* cicili#Block7308 */
                { /* cicili#Block7313 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7316 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let7320 */
          __auto_type match7319  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7319 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7323 */
            bool __h_case_result  = (true  &&  (((match7319 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7324 */
                  (unboxed  =  (((match7319 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7330 */
                { /* cicili#Let7334 */
                  // ----------
                  ;
                  ({ /* cicili#Let7336 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7341 */
                        { /* cicili#Block7343 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7348 */
                        // ----------
                        ;
                        { /* cicili#Block7350 */
                          { /* cicili#Block7355 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7360 */
                // ----------
                ;
                ({ /* cicili#Let7362 */
                  bool __h_case_result  = (true  &&  ((match7319 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7367 */
                      { /* cicili#Block7372 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7375 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let7379 */
          __auto_type match7378  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7378 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7382 */
            bool __h_case_result  = (true  &&  (((match7378 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7383 */
                  (unboxed  =  (((match7378 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7389 */
                { /* cicili#Let7393 */
                  // ----------
                  ;
                  ({ /* cicili#Let7395 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7400 */
                        { /* cicili#Block7402 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7407 */
                        // ----------
                        ;
                        { /* cicili#Block7409 */
                          { /* cicili#Block7414 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7419 */
                // ----------
                ;
                ({ /* cicili#Let7421 */
                  bool __h_case_result  = (true  &&  ((match7378 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7426 */
                      { /* cicili#Block7431 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7434 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let7438 */
          __auto_type match7437  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7437 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7441 */
            bool __h_case_result  = (true  &&  (((match7437 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7442 */
                  (unboxed  =  (((match7437 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7448 */
                { /* cicili#Let7452 */
                  // ----------
                  ;
                  ({ /* cicili#Let7454 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7459 */
                        { /* cicili#Block7461 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7466 */
                        // ----------
                        ;
                        { /* cicili#Block7468 */
                          { /* cicili#Block7473 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7478 */
                // ----------
                ;
                ({ /* cicili#Let7480 */
                  bool __h_case_result  = (true  &&  ((match7437 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7485 */
                      { /* cicili#Block7490 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7493 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let7497 */
          __auto_type match7496  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7496 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7500 */
            bool __h_case_result  = (true  &&  (((match7496 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7501 */
                  (unboxed  =  (((match7496 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7507 */
                { /* cicili#Let7511 */
                  // ----------
                  ;
                  ({ /* cicili#Let7513 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7518 */
                        { /* cicili#Block7520 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7525 */
                        // ----------
                        ;
                        { /* cicili#Block7527 */
                          { /* cicili#Block7532 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7537 */
                // ----------
                ;
                ({ /* cicili#Let7539 */
                  bool __h_case_result  = (true  &&  ((match7496 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7544 */
                      { /* cicili#Block7549 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7552 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let7556 */
          __auto_type match7555  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7555 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7559 */
            bool __h_case_result  = (true  &&  (((match7555 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7560 */
                  (unboxed  =  (((match7555 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7566 */
                { /* cicili#Let7570 */
                  // ----------
                  ;
                  ({ /* cicili#Let7572 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7577 */
                        { /* cicili#Block7579 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7584 */
                        // ----------
                        ;
                        { /* cicili#Block7586 */
                          { /* cicili#Block7591 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7596 */
                // ----------
                ;
                ({ /* cicili#Let7598 */
                  bool __h_case_result  = (true  &&  ((match7555 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7603 */
                      { /* cicili#Block7608 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7611 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let7615 */
          __auto_type match7614  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7614 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7618 */
            bool __h_case_result  = (true  &&  (((match7614 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7619 */
                  (unboxed  =  (((match7614 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7625 */
                { /* cicili#Let7629 */
                  // ----------
                  ;
                  ({ /* cicili#Let7631 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7636 */
                        { /* cicili#Block7638 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7643 */
                        // ----------
                        ;
                        { /* cicili#Block7645 */
                          { /* cicili#Block7650 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7655 */
                // ----------
                ;
                ({ /* cicili#Let7657 */
                  bool __h_case_result  = (true  &&  ((match7614 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7662 */
                      { /* cicili#Block7667 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      { /* cicili#Let7671 */
        __auto_type match7670  = last_Vector_int (v03 );
        typeof((((match7670 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let7673 */
          bool __h_case_result  = (true  &&  (((match7670 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7674 */
                (la  =  (((match7670 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7680 */
              printf ("last of v03: %d\n", la );
            }
          else
            { /* cicili#Let7685 */
              // ----------
              ;
              { /* cicili#Block7687 */
                { /* cicili#Block7692 */
                  printf ("status: %d\n", -121);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7696 */
        __auto_type match7695  = last_Vector_char (v05 );
        typeof((((match7695 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let7698 */
          bool __h_case_result  = (true  &&  (((match7695 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7699 */
                (la  =  (((match7695 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7705 */
              printf ("last of v05: %c\n", la );
            }
          else
            { /* cicili#Let7710 */
              // ----------
              ;
              { /* cicili#Block7712 */
                { /* cicili#Block7717 */
                  printf ("status: %d\n", -123);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7720 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let7724 */
          __auto_type match7723  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7723 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7727 */
            bool __h_case_result  = (true  &&  (((match7723 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7728 */
                  (unboxed  =  (((match7723 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7734 */
                { /* cicili#Let7738 */
                  // ----------
                  ;
                  ({ /* cicili#Let7740 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7745 */
                        { /* cicili#Block7747 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7752 */
                        // ----------
                        ;
                        { /* cicili#Block7754 */
                          { /* cicili#Block7759 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7764 */
                // ----------
                ;
                ({ /* cicili#Let7766 */
                  bool __h_case_result  = (true  &&  ((match7723 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7771 */
                      { /* cicili#Block7776 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7779 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let7783 */
          __auto_type match7782  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7782 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7786 */
            bool __h_case_result  = (true  &&  (((match7782 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7787 */
                  (unboxed  =  (((match7782 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7793 */
                { /* cicili#Let7797 */
                  // ----------
                  ;
                  ({ /* cicili#Let7799 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7804 */
                        { /* cicili#Block7806 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7811 */
                        // ----------
                        ;
                        { /* cicili#Block7813 */
                          { /* cicili#Block7818 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7823 */
                // ----------
                ;
                ({ /* cicili#Let7825 */
                  bool __h_case_result  = (true  &&  ((match7782 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7830 */
                      { /* cicili#Block7835 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7838 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let7842 */
          __auto_type match7841  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7841 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7845 */
            bool __h_case_result  = (true  &&  (((match7841 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7846 */
                  (unboxed  =  (((match7841 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7852 */
                { /* cicili#Let7856 */
                  // ----------
                  ;
                  ({ /* cicili#Let7858 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7863 */
                        { /* cicili#Block7865 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7870 */
                        // ----------
                        ;
                        { /* cicili#Block7872 */
                          { /* cicili#Block7877 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7882 */
                // ----------
                ;
                ({ /* cicili#Let7884 */
                  bool __h_case_result  = (true  &&  ((match7841 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7889 */
                      { /* cicili#Block7894 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7897 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let7901 */
          __auto_type match7900  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7900 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7904 */
            bool __h_case_result  = (true  &&  (((match7900 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7905 */
                  (unboxed  =  (((match7900 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7911 */
                { /* cicili#Let7915 */
                  // ----------
                  ;
                  ({ /* cicili#Let7917 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7922 */
                        { /* cicili#Block7924 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7929 */
                        // ----------
                        ;
                        { /* cicili#Block7931 */
                          { /* cicili#Block7936 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7941 */
                // ----------
                ;
                ({ /* cicili#Let7943 */
                  bool __h_case_result  = (true  &&  ((match7900 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7948 */
                      { /* cicili#Block7953 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7956 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7958 */
          __auto_type v033  = ({ /* cicili#Let7961 */
            StringBuffer_int tmp_buf7960  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7960 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7969 */
          __auto_type v055  = ({ /* cicili#Let7972 */
            StringBuffer_char tmp_buf7971  = newCapacity_StringBuffer_char (11, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7971 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7980 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7983 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7986 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7989 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7992 */
          __auto_type v0333  = ({ /* cicili#Let7995 */
            StringBuffer_int tmp_buf7994  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7994 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8003 */
          __auto_type v0555  = ({ /* cicili#Let8006 */
            StringBuffer_char tmp_buf8005  = newCapacity_StringBuffer_char (6, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8005 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8014 */
          __auto_type v0444  = ({ /* cicili#Let8017 */
            StringBuffer_int tmp_buf8016  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8016 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8025 */
          __auto_type v0666  = ({ /* cicili#Let8028 */
            StringBuffer_char tmp_buf8027  = newCapacity_StringBuffer_char (6, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8027 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8036 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8039 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8042 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8045 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8048 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8051 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8054 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8057 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8060 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8063 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8066 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8069 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8072 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let8076 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let8080 */
            __auto_type match8079  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8079 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8083 */
              bool __h_case_result  = (true  &&  (((match8079 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8084 */
                    (unboxed  =  (((match8079 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8090 */
                  { /* cicili#Let8094 */
                    // ----------
                    ;
                    ({ /* cicili#Let8096 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8101 */
                          { /* cicili#Block8103 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8108 */
                          // ----------
                          ;
                          { /* cicili#Block8110 */
                            { /* cicili#Block8115 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8120 */
                  // ----------
                  ;
                  ({ /* cicili#Let8122 */
                    bool __h_case_result  = (true  &&  ((match8079 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8127 */
                        { /* cicili#Block8132 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8135 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let8139 */
            __auto_type match8138  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8138 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8142 */
              bool __h_case_result  = (true  &&  (((match8138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8143 */
                    (unboxed  =  (((match8138 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8149 */
                  { /* cicili#Let8153 */
                    // ----------
                    ;
                    ({ /* cicili#Let8155 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8160 */
                          { /* cicili#Block8162 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8167 */
                          // ----------
                          ;
                          { /* cicili#Block8169 */
                            { /* cicili#Block8174 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8179 */
                  // ----------
                  ;
                  ({ /* cicili#Let8181 */
                    bool __h_case_result  = (true  &&  ((match8138 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8186 */
                        { /* cicili#Block8191 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8194 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let8198 */
            __auto_type match8197  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8197 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8201 */
              bool __h_case_result  = (true  &&  (((match8197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8202 */
                    (unboxed  =  (((match8197 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8208 */
                  { /* cicili#Let8212 */
                    // ----------
                    ;
                    ({ /* cicili#Let8214 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8219 */
                          { /* cicili#Block8221 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8226 */
                          // ----------
                          ;
                          { /* cicili#Block8228 */
                            { /* cicili#Block8233 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8238 */
                  // ----------
                  ;
                  ({ /* cicili#Let8240 */
                    bool __h_case_result  = (true  &&  ((match8197 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8245 */
                        { /* cicili#Block8250 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8253 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let8257 */
            __auto_type match8256  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8256 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8260 */
              bool __h_case_result  = (true  &&  (((match8256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8261 */
                    (unboxed  =  (((match8256 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8267 */
                  { /* cicili#Let8271 */
                    // ----------
                    ;
                    ({ /* cicili#Let8273 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8278 */
                          { /* cicili#Block8280 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8285 */
                          // ----------
                          ;
                          { /* cicili#Block8287 */
                            { /* cicili#Block8292 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8297 */
                  // ----------
                  ;
                  ({ /* cicili#Let8299 */
                    bool __h_case_result  = (true  &&  ((match8256 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8304 */
                        { /* cicili#Block8309 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8312 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let8316 */
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
              
              if (__h_case_result )
                { /* cicili#Block8326 */
                  { /* cicili#Let8330 */
                    // ----------
                    ;
                    ({ /* cicili#Let8332 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8337 */
                          { /* cicili#Block8339 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8344 */
                          // ----------
                          ;
                          { /* cicili#Block8346 */
                            { /* cicili#Block8351 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8356 */
                  // ----------
                  ;
                  ({ /* cicili#Let8358 */
                    bool __h_case_result  = (true  &&  ((match8315 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8363 */
                        { /* cicili#Block8368 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8371 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let8375 */
            __auto_type match8374  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8374 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8378 */
              bool __h_case_result  = (true  &&  (((match8374 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8379 */
                    (unboxed  =  (((match8374 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8385 */
                  { /* cicili#Let8389 */
                    // ----------
                    ;
                    ({ /* cicili#Let8391 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8396 */
                          { /* cicili#Block8398 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8403 */
                          // ----------
                          ;
                          { /* cicili#Block8405 */
                            { /* cicili#Block8410 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8415 */
                  // ----------
                  ;
                  ({ /* cicili#Let8417 */
                    bool __h_case_result  = (true  &&  ((match8374 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8422 */
                        { /* cicili#Block8427 */
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
        ({ /* cicili#Let8430 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let8434 */
            __auto_type match8433  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8433 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8437 */
              bool __h_case_result  = (true  &&  (((match8433 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8438 */
                    (unboxed  =  (((match8433 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8444 */
                  { /* cicili#Let8448 */
                    // ----------
                    ;
                    ({ /* cicili#Let8450 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8455 */
                          { /* cicili#Block8457 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8462 */
                          // ----------
                          ;
                          { /* cicili#Block8464 */
                            { /* cicili#Block8469 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8474 */
                  // ----------
                  ;
                  ({ /* cicili#Let8476 */
                    bool __h_case_result  = (true  &&  ((match8433 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8481 */
                        { /* cicili#Block8486 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8489 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let8493 */
            __auto_type match8492  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8492 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8496 */
              bool __h_case_result  = (true  &&  (((match8492 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8497 */
                    (unboxed  =  (((match8492 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8503 */
                  { /* cicili#Let8507 */
                    // ----------
                    ;
                    ({ /* cicili#Let8509 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8514 */
                          { /* cicili#Block8516 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8521 */
                          // ----------
                          ;
                          { /* cicili#Block8523 */
                            { /* cicili#Block8528 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8533 */
                  // ----------
                  ;
                  ({ /* cicili#Let8535 */
                    bool __h_case_result  = (true  &&  ((match8492 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8540 */
                        { /* cicili#Block8545 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8548 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let8552 */
            __auto_type match8551  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8551 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8555 */
              bool __h_case_result  = (true  &&  (((match8551 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8556 */
                    (unboxed  =  (((match8551 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8562 */
                  { /* cicili#Let8566 */
                    // ----------
                    ;
                    ({ /* cicili#Let8568 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8573 */
                          { /* cicili#Block8575 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8580 */
                          // ----------
                          ;
                          { /* cicili#Block8582 */
                            { /* cicili#Block8587 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8592 */
                  // ----------
                  ;
                  ({ /* cicili#Let8594 */
                    bool __h_case_result  = (true  &&  ((match8551 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8599 */
                        { /* cicili#Block8604 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8607 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let8611 */
            __auto_type match8610  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8610 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8614 */
              bool __h_case_result  = (true  &&  (((match8610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8615 */
                    (unboxed  =  (((match8610 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8621 */
                  { /* cicili#Let8625 */
                    // ----------
                    ;
                    ({ /* cicili#Let8627 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8632 */
                          { /* cicili#Block8634 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8639 */
                          // ----------
                          ;
                          { /* cicili#Block8641 */
                            { /* cicili#Block8646 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8651 */
                  // ----------
                  ;
                  ({ /* cicili#Let8653 */
                    bool __h_case_result  = (true  &&  ((match8610 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8658 */
                        { /* cicili#Block8663 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8666 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let8670 */
            __auto_type match8669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8669 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8673 */
              bool __h_case_result  = (true  &&  (((match8669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8674 */
                    (unboxed  =  (((match8669 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8680 */
                  { /* cicili#Let8684 */
                    // ----------
                    ;
                    ({ /* cicili#Let8686 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8691 */
                          { /* cicili#Block8693 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8698 */
                          // ----------
                          ;
                          { /* cicili#Block8700 */
                            { /* cicili#Block8705 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8710 */
                  // ----------
                  ;
                  ({ /* cicili#Let8712 */
                    bool __h_case_result  = (true  &&  ((match8669 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8717 */
                        { /* cicili#Block8722 */
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
      ({ /* cicili#Let8725 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8727 */
          __auto_type v033  = ({ /* cicili#Let8730 */
            StringBuffer_int tmp_buf8729  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8729 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8738 */
          __auto_type v055  = ({ /* cicili#Let8741 */
            StringBuffer_char tmp_buf8740  = newCapacity_StringBuffer_char (11, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8740 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8749 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8752 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8755 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8758 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8761 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8764 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8767 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8770 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8773 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8776 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8779 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8782 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8785 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8788 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8791 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8794 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8797 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8800 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8803 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8806 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8809 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8812 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8815 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8818 */
          __auto_type vt61  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8821 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8824 */
          __auto_type v461  = resize_Vector_char (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8827 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8830 */
          __auto_type vt101  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8833 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8836 */
          __auto_type v481  = resize_Vector_char (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let8840 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let8844 */
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
              
              if (__h_case_result )
                { /* cicili#Block8854 */
                  { /* cicili#Let8858 */
                    // ----------
                    ;
                    ({ /* cicili#Let8860 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8865 */
                          { /* cicili#Block8867 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8872 */
                          // ----------
                          ;
                          { /* cicili#Block8874 */
                            { /* cicili#Block8879 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8884 */
                  // ----------
                  ;
                  ({ /* cicili#Let8886 */
                    bool __h_case_result  = (true  &&  ((match8843 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8891 */
                        { /* cicili#Block8896 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8899 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let8903 */
            __auto_type match8902  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8902 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8906 */
              bool __h_case_result  = (true  &&  (((match8902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8907 */
                    (unboxed  =  (((match8902 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8913 */
                  { /* cicili#Let8917 */
                    // ----------
                    ;
                    ({ /* cicili#Let8919 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8924 */
                          { /* cicili#Block8926 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8931 */
                          // ----------
                          ;
                          { /* cicili#Block8933 */
                            { /* cicili#Block8938 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8943 */
                  // ----------
                  ;
                  ({ /* cicili#Let8945 */
                    bool __h_case_result  = (true  &&  ((match8902 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8950 */
                        { /* cicili#Block8955 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8958 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let8962 */
            __auto_type match8961  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8961 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8965 */
              bool __h_case_result  = (true  &&  (((match8961 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8966 */
                    (unboxed  =  (((match8961 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8972 */
                  { /* cicili#Let8976 */
                    // ----------
                    ;
                    ({ /* cicili#Let8978 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8983 */
                          { /* cicili#Block8985 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8990 */
                          // ----------
                          ;
                          { /* cicili#Block8992 */
                            { /* cicili#Block8997 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9002 */
                  // ----------
                  ;
                  ({ /* cicili#Let9004 */
                    bool __h_case_result  = (true  &&  ((match8961 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9009 */
                        { /* cicili#Block9014 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9017 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let9021 */
            __auto_type match9020  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9020 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9024 */
              bool __h_case_result  = (true  &&  (((match9020 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9025 */
                    (unboxed  =  (((match9020 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9031 */
                  { /* cicili#Let9035 */
                    // ----------
                    ;
                    ({ /* cicili#Let9037 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9042 */
                          { /* cicili#Block9044 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9049 */
                          // ----------
                          ;
                          { /* cicili#Block9051 */
                            { /* cicili#Block9056 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9061 */
                  // ----------
                  ;
                  ({ /* cicili#Let9063 */
                    bool __h_case_result  = (true  &&  ((match9020 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9068 */
                        { /* cicili#Block9073 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9076 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let9080 */
            __auto_type match9079  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9079 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9083 */
              bool __h_case_result  = (true  &&  (((match9079 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9084 */
                    (unboxed  =  (((match9079 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9090 */
                  { /* cicili#Let9094 */
                    // ----------
                    ;
                    ({ /* cicili#Let9096 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9101 */
                          { /* cicili#Block9103 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9108 */
                          // ----------
                          ;
                          { /* cicili#Block9110 */
                            { /* cicili#Block9115 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9120 */
                  // ----------
                  ;
                  ({ /* cicili#Let9122 */
                    bool __h_case_result  = (true  &&  ((match9079 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9127 */
                        { /* cicili#Block9132 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9135 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let9139 */
            __auto_type match9138  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9138 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9142 */
              bool __h_case_result  = (true  &&  (((match9138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9143 */
                    (unboxed  =  (((match9138 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9149 */
                  { /* cicili#Let9153 */
                    // ----------
                    ;
                    ({ /* cicili#Let9155 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9160 */
                          { /* cicili#Block9162 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9167 */
                          // ----------
                          ;
                          { /* cicili#Block9169 */
                            { /* cicili#Block9174 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9179 */
                  // ----------
                  ;
                  ({ /* cicili#Let9181 */
                    bool __h_case_result  = (true  &&  ((match9138 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9186 */
                        { /* cicili#Block9191 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9194 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let9198 */
            __auto_type match9197  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9197 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9201 */
              bool __h_case_result  = (true  &&  (((match9197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9202 */
                    (unboxed  =  (((match9197 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9208 */
                  { /* cicili#Let9212 */
                    // ----------
                    ;
                    ({ /* cicili#Let9214 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9219 */
                          { /* cicili#Block9221 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9226 */
                          // ----------
                          ;
                          { /* cicili#Block9228 */
                            { /* cicili#Block9233 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9238 */
                  // ----------
                  ;
                  ({ /* cicili#Let9240 */
                    bool __h_case_result  = (true  &&  ((match9197 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9245 */
                        { /* cicili#Block9250 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9253 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let9257 */
            __auto_type match9256  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9256 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9260 */
              bool __h_case_result  = (true  &&  (((match9256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9261 */
                    (unboxed  =  (((match9256 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9267 */
                  { /* cicili#Let9271 */
                    // ----------
                    ;
                    ({ /* cicili#Let9273 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9278 */
                          { /* cicili#Block9280 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9285 */
                          // ----------
                          ;
                          { /* cicili#Block9287 */
                            { /* cicili#Block9292 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9297 */
                  // ----------
                  ;
                  ({ /* cicili#Let9299 */
                    bool __h_case_result  = (true  &&  ((match9256 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9304 */
                        { /* cicili#Block9309 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9312 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let9316 */
            __auto_type match9315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9315 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9319 */
              bool __h_case_result  = (true  &&  (((match9315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9320 */
                    (unboxed  =  (((match9315 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9326 */
                  { /* cicili#Let9330 */
                    // ----------
                    ;
                    ({ /* cicili#Let9332 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9337 */
                          { /* cicili#Block9339 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9344 */
                          // ----------
                          ;
                          { /* cicili#Block9346 */
                            { /* cicili#Block9351 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9356 */
                  // ----------
                  ;
                  ({ /* cicili#Let9358 */
                    bool __h_case_result  = (true  &&  ((match9315 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9363 */
                        { /* cicili#Block9368 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9371 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let9375 */
            __auto_type match9374  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9374 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9378 */
              bool __h_case_result  = (true  &&  (((match9374 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9379 */
                    (unboxed  =  (((match9374 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9385 */
                  { /* cicili#Let9389 */
                    // ----------
                    ;
                    ({ /* cicili#Let9391 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9396 */
                          { /* cicili#Block9398 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9403 */
                          // ----------
                          ;
                          { /* cicili#Block9405 */
                            { /* cicili#Block9410 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9415 */
                  // ----------
                  ;
                  ({ /* cicili#Let9417 */
                    bool __h_case_result  = (true  &&  ((match9374 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9422 */
                        { /* cicili#Block9427 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9430 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let9434 */
            __auto_type match9433  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9433 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9437 */
              bool __h_case_result  = (true  &&  (((match9433 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9438 */
                    (unboxed  =  (((match9433 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9444 */
                  { /* cicili#Let9448 */
                    // ----------
                    ;
                    ({ /* cicili#Let9450 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9455 */
                          { /* cicili#Block9457 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9462 */
                          // ----------
                          ;
                          { /* cicili#Block9464 */
                            { /* cicili#Block9469 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9474 */
                  // ----------
                  ;
                  ({ /* cicili#Let9476 */
                    bool __h_case_result  = (true  &&  ((match9433 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9481 */
                        { /* cicili#Block9486 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9489 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let9493 */
            __auto_type match9492  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9492 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9496 */
              bool __h_case_result  = (true  &&  (((match9492 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9497 */
                    (unboxed  =  (((match9492 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9503 */
                  { /* cicili#Let9507 */
                    // ----------
                    ;
                    ({ /* cicili#Let9509 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9514 */
                          { /* cicili#Block9516 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9521 */
                          // ----------
                          ;
                          { /* cicili#Block9523 */
                            { /* cicili#Block9528 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9533 */
                  // ----------
                  ;
                  ({ /* cicili#Let9535 */
                    bool __h_case_result  = (true  &&  ((match9492 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9540 */
                        { /* cicili#Block9545 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9548 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let9552 */
            __auto_type match9551  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9551 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9555 */
              bool __h_case_result  = (true  &&  (((match9551 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9556 */
                    (unboxed  =  (((match9551 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9562 */
                  { /* cicili#Let9566 */
                    // ----------
                    ;
                    ({ /* cicili#Let9568 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9573 */
                          { /* cicili#Block9575 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9580 */
                          // ----------
                          ;
                          { /* cicili#Block9582 */
                            { /* cicili#Block9587 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9592 */
                  // ----------
                  ;
                  ({ /* cicili#Let9594 */
                    bool __h_case_result  = (true  &&  ((match9551 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9599 */
                        { /* cicili#Block9604 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9607 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let9611 */
            __auto_type match9610  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9610 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9614 */
              bool __h_case_result  = (true  &&  (((match9610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9615 */
                    (unboxed  =  (((match9610 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9621 */
                  { /* cicili#Let9625 */
                    // ----------
                    ;
                    ({ /* cicili#Let9627 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9632 */
                          { /* cicili#Block9634 */
                            printf ("resize 15 v244: ");
                            show_Vector_char (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9639 */
                          // ----------
                          ;
                          { /* cicili#Block9641 */
                            { /* cicili#Block9646 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9651 */
                  // ----------
                  ;
                  ({ /* cicili#Let9653 */
                    bool __h_case_result  = (true  &&  ((match9610 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9658 */
                        { /* cicili#Block9663 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9666 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let9670 */
            __auto_type match9669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9669 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9673 */
              bool __h_case_result  = (true  &&  (((match9669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9674 */
                    (unboxed  =  (((match9669 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9680 */
                  { /* cicili#Let9684 */
                    // ----------
                    ;
                    ({ /* cicili#Let9686 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9691 */
                          { /* cicili#Block9693 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9698 */
                          // ----------
                          ;
                          { /* cicili#Block9700 */
                            { /* cicili#Block9705 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9710 */
                  // ----------
                  ;
                  ({ /* cicili#Let9712 */
                    bool __h_case_result  = (true  &&  ((match9669 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9717 */
                        { /* cicili#Block9722 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9725 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let9729 */
            __auto_type match9728  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9728 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9732 */
              bool __h_case_result  = (true  &&  (((match9728 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9733 */
                    (unboxed  =  (((match9728 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9739 */
                  { /* cicili#Let9743 */
                    // ----------
                    ;
                    ({ /* cicili#Let9745 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9750 */
                          { /* cicili#Block9752 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_Vector_char (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9757 */
                          // ----------
                          ;
                          { /* cicili#Block9759 */
                            { /* cicili#Block9764 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9769 */
                  // ----------
                  ;
                  ({ /* cicili#Let9771 */
                    bool __h_case_result  = (true  &&  ((match9728 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9776 */
                        { /* cicili#Block9781 */
                          printf ("status: %d\n", -179);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9784 */
          __auto_type sliceToSlice  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9786 */
            __auto_type sliceToSlice  = drop_Vector_char (2, v481 );
            // ----------
            ((void)((sliceToSlice . __h_table )-> freeData ));
            sliceToSlice ;
          });
          // ----------
          { /* cicili#Let9792 */
            __auto_type match9791  = iterator_Vector_char (v481 );
            typeof((match9791 . __h_0_mem )) begin ;
            typeof((match9791 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let9795 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9796 */
                    (begin  =  (match9791 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9798 */
                    (end  =  (match9791 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9804 */
                  { /* cicili#Block9806 */
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
          { /* cicili#Let9811 */
            __auto_type match9810  = iterator_Vector_char (sliceToSlice );
            typeof((match9810 . __h_0_mem )) begin ;
            typeof((match9810 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let9814 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9815 */
                    (begin  =  (match9810 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9817 */
                    (end  =  (match9810 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9823 */
                  { /* cicili#Block9825 */
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
        { /* cicili#Let9832 */
          __auto_type __h_cloned9829  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v211 )-> __h_table -> clone )(v211 );
          // ----------
          ({ /* cicili#Let9836 */
            __auto_type __h_matchbox  = __h_cloned9829 ;
            // ----------
            { /* cicili#Let9840 */
              __auto_type match9839  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match9839 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let9843 */
                bool __h_case_result  = (true  &&  (((match9839 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9844 */
                      (unboxed  =  (((match9839 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block9850 */
                    { /* cicili#Let9854 */
                      __auto_type __h_cloned_x9830  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block9856 */
                        { /* cicili#Let9858 */
                          __auto_type __h_iterator9831  = (__h_cloned_x9830 -> __h_table -> iterator )(__h_cloned9829 );
                          // ----------
                          { /* cicili#Let9863 */
                            typeof((__h_iterator9831 . __h_0_mem )) beg ;
                            typeof((__h_iterator9831 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let9865 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9866 */
                                    (beg  =  (__h_iterator9831 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn9868 */
                                    (end  =  (__h_iterator9831 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block9874 */
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
        { /* cicili#Let9881 */
          __auto_type __h_cloned9878  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v222 )-> __h_table -> clone )(v222 );
          // ----------
          ({ /* cicili#Let9885 */
            __auto_type __h_matchbox  = __h_cloned9878 ;
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
                      __auto_type __h_cloned_x9879  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block9905 */
                        { /* cicili#Let9907 */
                          __auto_type __h_iterator9880  = (__h_cloned_x9879 -> __h_table -> iterator )(__h_cloned9878 );
                          // ----------
                          { /* cicili#Let9912 */
                            typeof((__h_iterator9880 . __h_0_mem )) beg ;
                            typeof((__h_iterator9880 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let9914 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9915 */
                                    (beg  =  (__h_iterator9880 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn9917 */
                                    (end  =  (__h_iterator9880 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block9923 */
                                  { /* cicili#Block9925 */
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
      });
    }
  });
}
