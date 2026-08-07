#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include <time.h>
#include <limits.h>
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
  union { /* ciciliUnion119 */
    struct { /* ciciliStruct120 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct121 */
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
    StringBuffer_int (*clear) (StringBuffer_int sb );
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
  union { /* ciciliUnion169 */
    struct { /* ciciliStruct170 */
      int * __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
      size_t __h_3_mem ;
    } Buffered , _1 ;
    struct { /* ciciliStruct171 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_int;
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step );
StringBuffer_int FreedStringBuffer_int ();
__attribute__((weak)) StringBuffer_int Default_StringBuffer_int () {
  return FreedStringBuffer_int ();
}
StringBuffer_int clear_StringBuffer_int (StringBuffer_int sb );
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
typedef struct cicilivmpGRpVPDL5lUJ1f7deSi0isn9Y_ {
  Vector_int_ptr_t __h_0_mem ;
  Vector_int_ptr_t __h_1_mem ;
} cicilivmpGRpVPDL5lUJ1f7deSi0isn9Y_;
typedef cicilivmpGRpVPDL5lUJ1f7deSi0isn9Y_ Vector_int_iter_t ;
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
  union { /* ciciliUnion247 */
    struct { /* ciciliStruct248 */
      Vector_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct249 */
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
  union { /* ciciliUnion279 */
    struct { /* ciciliStruct280 */
      Vector_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct281 */
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
    Vector_int (*clear) (Vector_int vector );
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
  union { /* ciciliUnion347 */
    struct { /* ciciliStruct348 */
      StringBuffer_int __h_0_mem ;
    } Buffer , _2 ;
    struct { /* ciciliStruct349 */
      Vector_int __h_0_mem ;
      size_t __h_1_mem ;
      size_t __h_2_mem ;
    } Slice , _1 ;
    struct { /* ciciliStruct350 */
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
Vector_int clear_Vector_int (Vector_int vector );
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
  union { /* ciciliUnion460 */
    struct { /* ciciliStruct461 */
      Vector_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct462 */
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
  { /* cicili#Let492 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let497 */
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
StringBuffer_int clear_StringBuffer_int (StringBuffer_int sb ) {
  return ({ /* cicili#Let511 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let513 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn514 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn516 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn518 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn523 */
            MakeStringBuffer_int (buffer , 0, size , step );
          }) : ({ /* cicili#Let528 */
            // ----------
            ;
            ({ /* cicili#Progn530 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int resize_StringBuffer_int (StringBuffer_int sb , size_t len ) {
  return ({ /* cicili#Let539 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let541 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn542 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn544 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn546 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn551 */
            ({ /* cicili#Let553 */
              int * new_buffer  = realloc (buffer , (len  *  sizeof(int) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              MakeStringBuffer_int (new_buffer , new_cursor , len , step );
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
StringBuffer_int new_StringBuffer_int (size_t step ) {
  return newCapacity_StringBuffer_int (step , step );
}
StringBuffer_int newCapacity_StringBuffer_int (size_t capacity , size_t step ) {
  return ({ /* cicili#Let571 */
      int * buffer  = malloc ((capacity  *  sizeof(int) ));
      StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, capacity , step );
      // ----------
      sb ;
    });
}
StringBuffer_int copySlice_StringBuffer_int (StringBuffer_int sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let580 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let582 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn583 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn585 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn587 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn592 */
            ({ /* cicili#Let594 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_int (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_int (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let604 */
            // ----------
            ;
            ({ /* cicili#Progn606 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
StringBuffer_int copy_StringBuffer_int (StringBuffer_int sb ) {
  return ({ /* cicili#Let615 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let617 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn618 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn620 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn622 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn624 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn629 */
            ({ /* cicili#Let631 */
              StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
              // ----------
              print_StringBuffer_int (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let638 */
            // ----------
            ;
            ({ /* cicili#Progn640 */
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
  return ({ /* cicili#Let654 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let656 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn657 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn659 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn661 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn663 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn668 */
            ({ /* cicili#Let670 */
              size_t blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block674 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let676 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let681 */
            // ----------
            ;
            ({ /* cicili#Progn683 */
              FreedStringBuffer_int ();
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
  { /* cicili#Let691 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let693 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn694 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block700 */
          { /* cicili#Block702 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
    });
  }
}
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table () {
  static const StringBuffer_int__H_Table table  = { free_StringBuffer_int , clear_StringBuffer_int , resize_StringBuffer_int , new_StringBuffer_int , newCapacity_StringBuffer_int , copySlice_StringBuffer_int , copy_StringBuffer_int , put_StringBuffer_int , print_StringBuffer_int };
  return (&table );
}
StringBuffer_int MakeStringBuffer_int (int * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let712 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
  { /* cicili#Let717 */
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
  { /* cicili#Let740 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int_x Nothing_Vector_int_x () {
  { /* cicili#Let745 */
    Maybe_Vector_int_x instance  = ((Maybe_Vector_int_x){ get_Maybe_Vector_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int_x__H_IMPL__ */ 
#ifndef __Box_Vector_int__H_IMPL__
#define __Box_Vector_int__H_IMPL__
Box_Vector_int new_Box_Vector_int (Vector_int_x pointer ) {
  return ({ /* cicili#Let752 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Vector_int_x *)malloc (sizeof(Vector_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Vector_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_Vector_int clone_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let761 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let763 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn764 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn766 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn768 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn773 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn776 */
                (++(*count ));
                __h_Hold_Vector_int_x (pointer , count , address );
              }) : Gone_Vector_int_x ());
          }) : ({ /* cicili#Let782 */
            // ----------
            ;
            ({ /* cicili#Progn784 */
              Gone_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x take_Box_Vector_int (Box_Vector_int * this ) {
  return ({ /* cicili#Let792 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let794 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn795 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn797 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn799 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn804 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let808 */
                __auto_type result  = Just_Vector_int_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let816 */
            // ----------
            ;
            ({ /* cicili#Progn818 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
Maybe_Vector_int_x get_Box_Vector_int (Box_Vector_int rc ) {
  return ({ /* cicili#Let826 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let828 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn829 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn831 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn833 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn838 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Vector_int_x ((*pointer )) : Nothing_Vector_int_x ());
          }) : ({ /* cicili#Let845 */
            // ----------
            ;
            ({ /* cicili#Progn847 */
              Nothing_Vector_int_x ();
            });
          }));
      });
    });
}
void free_Box_Vector_int (Box_Vector_int * this ) {
  { /* cicili#Let856 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let858 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn859 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn861 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn863 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block869 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block872 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Vector_int_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block880 */
                if ((*count ) ==  1 )
                  { /* cicili#Block883 */
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
        { /* cicili#Let893 */
          // ----------
          ;
          ({ /* cicili#Let895 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block900 */
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
  { /* cicili#Let911 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Vector_int Gone_Vector_int_x () {
  { /* cicili#Let916 */
    Box_Vector_int instance  = ((Box_Vector_int){ get_Box_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Vector_int__H_IMPL__ */ 
Vector_int_iter_t iterator_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let923 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let927 */
        __auto_type match926  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match926 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let930 */
          bool __h_case_result  = (true  &&  (((match926 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn931 */
                (unboxed  =  (((match926 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn936 */
              ({ /* cicili#Let940 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let942 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn943 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn948 */
                      ({ /* cicili#Let952 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let954 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn955 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn957 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn962 */
                              ((Vector_int_iter_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let967 */
                              // ----------
                              ;
                              ({ /* cicili#Progn969 */
                                ((Vector_int_iter_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let974 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let976 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn977 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn979 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn981 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn986 */
                            ({ /* cicili#Let988 */
                              Vector_int_iter_t iter  = iterator_Vector_int (vec );
                              // ----------
                              ({ /* cicili#Let994 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let996 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn997 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1002 */
                                      ((Vector_int_iter_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let1007 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1009 */
                                        ((Vector_int_iter_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1014 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1016 */
                              ((Vector_int_iter_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1021 */
              // ----------
              ;
              ({ /* cicili#Progn1023 */
                ((Vector_int_iter_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Vector_int clear_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let1029 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1033 */
        __auto_type match1032  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1032 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1036 */
          bool __h_case_result  = (true  &&  (((match1032 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1037 */
                (unboxed  =  (((match1032 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1042 */
              ({ /* cicili#Let1046 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1048 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1049 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1054 */
                      ({ /* cicili#Let1058 */
                        __auto_type match1057  = take_Box_Vector_int ((&vector ));
                        typeof((((match1057 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1061 */
                          bool __h_case_result  = (true  &&  (((match1057 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1062 */
                                (ptr  =  (((match1057 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1067 */
                              ({ /* cicili#Progn1069 */
                                free (((void *)ptr ));
                                Buffer_int (clear_StringBuffer_int (sb ));
                              });
                            }) : ({ /* cicili#Let1075 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1077 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1082 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1084 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1085 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1087 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1092 */
                            ({ /* cicili#Let1095 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1099 */
                                __auto_type match1098  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1098 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1102 */
                                  bool __h_case_result  = (true  &&  (((match1098 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1103 */
                                        (unboxed  =  (((match1098 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1108 */
                                      ({ /* cicili#Let1112 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1114 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1115 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1120 */
                                              ({ /* cicili#Let1124 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_2_mem )) size ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1126 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn1127 */
                                                            (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn1129 */
                                                            (size  =  (((sbs . __h_data ). Buffered ). __h_2_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn1131 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1136 */
                                                      ({ /* cicili#Let1138 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), size ));
                                                      });
                                                    }) : ({ /* cicili#Let1146 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1148 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1153 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1155 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1156 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1161 */
                                                    clear_Vector_int (veci );
                                                  }) : ({ /* cicili#Let1166 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1168 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1173 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1175 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1180 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1182 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1187 */
              // ----------
              ;
              ({ /* cicili#Progn1189 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int resize_Vector_int (Vector_int vector , size_t len ) {
  return ({ /* cicili#Let1195 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1199 */
        __auto_type match1198  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1198 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1202 */
          bool __h_case_result  = (true  &&  (((match1198 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1203 */
                (unboxed  =  (((match1198 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1208 */
              ({ /* cicili#Let1212 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1214 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1215 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1220 */
                      ({ /* cicili#Let1224 */
                        __auto_type match1223  = take_Box_Vector_int ((&vector ));
                        typeof((((match1223 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let1227 */
                          bool __h_case_result  = (true  &&  (((match1223 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1228 */
                                (ptr  =  (((match1223 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1233 */
                              ({ /* cicili#Progn1235 */
                                free (((void *)ptr ));
                                Buffer_int (resize_StringBuffer_int (sb , len ));
                              });
                            }) : ({ /* cicili#Let1241 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1243 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1248 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1250 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1251 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1253 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1258 */
                            ({ /* cicili#Let1261 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1265 */
                                __auto_type match1264  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1264 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1268 */
                                  bool __h_case_result  = (true  &&  (((match1264 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1269 */
                                        (unboxed  =  (((match1264 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1274 */
                                      ({ /* cicili#Let1278 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1280 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1281 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1286 */
                                              ({ /* cicili#Let1290 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1292 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1293 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn1295 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1300 */
                                                      ({ /* cicili#Let1302 */
                                                        StringBuffer_int new_sb  = newCapacity_StringBuffer_int (len , step );
                                                        // ----------
                                                        Buffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let1310 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1312 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1317 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1319 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1320 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1325 */
                                                    resize_Vector_int (veci , len );
                                                  }) : ({ /* cicili#Let1330 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1332 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1337 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1339 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1344 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1346 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1351 */
              // ----------
              ;
              ({ /* cicili#Progn1353 */
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
  return ({ /* cicili#Let1367 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1371 */
        __auto_type match1370  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1370 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1374 */
          bool __h_case_result  = (true  &&  (((match1370 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1375 */
                (unboxed  =  (((match1370 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1380 */
              ({ /* cicili#Let1384 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1386 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1387 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1392 */
                      ({ /* cicili#Let1396 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let1398 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1399 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1404 */
                              buffer ;
                            }) : ({ /* cicili#Let1408 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1410 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1414 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let1416 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1417 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1419 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1424 */
                            ({ /* cicili#Let1427 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let1431 */
                                __auto_type match1430  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1430 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1434 */
                                  bool __h_case_result  = (true  &&  (((match1430 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1435 */
                                        (unboxed  =  (((match1430 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1440 */
                                      ({ /* cicili#Let1444 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1446 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1447 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1452 */
                                              ({ /* cicili#Let1456 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1458 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1459 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1464 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let1468 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1470 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1474 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1476 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1477 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn1479 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1484 */
                                                    (toArray_Vector_int (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let1489 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1491 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1495 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1497 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1501 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1503 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1507 */
              // ----------
              ;
              ({ /* cicili#Progn1509 */
                NULL ;
              });
            }));
        });
      });
    });
}
Vector_int wrap_Vector_int (const int item ) {
  return ({ /* cicili#Let1514 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1516 */
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
    return ({ /* cicili#Let1526 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1530 */
          __auto_type match1529  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1529 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1533 */
            bool __h_case_result  = (true  &&  (((match1529 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1534 */
                  (unboxed  =  (((match1529 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1539 */
                ({ /* cicili#Let1543 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1545 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1546 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1551 */
                        ({ /* cicili#Let1555 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let1557 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn1558 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1563 */
                                ({ /* cicili#Let1565 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1576 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1578 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1582 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1584 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1585 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1587 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1589 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1594 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1598 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1600 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1604 */
                // ----------
                ;
                ({ /* cicili#Progn1606 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Vector_int vector ) {
    return ({ /* cicili#Let1610 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let1614 */
          __auto_type match1613  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match1613 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let1617 */
            bool __h_case_result  = (true  &&  (((match1613 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1618 */
                  (unboxed  =  (((match1613 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn1623 */
                ({ /* cicili#Let1627 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let1629 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1630 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn1635 */
                        ({ /* cicili#Let1639 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let1641 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn1642 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1644 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1649 */
                                ({ /* cicili#Let1651 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%d", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", " ") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let1662 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1664 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let1668 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let1670 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1671 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1673 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn1675 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1680 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let1684 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1686 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let1690 */
                // ----------
                ;
                ({ /* cicili#Progn1692 */
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
  return ({ /* cicili#Let1697 */
      __auto_type __h_matchbox  = vector ;
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
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1716 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1717 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1722 */
                      ({ /* cicili#Let1726 */
                        // ----------
                        ;
                        ({ /* cicili#Let1728 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1732 */
                              Buffer_int (copy_StringBuffer_int (sb ));
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
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let1747 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn1748 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1750 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn1752 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1757 */
                            ({ /* cicili#Let1760 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1764 */
                                __auto_type match1763  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1763 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1767 */
                                  bool __h_case_result  = (true  &&  (((match1763 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1768 */
                                        (unboxed  =  (((match1763 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1773 */
                                      ({ /* cicili#Let1777 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1779 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1780 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1785 */
                                              ({ /* cicili#Let1789 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1791 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1795 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let1801 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1803 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1808 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1810 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1811 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1816 */
                                                    copySlice_Vector_int (veci , cur , size );
                                                  }) : ({ /* cicili#Let1821 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1823 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1828 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1830 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1835 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1837 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1842 */
              // ----------
              ;
              ({ /* cicili#Progn1844 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int copySlice_Vector_int (Vector_int vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let1850 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let1854 */
        __auto_type match1853  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1853 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let1857 */
          bool __h_case_result  = (true  &&  (((match1853 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1858 */
                (unboxed  =  (((match1853 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn1863 */
              ({ /* cicili#Let1867 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let1869 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1870 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn1875 */
                      ({ /* cicili#Let1879 */
                        // ----------
                        ;
                        ({ /* cicili#Let1881 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn1885 */
                              Buffer_int (copySlice_StringBuffer_int (sb , pos , len ));
                            }) : ({ /* cicili#Let1891 */
                              // ----------
                              ;
                              ({ /* cicili#Progn1893 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let1898 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let1900 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn1901 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1903 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn1908 */
                            ({ /* cicili#Let1911 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let1915 */
                                __auto_type match1914  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match1914 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let1918 */
                                  bool __h_case_result  = (true  &&  (((match1914 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1919 */
                                        (unboxed  =  (((match1914 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn1924 */
                                      ({ /* cicili#Let1928 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let1930 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn1931 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn1936 */
                                              ({ /* cicili#Let1940 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let1942 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn1946 */
                                                      Buffer_int (copySlice_StringBuffer_int (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let1952 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn1954 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let1959 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let1961 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn1962 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn1967 */
                                                    copySlice_Vector_int (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let1972 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn1974 */
                                                      None_int ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let1979 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn1981 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let1986 */
                            // ----------
                            ;
                            ({ /* cicili#Progn1988 */
                              None_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1993 */
              // ----------
              ;
              ({ /* cicili#Progn1995 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int replaceAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2001 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2005 */
        __auto_type match2004  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2004 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2008 */
          bool __h_case_result  = (true  &&  (((match2004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2009 */
                (unboxed  =  (((match2004 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2014 */
              ({ /* cicili#Let2018 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2020 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2021 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2026 */
                      ({ /* cicili#Let2030 */
                        __auto_type match2029  = take_Box_Vector_int ((&vector ));
                        typeof((((match2029 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2033 */
                          bool __h_case_result  = (true  &&  (((match2029 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2034 */
                                (ptr  =  (((match2029 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2039 */
                              ({ /* cicili#Progn2041 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let2045 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2047 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2048 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2050 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2055 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn2058 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_int (sb );
                                          }) : Buffer_int (sb ));
                                      }) : ({ /* cicili#Let2064 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2066 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2071 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2073 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2078 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2080 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2081 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2083 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2085 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2090 */
                            ({ /* cicili#Let2093 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2097 */
                                __auto_type match2096  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2096 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2100 */
                                  bool __h_case_result  = (true  &&  (((match2096 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2101 */
                                        (unboxed  =  (((match2096 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2106 */
                                      ({ /* cicili#Let2110 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2112 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2113 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2118 */
                                              ({ /* cicili#Let2122 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2124 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2125 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2127 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2132 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2135 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int (size , step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2145 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2147 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2152 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2154 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2155 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2160 */
                                                    replaceAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2165 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2167 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2172 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2174 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2179 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2181 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2186 */
              // ----------
              ;
              ({ /* cicili#Progn2188 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int deleteAt_Vector_int (Vector_int vector , size_t index ) {
  return ({ /* cicili#Let2194 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2198 */
        __auto_type match2197  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2197 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2201 */
          bool __h_case_result  = (true  &&  (((match2197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2202 */
                (unboxed  =  (((match2197 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2207 */
              ({ /* cicili#Let2211 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2213 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2214 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2219 */
                      ({ /* cicili#Let2223 */
                        __auto_type match2222  = take_Box_Vector_int ((&vector ));
                        typeof((((match2222 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2226 */
                          bool __h_case_result  = (true  &&  (((match2222 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2227 */
                                (ptr  =  (((match2222 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2232 */
                              ({ /* cicili#Progn2234 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let2238 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2240 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2241 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn2243 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn2245 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn2247 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2252 */
                                        ({ /* cicili#Progn2254 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_int (MakeStringBuffer_int (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let2262 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2264 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2269 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2271 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2276 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2278 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2279 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2281 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2283 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2288 */
                            ({ /* cicili#Let2291 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2295 */
                                __auto_type match2294  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2294 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2298 */
                                  bool __h_case_result  = (true  &&  (((match2294 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2299 */
                                        (unboxed  =  (((match2294 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2304 */
                                      ({ /* cicili#Let2308 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2310 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2311 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2316 */
                                              ({ /* cicili#Let2320 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2322 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2323 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2325 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2330 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2333 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2342 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2344 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2349 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2351 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2352 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2357 */
                                                    deleteAt_Vector_int (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2362 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2364 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2369 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2371 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2376 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2378 */
                              clone_Box_Vector_int (vector );
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
}
Vector_int insertAt_Vector_int (Vector_int vector , int item , size_t index ) {
  return ({ /* cicili#Let2391 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2395 */
        __auto_type match2394  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2394 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2398 */
          bool __h_case_result  = (true  &&  (((match2394 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2399 */
                (unboxed  =  (((match2394 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2404 */
              ({ /* cicili#Let2408 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2410 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2411 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2416 */
                      ({ /* cicili#Let2420 */
                        __auto_type match2419  = take_Box_Vector_int ((&vector ));
                        typeof((((match2419 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2423 */
                          bool __h_case_result  = (true  &&  (((match2419 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2424 */
                                (ptr  =  (((match2419 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2429 */
                              ({ /* cicili#Let2431 */
                                StringBuffer_int new_sb  = put_StringBuffer_int (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let2437 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2439 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2440 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2442 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2447 */
                                        ({ /* cicili#Progn2449 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_int (new_sb );
                                        });
                                      }) : ({ /* cicili#Let2456 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2458 */
                                          clone_Box_Vector_int (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2463 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2465 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2470 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2472 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2473 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2475 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2477 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2482 */
                            ({ /* cicili#Let2485 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2489 */
                                __auto_type match2488  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2488 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2492 */
                                  bool __h_case_result  = (true  &&  (((match2488 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2493 */
                                        (unboxed  =  (((match2488 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2498 */
                                      ({ /* cicili#Let2502 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2504 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2505 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2510 */
                                              ({ /* cicili#Let2514 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let2516 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn2517 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2519 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2524 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let2527 */
                                                          StringBuffer_int new_sb  = newCapacity_StringBuffer_int ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_int (print_StringBuffer_int (put_StringBuffer_int (print_StringBuffer_int (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let2537 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn2539 */
                                                        None_int ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let2544 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2546 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2547 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2552 */
                                                    insertAt_Vector_int (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let2557 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2559 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2564 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2566 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2571 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2573 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2578 */
              // ----------
              ;
              ({ /* cicili#Progn2580 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int reverse_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let2586 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2590 */
        __auto_type match2589  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2589 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2593 */
          bool __h_case_result  = (true  &&  (((match2589 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2594 */
                (unboxed  =  (((match2589 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2599 */
              ({ /* cicili#Let2603 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2605 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2606 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2611 */
                      ({ /* cicili#Let2615 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let2617 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn2618 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2620 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn2622 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn2624 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2629 */
                              ({ /* cicili#Let2633 */
                                __auto_type match2632  = take_Box_Vector_int ((&vector ));
                                typeof((((match2632 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let2636 */
                                  bool __h_case_result  = (true  &&  (((match2632 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2637 */
                                        (ptr  =  (((match2632 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2642 */
                                      ({ /* cicili#Let2644 */
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
                                    }) : ({ /* cicili#Let2652 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2654 */
                                        None_int ();
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
                    }) : ({ /* cicili#Let2666 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2668 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2669 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2671 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2673 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2678 */
                            ({ /* cicili#Let2681 */
                              __auto_type __h_matchbox  = vec ;
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
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2700 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2701 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2706 */
                                              reverse_Vector_int (Buffer_int (copySlice_StringBuffer_int (sbs , cur , size )));
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
                                                    reverse_Vector_int (copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let2727 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2729 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let2734 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn2736 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let2741 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2743 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2748 */
              // ----------
              ;
              ({ /* cicili#Progn2750 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int append_Vector_int (Vector_int lvector , Vector_int rvector ) {
  return ({ /* cicili#Let2756 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let2760 */
        __auto_type match2759  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2759 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2763 */
          bool __h_case_result  = (true  &&  (((match2759 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2764 */
                (unboxed  =  (((match2759 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2769 */
              ({ /* cicili#Let2773 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2775 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2776 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2781 */
                      ({ /* cicili#Let2785 */
                        __auto_type match2784  = take_Box_Vector_int ((&lvector ));
                        typeof((((match2784 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2788 */
                          bool __h_case_result  = (true  &&  (((match2784 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2789 */
                                (ptr  =  (((match2784 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2794 */
                              ({ /* cicili#Progn2796 */
                                free (((void *)ptr ));
                                Buffer_int (print_StringBuffer_int (sb , toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                              });
                            }) : ({ /* cicili#Let2804 */
                              // ----------
                              ;
                              ({ /* cicili#Progn2806 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let2811 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2813 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2814 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2816 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2818 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2823 */
                            ({ /* cicili#Let2826 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2830 */
                                __auto_type match2829  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2829 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2833 */
                                  bool __h_case_result  = (true  &&  (((match2829 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2834 */
                                        (unboxed  =  (((match2829 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2839 */
                                      ({ /* cicili#Let2843 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2845 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2846 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2851 */
                                              Buffer_int (print_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), toArray_Vector_int (rvector ), len_Vector_int (rvector )));
                                            }) : ({ /* cicili#Let2860 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2862 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn2863 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2868 */
                                                    append_Vector_int (copySlice_Vector_int (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let2874 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2876 */
                                                      clone_Box_Vector_int (vec );
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
                          }) : ({ /* cicili#Let2888 */
                            // ----------
                            ;
                            ({ /* cicili#Progn2890 */
                              clone_Box_Vector_int (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2895 */
              // ----------
              ;
              ({ /* cicili#Progn2897 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int push_Vector_int (int item , Vector_int vector ) {
  return ({ /* cicili#Let2903 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let2907 */
        __auto_type match2906  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2906 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2910 */
          bool __h_case_result  = (true  &&  (((match2906 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2911 */
                (unboxed  =  (((match2906 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2916 */
              ({ /* cicili#Let2920 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let2922 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2923 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2928 */
                      ({ /* cicili#Let2932 */
                        __auto_type match2931  = take_Box_Vector_int ((&vector ));
                        typeof((((match2931 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let2935 */
                          bool __h_case_result  = (true  &&  (((match2931 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2936 */
                                (ptr  =  (((match2931 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn2941 */
                              ({ /* cicili#Progn2943 */
                                free (((void *)ptr ));
                                Buffer_int (put_StringBuffer_int (sb , item ));
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
                    }) : ({ /* cicili#Let2956 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let2958 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn2959 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn2961 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn2963 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn2968 */
                            ({ /* cicili#Let2971 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let2975 */
                                __auto_type match2974  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match2974 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let2978 */
                                  bool __h_case_result  = (true  &&  (((match2974 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2979 */
                                        (unboxed  =  (((match2974 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn2984 */
                                      ({ /* cicili#Let2988 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2990 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn2991 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn2996 */
                                              Buffer_int (put_StringBuffer_int (copySlice_StringBuffer_int (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let3003 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let3005 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3006 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn3011 */
                                                    push_Vector_int (item , copySlice_Vector_int (veci , cur , size ));
                                                  }) : ({ /* cicili#Let3017 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn3019 */
                                                      clone_Box_Vector_int (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let3024 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3026 */
                                        None_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let3031 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3033 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3038 */
              // ----------
              ;
              ({ /* cicili#Progn3040 */
                None_int ();
              });
            }));
        });
      });
    });
}
Vector_int take_Vector_int (size_t len , Vector_int vector ) {
  return ({ /* cicili#Let3046 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3050 */
        __auto_type match3049  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3049 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3053 */
          bool __h_case_result  = (true  &&  (((match3049 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3054 */
                (unboxed  =  (((match3049 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3059 */
              ({ /* cicili#Let3063 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3065 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3066 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3071 */
                      ({ /* cicili#Let3075 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3077 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3078 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3083 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), 0, len ) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3095 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3097 */
                                Slice_int (clone_Box_Vector_int (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3103 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3105 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3106 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3108 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3110 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3115 */
                            (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , 0) : (((len  <  size  )) ? Slice_int (clone_Box_Vector_int (vec ), cursor , len ) : Slice_int (clone_Box_Vector_int (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let3127 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3129 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3134 */
              // ----------
              ;
              ({ /* cicili#Progn3136 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int last_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3143 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3147 */
        __auto_type match3146  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3146 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3150 */
          bool __h_case_result  = (true  &&  (((match3146 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3151 */
                (unboxed  =  (((match3146 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3156 */
              ({ /* cicili#Let3160 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3162 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3163 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3168 */
                      ({ /* cicili#Let3172 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3174 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3175 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3177 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3182 */
                              Just_int ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let3187 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3189 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3194 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3196 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3197 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3199 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3201 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3206 */
                            nth_Vector_int ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let3211 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3213 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3218 */
              // ----------
              ;
              ({ /* cicili#Progn3220 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Vector_int init_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3226 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3230 */
        __auto_type match3229  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3229 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3233 */
          bool __h_case_result  = (true  &&  (((match3229 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3234 */
                (unboxed  =  (((match3229 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3239 */
              ({ /* cicili#Let3243 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3245 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3246 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3251 */
                      ({ /* cicili#Let3255 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3257 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3258 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3263 */
                              Slice_int (clone_Box_Vector_int (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let3269 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3271 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3276 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3278 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3279 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3281 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3283 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3288 */
                            Slice_int (clone_Box_Vector_int (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let3294 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3296 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3301 */
              // ----------
              ;
              ({ /* cicili#Progn3303 */
                None_int ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Vector_int (Vector_int vector , size_t desired ) {
  return ({ /* cicili#Let3308 */
      size_t len  = len_Vector_int (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3315 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3319 */
        __auto_type match3318  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3318 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3322 */
          bool __h_case_result  = (true  &&  (((match3318 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3323 */
                (unboxed  =  (((match3318 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3328 */
              ({ /* cicili#Let3332 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3334 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3335 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3340 */
                      ({ /* cicili#Let3344 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3346 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3347 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3352 */
                              cursor ;
                            }) : ({ /* cicili#Let3356 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3358 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3362 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3364 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3365 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3370 */
                            size ;
                          }) : ({ /* cicili#Let3374 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3376 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3380 */
              // ----------
              ;
              ({ /* cicili#Progn3382 */
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
  return ({ /* cicili#Let3390 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3394 */
        __auto_type match3393  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3393 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3397 */
          bool __h_case_result  = (true  &&  (((match3393 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3398 */
                (unboxed  =  (((match3393 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3403 */
              ({ /* cicili#Let3407 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3409 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3410 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3415 */
                      ({ /* cicili#Let3419 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3421 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn3422 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3427 */
                              (((len  <=  0 )) ? Slice_int (clone_Box_Vector_int (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_int (clone_Box_Vector_int (vector ), len , (cursor  -  len  )) : Slice_int (clone_Box_Vector_int (vector ), 0, 0)));
                            }) : ({ /* cicili#Let3439 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3441 */
                                None_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3446 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3448 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3449 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3451 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3456 */
                            drop_Vector_int ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let3461 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3463 */
                              clone_Box_Vector_int (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3468 */
              // ----------
              ;
              ({ /* cicili#Progn3470 */
                None_int ();
              });
            }));
        });
      });
    });
}
Maybe_int head_Vector_int (Vector_int vector ) {
  return ({ /* cicili#Let3477 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3481 */
        __auto_type match3480  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3480 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3484 */
          bool __h_case_result  = (true  &&  (((match3480 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3485 */
                (unboxed  =  (((match3480 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3490 */
              ({ /* cicili#Let3494 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3496 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3497 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3502 */
                      ({ /* cicili#Let3506 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3508 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3509 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3511 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3516 */
                              (((cursor  >  0 )) ? Just_int ((*buffer )) : Nothing_int ());
                            }) : ({ /* cicili#Let3523 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3525 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3530 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let3532 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn3533 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3535 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3540 */
                            nth_Vector_int (cursor , vector );
                          }) : ({ /* cicili#Let3545 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3547 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3552 */
              // ----------
              ;
              ({ /* cicili#Progn3554 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
Maybe_int nth_Vector_int (size_t index , Vector_int vector ) {
  return ({ /* cicili#Let3561 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let3565 */
        __auto_type match3564  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3564 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3568 */
          bool __h_case_result  = (true  &&  (((match3564 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3569 */
                (unboxed  =  (((match3564 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3574 */
              ({ /* cicili#Let3578 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let3580 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3581 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3586 */
                      ({ /* cicili#Let3590 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let3592 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn3593 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3595 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn3600 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_int ((*(buffer  +  index  ))) : Nothing_int ());
                            }) : ({ /* cicili#Let3607 */
                              // ----------
                              ;
                              ({ /* cicili#Progn3609 */
                                Nothing_int ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let3614 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let3616 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn3617 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3619 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn3621 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3626 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Vector_int ((cursor  +  index  ), vector ) : Nothing_int ());
                          }) : ({ /* cicili#Let3633 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3635 */
                              Nothing_int ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3640 */
              // ----------
              ;
              ({ /* cicili#Progn3642 */
                Nothing_int ();
              });
            }));
        });
      });
    });
}
void free_Vector_int_x (Vector_int_x * this_ptr ) {
  { /* cicili#Let3647 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3651 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let3653 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn3654 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3660 */
            free_StringBuffer_int ((&sb ));
          }
        else
          { /* cicili#Let3666 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let3668 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn3669 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3675 */
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
  static Vector_int__H_Table table  = { free_Vector_int_x , iterator_Vector_int , clear_Vector_int , resize_Vector_int , pure_Vector_int , pureCapacity_Vector_int , toArray_Vector_int , wrap_Vector_int , show_Vector_int , copy_Vector_int , copySlice_Vector_int , replaceAt_Vector_int , deleteAt_Vector_int , insertAt_Vector_int , reverse_Vector_int , append_Vector_int , push_Vector_int , take_Vector_int , last_Vector_int , init_Vector_int , hasLen_Vector_int , len_Vector_int , tail_Vector_int , drop_Vector_int , head_Vector_int , nth_Vector_int };
  return (&table );
}
Vector_int Buffer_int (StringBuffer_int buffer ) {
  { /* cicili#Let3685 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int Slice_int (Vector_int vector , size_t cursor , size_t size ) {
  { /* cicili#Let3693 */
    Vector_int_x instance  = malloc (sizeof(class_Vector_int));
    // ----------
    (*instance ) = ((class_Vector_int){ get_Vector_int__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Vector_int (instance );
  }
}
Vector_int None_int () {
  { /* cicili#Let3700 */
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
  { /* cicili#Let3718 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Vector_int Nothing_Vector_int () {
  { /* cicili#Let3723 */
    Maybe_Vector_int instance  = ((Maybe_Vector_int){ get_Maybe_Vector_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Vector_int__H_IMPL__ */ 
long ms_now () {
  { /* cicili#Let3737 */
    struct timespec ts ;
    // ----------
    clock_gettime (CLOCK_MONOTONIC , (&ts ));
    return (((ts . tv_sec ) *  1000 ) +  ((ts . tv_nsec ) /  1000000 ) );
  }
}
int N  = 1000000;
int STEP  = 1000;
long bench_a_push () {
  { /* cicili#Let3740 */
    long t0  = ms_now ();
    // ----------
    ({ /* cicili#Let3743 */
      __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3745 */
        __auto_type v  = pure_Vector_int (STEP );
        // ----------
        ((void)((v . __h_table )-> freeData ));
        v ;
      });
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          for (int i  = 0; (i  <  STEP  ); (++i )) {
              v  = push_Vector_int (((epoch  *  STEP  ) +  i  ), v );
          }
          v  = clear_Vector_int (v );
      }
    });
    return (ms_now () -  t0  );
  }
}
long bench_a_nth () {
  ({ /* cicili#Let3755 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3757 */
      __auto_type v  = ({ /* cicili#Let3760 */
        StringBuffer_int tmp_buf3759  = newCapacity_StringBuffer_int (50, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3759 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49}), 50));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let3768 */
      long t0  = ms_now ();
      long sum  = 0;
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* cicili#Let3774 */
            __auto_type match3773  = nth_Vector_int ((i  %  50 ), v );
            typeof((((match3773 . __h_data ). Just ). __h_0_mem )) val ;
            // ----------
            ;
            ({ /* cicili#Let3777 */
              bool __h_case_result  = (true  &&  (((match3773 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3778 */
                    (val  =  (((match3773 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3784 */
                  sum  = (sum  +  val  );
                }
              else
                { /* cicili#Let3789 */
                  // ----------
                  ;
                  { /* cicili#Block3791 */
                    
                  }
                }
            });
          }
      }
      if (sum  ==  (LLONG_MAX  -  1 ) )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
long bench_a_slice () {
  ({ /* cicili#Let3798 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3800 */
      __auto_type v  = ({ /* cicili#Let3803 */
        StringBuffer_int tmp_buf3802  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3802 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let3811 */
      long t0  = ms_now ();
      long total_len  = 0;
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          ({ /* cicili#Let3816 */
            __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3818 */
              __auto_type s  = drop_Vector_int (2, v );
              // ----------
              ((void)((s . __h_table )-> freeData ));
              s ;
            });
            // ----------
            total_len  = (total_len  +  len_Vector_int (s ) );
          });
      }
      if (total_len  ==  LLONG_MAX  )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
long bench_a_iterate () {
  ({ /* cicili#Let3824 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3826 */
      __auto_type v  = ({ /* cicili#Let3829 */
        StringBuffer_int tmp_buf3828  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3828 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let3837 */
      long t0  = ms_now ();
      long sum  = 0;
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          { /* cicili#Let3845 */
            __auto_type __h_cloned3842  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v )-> __h_table -> clone )(v );
            // ----------
            ({ /* cicili#Let3849 */
              __auto_type __h_matchbox  = __h_cloned3842 ;
              // ----------
              { /* cicili#Let3853 */
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
                  
                  if (__h_case_result )
                    { /* cicili#Block3863 */
                      { /* cicili#Let3867 */
                        __auto_type __h_cloned_x3843  = unboxed ;
                        // ----------
                        ;
                        { /* cicili#Block3869 */
                          { /* cicili#Let3871 */
                            __auto_type __h_iterator3844  = (__h_cloned_x3843 -> __h_table -> iterator )(__h_cloned3842 );
                            // ----------
                            { /* cicili#Let3876 */
                              typeof((__h_iterator3844 . __h_0_mem )) beg ;
                              typeof((__h_iterator3844 . __h_1_mem )) end ;
                              // ----------
                              ;
                              ({ /* cicili#Let3878 */
                                bool __h_case_result  = (true  &&  (({ /* cicili#Progn3879 */
                                      (beg  =  (__h_iterator3844 . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn3881 */
                                      (end  =  (__h_iterator3844 . __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                if (__h_case_result )
                                  { /* cicili#Block3887 */
                                    while (((beg ++) !=  end  )) {
                                        sum  = (sum  +  (*beg ) );
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
      }
      if (sum  ==  LLONG_MAX  )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
long bench_a_iterate_reverse () {
  ({ /* cicili#Let3893 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3895 */
      __auto_type v  = ({ /* cicili#Let3898 */
        StringBuffer_int tmp_buf3897  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3897 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let3906 */
      long t0  = ms_now ();
      long sum  = 0;
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          { /* cicili#Let3914 */
            __auto_type __h_cloned3911  __attribute__((__cleanup__(__h_free_data_router ))) = ((&v )-> __h_table -> clone )(v );
            // ----------
            ({ /* cicili#Let3918 */
              __auto_type __h_matchbox  = __h_cloned3911 ;
              // ----------
              { /* cicili#Let3922 */
                __auto_type match3921  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                typeof((((match3921 . __h_data ). Just ). __h_0_mem )) unboxed ;
                // ----------
                ;
                ({ /* cicili#Let3925 */
                  bool __h_case_result  = (true  &&  (((match3921 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3926 */
                        (unboxed  =  (((match3921 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block3932 */
                      { /* cicili#Let3936 */
                        __auto_type __h_cloned_x3912  = unboxed ;
                        // ----------
                        ;
                        { /* cicili#Block3938 */
                          { /* cicili#Let3940 */
                            __auto_type __h_iterator3913  = (__h_cloned_x3912 -> __h_table -> iterator )(__h_cloned3911 );
                            // ----------
                            { /* cicili#Let3945 */
                              typeof((__h_iterator3913 . __h_0_mem )) beg ;
                              typeof((__h_iterator3913 . __h_1_mem )) end ;
                              // ----------
                              ;
                              ({ /* cicili#Let3947 */
                                bool __h_case_result  = (true  &&  (({ /* cicili#Progn3948 */
                                      (beg  =  (__h_iterator3913 . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn3950 */
                                      (end  =  (__h_iterator3913 . __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                if (__h_case_result )
                                  { /* cicili#Block3956 */
                                    { /* cicili#Block3958 */
                                      (--beg );
                                      while ((beg  !=  (--end ) )) {
                                          sum  = (sum  +  (*end ) );
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
      }
      if (sum  ==  LLONG_MAX  )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
long bench_a_cow_slice () {
  ({ /* cicili#Let3964 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3966 */
      __auto_type v  = ({ /* cicili#Let3969 */
        StringBuffer_int tmp_buf3968  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3968 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let3977 */
      long t0  = ms_now ();
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          ({ /* cicili#Let3982 */
            __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3984 */
              __auto_type s  = drop_Vector_int (2, v );
              // ----------
              ((void)((s . __h_table )-> freeData ));
              s ;
            });
            __auto_type s2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3987 */
              __auto_type s2  = push_Vector_int (epoch , s );
              // ----------
              ((void)((s2 . __h_table )-> freeData ));
              s2 ;
            });
            // ----------
            
          });
      }
      return (ms_now () -  t0  );
    }
  });
}
long bench_b_clone_and_get () {
  ({ /* cicili#Let3994 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3996 */
      __auto_type v  = ({ /* cicili#Let3999 */
        StringBuffer_int tmp_buf3998  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf3998 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let4007 */
      long t0  = ms_now ();
      long sum  = 0;
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          ({ /* cicili#Let4012 */
            __auto_type c  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4014 */
              __auto_type c  = clone_Box_Vector_int (v );
              // ----------
              ((void)((c . __h_table )-> freeData ));
              c ;
            });
            // ----------
            { /* cicili#Let4019 */
              __auto_type match4018  = nth_Vector_int ((i  %  20 ), c );
              typeof((((match4018 . __h_data ). Just ). __h_0_mem )) val ;
              // ----------
              ;
              ({ /* cicili#Let4022 */
                bool __h_case_result  = (true  &&  (((match4018 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4023 */
                      (val  =  (((match4018 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block4029 */
                    sum  = (sum  +  val  );
                  }
                else
                  { /* cicili#Let4034 */
                    // ----------
                    ;
                    { /* cicili#Block4036 */
                      
                    }
                  }
              });
            }
          });
      }
      if (sum  ==  LLONG_MAX  )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
long bench_b_exclusive_push () {
  { /* cicili#Let4042 */
    long t0  = ms_now ();
    // ----------
    for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
        ({ /* cicili#Let4047 */
          __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4049 */
            __auto_type v  = pure_Vector_int (STEP );
            // ----------
            ((void)((v . __h_table )-> freeData ));
            v ;
          });
          // ----------
          for (int i  = 0; (i  <  STEP  ); (++i )) {
              v  = push_Vector_int (((epoch  *  STEP  ) +  i  ), v );
          }
        });
    }
    return (ms_now () -  t0  );
  }
}
long bench_b_cow_with_live_clone () {
  ({ /* cicili#Let4056 */
    __auto_type v  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4058 */
      __auto_type v  = ({ /* cicili#Let4061 */
        StringBuffer_int tmp_buf4060  = newCapacity_StringBuffer_int (20, 16);
        // ----------
        Buffer_int (print_StringBuffer_int (tmp_buf4060 , ((const int[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19}), 20));
      });
      // ----------
      ((void)((v . __h_table )-> freeData ));
      v ;
    });
    // ----------
    { /* cicili#Let4069 */
      long t0  = ms_now ();
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          ({ /* cicili#Let4074 */
            __auto_type c  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4076 */
              __auto_type c  = clone_Box_Vector_int (v );
              // ----------
              ((void)((c . __h_table )-> freeData ));
              c ;
            });
            __auto_type v2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4079 */
              __auto_type v2  = push_Vector_int (epoch , v );
              // ----------
              ((void)((v2 . __h_table )-> freeData ));
              v2 ;
            });
            // ----------
            ({ /* cicili#Let4083 */
              __auto_type s  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4085 */
                __auto_type s  = drop_Vector_int (0, v );
                // ----------
                ((void)((s . __h_table )-> freeData ));
                s ;
              });
              __auto_type s2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4088 */
                __auto_type s2  = push_Vector_int (epoch , s );
                // ----------
                ((void)((s2 . __h_table )-> freeData ));
                s2 ;
              });
              // ----------
              
            });
          });
      }
      return (ms_now () -  t0  );
    }
  });
}
long bench_c_const_slice () {
  { /* cicili#Let4094 */
    long t0  = ms_now ();
    long total_len  = 0;
    // ----------
    for (int i  = 0; (i  <  N  ); (++i )) {
        ({ /* cicili#Let4099 */
          __auto_type cv  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4101 */
            __auto_type cv  = Buffer_char (MakeStringBuffer_char ("abcdefghijklmnopqrst", 20, 20, 0));
            // ----------
            ((void)((cv . __h_table )-> freeData ));
            cv ;
          });
          __auto_type cvs  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4108 */
            __auto_type cvs  = drop_Str (2, cv );
            // ----------
            ((void)((cvs . __h_table )-> freeData ));
            cvs ;
          });
          // ----------
          total_len  = (total_len  +  len_Str (cvs ) );
        });
    }
    if (total_len  ==  LLONG_MAX  )
      printf ("(never)");
    return (ms_now () -  t0  );
  }
}
long bench_c_const_iterate () {
  ({ /* cicili#Let4114 */
    __auto_type cv  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4116 */
      __auto_type cv  = Buffer_char (MakeStringBuffer_char ("abcdefghijklmnopqrst", 20, 20, 0));
      // ----------
      ((void)((cv . __h_table )-> freeData ));
      cv ;
    });
    // ----------
    { /* cicili#Let4123 */
      long t0  = ms_now ();
      long sum  = 0;
      // ----------
      for (int epoch  = 0; (epoch  <  (N  /  STEP  ) ); (++epoch )) {
          { /* cicili#Let4131 */
            __auto_type __h_cloned4128  __attribute__((__cleanup__(__h_free_data_router ))) = ((&cv )-> __h_table -> clone )(cv );
            // ----------
            ({ /* cicili#Let4135 */
              __auto_type __h_matchbox  = __h_cloned4128 ;
              // ----------
              { /* cicili#Let4139 */
                __auto_type match4138  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                typeof((((match4138 . __h_data ). Just ). __h_0_mem )) unboxed ;
                // ----------
                ;
                ({ /* cicili#Let4142 */
                  bool __h_case_result  = (true  &&  (((match4138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4143 */
                        (unboxed  =  (((match4138 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4149 */
                      { /* cicili#Let4153 */
                        __auto_type __h_cloned_x4129  = unboxed ;
                        // ----------
                        ;
                        { /* cicili#Block4155 */
                          { /* cicili#Let4157 */
                            __auto_type __h_iterator4130  = (__h_cloned_x4129 -> __h_table -> iterator )(__h_cloned4128 );
                            // ----------
                            { /* cicili#Let4162 */
                              typeof((__h_iterator4130 . __h_0_mem )) beg ;
                              typeof((__h_iterator4130 . __h_1_mem )) end ;
                              // ----------
                              ;
                              ({ /* cicili#Let4164 */
                                bool __h_case_result  = (true  &&  (({ /* cicili#Progn4165 */
                                      (beg  =  (__h_iterator4130 . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn4167 */
                                      (end  =  (__h_iterator4130 . __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                if (__h_case_result )
                                  { /* cicili#Block4173 */
                                    while (((beg ++) !=  end  )) {
                                        sum  = (sum  +  (*beg ) );
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
      }
      if (sum  ==  LLONG_MAX  )
        printf ("(never)");
      return (ms_now () -  t0  );
    }
  });
}
int main () {
  printf ("Cicili Vector vs Rust Vec<T> — %d operations each\n\n", N );
  printf ("=== Benchmark A: Vector^int (no live clones during mutation) ===\n");
  printf ("  (mirrors Rust: plain Vec<i32>)\n\n");
  printf ("  push %d elements (%d epochs of %d): %ld ms\n", N , (N  /  STEP  ), STEP , bench_a_push ());
  printf ("  nth (bounds-checked) %d times: %ld ms\n", N , bench_a_nth ());
  printf ("  slice/drop (Rc clone + Slice) %d times: %ld ms\n", N , bench_a_slice ());
  printf ("  forward iterate (%d epochs x %d elements): %ld ms\n", (N  /  STEP  ), STEP , bench_a_iterate ());
  printf ("  reverse iterate (%d epochs x %d elements): %ld ms\n", (N  /  STEP  ), STEP , bench_a_iterate_reverse ());
  printf ("  COW slice mutation (copySlice+push) %d times: %ld ms\n\n", (N  /  STEP  ), bench_a_cow_slice ());
  printf ("=== Benchmark B: Vector^int with live clones ===\n");
  printf ("  (mirrors Rust: Rc<RefCell<Vec<i32>>>)\n\n");
  printf ("  clone + nth (Rc liveness check) %d times: %ld ms\n", N , bench_b_clone_and_get ());
  printf ("  exclusive push (count==1 guard) %d elements: %ld ms\n", N , bench_b_exclusive_push ());
  printf ("  COW push with live clone %d times: %ld ms\n\n", (N  /  STEP  ), bench_b_cow_with_live_clone ());
  printf ("=== Benchmark C: Const Str (zero-allocation C string wrapping) ===\n");
  printf ("  (no direct Rust equivalent -- unique to Cicili)\n\n");
  printf ("  const wrap + drop %d times: %ld ms\n", N , bench_c_const_slice ());
  printf ("  const iterate (%d epochs x 20 chars): %ld ms\n\n", (N  /  STEP  ), bench_c_const_iterate ());
  printf ("Notes:\n");
  printf ("  A3 slice: Cicili Rc clone has small overhead vs Rust zero-cost &[T].\n");
  printf ("  B2 exclusive push: Cicili count==1 guard mirrors Rust Rc::get_mut.\n");
  printf ("  B3 COW: both Cicili copySlice and Rust Vec::clone alloc + memcpy.\n");
  printf ("  C:  const Str wraps a C literal pointer, zero alloc -- Rust &str equivalent.\n");
  return 0;
}
