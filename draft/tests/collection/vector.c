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
typedef struct cicili_s0X_X0AcvrgoijFt0lbwwOqG_8_ {
  Vector_int_pointer_t __h_0_mem ;
  Vector_int_pointer_t __h_1_mem ;
} cicili_s0X_X0AcvrgoijFt0lbwwOqG_8_;
typedef cicili_s0X_X0AcvrgoijFt0lbwwOqG_8_ Vector_int_iterator_t ;
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
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let761 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block767 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let772 */
            // ----------
            ;
            ({ /* cicili#Progn774 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let782 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let784 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn785 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn787 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn789 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn794 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let801 */
            // ----------
            ;
            ({ /* cicili#Progn803 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
  { /* cicili#Let812 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let814 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn815 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn817 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn819 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block825 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block828 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block836 */
                if ((*count ) ==  1 )
                  { /* cicili#Block839 */
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
        { /* cicili#Let849 */
          // ----------
          ;
          ({ /* cicili#Let851 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block856 */
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
  { /* cicili#Let867 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
  { /* cicili#Let872 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int_iterator_t iterator_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let879 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let883 */
        __auto_type match882  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match882 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let886 */
          bool __h_case_result  = (true  &&  (((match882 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn887 */
                (unboxed  =  (((match882 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn892 */
              ({ /* cicili#Let896 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let898 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn899 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn904 */
                      ({ /* cicili#Let908 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let910 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn911 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn913 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn918 */
                              ((Vector_int_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let923 */
                              // ----------
                              ;
                              ({ /* cicili#Progn925 */
                                ((Vector_int_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let930 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let932 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn933 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn935 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn937 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn942 */
                            ({ /* cicili#Let944 */
                              Vector_int_iterator_t iter  = iterator_Vector_int (vec );
                              // ----------
                              ({ /* cicili#Let950 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let952 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn953 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn958 */
                                      ((Vector_int_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let963 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn965 */
                                        ((Vector_int_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let970 */
                            // ----------
                            ;
                            ({ /* cicili#Progn972 */
                              ((Vector_int_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let977 */
              // ----------
              ;
              ({ /* cicili#Progn979 */
                ((Vector_int_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
  return ({ /* cicili#Let985 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let989 */
        __auto_type match988  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match988 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let992 */
          bool __h_case_result  = (true  &&  (((match988 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn993 */
                (unboxed  =  (((match988 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn998 */
              ({ /* cicili#Let1002 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1004 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1005 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1010 */
                      ({ /* cicili#Progn1012 */
                        { /* cicili#Let1016 */
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
                            
                            if (__h_case_result )
                              { /* cicili#Block1026 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (resize_StringBuffer_int (sb , len ));
                      });
                    }) : ({ /* cicili#Let1032 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1034 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1035 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1037 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1042 */
                            ({ /* cicili#Let1045 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1049 */
                                __auto_type match1048  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1048 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1052 */
                                  bool __h_case_result  = (true  &&  (((match1048 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1053 */
                                        (unboxed  =  (((match1048 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1058 */
                                      ({ /* cicili#Let1062 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1064 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1065 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1070 */
                                              ({ /* cicili#Let1074 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1076 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1077 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1079 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1084 */
                                                      ({ /* cicili#Let1086 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1094 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1096 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1101 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1103 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1104 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1109 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1114 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1116 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1121 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1123 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1128 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1130 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1135 */
              // ----------
              ;
              ({ /* cicili#Progn1137 */
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
  return ({ /* cicili#Let1150 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1154 */
        __auto_type match1153  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1153 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1157 */
          bool __h_case_result  = (true  &&  (((match1153 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1158 */
                (unboxed  =  (((match1153 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1163 */
              ({ /* cicili#Let1167 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1169 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1170 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1175 */
                      ({ /* cicili#Let1179 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1181 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1182 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1187 */
                              buffer ;
                            }) : ({ /* cicili#Let1191 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1193 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1197 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1199 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1200 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1202 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1207 */
                            ({ /* cicili#Let1210 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1214 */
                                __auto_type match1213  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1213 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1217 */
                                  bool __h_case_result  = (true  &&  (((match1213 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1218 */
                                        (unboxed  =  (((match1213 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1223 */
                                      ({ /* cicili#Let1227 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1229 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1230 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1235 */
                                              ({ /* cicili#Let1239 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1241 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1242 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1247 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1251 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1253 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1257 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1259 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1260 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1262 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1267 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1272 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1274 */
                                                      NULL ;
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
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1284 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1286 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1290 */
              // ----------
              ;
              ({ /* cicili#Progn1292 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
  return ({ /* cicili#Let1297 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1299 */
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
    return ({ /* cicili#Let1309 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1313 */
          __auto_type match1312  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1312 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1316 */
            bool __h_case_result  = (true  &&  (((match1312 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1317 */
                  (unboxed  =  (((match1312 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1322 */
                ({ /* cicili#Let1326 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1328 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1329 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1334 */
                        ({ /* cicili#Let1338 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1340 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1341 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1346 */
                                ({ /* cicili#Let1348 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1359 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1361 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1365 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1367 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1368 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1370 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1372 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1377 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1381 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1383 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1387 */
                // ----------
                ;
                ({ /* cicili#Progn1389 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
    return ({ /* cicili#Let1393 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1397 */
          __auto_type match1396  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1396 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1400 */
            bool __h_case_result  = (true  &&  (((match1396 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1401 */
                  (unboxed  =  (((match1396 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1406 */
                ({ /* cicili#Let1410 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1412 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1413 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1418 */
                        ({ /* cicili#Let1422 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1424 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1425 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1427 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1432 */
                                ({ /* cicili#Let1434 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1445 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1447 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1451 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1453 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1454 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1456 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1458 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1463 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1467 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1469 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1473 */
                // ----------
                ;
                ({ /* cicili#Progn1475 */
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
  return ({ /* cicili#Let1480 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1484 */
        __auto_type match1483  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1483 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1487 */
          bool __h_case_result  = (true  &&  (((match1483 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1488 */
                (unboxed  =  (((match1483 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1493 */
              ({ /* cicili#Let1497 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1499 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1500 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1505 */
                      ({ /* cicili#Let1509 */
                        // ----------
                        ;
                        ({ /* cicili#Let1511 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1515 */
                              Buffer_int (copy_StringBuffer_int (sb ));
                            }) : ({ /* cicili#Let1521 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1523 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1528 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1530 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1531 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1533 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1535 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1540 */
                            ({ /* cicili#Let1543 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1547 */
                                __auto_type match1546  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1546 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1550 */
                                  bool __h_case_result  = (true  &&  (((match1546 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1551 */
                                        (unboxed  =  (((match1546 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1556 */
                                      ({ /* cicili#Let1560 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1562 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1563 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1568 */
                                              ({ /* cicili#Let1572 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1574 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1578 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1584 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1586 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1591 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1593 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1594 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1599 */
                                                    copySlice_Vector_int (veci , cur , size );
                                                  }) : ({ /* cicili#Let1604 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1606 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1611 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1613 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
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
              // ----------
              ;
              ({ /* cicili#Progn1627 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let1633 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1637 */
        __auto_type match1636  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1636 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1640 */
          bool __h_case_result  = (true  &&  (((match1636 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1641 */
                (unboxed  =  (((match1636 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1646 */
              ({ /* cicili#Let1650 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1652 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1653 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1658 */
                      ({ /* cicili#Let1662 */
                        // ----------
                        ;
                        ({ /* cicili#Let1664 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1668 */
                              Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                            }) : ({ /* cicili#Let1674 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1676 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1681 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1683 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1684 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1686 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1691 */
                            ({ /* cicili#Let1694 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1698 */
                                __auto_type match1697  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1697 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1701 */
                                  bool __h_case_result  = (true  &&  (((match1697 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1702 */
                                        (unboxed  =  (((match1697 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1707 */
                                      ({ /* cicili#Let1711 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1713 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1714 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1719 */
                                              ({ /* cicili#Let1723 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1725 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1729 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let1735 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1737 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1742 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1744 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1745 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1750 */
                                                    copySlice_Vector_int (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let1755 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1757 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1762 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1764 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1769 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1771 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1776 */
              // ----------
              ;
              ({ /* cicili#Progn1778 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let1784 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1788 */
        __auto_type match1787  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1787 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1791 */
          bool __h_case_result  = (true  &&  (((match1787 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1792 */
                (unboxed  =  (((match1787 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1797 */
              ({ /* cicili#Let1801 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1803 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1804 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1809 */
                      ({ /* cicili#Progn1811 */
                        { /* cicili#Let1815 */
                          __auto_type match1814  = take_Box_Vector_int ((&vector ));
                          typeof((((match1814 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let1818 */
                            bool __h_case_result  = (true  &&  (((match1814 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1819 */
                                  (ptr  =  (((match1814 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block1825 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let1829 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1831 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1832 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1834 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1839 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn1842 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_int (sb );
                                  }) : Buffer_int (sb ));
                              }) : ({ /* cicili#Let1848 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1850 */
                                  clone_Box_Vector_int (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let1855 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1857 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1858 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1860 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1862 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1867 */
                            ({ /* cicili#Let1870 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1874 */
                                __auto_type match1873  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1873 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1877 */
                                  bool __h_case_result  = (true  &&  (((match1873 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1878 */
                                        (unboxed  =  (((match1873 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1883 */
                                      ({ /* cicili#Let1887 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1889 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1890 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1895 */
                                              ({ /* cicili#Let1899 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1901 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1902 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1904 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1909 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let1912 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let1922 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1924 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1929 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1931 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1932 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1937 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let1942 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1944 */
                                                      clone_Box_Vector_int (vec );
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
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1956 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1958 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1963 */
              // ----------
              ;
              ({ /* cicili#Progn1965 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
  return ({ /* cicili#Let1971 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1975 */
        __auto_type match1974  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1974 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1978 */
          bool __h_case_result  = (true  &&  (((match1974 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1979 */
                (unboxed  =  (((match1974 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1984 */
              ({ /* cicili#Let1988 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1990 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1991 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1996 */
                      ({ /* cicili#Progn1998 */
                        { /* cicili#Let2002 */
                          __auto_type match2001  = take_Box_Vector_int ((&vector ));
                          typeof((((match2001 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2005 */
                            bool __h_case_result  = (true  &&  (((match2001 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2006 */
                                  (ptr  =  (((match2001 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2012 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2016 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let2018 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2019 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn2021 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn2023 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2025 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2030 */
                                ({ /* cicili#Progn2032 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let2040 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2042 */
                                  clone_Box_Vector_int (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2047 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2049 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2050 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2052 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2054 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2059 */
                            ({ /* cicili#Let2062 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2066 */
                                __auto_type match2065  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2065 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2069 */
                                  bool __h_case_result  = (true  &&  (((match2065 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2070 */
                                        (unboxed  =  (((match2065 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2075 */
                                      ({ /* cicili#Let2079 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2081 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2082 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2087 */
                                              ({ /* cicili#Let2091 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2093 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2094 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2096 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2101 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2104 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2113 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2115 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2120 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2122 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2123 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2128 */
                                                    deleteAt_Vector_int (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2133 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2135 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2140 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2142 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2147 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2149 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2154 */
              // ----------
              ;
              ({ /* cicili#Progn2156 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2162 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2166 */
        __auto_type match2165  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2165 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2169 */
          bool __h_case_result  = (true  &&  (((match2165 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2170 */
                (unboxed  =  (((match2165 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2175 */
              ({ /* cicili#Let2179 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2181 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2182 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2187 */
                      ({ /* cicili#Let2189 */
                        StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                        // ----------
                        { /* cicili#Let2195 */
                          __auto_type match2194  = take_Box_Vector_int ((&vector ));
                          typeof((((match2194 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2198 */
                            bool __h_case_result  = (true  &&  (((match2194 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2199 */
                                  (ptr  =  (((match2194 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2205 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let2209 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let2211 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2212 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2214 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2219 */
                                ({ /* cicili#Progn2221 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_int (new_sb );
                                });
                              }) : ({ /* cicili#Let2228 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2230 */
                                  clone_Box_Vector_int (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let2235 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2237 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2238 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2240 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2242 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2247 */
                            ({ /* cicili#Let2250 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2254 */
                                __auto_type match2253  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2253 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2257 */
                                  bool __h_case_result  = (true  &&  (((match2253 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2258 */
                                        (unboxed  =  (((match2253 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2263 */
                                      ({ /* cicili#Let2267 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2269 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2270 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2275 */
                                              ({ /* cicili#Let2279 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2281 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2282 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2284 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2289 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2292 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2302 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2304 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2309 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2311 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2312 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2317 */
                                                    insertAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2322 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2324 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2329 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2331 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2336 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2338 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2343 */
              // ----------
              ;
              ({ /* cicili#Progn2345 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2351 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2355 */
        __auto_type match2354  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2354 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2358 */
          bool __h_case_result  = (true  &&  (((match2354 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2359 */
                (unboxed  =  (((match2354 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2364 */
              ({ /* cicili#Let2368 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2370 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2371 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2376 */
                      ({ /* cicili#Let2380 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2382 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2383 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2385 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2387 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2389 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2394 */
                              ({ /* cicili#Let2396 */
                                int tmp ;
                                // ----------
                                { /* cicili#Let2400 */
                                  __auto_type match2399  = take_Box_Vector_int ((&vector ));
                                  typeof((((match2399 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2403 */
                                    bool __h_case_result  = (true  &&  (((match2399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2404 */
                                          (ptr  =  (((match2399 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2410 */
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
                            }) : ({ /* cicili#Let2418 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2420 */
                                clone_Box_Vector_int (vector );
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2425 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2427 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2428 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2430 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2432 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2437 */
                            ({ /* cicili#Let2440 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2444 */
                                __auto_type match2443  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2443 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2447 */
                                  bool __h_case_result  = (true  &&  (((match2443 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2448 */
                                        (unboxed  =  (((match2443 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2453 */
                                      ({ /* cicili#Let2457 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2459 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2460 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2465 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
                                            }) : ({ /* cicili#Let2472 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2474 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2475 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2480 */
                                                    reverse_Vector_int (copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2486 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2488 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2493 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2495 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2500 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2502 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2507 */
              // ----------
              ;
              ({ /* cicili#Progn2509 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
  return ({ /* cicili#Let2515 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2519 */
        __auto_type match2518  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2518 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2522 */
          bool __h_case_result  = (true  &&  (((match2518 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2523 */
                (unboxed  =  (((match2518 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2528 */
              ({ /* cicili#Let2532 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2534 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2535 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2540 */
                      ({ /* cicili#Progn2542 */
                        { /* cicili#Let2546 */
                          __auto_type match2545  = take_Box_Vector_int ((&lvector ));
                          typeof((((match2545 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2549 */
                            bool __h_case_result  = (true  &&  (((match2545 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2550 */
                                  (ptr  =  (((match2545 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2556 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                      });
                    }) : ({ /* cicili#Let2564 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2566 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2567 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2569 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2571 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2576 */
                            ({ /* cicili#Let2579 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2583 */
                                __auto_type match2582  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2582 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2586 */
                                  bool __h_case_result  = (true  &&  (((match2582 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2587 */
                                        (unboxed  =  (((match2582 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2592 */
                                      ({ /* cicili#Let2596 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2598 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2599 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2604 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2613 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2615 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2616 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2621 */
                                                    append_Vector_int (copySlice_Vector_int (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let2627 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2629 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2634 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2636 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2641 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2643 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2648 */
              // ----------
              ;
              ({ /* cicili#Progn2650 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
  return ({ /* cicili#Let2656 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2660 */
        __auto_type match2659  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2659 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2663 */
          bool __h_case_result  = (true  &&  (((match2659 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2664 */
                (unboxed  =  (((match2659 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2669 */
              ({ /* cicili#Let2673 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2675 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2676 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2681 */
                      ({ /* cicili#Progn2683 */
                        { /* cicili#Let2687 */
                          __auto_type match2686  = take_Box_Vector_int ((&vector ));
                          typeof((((match2686 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let2690 */
                            bool __h_case_result  = (true  &&  (((match2686 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2691 */
                                  (ptr  =  (((match2686 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block2697 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_int (put_StringBuffer_int (sb , item ));
                      });
                    }) : ({ /* cicili#Let2703 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2705 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2706 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2708 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2710 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2715 */
                            ({ /* cicili#Let2718 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2722 */
                                __auto_type match2721  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2721 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2725 */
                                  bool __h_case_result  = (true  &&  (((match2721 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2726 */
                                        (unboxed  =  (((match2721 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2731 */
                                      ({ /* cicili#Let2735 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2737 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2738 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2743 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let2750 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2752 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2753 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2758 */
                                                    push_Vector_int (item , copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2764 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2766 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2771 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2773 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2778 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2780 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2785 */
              // ----------
              ;
              ({ /* cicili#Progn2787 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let2793 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2797 */
        __auto_type match2796  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2796 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2800 */
          bool __h_case_result  = (true  &&  (((match2796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2801 */
                (unboxed  =  (((match2796 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2806 */
              ({ /* cicili#Let2810 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2812 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2813 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2818 */
                      ({ /* cicili#Let2822 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2824 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn2825 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2830 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let2842 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2844 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2850 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2852 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2853 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2855 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2857 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2862 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , len ) : Slice_int (clone_Box_Vector_int (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let2874 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2876 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2881 */
              // ----------
              ;
              ({ /* cicili#Progn2883 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int last_Vector_int (Vector_int vector ) {
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
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let2921 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2922 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2924 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2929 */
                              Just_int ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let2934 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2936 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2941 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2943 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2944 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2946 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2948 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2953 */
                            nth_Vector_int ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let2958 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2960 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2965 */
              // ----------
              ;
              ({ /* cicili#Progn2967 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2973 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2977 */
        __auto_type match2976  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2976 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2980 */
          bool __h_case_result  = (true  &&  (((match2976 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2981 */
                (unboxed  =  (((match2976 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2986 */
              ({ /* cicili#Let2990 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2992 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2993 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2998 */
                      ({ /* cicili#Let3002 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3004 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3005 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3010 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3016 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3018 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3023 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3025 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3026 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3028 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3030 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3035 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3041 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3043 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3048 */
              // ----------
              ;
              ({ /* cicili#Progn3050 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
  return ({ /* cicili#Let3055 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3062 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3066 */
        __auto_type match3065  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3065 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3069 */
          bool __h_case_result  = (true  &&  (((match3065 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3070 */
                (unboxed  =  (((match3065 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3075 */
              ({ /* cicili#Let3079 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3081 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3082 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3087 */
                      ({ /* cicili#Let3091 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3093 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3094 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3099 */
                              cursor ;
                            }) : ({ /* cicili#Let3103 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3105 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3109 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3111 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3112 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3117 */
                            size ;
                          }) : ({ /* cicili#Let3121 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3123 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3127 */
              // ----------
              ;
              ({ /* cicili#Progn3129 */
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
  return ({ /* cicili#Let3137 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3141 */
        __auto_type match3140  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3140 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3144 */
          bool __h_case_result  = (true  &&  (((match3140 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3145 */
                (unboxed  =  (((match3140 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3150 */
              ({ /* cicili#Let3154 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3156 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3157 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3162 */
                      ({ /* cicili#Let3166 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3168 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3169 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3174 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3186 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3188 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3194 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3196 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3197 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3199 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3204 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3209 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3211 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3216 */
              // ----------
              ;
              ({ /* cicili#Progn3218 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3225 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3229 */
        __auto_type match3228  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3228 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3232 */
          bool __h_case_result  = (true  &&  (((match3228 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3233 */
                (unboxed  =  (((match3228 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3238 */
              ({ /* cicili#Let3242 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3244 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3245 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3250 */
                      ({ /* cicili#Let3254 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3256 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3257 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3259 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3264 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3271 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3273 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3278 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3280 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3281 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3283 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3288 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3293 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3295 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3300 */
              // ----------
              ;
              ({ /* cicili#Progn3302 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
  return ({ /* cicili#Let3309 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3313 */
        __auto_type match3312  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3312 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3316 */
          bool __h_case_result  = (true  &&  (((match3312 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3317 */
                (unboxed  =  (((match3312 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3322 */
              ({ /* cicili#Let3326 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3328 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3329 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3334 */
                      ({ /* cicili#Let3338 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3340 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3341 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3343 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3348 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3355 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3357 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3362 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3364 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3365 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3367 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3369 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3374 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3381 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3383 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3388 */
              // ----------
              ;
              ({ /* cicili#Progn3390 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
  { /* cicili#Let3395 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3399 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3401 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3402 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3408 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3414 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3416 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3417 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3423 */
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
  { /* cicili#Let3433 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
  { /* cicili#Let3441 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int None_int () {
  { /* cicili#Let3448 */
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
  { /* cicili#Let3466 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
  { /* cicili#Let3471 */
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
  union { /* ciciliUnion3497 */
    struct { /* ciciliStruct3498 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3499 */
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
  union { /* ciciliUnion3544 */
    struct { /* ciciliStruct3545 */
      char * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct3546 */
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
typedef struct cicili7W0IuEfy7bNnoRfLRK4ZtblvPDc_ {
  Vector_char_pointer_t __h_0_mem ;
  Vector_char_pointer_t __h_1_mem ;
} cicili7W0IuEfy7bNnoRfLRK4ZtblvPDc_;
typedef cicili7W0IuEfy7bNnoRfLRK4ZtblvPDc_ Vector_char_iterator_t ;
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
  union { /* ciciliUnion3617 */
    struct { /* ciciliStruct3618 */
      Vector_char_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3619 */
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
  union { /* ciciliUnion3649 */
    struct { /* ciciliStruct3650 */
      Vector_char_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct3651 */
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
  union { /* ciciliUnion3715 */
    struct { /* ciciliStruct3716 */
      StringBuffer_char __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct3717 */
      Vector_char __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct3718 */
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
  union { /* ciciliUnion3824 */
    struct { /* ciciliStruct3825 */
      Vector_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct3826 */
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
  { /* cicili#Let3856 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let3861 */
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
  return ({ /* cicili#Let3874 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3876 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3877 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3879 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3881 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3886 */
            ({ /* cicili#Let3888 */
              char * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(char) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              (*(new_buffer  +  new_cursor  )) = ((char)(*((char *)"\0")));
              MakeStringBuffer_char (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let3893 */
            // ----------
            ;
            ({ /* cicili#Progn3895 */
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
  return ({ /* cicili#Let3906 */
      char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
      StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
      // ----------
      (*buffer ) = ((char)(*((char *)"\0")));
      sb ;
    });
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let3915 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3917 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn3918 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3920 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3922 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3927 */
            ({ /* cicili#Let3929 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_char (new_sb , (buffer  +  pos  ), (cursor  -  pos  )));
            });
          }) : ({ /* cicili#Let3938 */
            // ----------
            ;
            ({ /* cicili#Progn3940 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
  return ({ /* cicili#Let3949 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let3951 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn3952 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn3954 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn3956 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3958 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3963 */
            ({ /* cicili#Let3965 */
              StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step );
              // ----------
              print_StringBuffer_char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let3972 */
            // ----------
            ;
            ({ /* cicili#Progn3974 */
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
              size_t blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block4008 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let4010 */
                    char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              (*(buffer  +  cursor  +  len  )) = ((char)(*((char *)"\0")));
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let4015 */
            // ----------
            ;
            ({ /* cicili#Progn4017 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let4025 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let4027 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4028 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4034 */
          { /* cicili#Block4036 */
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
  { /* cicili#Let4046 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let4051 */
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
  { /* cicili#Let4073 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char_x Nothing_Vector_char_x () {
  { /* cicili#Let4078 */
    Maybe_Vector_char_x instance  = ((Maybe_Vector_char_x){ get_Maybe_Vector_char_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char_x__H_IMPL__ */ 
#ifndef __Box_Vector_char__H_IMPL__
#define __Box_Vector_char__H_IMPL__
Box_Vector_char new_Box_Vector_char (Vector_char_x pointer ) {
  return ({ /* cicili#Let4085 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_char_x *)malloc (sizeof(Vector_char_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_char_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_char clone_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4094 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4096 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4097 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4099 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4101 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4106 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4109 */
                (++(*count ));
                __h_Hold_Vector_char_x (pointer , count , address );
              }) : Gone_Vector_char_x ());
          }) : ({ /* cicili#Let4115 */
            // ----------
            ;
            ({ /* cicili#Progn4117 */
              Gone_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x take_Box_Vector_char (Box_Vector_char * this ) {
  return ({ /* cicili#Let4125 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4127 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4128 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4130 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4132 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4137 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4141 */
                __auto_type result  = Just_Vector_char_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4147 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4152 */
            // ----------
            ;
            ({ /* cicili#Progn4154 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
Maybe_Vector_char_x get_Box_Vector_char (Box_Vector_char rc ) {
  return ({ /* cicili#Let4162 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4164 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4165 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4167 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4169 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4174 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_char_x ((*pointer )) : Nothing_Vector_char_x ());
          }) : ({ /* cicili#Let4181 */
            // ----------
            ;
            ({ /* cicili#Progn4183 */
              Nothing_Vector_char_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_char (Box_Vector_char * this ) {
  { /* cicili#Let4192 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4194 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4195 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4197 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4199 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4205 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4208 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_char_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4216 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4219 */
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
        { /* cicili#Let4229 */
          // ----------
          ;
          ({ /* cicili#Let4231 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4236 */
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
  { /* cicili#Let4247 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_char Gone_Vector_char_x () {
  { /* cicili#Let4252 */
    Box_Vector_char instance  = ((Box_Vector_char){ get_Box_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_char__H_IMPL__ */ 
Vector_char_iterator_t iterator_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let4259 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4263 */
        __auto_type match4262  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4262 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4266 */
          bool __h_case_result  = (true  &&  (((match4262 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4267 */
                (unboxed  =  (((match4262 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4272 */
              ({ /* cicili#Let4276 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4278 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4279 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4284 */
                      ({ /* cicili#Let4288 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let4290 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4291 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4293 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4298 */
                              ((Vector_char_iterator_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let4303 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4305 */
                                ((Vector_char_iterator_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4310 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4312 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4313 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4315 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4317 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4322 */
                            ({ /* cicili#Let4324 */
                              Vector_char_iterator_t iter  = iterator_Vector_char (vec );
                              // ----------
                              ({ /* cicili#Let4330 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let4332 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn4333 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4338 */
                                      ((Vector_char_iterator_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let4343 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4345 */
                                        ((Vector_char_iterator_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4350 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4352 */
                              ((Vector_char_iterator_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4357 */
              // ----------
              ;
              ({ /* cicili#Progn4359 */
                ((Vector_char_iterator_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_char resize_Vector_char (Vector_char vector , size_t len ) {
  return ({ /* cicili#Let4365 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4369 */
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
          
          ((__h_case_result ) ? ({ /* cicili#Progn4378 */
              ({ /* cicili#Let4382 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4384 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4385 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4390 */
                      ({ /* cicili#Progn4392 */
                        { /* cicili#Let4396 */
                          __auto_type match4395  = take_Box_Vector_char ((&vector ));
                          typeof((((match4395 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let4399 */
                            bool __h_case_result  = (true  &&  (((match4395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4400 */
                                  (ptr  =  (((match4395 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block4406 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (resize_StringBuffer_char (sb , len ));
                      });
                    }) : ({ /* cicili#Let4412 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let4414 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4415 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4417 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4422 */
                            ({ /* cicili#Let4425 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4429 */
                                __auto_type match4428  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4428 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4432 */
                                  bool __h_case_result  = (true  &&  (((match4428 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4433 */
                                        (unboxed  =  (((match4428 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4438 */
                                      ({ /* cicili#Let4442 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4444 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4445 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4450 */
                                              ({ /* cicili#Let4454 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4456 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4457 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn4459 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4464 */
                                                      ({ /* cicili#Let4466 */
                                                        StringBuffer_char new_sb  = newCapacity_StringBuffer_char (len , step );
                                                        // ----------
                                                        Buffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let4474 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4476 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4481 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4483 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4484 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4489 */
                                                    resize_Vector_char (veci , len );
                                                  }) : ({ /* cicili#Let4494 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4496 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4501 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4503 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4508 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4510 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4515 */
              // ----------
              ;
              ({ /* cicili#Progn4517 */
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
  return ({ /* cicili#Let4530 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4534 */
        __auto_type match4533  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4533 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4537 */
          bool __h_case_result  = (true  &&  (((match4533 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4538 */
                (unboxed  =  (((match4533 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4543 */
              ({ /* cicili#Let4547 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4549 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4550 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4555 */
                      ({ /* cicili#Let4559 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let4561 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4562 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4567 */
                              buffer ;
                            }) : ({ /* cicili#Let4571 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4573 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4577 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let4579 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4580 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4582 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4587 */
                            ({ /* cicili#Let4590 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let4594 */
                                __auto_type match4593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4593 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4597 */
                                  bool __h_case_result  = (true  &&  (((match4593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4598 */
                                        (unboxed  =  (((match4593 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4603 */
                                      ({ /* cicili#Let4607 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4609 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4610 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4615 */
                                              ({ /* cicili#Let4619 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4621 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4622 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4627 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let4631 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4633 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4637 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4639 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn4640 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4642 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4647 */
                                                    (toArray_Vector_char (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let4652 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4654 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4658 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4660 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4664 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4666 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4670 */
              // ----------
              ;
              ({ /* cicili#Progn4672 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_char wrap_Vector_char (const char item ) {
  return ({ /* cicili#Let4677 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4679 */
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
    return ({ /* cicili#Let4689 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4693 */
          __auto_type match4692  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4692 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4696 */
            bool __h_case_result  = (true  &&  (((match4692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4697 */
                  (unboxed  =  (((match4692 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4702 */
                ({ /* cicili#Let4706 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4708 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4709 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4714 */
                        ({ /* cicili#Let4718 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let4720 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn4721 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4726 */
                                ({ /* cicili#Let4728 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4739 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4741 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4745 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4747 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4748 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4750 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4752 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4757 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4761 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4763 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4767 */
                // ----------
                ;
                ({ /* cicili#Progn4769 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_char vector ) {
    return ({ /* cicili#Let4773 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let4777 */
          __auto_type match4776  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4776 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4780 */
            bool __h_case_result  = (true  &&  (((match4776 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4781 */
                  (unboxed  =  (((match4776 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4786 */
                ({ /* cicili#Let4790 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let4792 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4793 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4798 */
                        ({ /* cicili#Let4802 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let4804 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn4805 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4807 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4812 */
                                ({ /* cicili#Let4814 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let4825 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4827 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4831 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let4833 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4834 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn4836 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn4838 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4843 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let4847 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4849 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4853 */
                // ----------
                ;
                ({ /* cicili#Progn4855 */
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
  return ({ /* cicili#Let4860 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let4864 */
        __auto_type match4863  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4863 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4867 */
          bool __h_case_result  = (true  &&  (((match4863 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4868 */
                (unboxed  =  (((match4863 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4873 */
              ({ /* cicili#Let4877 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let4879 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4880 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4885 */
                      ({ /* cicili#Let4889 */
                        // ----------
                        ;
                        ({ /* cicili#Let4891 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn4895 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let4901 */
                              // ----------
                              ;
                              ({ /* cicili#Progn4903 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let4908 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let4910 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn4911 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4913 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4915 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4920 */
                            ({ /* cicili#Let4923 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let4927 */
                                __auto_type match4926  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match4926 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let4930 */
                                  bool __h_case_result  = (true  &&  (((match4926 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4931 */
                                        (unboxed  =  (((match4926 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4936 */
                                      ({ /* cicili#Let4940 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let4942 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn4943 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn4948 */
                                              ({ /* cicili#Let4952 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let4954 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn4958 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let4964 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn4966 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let4971 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4973 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn4974 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4979 */
                                                    copySlice_Vector_char (veci , cur , size );
                                                  }) : ({ /* cicili#Let4984 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4986 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let4991 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4993 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let4998 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5000 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5005 */
              // ----------
              ;
              ({ /* cicili#Progn5007 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char copySlice_Vector_char (Vector_char vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let5013 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5017 */
        __auto_type match5016  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5016 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5020 */
          bool __h_case_result  = (true  &&  (((match5016 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5021 */
                (unboxed  =  (((match5016 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5026 */
              ({ /* cicili#Let5030 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5032 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5033 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5038 */
                      ({ /* cicili#Let5042 */
                        // ----------
                        ;
                        ({ /* cicili#Let5044 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5048 */
                              Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                            }) : ({ /* cicili#Let5054 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5056 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5061 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let5063 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn5064 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn5066 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5071 */
                            ({ /* cicili#Let5074 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5078 */
                                __auto_type match5077  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5077 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5081 */
                                  bool __h_case_result  = (true  &&  (((match5077 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5082 */
                                        (unboxed  =  (((match5077 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5087 */
                                      ({ /* cicili#Let5091 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5093 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5094 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5099 */
                                              ({ /* cicili#Let5103 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5105 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5109 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let5115 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5117 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5122 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5124 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5125 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5130 */
                                                    copySlice_Vector_char (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let5135 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5137 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5142 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5144 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5149 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5151 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5156 */
              // ----------
              ;
              ({ /* cicili#Progn5158 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char replaceAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let5164 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5168 */
        __auto_type match5167  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5167 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5171 */
          bool __h_case_result  = (true  &&  (((match5167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5172 */
                (unboxed  =  (((match5167 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5177 */
              ({ /* cicili#Let5181 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5183 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5184 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5189 */
                      ({ /* cicili#Progn5191 */
                        { /* cicili#Let5195 */
                          __auto_type match5194  = take_Box_Vector_char ((&vector ));
                          typeof((((match5194 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5198 */
                            bool __h_case_result  = (true  &&  (((match5194 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5199 */
                                  (ptr  =  (((match5194 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5205 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5209 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5211 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5212 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5214 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5219 */
                                (((index  <  cursor  )) ? ({ /* cicili#Progn5222 */
                                    (*(buffer  +  index  )) = item ;
                                    Buffer_char (sb );
                                  }) : Buffer_char (sb ));
                              }) : ({ /* cicili#Let5228 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5230 */
                                  clone_Box_Vector_char (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5235 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5237 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5238 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5240 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5242 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5247 */
                            ({ /* cicili#Let5250 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5254 */
                                __auto_type match5253  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5253 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5257 */
                                  bool __h_case_result  = (true  &&  (((match5253 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5258 */
                                        (unboxed  =  (((match5253 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5263 */
                                      ({ /* cicili#Let5267 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5269 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5270 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5275 */
                                              ({ /* cicili#Let5279 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5281 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5282 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5284 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5289 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5292 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char (size , step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5302 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5304 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5309 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5311 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5312 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5317 */
                                                    replaceAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5322 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5324 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5329 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5331 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5336 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5338 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5343 */
              // ----------
              ;
              ({ /* cicili#Progn5345 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char deleteAt_Vector_char (Vector_char vector , size_t index ) {
  return ({ /* cicili#Let5351 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5355 */
        __auto_type match5354  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5354 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5358 */
          bool __h_case_result  = (true  &&  (((match5354 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5359 */
                (unboxed  =  (((match5354 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5364 */
              ({ /* cicili#Let5368 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5370 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5371 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5376 */
                      ({ /* cicili#Progn5378 */
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
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                          typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                          // ----------
                          ;
                          ({ /* cicili#Let5398 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5399 */
                                        (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5401 */
                                        (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                        true ;
                                      }) ) &&  ({ /* cicili#Progn5403 */
                                      (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5405 */
                                    (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5410 */
                                ({ /* cicili#Progn5412 */
                                  for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                  }
                                  Buffer_char (MakeStringBuffer_char (buffer , (cursor  -  1 ), size , step ));
                                });
                              }) : ({ /* cicili#Let5420 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5422 */
                                  clone_Box_Vector_char (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5427 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5429 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5430 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5432 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5434 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5439 */
                            ({ /* cicili#Let5442 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5446 */
                                __auto_type match5445  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5445 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5449 */
                                  bool __h_case_result  = (true  &&  (((match5445 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5450 */
                                        (unboxed  =  (((match5445 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5455 */
                                      ({ /* cicili#Let5459 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5461 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5462 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5467 */
                                              ({ /* cicili#Let5471 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5473 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5474 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5476 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5481 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5484 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5493 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5495 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5500 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5502 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5503 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5508 */
                                                    deleteAt_Vector_char (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5513 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5515 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5520 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5522 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5527 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5529 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5534 */
              // ----------
              ;
              ({ /* cicili#Progn5536 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char insertAt_Vector_char (Vector_char vector , char item , size_t index ) {
  return ({ /* cicili#Let5542 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5546 */
        __auto_type match5545  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5545 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5549 */
          bool __h_case_result  = (true  &&  (((match5545 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5550 */
                (unboxed  =  (((match5545 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5555 */
              ({ /* cicili#Let5559 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5561 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5562 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5567 */
                      ({ /* cicili#Let5569 */
                        StringBuffer_char new_sb  = put_StringBuffer_char (sb , item );
                        // ----------
                        { /* cicili#Let5575 */
                          __auto_type match5574  = take_Box_Vector_char ((&vector ));
                          typeof((((match5574 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5578 */
                            bool __h_case_result  = (true  &&  (((match5574 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5579 */
                                  (ptr  =  (((match5574 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5585 */
                                free (ptr );
                              }
                          });
                        }
                        ({ /* cicili#Let5589 */
                          typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let5591 */
                            bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5592 */
                                    (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn5594 */
                                    (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5599 */
                                ({ /* cicili#Progn5601 */
                                  for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                      (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                  }
                                  (*(buffer  +  index  )) = item ;
                                  Buffer_char (new_sb );
                                });
                              }) : ({ /* cicili#Let5608 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5610 */
                                  clone_Box_Vector_char (vector );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5615 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5617 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5618 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5620 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5622 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5627 */
                            ({ /* cicili#Let5630 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5634 */
                                __auto_type match5633  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5633 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5637 */
                                  bool __h_case_result  = (true  &&  (((match5633 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5638 */
                                        (unboxed  =  (((match5633 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5643 */
                                      ({ /* cicili#Let5647 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5649 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5650 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5655 */
                                              ({ /* cicili#Let5659 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5661 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn5662 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn5664 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5669 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let5672 */
                                                          StringBuffer_char new_sb  = newCapacity_StringBuffer_char ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_char (print_StringBuffer_char (put_StringBuffer_char (print_StringBuffer_char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let5682 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5684 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5689 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5691 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5692 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5697 */
                                                    insertAt_Vector_char (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let5702 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5704 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5709 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5711 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5716 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5718 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5723 */
              // ----------
              ;
              ({ /* cicili#Progn5725 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char reverse_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let5731 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let5735 */
        __auto_type match5734  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5734 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5738 */
          bool __h_case_result  = (true  &&  (((match5734 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5739 */
                (unboxed  =  (((match5734 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5744 */
              ({ /* cicili#Let5748 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5750 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5751 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5756 */
                      ({ /* cicili#Let5760 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let5762 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn5763 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn5765 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn5767 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn5769 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5774 */
                              ({ /* cicili#Let5776 */
                                char tmp ;
                                // ----------
                                { /* cicili#Let5780 */
                                  __auto_type match5779  = take_Box_Vector_char ((&vector ));
                                  typeof((((match5779 . __h_data ). Just ). __h_0_mem )) ptr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5783 */
                                    bool __h_case_result  = (true  &&  (((match5779 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5784 */
                                          (ptr  =  (((match5779 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block5790 */
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
                            }) : ({ /* cicili#Let5798 */
                              // ----------
                              ;
                              ({ /* cicili#Progn5800 */
                                clone_Box_Vector_char (vector );
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5805 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5807 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5808 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5810 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5812 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5817 */
                            ({ /* cicili#Let5820 */
                              __auto_type __h_matchbox  = vec ;
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
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5839 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5840 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5845 */
                                              reverse_Vector_char (Buffer_char (copySlice_StringBuffer_char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let5852 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5854 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5855 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5860 */
                                                    reverse_Vector_char (copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let5866 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5868 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let5873 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5875 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let5880 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5882 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5887 */
              // ----------
              ;
              ({ /* cicili#Progn5889 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char append_Vector_char (Vector_char lvector , Vector_char rvector ) {
  return ({ /* cicili#Let5895 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let5899 */
        __auto_type match5898  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5898 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5902 */
          bool __h_case_result  = (true  &&  (((match5898 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5903 */
                (unboxed  =  (((match5898 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5908 */
              ({ /* cicili#Let5912 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let5914 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5915 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5920 */
                      ({ /* cicili#Progn5922 */
                        { /* cicili#Let5926 */
                          __auto_type match5925  = take_Box_Vector_char ((&lvector ));
                          typeof((((match5925 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let5929 */
                            bool __h_case_result  = (true  &&  (((match5925 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5930 */
                                  (ptr  =  (((match5925 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block5936 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (print_StringBuffer_char (sb , toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                      });
                    }) : ({ /* cicili#Let5944 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let5946 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn5947 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5949 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn5951 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5956 */
                            ({ /* cicili#Let5959 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let5963 */
                                __auto_type match5962  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match5962 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let5966 */
                                  bool __h_case_result  = (true  &&  (((match5962 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5967 */
                                        (unboxed  =  (((match5962 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5972 */
                                      ({ /* cicili#Let5976 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5978 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn5979 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5984 */
                                              Buffer_char (print_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), toArray_Vector_char (rvector ), len_Vector_char (rvector )));
                                            }) : ({ /* cicili#Let5993 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5995 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn5996 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6001 */
                                                    append_Vector_char (copySlice_Vector_char (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let6007 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6009 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6014 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6016 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6021 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6023 */
                              clone_Box_Vector_char (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6028 */
              // ----------
              ;
              ({ /* cicili#Progn6030 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char push_Vector_char (char item , Vector_char vector ) {
  return ({ /* cicili#Let6036 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6040 */
        __auto_type match6039  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6039 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6043 */
          bool __h_case_result  = (true  &&  (((match6039 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6044 */
                (unboxed  =  (((match6039 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6049 */
              ({ /* cicili#Let6053 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6055 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6056 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6061 */
                      ({ /* cicili#Progn6063 */
                        { /* cicili#Let6067 */
                          __auto_type match6066  = take_Box_Vector_char ((&vector ));
                          typeof((((match6066 . __h_data ). Just ). __h_0_mem )) ptr ;
                          // ----------
                          ;
                          ({ /* cicili#Let6070 */
                            bool __h_case_result  = (true  &&  (((match6066 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6071 */
                                  (ptr  =  (((match6066 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            if (__h_case_result )
                              { /* cicili#Block6077 */
                                free (ptr );
                              }
                          });
                        }
                        Buffer_char (put_StringBuffer_char (sb , item ));
                      });
                    }) : ({ /* cicili#Let6083 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6085 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6086 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6088 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6090 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6095 */
                            ({ /* cicili#Let6098 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let6102 */
                                __auto_type match6101  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match6101 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let6105 */
                                  bool __h_case_result  = (true  &&  (((match6101 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6106 */
                                        (unboxed  =  (((match6101 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6111 */
                                      ({ /* cicili#Let6115 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6117 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6118 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6123 */
                                              Buffer_char (put_StringBuffer_char (copySlice_StringBuffer_char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let6130 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6132 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6133 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6138 */
                                                    push_Vector_char (item , copySlice_Vector_char (veci , cur , size ));
                                                  }) : ({ /* cicili#Let6144 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6146 */
                                                      clone_Box_Vector_char (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let6151 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6153 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let6158 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6160 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6165 */
              // ----------
              ;
              ({ /* cicili#Progn6167 */
                None_char ();
              });
            }));
        });
      });
    });
}
Vector_char take_Vector_char (size_t len , Vector_char vector ) {
  return ({ /* cicili#Let6173 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6177 */
        __auto_type match6176  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6176 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6180 */
          bool __h_case_result  = (true  &&  (((match6176 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6181 */
                (unboxed  =  (((match6176 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6186 */
              ({ /* cicili#Let6190 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6192 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6193 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6198 */
                      ({ /* cicili#Let6202 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6204 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6205 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6210 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), 0, len ) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6222 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6224 */
                                Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6230 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6232 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6233 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6235 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6237 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6242 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , 0) : (((len  <  size  )) ? Slice_char (clone_Box_Vector_char (vec ), cursor , len ) : Slice_char (clone_Box_Vector_char (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let6254 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6256 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6261 */
              // ----------
              ;
              ({ /* cicili#Progn6263 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char last_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6270 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6274 */
        __auto_type match6273  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6273 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6277 */
          bool __h_case_result  = (true  &&  (((match6273 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6278 */
                (unboxed  =  (((match6273 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6283 */
              ({ /* cicili#Let6287 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6289 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6290 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6295 */
                      ({ /* cicili#Let6299 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6301 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6302 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6304 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6309 */
                              Just_char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let6314 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6316 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6321 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6323 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6324 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6326 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6328 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6333 */
                            nth_Vector_char ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let6338 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6340 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6345 */
              // ----------
              ;
              ({ /* cicili#Progn6347 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Vector_char init_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6353 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6357 */
        __auto_type match6356  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6356 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6360 */
          bool __h_case_result  = (true  &&  (((match6356 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6361 */
                (unboxed  =  (((match6356 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6366 */
              ({ /* cicili#Let6370 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6372 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6373 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6378 */
                      ({ /* cicili#Let6382 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6384 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6385 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6390 */
                              Slice_char (clone_Box_Vector_char (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let6396 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6398 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6403 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6405 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6406 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6408 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6410 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6415 */
                            Slice_char (clone_Box_Vector_char (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let6421 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6423 */
                              clone_Box_Vector_char (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6428 */
              // ----------
              ;
              ({ /* cicili#Progn6430 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_char (Vector_char vector , size_t desired ) {
  return ({ /* cicili#Let6435 */
      size_t len  = len_Vector_char (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_char (Vector_char vector ) {
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
                              cursor ;
                            }) : ({ /* cicili#Let6483 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6485 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6489 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6491 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6492 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6497 */
                            size ;
                          }) : ({ /* cicili#Let6501 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6503 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6507 */
              // ----------
              ;
              ({ /* cicili#Progn6509 */
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
  return ({ /* cicili#Let6517 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6521 */
        __auto_type match6520  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6520 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6524 */
          bool __h_case_result  = (true  &&  (((match6520 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6525 */
                (unboxed  =  (((match6520 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6530 */
              ({ /* cicili#Let6534 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6536 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6537 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6542 */
                      ({ /* cicili#Let6546 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6548 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn6549 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6554 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Vector_char (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Vector_char (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Vector_char (vector ), 0, 0)));
                            }) : ({ /* cicili#Let6566 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6568 */
                                Slice_char (clone_Box_Vector_char (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6574 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6576 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6577 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6579 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6584 */
                            drop_Vector_char ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let6589 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6591 */
                              clone_Box_Vector_char (vector );
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
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Vector_char (Vector_char vector ) {
  return ({ /* cicili#Let6605 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6609 */
        __auto_type match6608  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6608 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6612 */
          bool __h_case_result  = (true  &&  (((match6608 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6613 */
                (unboxed  =  (((match6608 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6618 */
              ({ /* cicili#Let6622 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6624 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6625 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6630 */
                      ({ /* cicili#Let6634 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6636 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6637 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6639 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6644 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let6651 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6653 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6658 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let6660 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn6661 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn6663 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6668 */
                            nth_Vector_char (cursor , vector );
                          }) : ({ /* cicili#Let6673 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6675 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6680 */
              // ----------
              ;
              ({ /* cicili#Progn6682 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Vector_char (size_t index , Vector_char vector ) {
  return ({ /* cicili#Let6689 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let6693 */
        __auto_type match6692  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6692 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6696 */
          bool __h_case_result  = (true  &&  (((match6692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6697 */
                (unboxed  =  (((match6692 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6702 */
              ({ /* cicili#Let6706 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let6708 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6709 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6714 */
                      ({ /* cicili#Let6718 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let6720 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn6721 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6723 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6728 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let6735 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6737 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6742 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let6744 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn6745 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6747 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn6749 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6754 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_char ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let6761 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6763 */
                              Nothing_char ();
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
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Vector_char_x (Vector_char_x * this_ptr ) {
  { /* cicili#Let6775 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6779 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let6781 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn6782 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6788 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let6794 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let6796 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn6797 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6803 */
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
  { /* cicili#Let6813 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char Slice_char (Vector_char vector , size_t cursor , size_t size ) {
  { /* cicili#Let6821 */
    Vector_char_x instance  = malloc (sizeof(class_Vector_char));
    // ----------
    (*instance ) = ((class_Vector_char){ get_Vector_char__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_char (instance );
  }
}
Vector_char None_char () {
  { /* cicili#Let6828 */
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
  { /* cicili#Let6846 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_char Nothing_Vector_char () {
  { /* cicili#Let6851 */
    Maybe_Vector_char instance  = ((Maybe_Vector_char){ get_Maybe_Vector_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_char__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let6867 */
    __auto_type v01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6869 */
      __auto_type v01  = pure_Vector_int (4);
      // ----------
      ((void)((v01 . __h_table )-> freeData ));
      v01 ;
    });
    __auto_type v02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6872 */
      __auto_type v02  = pureCapacity_Vector_int (5, 4);
      // ----------
      ((void)((v02 . __h_table )-> freeData ));
      v02 ;
    });
    __auto_type v03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6875 */
      __auto_type v03  = ({ /* cicili#Let6878 */
        StringBuffer_int tmp_buf6877  = newCapacity_StringBuffer_int (5, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6877 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
      });
      // ----------
      ((void)((v03 . __h_table )-> freeData ));
      v03 ;
    });
    __auto_type v04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6886 */
      __auto_type v04  = ({ /* cicili#Let6889 */
        StringBuffer_int tmp_buf6888  = newCapacity_StringBuffer_int (2, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf6888 , ((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7));
      });
      // ----------
      ((void)((v04 . __h_table )-> freeData ));
      v04 ;
    });
    __auto_type v05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6897 */
      __auto_type v05  = ({ /* cicili#Let6900 */
        StringBuffer_char tmp_buf6899  = newCapacity_StringBuffer_char (11, 16);
        // ----------
        Buffer_char (print_StringBuffer_char (tmp_buf6899 , "abcdefghijk", 11));
      });
      // ----------
      ((void)((v05 . __h_table )-> freeData ));
      v05 ;
    });
    __auto_type v08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6908 */
      __auto_type v08  = Slice_int (clone_Box_Vector_int (v03 ), 2, 2);
      // ----------
      ((void)((v08 . __h_table )-> freeData ));
      v08 ;
    });
    __auto_type v09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6912 */
      __auto_type v09  = Slice_char (clone_Box_Vector_char (v05 ), 3, 3);
      // ----------
      ((void)((v09 . __h_table )-> freeData ));
      v09 ;
    });
    __auto_type v10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6916 */
      __auto_type v10  = tail_Vector_char (v05 );
      // ----------
      ((void)((v10 . __h_table )-> freeData ));
      v10 ;
    });
    __auto_type v11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6919 */
      __auto_type v11  = drop_Vector_char (7, v05 );
      // ----------
      ((void)((v11 . __h_table )-> freeData ));
      v11 ;
    });
    __auto_type v12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6922 */
      __auto_type v12  = drop_Vector_char (12, v05 );
      // ----------
      ((void)((v12 . __h_table )-> freeData ));
      v12 ;
    });
    __auto_type v13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6925 */
      __auto_type v13  = drop_Vector_char (1, v11 );
      // ----------
      ((void)((v13 . __h_table )-> freeData ));
      v13 ;
    });
    __auto_type v14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6928 */
      __auto_type v14  = init_Vector_char (v05 );
      // ----------
      ((void)((v14 . __h_table )-> freeData ));
      v14 ;
    });
    __auto_type v15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6931 */
      __auto_type v15  = init_Vector_char (v14 );
      // ----------
      ((void)((v15 . __h_table )-> freeData ));
      v15 ;
    });
    __auto_type v18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6934 */
      __auto_type v18  = take_Vector_int (3, v03 );
      // ----------
      ((void)((v18 . __h_table )-> freeData ));
      v18 ;
    });
    __auto_type v19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6937 */
      __auto_type v19  = take_Vector_char (5, v05 );
      // ----------
      ((void)((v19 . __h_table )-> freeData ));
      v19 ;
    });
    __auto_type v20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6940 */
      __auto_type v20  = take_Vector_char (2, v19 );
      // ----------
      ((void)((v20 . __h_table )-> freeData ));
      v20 ;
    });
    __auto_type v50  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6943 */
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
    { /* cicili#Block6950 */
      { /* cicili#Let6954 */
        __auto_type match6953  = nth_Vector_int (3, v03 );
        typeof((((match6953 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let6957 */
          bool __h_case_result  = (true  &&  (((match6953 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6958 */
                (i  =  (((match6953 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6964 */
              printf ("4th int element of v03: %d\n", i );
            }
          else
            { /* cicili#Let6969 */
              // ----------
              ;
              { /* cicili#Block6971 */
                { /* cicili#Block6976 */
                  printf ("status: %d\n", -100);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let6980 */
        __auto_type match6979  = nth_Vector_char (5, v05 );
        typeof((((match6979 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let6983 */
          bool __h_case_result  = (true  &&  (((match6979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6984 */
                (c  =  (((match6979 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block6990 */
              printf ("6th char element of v05: %c\n", c );
            }
          else
            { /* cicili#Let6995 */
              // ----------
              ;
              { /* cicili#Block6997 */
                { /* cicili#Block7002 */
                  printf ("status: %d\n", -101);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7006 */
        __auto_type match7005  = nth_Vector_char (11, v05 );
        // ----------
        ;
        ({ /* cicili#Let7009 */
          bool __h_case_result  = (true  &&  ((match7005 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7014 */
              printf ("12th char element of v05: not found!\n");
            }
          else
            { /* cicili#Let7019 */
              // ----------
              ;
              { /* cicili#Block7021 */
                { /* cicili#Block7026 */
                  printf ("status: %d\n", -102);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7030 */
        __auto_type match7029  = head_Vector_int (v08 );
        typeof((((match7029 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7033 */
          bool __h_case_result  = (true  &&  (((match7029 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7034 */
                (i  =  (((match7029 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7040 */
              printf ("head int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7045 */
              // ----------
              ;
              { /* cicili#Block7047 */
                { /* cicili#Block7052 */
                  printf ("status: %d\n", -103);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7056 */
        __auto_type match7055  = head_Vector_char (v09 );
        typeof((((match7055 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7059 */
          bool __h_case_result  = (true  &&  (((match7055 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7060 */
                (c  =  (((match7055 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7066 */
              printf ("head char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7071 */
              // ----------
              ;
              { /* cicili#Block7073 */
                { /* cicili#Block7078 */
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
      { /* cicili#Let7082 */
        __auto_type match7081  = nth_Vector_int (1, v08 );
        typeof((((match7081 . __h_data ). Just ). __h_0_mem )) i ;
        // ----------
        ;
        ({ /* cicili#Let7085 */
          bool __h_case_result  = (true  &&  (((match7081 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7086 */
                (i  =  (((match7081 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7092 */
              printf ("2nd int element of v08: %d\n", i );
            }
          else
            { /* cicili#Let7097 */
              // ----------
              ;
              { /* cicili#Block7099 */
                { /* cicili#Block7104 */
                  printf ("status: %d\n", -105);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7108 */
        __auto_type match7107  = nth_Vector_char (2, v09 );
        typeof((((match7107 . __h_data ). Just ). __h_0_mem )) c ;
        // ----------
        ;
        ({ /* cicili#Let7111 */
          bool __h_case_result  = (true  &&  (((match7107 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7112 */
                (c  =  (((match7107 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7118 */
              printf ("3rd char element of v09: %c\n", c );
            }
          else
            { /* cicili#Let7123 */
              // ----------
              ;
              { /* cicili#Block7125 */
                { /* cicili#Block7130 */
                  printf ("status: %d\n", -106);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7134 */
        __auto_type match7133  = nth_Vector_char (3, v09 );
        // ----------
        ;
        ({ /* cicili#Let7137 */
          bool __h_case_result  = (true  &&  ((match7133 . __h_ctor ) ==  __h_Nothing_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7142 */
              printf ("4th char element of v09: not found!\n");
            }
          else
            { /* cicili#Let7147 */
              // ----------
              ;
              { /* cicili#Block7149 */
                { /* cicili#Block7154 */
                  printf ("status: %d\n", -107);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7157 */
        __auto_type __h_matchbox  = v10 ;
        // ----------
        { /* cicili#Let7161 */
          __auto_type match7160  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7160 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7164 */
            bool __h_case_result  = (true  &&  (((match7160 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7165 */
                  (unboxed  =  (((match7160 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7171 */
                { /* cicili#Let7175 */
                  // ----------
                  ;
                  ({ /* cicili#Let7177 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7182 */
                        { /* cicili#Block7184 */
                          printf ("tail v05: ");
                          show_Vector_char (stdout , v10 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7189 */
                        // ----------
                        ;
                        { /* cicili#Block7191 */
                          { /* cicili#Block7196 */
                            printf ("status: %d\n", -109);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7201 */
                // ----------
                ;
                ({ /* cicili#Let7203 */
                  bool __h_case_result  = (true  &&  ((match7160 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7208 */
                      { /* cicili#Block7213 */
                        printf ("status: %d\n", -108);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7216 */
        __auto_type __h_matchbox  = v11 ;
        // ----------
        { /* cicili#Let7220 */
          __auto_type match7219  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7219 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7223 */
            bool __h_case_result  = (true  &&  (((match7219 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7224 */
                  (unboxed  =  (((match7219 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7230 */
                { /* cicili#Let7234 */
                  // ----------
                  ;
                  ({ /* cicili#Let7236 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7241 */
                        { /* cicili#Block7243 */
                          printf ("v11: drop 7 v05: ");
                          show_Vector_char (stdout , v11 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7248 */
                        // ----------
                        ;
                        { /* cicili#Block7250 */
                          { /* cicili#Block7255 */
                            printf ("status: %d\n", -111);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7260 */
                // ----------
                ;
                ({ /* cicili#Let7262 */
                  bool __h_case_result  = (true  &&  ((match7219 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7267 */
                      { /* cicili#Block7272 */
                        printf ("status: %d\n", -110);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7275 */
        __auto_type __h_matchbox  = v12 ;
        // ----------
        { /* cicili#Let7279 */
          __auto_type match7278  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7278 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7282 */
            bool __h_case_result  = (true  &&  (((match7278 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7283 */
                  (unboxed  =  (((match7278 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7289 */
                { /* cicili#Let7293 */
                  // ----------
                  ;
                  ({ /* cicili#Let7295 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7300 */
                        { /* cicili#Block7302 */
                          printf ("drop 12 v05: Empty Slice");
                          show_Vector_char (stdout , v12 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7307 */
                        // ----------
                        ;
                        { /* cicili#Block7309 */
                          { /* cicili#Block7314 */
                            printf ("status: %d\n", -113);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7319 */
                // ----------
                ;
                ({ /* cicili#Let7321 */
                  bool __h_case_result  = (true  &&  ((match7278 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7326 */
                      { /* cicili#Block7331 */
                        printf ("status: %d\n", -112);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7334 */
        __auto_type __h_matchbox  = v13 ;
        // ----------
        { /* cicili#Let7338 */
          __auto_type match7337  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7337 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7341 */
            bool __h_case_result  = (true  &&  (((match7337 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7342 */
                  (unboxed  =  (((match7337 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7348 */
                { /* cicili#Let7352 */
                  // ----------
                  ;
                  ({ /* cicili#Let7354 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7359 */
                        { /* cicili#Block7361 */
                          printf ("drop 1 of Slice v11: ");
                          show_Vector_char (stdout , v13 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7366 */
                        // ----------
                        ;
                        { /* cicili#Block7368 */
                          { /* cicili#Block7373 */
                            printf ("status: %d\n", -115);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7378 */
                // ----------
                ;
                ({ /* cicili#Let7380 */
                  bool __h_case_result  = (true  &&  ((match7337 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7385 */
                      { /* cicili#Block7390 */
                        printf ("status: %d\n", -114);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7393 */
        __auto_type __h_matchbox  = v14 ;
        // ----------
        { /* cicili#Let7397 */
          __auto_type match7396  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7396 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7400 */
            bool __h_case_result  = (true  &&  (((match7396 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7401 */
                  (unboxed  =  (((match7396 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7407 */
                { /* cicili#Let7411 */
                  // ----------
                  ;
                  ({ /* cicili#Let7413 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7418 */
                        { /* cicili#Block7420 */
                          printf ("init of Slice v05: ");
                          show_Vector_char (stdout , v14 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7425 */
                        // ----------
                        ;
                        { /* cicili#Block7427 */
                          { /* cicili#Block7432 */
                            printf ("status: %d\n", -117);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7437 */
                // ----------
                ;
                ({ /* cicili#Let7439 */
                  bool __h_case_result  = (true  &&  ((match7396 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7444 */
                      { /* cicili#Block7449 */
                        printf ("status: %d\n", -116);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7452 */
        __auto_type __h_matchbox  = v15 ;
        // ----------
        { /* cicili#Let7456 */
          __auto_type match7455  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7455 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7459 */
            bool __h_case_result  = (true  &&  (((match7455 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7460 */
                  (unboxed  =  (((match7455 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7466 */
                { /* cicili#Let7470 */
                  // ----------
                  ;
                  ({ /* cicili#Let7472 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7477 */
                        { /* cicili#Block7479 */
                          printf ("init of init of Slice v05: ");
                          show_Vector_char (stdout , v15 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7484 */
                        // ----------
                        ;
                        { /* cicili#Block7486 */
                          { /* cicili#Block7491 */
                            printf ("status: %d\n", -119);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7496 */
                // ----------
                ;
                ({ /* cicili#Let7498 */
                  bool __h_case_result  = (true  &&  ((match7455 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7503 */
                      { /* cicili#Block7508 */
                        printf ("status: %d\n", -118);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      { /* cicili#Let7512 */
        __auto_type match7511  = last_Vector_int (v03 );
        typeof((((match7511 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let7514 */
          bool __h_case_result  = (true  &&  (((match7511 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7515 */
                (la  =  (((match7511 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7521 */
              printf ("last of v03: %d\n", la );
            }
          else
            { /* cicili#Let7526 */
              // ----------
              ;
              { /* cicili#Block7528 */
                { /* cicili#Block7533 */
                  printf ("status: %d\n", -121);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      { /* cicili#Let7537 */
        __auto_type match7536  = last_Vector_char (v05 );
        typeof((((match7536 . __h_data ). Just ). __h_0_mem )) la ;
        // ----------
        ;
        ({ /* cicili#Let7539 */
          bool __h_case_result  = (true  &&  (((match7536 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7540 */
                (la  =  (((match7536 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block7546 */
              printf ("last of v05: %c\n", la );
            }
          else
            { /* cicili#Let7551 */
              // ----------
              ;
              { /* cicili#Block7553 */
                { /* cicili#Block7558 */
                  printf ("status: %d\n", -123);
                  exit (EXIT_FAILURE );
                }
              }
            }
        });
      }
      ({ /* cicili#Let7561 */
        __auto_type __h_matchbox  = v18 ;
        // ----------
        { /* cicili#Let7565 */
          __auto_type match7564  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7564 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7568 */
            bool __h_case_result  = (true  &&  (((match7564 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7569 */
                  (unboxed  =  (((match7564 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7575 */
                { /* cicili#Let7579 */
                  // ----------
                  ;
                  ({ /* cicili#Let7581 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7586 */
                        { /* cicili#Block7588 */
                          printf ("take 3 of v03: ");
                          show_Vector_int (stdout , v18 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7593 */
                        // ----------
                        ;
                        { /* cicili#Block7595 */
                          { /* cicili#Block7600 */
                            printf ("status: %d\n", -125);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7605 */
                // ----------
                ;
                ({ /* cicili#Let7607 */
                  bool __h_case_result  = (true  &&  ((match7564 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7612 */
                      { /* cicili#Block7617 */
                        printf ("status: %d\n", -124);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7620 */
        __auto_type __h_matchbox  = v19 ;
        // ----------
        { /* cicili#Let7624 */
          __auto_type match7623  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7623 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7627 */
            bool __h_case_result  = (true  &&  (((match7623 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7628 */
                  (unboxed  =  (((match7623 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7634 */
                { /* cicili#Let7638 */
                  // ----------
                  ;
                  ({ /* cicili#Let7640 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7645 */
                        { /* cicili#Block7647 */
                          printf ("take 5 of v05: ");
                          show_Vector_char (stdout , v19 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7652 */
                        // ----------
                        ;
                        { /* cicili#Block7654 */
                          { /* cicili#Block7659 */
                            printf ("status: %d\n", -127);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7664 */
                // ----------
                ;
                ({ /* cicili#Let7666 */
                  bool __h_case_result  = (true  &&  ((match7623 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7671 */
                      { /* cicili#Block7676 */
                        printf ("status: %d\n", -126);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7679 */
        __auto_type __h_matchbox  = v20 ;
        // ----------
        { /* cicili#Let7683 */
          __auto_type match7682  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7682 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7686 */
            bool __h_case_result  = (true  &&  (((match7682 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7687 */
                  (unboxed  =  (((match7682 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7693 */
                { /* cicili#Let7697 */
                  // ----------
                  ;
                  ({ /* cicili#Let7699 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Slice_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7704 */
                        { /* cicili#Block7706 */
                          printf ("take 2 of take 5 of v05: ");
                          show_Vector_char (stdout , v20 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7711 */
                        // ----------
                        ;
                        { /* cicili#Block7713 */
                          { /* cicili#Block7718 */
                            printf ("status: %d\n", -129);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7723 */
                // ----------
                ;
                ({ /* cicili#Let7725 */
                  bool __h_case_result  = (true  &&  ((match7682 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7730 */
                      { /* cicili#Block7735 */
                        printf ("status: %d\n", -128);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7738 */
        __auto_type __h_matchbox  = v50 ;
        // ----------
        { /* cicili#Let7742 */
          __auto_type match7741  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7741 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7745 */
            bool __h_case_result  = (true  &&  (((match7741 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7746 */
                  (unboxed  =  (((match7741 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block7752 */
                { /* cicili#Let7756 */
                  // ----------
                  ;
                  ({ /* cicili#Let7758 */
                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7763 */
                        { /* cicili#Block7765 */
                          printf ("wrap 1000 v50: ");
                          show_Vector_int (stdout , v50 );
                          putchar ('\n');
                        }
                      }
                    else
                      { /* cicili#Let7770 */
                        // ----------
                        ;
                        { /* cicili#Block7772 */
                          { /* cicili#Block7777 */
                            printf ("status: %d\n", -301);
                            exit (EXIT_FAILURE );
                          }
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let7782 */
                // ----------
                ;
                ({ /* cicili#Let7784 */
                  bool __h_case_result  = (true  &&  ((match7741 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block7789 */
                      { /* cicili#Block7794 */
                        printf ("status: %d\n", -300);
                        exit (EXIT_FAILURE );
                      }
                    }
                });
              }
          });
        }
      });
      ({ /* cicili#Let7797 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7799 */
          __auto_type v033  = ({ /* cicili#Let7802 */
            StringBuffer_int tmp_buf7801  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7801 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7810 */
          __auto_type v055  = ({ /* cicili#Let7813 */
            StringBuffer_char tmp_buf7812  = newCapacity_StringBuffer_char (11, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7812 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7821 */
          __auto_type v21  = push_Vector_int (6, v033 );
          // ----------
          ((void)((v21 . __h_table )-> freeData ));
          v21 ;
        });
        __auto_type v22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7824 */
          __auto_type v22  = push_Vector_char ('L', v055 );
          // ----------
          ((void)((v22 . __h_table )-> freeData ));
          v22 ;
        });
        __auto_type v23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7827 */
          __auto_type v23  = push_Vector_int (7, v08 );
          // ----------
          ((void)((v23 . __h_table )-> freeData ));
          v23 ;
        });
        __auto_type v24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7830 */
          __auto_type v24  = push_Vector_char ('M', v09 );
          // ----------
          ((void)((v24 . __h_table )-> freeData ));
          v24 ;
        });
        __auto_type v0333  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7833 */
          __auto_type v0333  = ({ /* cicili#Let7836 */
            StringBuffer_int tmp_buf7835  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7835 , ((const int[]){ 1, 2, 3}), 3));
          });
          // ----------
          ((void)((v0333 . __h_table )-> freeData ));
          v0333 ;
        });
        __auto_type v0555  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7844 */
          __auto_type v0555  = ({ /* cicili#Let7847 */
            StringBuffer_char tmp_buf7846  = newCapacity_StringBuffer_char (6, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7846 , "abcdef", 6));
          });
          // ----------
          ((void)((v0555 . __h_table )-> freeData ));
          v0555 ;
        });
        __auto_type v0444  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7855 */
          __auto_type v0444  = ({ /* cicili#Let7858 */
            StringBuffer_int tmp_buf7857  = newCapacity_StringBuffer_int (3, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf7857 , ((const int[]){ 4, 5, 6}), 3));
          });
          // ----------
          ((void)((v0444 . __h_table )-> freeData ));
          v0444 ;
        });
        __auto_type v0666  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7866 */
          __auto_type v0666  = ({ /* cicili#Let7869 */
            StringBuffer_char tmp_buf7868  = newCapacity_StringBuffer_char (6, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf7868 , "ghijkl", 6));
          });
          // ----------
          ((void)((v0666 . __h_table )-> freeData ));
          v0666 ;
        });
        __auto_type v25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7877 */
          __auto_type v25  = append_Vector_int (v0333 , v0444 );
          // ----------
          ((void)((v25 . __h_table )-> freeData ));
          v25 ;
        });
        __auto_type v26  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7880 */
          __auto_type v26  = append_Vector_char (v0555 , v0666 );
          // ----------
          ((void)((v26 . __h_table )-> freeData ));
          v26 ;
        });
        __auto_type v27  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7883 */
          __auto_type v27  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v27 . __h_table )-> freeData ));
          v27 ;
        });
        __auto_type v28  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7886 */
          __auto_type v28  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v28 . __h_table )-> freeData ));
          v28 ;
        });
        __auto_type v29  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7889 */
          __auto_type v29  = append_Vector_int (v27 , v0444 );
          // ----------
          ((void)((v29 . __h_table )-> freeData ));
          v29 ;
        });
        __auto_type v30  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7892 */
          __auto_type v30  = append_Vector_char (v28 , v0666 );
          // ----------
          ((void)((v30 . __h_table )-> freeData ));
          v30 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7895 */
          __auto_type v277  = drop_Vector_int (1, v0444 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7898 */
          __auto_type v288  = drop_Vector_char (3, v0666 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type vt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7901 */
          __auto_type vt1  = copy_Vector_int (v0444 );
          // ----------
          ((void)((vt1 . __h_table )-> freeData ));
          vt1 ;
        });
        __auto_type vt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7904 */
          __auto_type vt2  = copy_Vector_char (v0666 );
          // ----------
          ((void)((vt2 . __h_table )-> freeData ));
          vt2 ;
        });
        __auto_type v31  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7907 */
          __auto_type v31  = reverse_Vector_int (vt1 );
          // ----------
          ((void)((v31 . __h_table )-> freeData ));
          v31 ;
        });
        __auto_type v32  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7910 */
          __auto_type v32  = reverse_Vector_char (vt2 );
          // ----------
          ((void)((v32 . __h_table )-> freeData ));
          v32 ;
        });
        __auto_type v33  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7913 */
          __auto_type v33  = reverse_Vector_char (v288 );
          // ----------
          ((void)((v33 . __h_table )-> freeData ));
          v33 ;
        });
        // ----------
        ({ /* cicili#Let7917 */
          __auto_type __h_matchbox  = v21 ;
          // ----------
          { /* cicili#Let7921 */
            __auto_type match7920  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7920 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let7924 */
              bool __h_case_result  = (true  &&  (((match7920 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7925 */
                    (unboxed  =  (((match7920 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7931 */
                  { /* cicili#Let7935 */
                    // ----------
                    ;
                    ({ /* cicili#Let7937 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block7942 */
                          { /* cicili#Block7944 */
                            printf ("push 6 to v033: ");
                            show_Vector_int (stdout , v21 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let7949 */
                          // ----------
                          ;
                          { /* cicili#Block7951 */
                            { /* cicili#Block7956 */
                              printf ("status: %d\n", -131);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let7961 */
                  // ----------
                  ;
                  ({ /* cicili#Let7963 */
                    bool __h_case_result  = (true  &&  ((match7920 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block7968 */
                        { /* cicili#Block7973 */
                          printf ("status: %d\n", -130);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let7976 */
          __auto_type __h_matchbox  = v22 ;
          // ----------
          { /* cicili#Let7980 */
            __auto_type match7979  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match7979 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let7983 */
              bool __h_case_result  = (true  &&  (((match7979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7984 */
                    (unboxed  =  (((match7979 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7990 */
                  { /* cicili#Let7994 */
                    // ----------
                    ;
                    ({ /* cicili#Let7996 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8001 */
                          { /* cicili#Block8003 */
                            printf ("push L to v055: ");
                            show_Vector_char (stdout , v22 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8008 */
                          // ----------
                          ;
                          { /* cicili#Block8010 */
                            { /* cicili#Block8015 */
                              printf ("status: %d\n", -133);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8020 */
                  // ----------
                  ;
                  ({ /* cicili#Let8022 */
                    bool __h_case_result  = (true  &&  ((match7979 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8027 */
                        { /* cicili#Block8032 */
                          printf ("status: %d\n", -132);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8035 */
          __auto_type __h_matchbox  = v23 ;
          // ----------
          { /* cicili#Let8039 */
            __auto_type match8038  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8038 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8042 */
              bool __h_case_result  = (true  &&  (((match8038 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8043 */
                    (unboxed  =  (((match8038 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8049 */
                  { /* cicili#Let8053 */
                    // ----------
                    ;
                    ({ /* cicili#Let8055 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8060 */
                          { /* cicili#Block8062 */
                            printf ("push 7 to Slice v08: ");
                            show_Vector_int (stdout , v23 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8067 */
                          // ----------
                          ;
                          { /* cicili#Block8069 */
                            { /* cicili#Block8074 */
                              printf ("status: %d\n", -132);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8079 */
                  // ----------
                  ;
                  ({ /* cicili#Let8081 */
                    bool __h_case_result  = (true  &&  ((match8038 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8086 */
                        { /* cicili#Block8091 */
                          printf ("status: %d\n", -131);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8094 */
          __auto_type __h_matchbox  = v24 ;
          // ----------
          { /* cicili#Let8098 */
            __auto_type match8097  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8097 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8101 */
              bool __h_case_result  = (true  &&  (((match8097 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8102 */
                    (unboxed  =  (((match8097 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8108 */
                  { /* cicili#Let8112 */
                    // ----------
                    ;
                    ({ /* cicili#Let8114 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8119 */
                          { /* cicili#Block8121 */
                            printf ("push M to Slice v09: ");
                            show_Vector_char (stdout , v24 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8126 */
                          // ----------
                          ;
                          { /* cicili#Block8128 */
                            { /* cicili#Block8133 */
                              printf ("status: %d\n", -134);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8138 */
                  // ----------
                  ;
                  ({ /* cicili#Let8140 */
                    bool __h_case_result  = (true  &&  ((match8097 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8145 */
                        { /* cicili#Block8150 */
                          printf ("status: %d\n", -133);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8153 */
          __auto_type __h_matchbox  = v25 ;
          // ----------
          { /* cicili#Let8157 */
            __auto_type match8156  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8156 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8160 */
              bool __h_case_result  = (true  &&  (((match8156 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8161 */
                    (unboxed  =  (((match8156 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8167 */
                  { /* cicili#Let8171 */
                    // ----------
                    ;
                    ({ /* cicili#Let8173 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8178 */
                          { /* cicili#Block8180 */
                            printf ("append v0333 to v0444: ");
                            show_Vector_int (stdout , v25 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8185 */
                          // ----------
                          ;
                          { /* cicili#Block8187 */
                            { /* cicili#Block8192 */
                              printf ("status: %d\n", -136);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8197 */
                  // ----------
                  ;
                  ({ /* cicili#Let8199 */
                    bool __h_case_result  = (true  &&  ((match8156 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8204 */
                        { /* cicili#Block8209 */
                          printf ("status: %d\n", -135);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8212 */
          __auto_type __h_matchbox  = v26 ;
          // ----------
          { /* cicili#Let8216 */
            __auto_type match8215  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8215 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8219 */
              bool __h_case_result  = (true  &&  (((match8215 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8220 */
                    (unboxed  =  (((match8215 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8226 */
                  { /* cicili#Let8230 */
                    // ----------
                    ;
                    ({ /* cicili#Let8232 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8237 */
                          { /* cicili#Block8239 */
                            printf ("append v0555 to v0666: ");
                            show_Vector_char (stdout , v26 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8244 */
                          // ----------
                          ;
                          { /* cicili#Block8246 */
                            { /* cicili#Block8251 */
                              printf ("status: %d\n", -138);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8256 */
                  // ----------
                  ;
                  ({ /* cicili#Let8258 */
                    bool __h_case_result  = (true  &&  ((match8215 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8263 */
                        { /* cicili#Block8268 */
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
        ({ /* cicili#Let8271 */
          __auto_type __h_matchbox  = v29 ;
          // ----------
          { /* cicili#Let8275 */
            __auto_type match8274  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8274 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8278 */
              bool __h_case_result  = (true  &&  (((match8274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8279 */
                    (unboxed  =  (((match8274 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8285 */
                  { /* cicili#Let8289 */
                    // ----------
                    ;
                    ({ /* cicili#Let8291 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8296 */
                          { /* cicili#Block8298 */
                            printf ("append v27 to v0444: ");
                            show_Vector_int (stdout , v29 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8303 */
                          // ----------
                          ;
                          { /* cicili#Block8305 */
                            { /* cicili#Block8310 */
                              printf ("status: %d\n", -140);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8315 */
                  // ----------
                  ;
                  ({ /* cicili#Let8317 */
                    bool __h_case_result  = (true  &&  ((match8274 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8322 */
                        { /* cicili#Block8327 */
                          printf ("status: %d\n", -139);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8330 */
          __auto_type __h_matchbox  = v30 ;
          // ----------
          { /* cicili#Let8334 */
            __auto_type match8333  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8333 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8337 */
              bool __h_case_result  = (true  &&  (((match8333 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8338 */
                    (unboxed  =  (((match8333 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8344 */
                  { /* cicili#Let8348 */
                    // ----------
                    ;
                    ({ /* cicili#Let8350 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8355 */
                          { /* cicili#Block8357 */
                            printf ("append v28 to v0666: ");
                            show_Vector_char (stdout , v30 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8362 */
                          // ----------
                          ;
                          { /* cicili#Block8364 */
                            { /* cicili#Block8369 */
                              printf ("status: %d\n", -142);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8374 */
                  // ----------
                  ;
                  ({ /* cicili#Let8376 */
                    bool __h_case_result  = (true  &&  ((match8333 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8381 */
                        { /* cicili#Block8386 */
                          printf ("status: %d\n", -141);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8389 */
          __auto_type __h_matchbox  = v31 ;
          // ----------
          { /* cicili#Let8393 */
            __auto_type match8392  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8392 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8396 */
              bool __h_case_result  = (true  &&  (((match8392 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8397 */
                    (unboxed  =  (((match8392 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8403 */
                  { /* cicili#Let8407 */
                    // ----------
                    ;
                    ({ /* cicili#Let8409 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8414 */
                          { /* cicili#Block8416 */
                            printf ("reverse v27: ");
                            show_Vector_int (stdout , v31 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8421 */
                          // ----------
                          ;
                          { /* cicili#Block8423 */
                            { /* cicili#Block8428 */
                              printf ("status: %d\n", -144);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8433 */
                  // ----------
                  ;
                  ({ /* cicili#Let8435 */
                    bool __h_case_result  = (true  &&  ((match8392 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8440 */
                        { /* cicili#Block8445 */
                          printf ("status: %d\n", -143);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8448 */
          __auto_type __h_matchbox  = v32 ;
          // ----------
          { /* cicili#Let8452 */
            __auto_type match8451  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8451 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8455 */
              bool __h_case_result  = (true  &&  (((match8451 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8456 */
                    (unboxed  =  (((match8451 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8462 */
                  { /* cicili#Let8466 */
                    // ----------
                    ;
                    ({ /* cicili#Let8468 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8473 */
                          { /* cicili#Block8475 */
                            printf ("reverse v28: ");
                            show_Vector_char (stdout , v32 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8480 */
                          // ----------
                          ;
                          { /* cicili#Block8482 */
                            { /* cicili#Block8487 */
                              printf ("status: %d\n", -146);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8492 */
                  // ----------
                  ;
                  ({ /* cicili#Let8494 */
                    bool __h_case_result  = (true  &&  ((match8451 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8499 */
                        { /* cicili#Block8504 */
                          printf ("status: %d\n", -145);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8507 */
          __auto_type __h_matchbox  = v33 ;
          // ----------
          { /* cicili#Let8511 */
            __auto_type match8510  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8510 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8514 */
              bool __h_case_result  = (true  &&  (((match8510 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8515 */
                    (unboxed  =  (((match8510 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8521 */
                  { /* cicili#Let8525 */
                    // ----------
                    ;
                    ({ /* cicili#Let8527 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8532 */
                          { /* cicili#Block8534 */
                            printf ("reverse Slice v288: ");
                            show_Vector_char (stdout , v33 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8539 */
                          // ----------
                          ;
                          { /* cicili#Block8541 */
                            { /* cicili#Block8546 */
                              printf ("status: %d\n", -148);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8551 */
                  // ----------
                  ;
                  ({ /* cicili#Let8553 */
                    bool __h_case_result  = (true  &&  ((match8510 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8558 */
                        { /* cicili#Block8563 */
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
      ({ /* cicili#Let8566 */
        __auto_type v033  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8568 */
          __auto_type v033  = ({ /* cicili#Let8571 */
            StringBuffer_int tmp_buf8570  = newCapacity_StringBuffer_int (5, 16);
            // ----------
            Buffer_int (print_StringBuffer_int (tmp_buf8570 , ((const int[]){ 1, 2, 3, 4, 5}), 5));
          });
          // ----------
          ((void)((v033 . __h_table )-> freeData ));
          v033 ;
        });
        __auto_type v055  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8579 */
          __auto_type v055  = ({ /* cicili#Let8582 */
            StringBuffer_char tmp_buf8581  = newCapacity_StringBuffer_char (11, 16);
            // ----------
            Buffer_char (print_StringBuffer_char (tmp_buf8581 , "abcdefghijk", 11));
          });
          // ----------
          ((void)((v055 . __h_table )-> freeData ));
          v055 ;
        });
        __auto_type v211  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8590 */
          __auto_type v211  = insertAt_Vector_int (v033 , 6, 2);
          // ----------
          ((void)((v211 . __h_table )-> freeData ));
          v211 ;
        });
        __auto_type v222  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8593 */
          __auto_type v222  = insertAt_Vector_char (v055 , 'L', 3);
          // ----------
          ((void)((v222 . __h_table )-> freeData ));
          v222 ;
        });
        __auto_type v277  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8596 */
          __auto_type v277  = drop_Vector_int (1, v211 );
          // ----------
          ((void)((v277 . __h_table )-> freeData ));
          v277 ;
        });
        __auto_type v288  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8599 */
          __auto_type v288  = drop_Vector_char (2, v222 );
          // ----------
          ((void)((v288 . __h_table )-> freeData ));
          v288 ;
        });
        __auto_type v233  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8602 */
          __auto_type v233  = insertAt_Vector_int (v277 , 7, 2);
          // ----------
          ((void)((v233 . __h_table )-> freeData ));
          v233 ;
        });
        __auto_type v244  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8605 */
          __auto_type v244  = insertAt_Vector_char (v288 , 'M', 3);
          // ----------
          ((void)((v244 . __h_table )-> freeData ));
          v244 ;
        });
        __auto_type vt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8608 */
          __auto_type vt3  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt3 . __h_table )-> freeData ));
          vt3 ;
        });
        __auto_type vt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8611 */
          __auto_type vt4  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt4 . __h_table )-> freeData ));
          vt4 ;
        });
        __auto_type v41  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8614 */
          __auto_type v41  = deleteAt_Vector_int (vt3 , 3);
          // ----------
          ((void)((v41 . __h_table )-> freeData ));
          v41 ;
        });
        __auto_type v42  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8617 */
          __auto_type v42  = deleteAt_Vector_char (vt4 , 7);
          // ----------
          ((void)((v42 . __h_table )-> freeData ));
          v42 ;
        });
        __auto_type vt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8620 */
          __auto_type vt7  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt7 . __h_table )-> freeData ));
          vt7 ;
        });
        __auto_type vt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8623 */
          __auto_type vt8  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt8 . __h_table )-> freeData ));
          vt8 ;
        });
        __auto_type v43  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8626 */
          __auto_type v43  = deleteAt_Vector_int (vt7 , 1);
          // ----------
          ((void)((v43 . __h_table )-> freeData ));
          v43 ;
        });
        __auto_type v44  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8629 */
          __auto_type v44  = deleteAt_Vector_char (vt8 , 3);
          // ----------
          ((void)((v44 . __h_table )-> freeData ));
          v44 ;
        });
        __auto_type vt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8632 */
          __auto_type vt5  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt5 . __h_table )-> freeData ));
          vt5 ;
        });
        __auto_type vt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8635 */
          __auto_type vt6  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt6 . __h_table )-> freeData ));
          vt6 ;
        });
        __auto_type v45  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8638 */
          __auto_type v45  = replaceAt_Vector_int (vt5 , 9, 3);
          // ----------
          ((void)((v45 . __h_table )-> freeData ));
          v45 ;
        });
        __auto_type v46  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8641 */
          __auto_type v46  = replaceAt_Vector_char (vt6 , 'K', 7);
          // ----------
          ((void)((v46 . __h_table )-> freeData ));
          v46 ;
        });
        __auto_type vt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8644 */
          __auto_type vt9  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt9 . __h_table )-> freeData ));
          vt9 ;
        });
        __auto_type vt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8647 */
          __auto_type vt10  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt10 . __h_table )-> freeData ));
          vt10 ;
        });
        __auto_type v47  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8650 */
          __auto_type v47  = replaceAt_Vector_int (vt9 , 9, 1);
          // ----------
          ((void)((v47 . __h_table )-> freeData ));
          v47 ;
        });
        __auto_type v48  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8653 */
          __auto_type v48  = replaceAt_Vector_char (vt10 , 'K', 3);
          // ----------
          ((void)((v48 . __h_table )-> freeData ));
          v48 ;
        });
        __auto_type vt51  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8656 */
          __auto_type vt51  = copy_Vector_int (v233 );
          // ----------
          ((void)((vt51 . __h_table )-> freeData ));
          vt51 ;
        });
        __auto_type vt61  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8659 */
          __auto_type vt61  = copy_Vector_char (v244 );
          // ----------
          ((void)((vt61 . __h_table )-> freeData ));
          vt61 ;
        });
        __auto_type v451  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8662 */
          __auto_type v451  = resize_Vector_int (vt51 , 1);
          // ----------
          ((void)((v451 . __h_table )-> freeData ));
          v451 ;
        });
        __auto_type v461  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8665 */
          __auto_type v461  = resize_Vector_char (vt61 , 15);
          // ----------
          ((void)((v461 . __h_table )-> freeData ));
          v461 ;
        });
        __auto_type vt91  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8668 */
          __auto_type vt91  = drop_Vector_int (4, v233 );
          // ----------
          ((void)((vt91 . __h_table )-> freeData ));
          vt91 ;
        });
        __auto_type vt101  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8671 */
          __auto_type vt101  = drop_Vector_char (5, v244 );
          // ----------
          ((void)((vt101 . __h_table )-> freeData ));
          vt101 ;
        });
        __auto_type v471  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8674 */
          __auto_type v471  = resize_Vector_int (vt91 , 1);
          // ----------
          ((void)((v471 . __h_table )-> freeData ));
          v471 ;
        });
        __auto_type v481  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8677 */
          __auto_type v481  = resize_Vector_char (vt101 , 15);
          // ----------
          ((void)((v481 . __h_table )-> freeData ));
          v481 ;
        });
        // ----------
        ({ /* cicili#Let8681 */
          __auto_type __h_matchbox  = v211 ;
          // ----------
          { /* cicili#Let8685 */
            __auto_type match8684  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8684 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8688 */
              bool __h_case_result  = (true  &&  (((match8684 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8689 */
                    (unboxed  =  (((match8684 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8695 */
                  { /* cicili#Let8699 */
                    // ----------
                    ;
                    ({ /* cicili#Let8701 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8706 */
                          { /* cicili#Block8708 */
                            printf ("insert 6 at 2 v033: ");
                            show_Vector_int (stdout , v211 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8713 */
                          // ----------
                          ;
                          { /* cicili#Block8715 */
                            { /* cicili#Block8720 */
                              printf ("status: %d\n", -150);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8725 */
                  // ----------
                  ;
                  ({ /* cicili#Let8727 */
                    bool __h_case_result  = (true  &&  ((match8684 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8732 */
                        { /* cicili#Block8737 */
                          printf ("status: %d\n", -149);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8740 */
          __auto_type __h_matchbox  = v222 ;
          // ----------
          { /* cicili#Let8744 */
            __auto_type match8743  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8743 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8747 */
              bool __h_case_result  = (true  &&  (((match8743 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8748 */
                    (unboxed  =  (((match8743 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8754 */
                  { /* cicili#Let8758 */
                    // ----------
                    ;
                    ({ /* cicili#Let8760 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8765 */
                          { /* cicili#Block8767 */
                            printf ("insert L at 3 v055: ");
                            show_Vector_char (stdout , v222 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8772 */
                          // ----------
                          ;
                          { /* cicili#Block8774 */
                            { /* cicili#Block8779 */
                              printf ("status: %d\n", -152);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8784 */
                  // ----------
                  ;
                  ({ /* cicili#Let8786 */
                    bool __h_case_result  = (true  &&  ((match8743 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8791 */
                        { /* cicili#Block8796 */
                          printf ("status: %d\n", -151);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8799 */
          __auto_type __h_matchbox  = v233 ;
          // ----------
          { /* cicili#Let8803 */
            __auto_type match8802  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8802 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8806 */
              bool __h_case_result  = (true  &&  (((match8802 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8807 */
                    (unboxed  =  (((match8802 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8813 */
                  { /* cicili#Let8817 */
                    // ----------
                    ;
                    ({ /* cicili#Let8819 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8824 */
                          { /* cicili#Block8826 */
                            printf ("insert 7 at 2 v277: ");
                            show_Vector_int (stdout , v233 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8831 */
                          // ----------
                          ;
                          { /* cicili#Block8833 */
                            { /* cicili#Block8838 */
                              printf ("status: %d\n", -154);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8843 */
                  // ----------
                  ;
                  ({ /* cicili#Let8845 */
                    bool __h_case_result  = (true  &&  ((match8802 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8850 */
                        { /* cicili#Block8855 */
                          printf ("status: %d\n", -153);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8858 */
          __auto_type __h_matchbox  = v244 ;
          // ----------
          { /* cicili#Let8862 */
            __auto_type match8861  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8861 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8865 */
              bool __h_case_result  = (true  &&  (((match8861 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8866 */
                    (unboxed  =  (((match8861 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8872 */
                  { /* cicili#Let8876 */
                    // ----------
                    ;
                    ({ /* cicili#Let8878 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8883 */
                          { /* cicili#Block8885 */
                            printf ("insert M at 3 v288: ");
                            show_Vector_char (stdout , v244 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8890 */
                          // ----------
                          ;
                          { /* cicili#Block8892 */
                            { /* cicili#Block8897 */
                              printf ("status: %d\n", -156);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8902 */
                  // ----------
                  ;
                  ({ /* cicili#Let8904 */
                    bool __h_case_result  = (true  &&  ((match8861 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8909 */
                        { /* cicili#Block8914 */
                          printf ("status: %d\n", -155);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8917 */
          __auto_type __h_matchbox  = v41 ;
          // ----------
          { /* cicili#Let8921 */
            __auto_type match8920  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8920 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8924 */
              bool __h_case_result  = (true  &&  (((match8920 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8925 */
                    (unboxed  =  (((match8920 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8931 */
                  { /* cicili#Let8935 */
                    // ----------
                    ;
                    ({ /* cicili#Let8937 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block8942 */
                          { /* cicili#Block8944 */
                            printf ("delete at 3 from v233: ");
                            show_Vector_int (stdout , v41 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let8949 */
                          // ----------
                          ;
                          { /* cicili#Block8951 */
                            { /* cicili#Block8956 */
                              printf ("status: %d\n", -158);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let8961 */
                  // ----------
                  ;
                  ({ /* cicili#Let8963 */
                    bool __h_case_result  = (true  &&  ((match8920 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block8968 */
                        { /* cicili#Block8973 */
                          printf ("status: %d\n", -157);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let8976 */
          __auto_type __h_matchbox  = v42 ;
          // ----------
          { /* cicili#Let8980 */
            __auto_type match8979  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8979 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8983 */
              bool __h_case_result  = (true  &&  (((match8979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8984 */
                    (unboxed  =  (((match8979 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8990 */
                  { /* cicili#Let8994 */
                    // ----------
                    ;
                    ({ /* cicili#Let8996 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9001 */
                          { /* cicili#Block9003 */
                            printf ("delete at 7 from v244: ");
                            show_Vector_char (stdout , v42 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9008 */
                          // ----------
                          ;
                          { /* cicili#Block9010 */
                            { /* cicili#Block9015 */
                              printf ("status: %d\n", -160);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9020 */
                  // ----------
                  ;
                  ({ /* cicili#Let9022 */
                    bool __h_case_result  = (true  &&  ((match8979 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9027 */
                        { /* cicili#Block9032 */
                          printf ("status: %d\n", -159);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9035 */
          __auto_type __h_matchbox  = v43 ;
          // ----------
          { /* cicili#Let9039 */
            __auto_type match9038  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9038 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9042 */
              bool __h_case_result  = (true  &&  (((match9038 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9043 */
                    (unboxed  =  (((match9038 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9049 */
                  { /* cicili#Let9053 */
                    // ----------
                    ;
                    ({ /* cicili#Let9055 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9060 */
                          { /* cicili#Block9062 */
                            printf ("delete at 1 from drop 4 v233: ");
                            show_Vector_int (stdout , v43 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9067 */
                          // ----------
                          ;
                          { /* cicili#Block9069 */
                            { /* cicili#Block9074 */
                              printf ("status: %d\n", -162);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9079 */
                  // ----------
                  ;
                  ({ /* cicili#Let9081 */
                    bool __h_case_result  = (true  &&  ((match9038 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9086 */
                        { /* cicili#Block9091 */
                          printf ("status: %d\n", -161);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9094 */
          __auto_type __h_matchbox  = v44 ;
          // ----------
          { /* cicili#Let9098 */
            __auto_type match9097  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9097 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9101 */
              bool __h_case_result  = (true  &&  (((match9097 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9102 */
                    (unboxed  =  (((match9097 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9108 */
                  { /* cicili#Let9112 */
                    // ----------
                    ;
                    ({ /* cicili#Let9114 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9119 */
                          { /* cicili#Block9121 */
                            printf ("delete at 3 from drop 5 v244: ");
                            show_Vector_char (stdout , v44 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9126 */
                          // ----------
                          ;
                          { /* cicili#Block9128 */
                            { /* cicili#Block9133 */
                              printf ("status: %d\n", -164);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9138 */
                  // ----------
                  ;
                  ({ /* cicili#Let9140 */
                    bool __h_case_result  = (true  &&  ((match9097 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9145 */
                        { /* cicili#Block9150 */
                          printf ("status: %d\n", -163);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9153 */
          __auto_type __h_matchbox  = v45 ;
          // ----------
          { /* cicili#Let9157 */
            __auto_type match9156  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9156 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9160 */
              bool __h_case_result  = (true  &&  (((match9156 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9161 */
                    (unboxed  =  (((match9156 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9167 */
                  { /* cicili#Let9171 */
                    // ----------
                    ;
                    ({ /* cicili#Let9173 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9178 */
                          { /* cicili#Block9180 */
                            printf ("replace 9 at 3 v233: ");
                            show_Vector_int (stdout , v45 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9185 */
                          // ----------
                          ;
                          { /* cicili#Block9187 */
                            { /* cicili#Block9192 */
                              printf ("status: %d\n", -166);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9197 */
                  // ----------
                  ;
                  ({ /* cicili#Let9199 */
                    bool __h_case_result  = (true  &&  ((match9156 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9204 */
                        { /* cicili#Block9209 */
                          printf ("status: %d\n", -165);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9212 */
          __auto_type __h_matchbox  = v46 ;
          // ----------
          { /* cicili#Let9216 */
            __auto_type match9215  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9215 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9219 */
              bool __h_case_result  = (true  &&  (((match9215 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9220 */
                    (unboxed  =  (((match9215 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9226 */
                  { /* cicili#Let9230 */
                    // ----------
                    ;
                    ({ /* cicili#Let9232 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9237 */
                          { /* cicili#Block9239 */
                            printf ("replace K at 7 v244: ");
                            show_Vector_char (stdout , v46 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9244 */
                          // ----------
                          ;
                          { /* cicili#Block9246 */
                            { /* cicili#Block9251 */
                              printf ("status: %d\n", -168);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9256 */
                  // ----------
                  ;
                  ({ /* cicili#Let9258 */
                    bool __h_case_result  = (true  &&  ((match9215 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9263 */
                        { /* cicili#Block9268 */
                          printf ("status: %d\n", -167);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9271 */
          __auto_type __h_matchbox  = v47 ;
          // ----------
          { /* cicili#Let9275 */
            __auto_type match9274  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9274 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9278 */
              bool __h_case_result  = (true  &&  (((match9274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9279 */
                    (unboxed  =  (((match9274 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9285 */
                  { /* cicili#Let9289 */
                    // ----------
                    ;
                    ({ /* cicili#Let9291 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9296 */
                          { /* cicili#Block9298 */
                            printf ("replace at 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v47 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9303 */
                          // ----------
                          ;
                          { /* cicili#Block9305 */
                            { /* cicili#Block9310 */
                              printf ("status: %d\n", -170);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9315 */
                  // ----------
                  ;
                  ({ /* cicili#Let9317 */
                    bool __h_case_result  = (true  &&  ((match9274 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9322 */
                        { /* cicili#Block9327 */
                          printf ("status: %d\n", -169);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9330 */
          __auto_type __h_matchbox  = v48 ;
          // ----------
          { /* cicili#Let9334 */
            __auto_type match9333  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9333 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9337 */
              bool __h_case_result  = (true  &&  (((match9333 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9338 */
                    (unboxed  =  (((match9333 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9344 */
                  { /* cicili#Let9348 */
                    // ----------
                    ;
                    ({ /* cicili#Let9350 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9355 */
                          { /* cicili#Block9357 */
                            printf ("replace at 3 of drop 5 v244: ");
                            show_Vector_char (stdout , v48 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9362 */
                          // ----------
                          ;
                          { /* cicili#Block9364 */
                            { /* cicili#Block9369 */
                              printf ("status: %d\n", -172);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9374 */
                  // ----------
                  ;
                  ({ /* cicili#Let9376 */
                    bool __h_case_result  = (true  &&  ((match9333 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9381 */
                        { /* cicili#Block9386 */
                          printf ("status: %d\n", -171);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9389 */
          __auto_type __h_matchbox  = v451 ;
          // ----------
          { /* cicili#Let9393 */
            __auto_type match9392  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9392 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9396 */
              bool __h_case_result  = (true  &&  (((match9392 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9397 */
                    (unboxed  =  (((match9392 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9403 */
                  { /* cicili#Let9407 */
                    // ----------
                    ;
                    ({ /* cicili#Let9409 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9414 */
                          { /* cicili#Block9416 */
                            printf ("resize 1 v233: ");
                            show_Vector_int (stdout , v451 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9421 */
                          // ----------
                          ;
                          { /* cicili#Block9423 */
                            { /* cicili#Block9428 */
                              printf ("status: %d\n", -174);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9433 */
                  // ----------
                  ;
                  ({ /* cicili#Let9435 */
                    bool __h_case_result  = (true  &&  ((match9392 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9440 */
                        { /* cicili#Block9445 */
                          printf ("status: %d\n", -173);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9448 */
          __auto_type __h_matchbox  = v461 ;
          // ----------
          { /* cicili#Let9452 */
            __auto_type match9451  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9451 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9455 */
              bool __h_case_result  = (true  &&  (((match9451 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9456 */
                    (unboxed  =  (((match9451 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9462 */
                  { /* cicili#Let9466 */
                    // ----------
                    ;
                    ({ /* cicili#Let9468 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9473 */
                          { /* cicili#Block9475 */
                            printf ("resize 15 v244: ");
                            show_Vector_char (stdout , v461 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9480 */
                          // ----------
                          ;
                          { /* cicili#Block9482 */
                            { /* cicili#Block9487 */
                              printf ("status: %d\n", -176);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9492 */
                  // ----------
                  ;
                  ({ /* cicili#Let9494 */
                    bool __h_case_result  = (true  &&  ((match9451 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9499 */
                        { /* cicili#Block9504 */
                          printf ("status: %d\n", -175);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9507 */
          __auto_type __h_matchbox  = v471 ;
          // ----------
          { /* cicili#Let9511 */
            __auto_type match9510  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9510 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9514 */
              bool __h_case_result  = (true  &&  (((match9510 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9515 */
                    (unboxed  =  (((match9510 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9521 */
                  { /* cicili#Let9525 */
                    // ----------
                    ;
                    ({ /* cicili#Let9527 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9532 */
                          { /* cicili#Block9534 */
                            printf ("resize 1 of drop 4 v233: ");
                            show_Vector_int (stdout , v471 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9539 */
                          // ----------
                          ;
                          { /* cicili#Block9541 */
                            { /* cicili#Block9546 */
                              printf ("status: %d\n", -178);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9551 */
                  // ----------
                  ;
                  ({ /* cicili#Let9553 */
                    bool __h_case_result  = (true  &&  ((match9510 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9558 */
                        { /* cicili#Block9563 */
                          printf ("status: %d\n", -177);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9566 */
          __auto_type __h_matchbox  = v481 ;
          // ----------
          { /* cicili#Let9570 */
            __auto_type match9569  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match9569 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let9573 */
              bool __h_case_result  = (true  &&  (((match9569 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9574 */
                    (unboxed  =  (((match9569 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9580 */
                  { /* cicili#Let9584 */
                    // ----------
                    ;
                    ({ /* cicili#Let9586 */
                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block9591 */
                          { /* cicili#Block9593 */
                            printf ("resize 15 of drop 5 v244: ");
                            show_Vector_char (stdout , v481 );
                            putchar ('\n');
                          }
                        }
                      else
                        { /* cicili#Let9598 */
                          // ----------
                          ;
                          { /* cicili#Block9600 */
                            { /* cicili#Block9605 */
                              printf ("status: %d\n", -180);
                              exit (EXIT_FAILURE );
                            }
                          }
                        }
                    });
                  }
                }
              else
                { /* cicili#Let9610 */
                  // ----------
                  ;
                  ({ /* cicili#Let9612 */
                    bool __h_case_result  = (true  &&  ((match9569 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block9617 */
                        { /* cicili#Block9622 */
                          printf ("status: %d\n", -179);
                          exit (EXIT_FAILURE );
                        }
                      }
                  });
                }
            });
          }
        });
        ({ /* cicili#Let9625 */
          __auto_type sliceToSlice  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9627 */
            __auto_type sliceToSlice  = drop_Vector_char (2, v481 );
            // ----------
            ((void)((sliceToSlice . __h_table )-> freeData ));
            sliceToSlice ;
          });
          // ----------
          { /* cicili#Let9633 */
            __auto_type match9632  = iterator_Vector_char (v481 );
            typeof((match9632 . __h_0_mem )) begin ;
            typeof((match9632 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let9636 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9637 */
                    (begin  =  (match9632 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9639 */
                    (end  =  (match9632 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9645 */
                  { /* cicili#Block9647 */
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
          { /* cicili#Let9652 */
            __auto_type match9651  = iterator_Vector_char (sliceToSlice );
            typeof((match9651 . __h_0_mem )) begin ;
            typeof((match9651 . __h_1_mem )) end ;
            // ----------
            ;
            ({ /* cicili#Let9655 */
              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9656 */
                    (begin  =  (match9651 . __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9658 */
                    (end  =  (match9651 . __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9664 */
                  { /* cicili#Block9666 */
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
        { /* cicili#Let9673 */
          __auto_type __h_cloned9670  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v211 )-> __h_table -> clone )(v211 );
          // ----------
          ({ /* cicili#Let9677 */
            __auto_type __h_matchbox  = __h_cloned9670 ;
            // ----------
            { /* cicili#Let9681 */
              __auto_type match9680  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match9680 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let9684 */
                bool __h_case_result  = (true  &&  (((match9680 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9685 */
                      (unboxed  =  (((match9680 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block9691 */
                    { /* cicili#Let9695 */
                      __auto_type __h_cloned_x9671  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block9697 */
                        { /* cicili#Let9699 */
                          __auto_type __h_iterator9672  = (__h_cloned_x9671 -> __h_table -> iterator )(__h_cloned9670 );
                          // ----------
                          { /* cicili#Let9704 */
                            typeof((__h_iterator9672 . __h_0_mem )) beg ;
                            typeof((__h_iterator9672 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let9706 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9707 */
                                    (beg  =  (__h_iterator9672 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn9709 */
                                    (end  =  (__h_iterator9672 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block9715 */
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
        { /* cicili#Let9722 */
          __auto_type __h_cloned9719  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v222 )-> __h_table -> clone )(v222 );
          // ----------
          ({ /* cicili#Let9726 */
            __auto_type __h_matchbox  = __h_cloned9719 ;
            // ----------
            { /* cicili#Let9730 */
              __auto_type match9729  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
              typeof((((match9729 . __h_data ). Just ). __h_0_mem )) unboxed ;
              // ----------
              ;
              ({ /* cicili#Let9733 */
                bool __h_case_result  = (true  &&  (((match9729 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9734 */
                      (unboxed  =  (((match9729 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block9740 */
                    { /* cicili#Let9744 */
                      __auto_type __h_cloned_x9720  = unboxed ;
                      // ----------
                      ;
                      { /* cicili#Block9746 */
                        { /* cicili#Let9748 */
                          __auto_type __h_iterator9721  = (__h_cloned_x9720 -> __h_table -> iterator )(__h_cloned9719 );
                          // ----------
                          { /* cicili#Let9753 */
                            typeof((__h_iterator9721 . __h_0_mem )) beg ;
                            typeof((__h_iterator9721 . __h_1_mem )) end ;
                            // ----------
                            ;
                            ({ /* cicili#Let9755 */
                              bool __h_case_result  = (true  &&  (({ /* cicili#Progn9756 */
                                    (beg  =  (__h_iterator9721 . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn9758 */
                                    (end  =  (__h_iterator9721 . __h_1_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block9764 */
                                  { /* cicili#Block9766 */
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
