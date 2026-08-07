#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#define __Maybe_int__H_IMPL__ 
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
  union { /* ciciliUnion116 */
    struct { /* ciciliStruct117 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct118 */
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
#ifndef __BoxedList_int__H_DECL__
#define __BoxedList_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_BoxedList_int class_BoxedList_int ;
typedef class_BoxedList_int * BoxedList_int_x ;
#ifndef __Maybe_BoxedList_int_x__H_DECL__
#define __Maybe_BoxedList_int_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_int_x Maybe_BoxedList_int_x ;
typedef void (*free_Maybe_BoxedList_int_x_t) (Maybe_BoxedList_int_x * this );
typedef struct Maybe_BoxedList_int_x__H_Table {
  free_Maybe_BoxedList_int_x_t freeData ;
} Maybe_BoxedList_int_x__H_Table;
typedef struct Maybe_BoxedList_int_x {
  const Maybe_BoxedList_int_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion149 */
    struct { /* ciciliStruct150 */
      BoxedList_int_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct151 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_int_x;
Maybe_BoxedList_int_x Just_BoxedList_int_x (BoxedList_int_x value );
Maybe_BoxedList_int_x Nothing_BoxedList_int_x ();
__attribute__((weak)) Maybe_BoxedList_int_x Default_Maybe_BoxedList_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_BoxedList_int_x ();
}
const Maybe_BoxedList_int_x__H_Table * const get_Maybe_BoxedList_int_x__H_Table ();
void free_Maybe_BoxedList_int_x (Maybe_BoxedList_int_x * this );
#endif /* __Maybe_BoxedList_int_x__H_DECL__ */ 
#ifndef __Box_BoxedList_int__H_DECL__
#define __Box_BoxedList_int__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_BoxedList_int Box_BoxedList_int ;
typedef void (*free_Box_BoxedList_int_t) (Box_BoxedList_int * this );
typedef struct Box_BoxedList_int__H_Table {
  free_Box_BoxedList_int_t freeData ;
    Box_BoxedList_int (*new) (BoxedList_int_x pointer );
    Box_BoxedList_int (*clone) (Box_BoxedList_int rc );
    Maybe_BoxedList_int_x (*take) (Box_BoxedList_int * this );
    Maybe_BoxedList_int_x (*get) (Box_BoxedList_int rc );
} Box_BoxedList_int__H_Table;
typedef struct Box_BoxedList_int {
  const Box_BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion181 */
    struct { /* ciciliStruct182 */
      BoxedList_int_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct183 */
    } Gone , _ ;
  } __h_data ;
} Box_BoxedList_int;
Box_BoxedList_int __h_Hold_BoxedList_int_x (BoxedList_int_x * pointer , int * count , size_t address );
Box_BoxedList_int Gone_BoxedList_int_x ();
__attribute__((weak)) Box_BoxedList_int Default_Box_BoxedList_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Gone_BoxedList_int_x ();
}
Box_BoxedList_int new_Box_BoxedList_int (BoxedList_int_x pointer );
Box_BoxedList_int clone_Box_BoxedList_int (Box_BoxedList_int rc );
Maybe_BoxedList_int_x take_Box_BoxedList_int (Box_BoxedList_int * this );
Maybe_BoxedList_int_x get_Box_BoxedList_int (Box_BoxedList_int rc );
const Box_BoxedList_int__H_Table * const get_Box_BoxedList_int__H_Table ();
void free_Box_BoxedList_int (Box_BoxedList_int * this );
#endif /* __Box_BoxedList_int__H_DECL__ */ 
typedef Box_BoxedList_int BoxedList_int ;
typedef void (*free_BoxedList_int_t) (BoxedList_int_x * this );
typedef struct BoxedList_int__H_Table {
  free_BoxedList_int_t freeData ;
    int * (*toArray) (BoxedList_int list , int term );
    BoxedList_int (*wrap) (const int item );
    BoxedList_int (*pure) (const int * buf , int len );
    int (*show) (CFile file , BoxedList_int list );
    BoxedList_int (*copy) (BoxedList_int list );
    BoxedList_int (*replaceAt) (BoxedList_int list , int item , int index );
    BoxedList_int (*deleteAt) (BoxedList_int list , int index );
    BoxedList_int (*insertAt) (BoxedList_int llist , int item , int index );
    BoxedList_int (*replace) (BoxedList_int list , int item , BoxedList_int aimed );
    BoxedList_int (*delete) (BoxedList_int list , BoxedList_int aimed );
    BoxedList_int (*insert) (BoxedList_int llist , int item , BoxedList_int rlist );
    BoxedList_int (*reverse) (BoxedList_int list );
    BoxedList_int (*append) (BoxedList_int llist , BoxedList_int rlist );
    BoxedList_int (*push) (int item , BoxedList_int list );
    BoxedList_int (*take) (int len , BoxedList_int list );
    BoxedList_int (*last) (BoxedList_int list );
    BoxedList_int (*init) (BoxedList_int list );
    BoxedList_int (*tail) (BoxedList_int list );
    BoxedList_int (*drop) (int index , BoxedList_int list );
    Maybe_int (*head) (BoxedList_int list );
    BoxedList_int (*nthcdr) (int index , BoxedList_int list );
    Maybe_int (*nth) (int index , BoxedList_int list );
    int (*hasLen) (BoxedList_int list , int desired );
    int (*len) (BoxedList_int list );
} BoxedList_int__H_Table;
typedef struct class_BoxedList_int {
  const BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion245 */
    struct { /* ciciliStruct246 */
      int __h_0_mem ;
      BoxedList_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct247 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList_int;
BoxedList_int BoxedCons_int (int head , BoxedList_int tail );
BoxedList_int BoxedNil_int ();
__attribute__((weak)) BoxedList_int Default_BoxedList_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return BoxedNil_int ();
}
int * toArray_BoxedList_int (BoxedList_int list , int term );
BoxedList_int wrap_BoxedList_int (const int item );
BoxedList_int pure_BoxedList_int (const int * buf , int len );
int show_BoxedList_int (CFile file , BoxedList_int list );
BoxedList_int copy_BoxedList_int (BoxedList_int list );
BoxedList_int replaceAt_BoxedList_int (BoxedList_int list , int item , int index );
BoxedList_int deleteAt_BoxedList_int (BoxedList_int list , int index );
BoxedList_int insertAt_BoxedList_int (BoxedList_int llist , int item , int index );
BoxedList_int replace_BoxedList_int (BoxedList_int list , int item , BoxedList_int aimed );
BoxedList_int delete_BoxedList_int (BoxedList_int list , BoxedList_int aimed );
BoxedList_int insert_BoxedList_int (BoxedList_int llist , int item , BoxedList_int rlist );
BoxedList_int reverse_BoxedList_int (BoxedList_int list );
BoxedList_int append_BoxedList_int (BoxedList_int llist , BoxedList_int rlist );
BoxedList_int push_BoxedList_int (int item , BoxedList_int list );
BoxedList_int take_BoxedList_int (int len , BoxedList_int list );
BoxedList_int last_BoxedList_int (BoxedList_int list );
BoxedList_int init_BoxedList_int (BoxedList_int list );
BoxedList_int tail_BoxedList_int (BoxedList_int list );
BoxedList_int drop_BoxedList_int (int index , BoxedList_int list );
Maybe_int head_BoxedList_int (BoxedList_int list );
BoxedList_int nthcdr_BoxedList_int (int index , BoxedList_int list );
Maybe_int nth_BoxedList_int (int index , BoxedList_int list );
int hasLen_BoxedList_int (BoxedList_int list , int desired );
int len_BoxedList_int (BoxedList_int list );
BoxedList_int__H_Table * const get_BoxedList_int__H_Table ();
void free_BoxedList_int_x (BoxedList_int_x * this );
#endif /* __BoxedList_int__H_DECL__ */ 
#ifndef __Maybe_BoxedList_int__H_DECL__
#define __Maybe_BoxedList_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_int Maybe_BoxedList_int ;
typedef void (*free_Maybe_BoxedList_int_t) (Maybe_BoxedList_int * this );
typedef struct Maybe_BoxedList_int__H_Table {
  free_Maybe_BoxedList_int_t freeData ;
} Maybe_BoxedList_int__H_Table;
typedef struct Maybe_BoxedList_int {
  const Maybe_BoxedList_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion347 */
    struct { /* ciciliStruct348 */
      BoxedList_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct349 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_int;
Maybe_BoxedList_int Just_BoxedList_int (BoxedList_int value );
Maybe_BoxedList_int Nothing_BoxedList_int ();
__attribute__((weak)) Maybe_BoxedList_int Default_Maybe_BoxedList_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return Nothing_BoxedList_int ();
}
const Maybe_BoxedList_int__H_Table * const get_Maybe_BoxedList_int__H_Table ();
void free_Maybe_BoxedList_int (Maybe_BoxedList_int * this );
#endif /* __Maybe_BoxedList_int__H_DECL__ */ 
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
  { /* cicili#Let379 */
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
  { /* cicili#Let384 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __BoxedList_int__H_IMPL__
#define __BoxedList_int__H_IMPL__
#ifndef __Maybe_BoxedList_int_x__H_IMPL__
#define __Maybe_BoxedList_int_x__H_IMPL__
void free_Maybe_BoxedList_int_x (Maybe_BoxedList_int_x * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_BoxedList_int_x__H_Table * const get_Maybe_BoxedList_int_x__H_Table () {
  static const Maybe_BoxedList_int_x__H_Table table  = { free_Maybe_BoxedList_int_x };
  return (&table );
}
Maybe_BoxedList_int_x Just_BoxedList_int_x (BoxedList_int_x value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let404 */
    Maybe_BoxedList_int_x instance  = ((Maybe_BoxedList_int_x){ get_Maybe_BoxedList_int_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_int_x Nothing_BoxedList_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let409 */
    Maybe_BoxedList_int_x instance  = ((Maybe_BoxedList_int_x){ get_Maybe_BoxedList_int_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_int_x__H_IMPL__ */ 
#ifndef __Box_BoxedList_int__H_IMPL__
#define __Box_BoxedList_int__H_IMPL__
Box_BoxedList_int new_Box_BoxedList_int (BoxedList_int_x pointer ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let416 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList_int_x *)malloc (sizeof(BoxedList_int_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      ({ /* cicili#Progn419 */
      });
      __h_Hold_BoxedList_int_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList_int clone_Box_BoxedList_int (Box_BoxedList_int rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let426 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      { /* cicili#Block428 */
      }
      ({ /* cicili#Let430 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn431 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn433 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn435 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn438 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn441 */
                (++(*count ));
                __h_Hold_BoxedList_int_x (pointer , count , address );
              }) : Gone_BoxedList_int_x ());
          }) : ({ /* cicili#Let447 */
            // ----------
            { /* cicili#Block449 */
            }
            ({ /* cicili#Progn451 */
              Gone_BoxedList_int_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_int_x take_Box_BoxedList_int (Box_BoxedList_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let459 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      { /* cicili#Block461 */
      }
      ({ /* cicili#Let463 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn464 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn466 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn468 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn471 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let475 */
                __auto_type result  = Just_BoxedList_int_x ((*pointer ));
                // ----------
                ({ /* cicili#Progn479 */
                });
                if ((*count ) ==  1 )
                  { /* cicili#Block482 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BoxedList_int_x ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BoxedList_int_x ());
          }) : ({ /* cicili#Let489 */
            // ----------
            { /* cicili#Block491 */
            }
            ({ /* cicili#Progn493 */
              Nothing_BoxedList_int_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_int_x get_Box_BoxedList_int (Box_BoxedList_int rc ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let501 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      { /* cicili#Block503 */
      }
      ({ /* cicili#Let505 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn506 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn508 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn510 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn513 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList_int_x ((*pointer )) : Nothing_BoxedList_int_x ());
          }) : ({ /* cicili#Let520 */
            // ----------
            { /* cicili#Block522 */
            }
            ({ /* cicili#Progn524 */
              Nothing_BoxedList_int_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList_int (Box_BoxedList_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  ({ /* cicili#Progn530 */
  });
  { /* cicili#Let534 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    { /* cicili#Block536 */
    }
    ({ /* cicili#Let538 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn539 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn541 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn543 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block547 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block551 */
              if ((*count ) ==  1 )
                { /* cicili#Block554 */
                  ({ /* cicili#Progn557 */
                  });
                  free_BoxedList_int_x (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_BoxedList_int_x ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let565 */
          // ----------
          { /* cicili#Block567 */
          }
          ({ /* cicili#Let569 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block572 */
                ({ /* cicili#Progn575 */
                });
              }
          });
        }
    });
  }
}
const Box_BoxedList_int__H_Table * const get_Box_BoxedList_int__H_Table () {
  static const Box_BoxedList_int__H_Table table  = { free_Box_BoxedList_int , new_Box_BoxedList_int , clone_Box_BoxedList_int , take_Box_BoxedList_int , get_Box_BoxedList_int };
  return (&table );
}
Box_BoxedList_int __h_Hold_BoxedList_int_x (BoxedList_int_x * pointer , int * count , size_t address ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let584 */
    Box_BoxedList_int instance  = ((Box_BoxedList_int){ get_Box_BoxedList_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList_int Gone_BoxedList_int_x () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let589 */
    Box_BoxedList_int instance  = ((Box_BoxedList_int){ get_Box_BoxedList_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList_int__H_IMPL__ */ 
int * toArray_BoxedList_int (BoxedList_int list , int term ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  int * array (BoxedList_int list , int count ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let597 */
        __auto_type match596  = ((&list )-> __h_table -> get )(list );
        typeof((((match596 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        { /* cicili#Block600 */
        }
        ({ /* cicili#Let602 */
          bool __h_case_result  = (true  &&  (((match596 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn603 */
                (unboxed  =  (((match596 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn606 */
              ({ /* cicili#Let610 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                { /* cicili#Block612 */
                }
                ({ /* cicili#Let614 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn615 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn617 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn620 */
                      ({ /* cicili#Let622 */
                        int * arr  = array (tail , (count  +  1 ));
                        // ----------
                        arr [count ] = head ;
                        arr ;
                      });
                    }) : ({ /* cicili#Let626 */
                      // ----------
                      { /* cicili#Block628 */
                      }
                      ({ /* cicili#Progn630 */
                        ({ /* cicili#Let632 */
                          int * arr  = calloc (count , sizeof(int));
                          // ----------
                          arr [(count  -  1 )] = term ;
                          arr ;
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let636 */
              // ----------
              { /* cicili#Block638 */
              }
              ({ /* cicili#Progn640 */
                ({ /* cicili#Let642 */
                  int * arr  = calloc (count , sizeof(int));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
BoxedList_int wrap_BoxedList_int (const int item ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return BoxedCons_int (item , BoxedNil_int ());
}
BoxedList_int pure_BoxedList_int (const int * buf , int len ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((buf  ==  NULL  )) ? BoxedNil_int () : ({ /* cicili#Let653 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_int () : BoxedCons_int (item , pure_BoxedList_int ((++buf ), (--len ))));
      }));
}
int show_BoxedList_int (CFile file , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let663 */
      __auto_type match662  = ((&list )-> __h_table -> get )(list );
      typeof((((match662 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block666 */
      }
      ({ /* cicili#Let668 */
        bool __h_case_result  = (true  &&  (((match662 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn669 */
              (unboxed  =  (((match662 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn672 */
            ({ /* cicili#Let676 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block678 */
              }
              ({ /* cicili#Let680 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn681 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn683 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn686 */
                    (({ /* cicili#Let690 */
                        __auto_type match689  = ((&tail )-> __h_table -> get )(tail );
                        typeof((((match689 . __h_data ). Just ). __h_0_mem )) unboxed ;
                        // ----------
                        { /* cicili#Block693 */
                        }
                        ({ /* cicili#Let695 */
                          bool __h_case_result  = (true  &&  (((match689 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn696 */
                                (unboxed  =  (((match689 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn699 */
                              ({ /* cicili#Let703 */
                                // ----------
                                { /* cicili#Block705 */
                                }
                                ({ /* cicili#Let707 */
                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn709 */
                                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                                    }) : ({ /* cicili#Let718 */
                                      // ----------
                                      { /* cicili#Block720 */
                                      }
                                      ({ /* cicili#Progn722 */
                                        fprintf (file , "%d", head );
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let731 */
                              // ----------
                              { /* cicili#Block733 */
                              }
                              ({ /* cicili#Progn735 */
                                0;
                              });
                            }));
                        });
                      }) +  show_BoxedList_int (file , tail ) );
                  }) : ({ /* cicili#Let740 */
                    // ----------
                    { /* cicili#Block742 */
                    }
                    ({ /* cicili#Progn744 */
                      0;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let748 */
            // ----------
            { /* cicili#Block750 */
            }
            ({ /* cicili#Progn752 */
              0;
            });
          }));
      });
    });
}
BoxedList_int copy_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let758 */
      __auto_type match757  = ((&list )-> __h_table -> get )(list );
      typeof((((match757 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block761 */
      }
      ({ /* cicili#Let763 */
        bool __h_case_result  = (true  &&  (((match757 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn764 */
              (unboxed  =  (((match757 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn767 */
            ({ /* cicili#Let771 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block773 */
              }
              ({ /* cicili#Let775 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn776 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn778 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn781 */
                    BoxedCons_int (head , copy_BoxedList_int (tail ));
                  }) : ({ /* cicili#Let787 */
                    // ----------
                    { /* cicili#Block789 */
                    }
                    ({ /* cicili#Progn791 */
                      BoxedNil_int ();
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let796 */
            // ----------
            { /* cicili#Block798 */
            }
            ({ /* cicili#Progn800 */
              BoxedNil_int ();
            });
          }));
      });
    });
}
BoxedList_int replaceAt_BoxedList_int (BoxedList_int list , int item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let807 */
      __auto_type match806  = ((&list )-> __h_table -> get )(list );
      typeof((((match806 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block810 */
      }
      ({ /* cicili#Let812 */
        bool __h_case_result  = (true  &&  (((match806 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn813 */
              (unboxed  =  (((match806 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn816 */
            ({ /* cicili#Let820 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block822 */
              }
              ({ /* cicili#Let824 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn825 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn827 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) &&  (index  >  0 ) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn830 */
                    BoxedCons_int (head , replaceAt_BoxedList_int (tail , item , (index  -  1 )));
                  }) : ({ /* cicili#Let836 */
                    // ----------
                    { /* cicili#Block838 */
                    }
                    ({ /* cicili#Progn840 */
                      ({ /* cicili#Let844 */
                        __auto_type match843  = ((&list )-> __h_table -> get )(list );
                        typeof((((match843 . __h_data ). Just ). __h_0_mem )) unboxed ;
                        // ----------
                        { /* cicili#Block847 */
                        }
                        ({ /* cicili#Let849 */
                          bool __h_case_result  = (true  &&  (((match843 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn850 */
                                (unboxed  =  (((match843 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn853 */
                              ({ /* cicili#Let857 */
                                // ----------
                                { /* cicili#Block859 */
                                }
                                ({ /* cicili#Let861 */
                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn863 */
                                      BoxedCons_int (item , tail );
                                    }) : ({ /* cicili#Let868 */
                                      // ----------
                                      { /* cicili#Block870 */
                                      }
                                      ({ /* cicili#Progn872 */
                                        clone_Box_BoxedList_int (list );
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let877 */
                              // ----------
                              { /* cicili#Block879 */
                              }
                              ({ /* cicili#Progn881 */
                                clone_Box_BoxedList_int (list );
                              });
                            }));
                        });
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let886 */
            // ----------
            { /* cicili#Block888 */
            }
            ({ /* cicili#Progn890 */
              clone_Box_BoxedList_int (list );
            });
          }));
      });
    });
}
BoxedList_int deleteAt_BoxedList_int (BoxedList_int list , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let897 */
      __auto_type match896  = ((&list )-> __h_table -> get )(list );
      typeof((((match896 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block900 */
      }
      ({ /* cicili#Let902 */
        bool __h_case_result  = (true  &&  (((match896 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn903 */
              (unboxed  =  (((match896 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn906 */
            ({ /* cicili#Let910 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block912 */
              }
              ({ /* cicili#Let914 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn915 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn917 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) &&  (index  >  0 ) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn920 */
                    BoxedCons_int (head , deleteAt_BoxedList_int (tail , (index  -  1 )));
                  }) : ({ /* cicili#Let926 */
                    // ----------
                    { /* cicili#Block928 */
                    }
                    ({ /* cicili#Progn930 */
                      ({ /* cicili#Let934 */
                        __auto_type match933  = ((&list )-> __h_table -> get )(list );
                        typeof((((match933 . __h_data ). Just ). __h_0_mem )) unboxed ;
                        // ----------
                        { /* cicili#Block937 */
                        }
                        ({ /* cicili#Let939 */
                          bool __h_case_result  = (true  &&  (((match933 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn940 */
                                (unboxed  =  (((match933 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn943 */
                              ({ /* cicili#Let947 */
                                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                                // ----------
                                { /* cicili#Block949 */
                                }
                                ({ /* cicili#Let951 */
                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn952 */
                                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn955 */
                                      tail ;
                                    }) : ({ /* cicili#Let959 */
                                      // ----------
                                      { /* cicili#Block961 */
                                      }
                                      ({ /* cicili#Progn963 */
                                        clone_Box_BoxedList_int (list );
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let968 */
                              // ----------
                              { /* cicili#Block970 */
                              }
                              ({ /* cicili#Progn972 */
                                clone_Box_BoxedList_int (list );
                              });
                            }));
                        });
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let977 */
            // ----------
            { /* cicili#Block979 */
            }
            ({ /* cicili#Progn981 */
              clone_Box_BoxedList_int (list );
            });
          }));
      });
    });
}
BoxedList_int insertAt_BoxedList_int (BoxedList_int llist , int item , int index ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let988 */
      __auto_type match987  = ((&llist )-> __h_table -> get )(llist );
      typeof((((match987 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block991 */
      }
      ({ /* cicili#Let993 */
        bool __h_case_result  = (true  &&  (((match987 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn994 */
              (unboxed  =  (((match987 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn997 */
            ({ /* cicili#Let1001 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1003 */
              }
              ({ /* cicili#Let1005 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1006 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1008 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) &&  (index  >  0 ) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1011 */
                    BoxedCons_int (head , insertAt_BoxedList_int (tail , item , (index  -  1 )));
                  }) : ({ /* cicili#Let1017 */
                    // ----------
                    { /* cicili#Block1019 */
                    }
                    ({ /* cicili#Progn1021 */
                      BoxedCons_int (item , llist );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1026 */
            // ----------
            { /* cicili#Block1028 */
            }
            ({ /* cicili#Progn1030 */
              BoxedCons_int (item , llist );
            });
          }));
      });
    });
}
BoxedList_int replace_BoxedList_int (BoxedList_int list , int item , BoxedList_int aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1037 */
      __auto_type match1036  = get_Box_BoxedList_int (list );
      typeof((((match1036 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      { /* cicili#Block1040 */
      }
      ({ /* cicili#Let1042 */
        bool __h_case_result  = (true  &&  (((match1036 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1043 */
              (listp  =  (((match1036 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1046 */
            ({ /* cicili#Let1050 */
              __auto_type match1049  = get_Box_BoxedList_int (aimed );
              typeof((((match1049 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              { /* cicili#Block1053 */
              }
              ({ /* cicili#Let1055 */
                bool __h_case_result  = (true  &&  (((match1049 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1056 */
                      (aimedp  =  (((match1049 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1059 */
                    ({ /* cicili#Let1063 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      { /* cicili#Block1065 */
                      }
                      ({ /* cicili#Let1067 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1068 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1070 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1073 */
                            BoxedCons_int (head , replace_BoxedList_int (tail , item , aimed ));
                          }) : ({ /* cicili#Let1079 */
                            // ----------
                            { /* cicili#Block1081 */
                            }
                            ({ /* cicili#Progn1083 */
                              ({ /* cicili#Let1087 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) tail ;
                                // ----------
                                { /* cicili#Block1089 */
                                }
                                ({ /* cicili#Let1091 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1092 */
                                        (tail  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn1095 */
                                      BoxedCons_int (item , clone_Box_BoxedList_int (tail ));
                                    }) : ({ /* cicili#Let1101 */
                                      // ----------
                                      { /* cicili#Block1103 */
                                      }
                                      ({ /* cicili#Progn1105 */
                                        clone_Box_BoxedList_int (aimed );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let1110 */
                    // ----------
                    { /* cicili#Block1112 */
                    }
                    ({ /* cicili#Progn1114 */
                      clone_Box_BoxedList_int (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1119 */
            // ----------
            { /* cicili#Block1121 */
            }
            ({ /* cicili#Progn1123 */
              clone_Box_BoxedList_int (list );
            });
          }));
      });
    });
}
BoxedList_int delete_BoxedList_int (BoxedList_int list , BoxedList_int aimed ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1130 */
      __auto_type match1129  = get_Box_BoxedList_int (list );
      typeof((((match1129 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      { /* cicili#Block1133 */
      }
      ({ /* cicili#Let1135 */
        bool __h_case_result  = (true  &&  (((match1129 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1136 */
              (listp  =  (((match1129 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1139 */
            ({ /* cicili#Let1143 */
              __auto_type match1142  = get_Box_BoxedList_int (aimed );
              typeof((((match1142 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              { /* cicili#Block1146 */
              }
              ({ /* cicili#Let1148 */
                bool __h_case_result  = (true  &&  (((match1142 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1149 */
                      (aimedp  =  (((match1142 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1152 */
                    ({ /* cicili#Let1156 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      { /* cicili#Block1158 */
                      }
                      ({ /* cicili#Let1160 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1161 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1163 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1166 */
                            BoxedCons_int (head , delete_BoxedList_int (tail , aimed ));
                          }) : ({ /* cicili#Let1172 */
                            // ----------
                            { /* cicili#Block1174 */
                            }
                            ({ /* cicili#Progn1176 */
                              ({ /* cicili#Let1180 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) tail ;
                                // ----------
                                { /* cicili#Block1182 */
                                }
                                ({ /* cicili#Let1184 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1185 */
                                        (tail  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn1188 */
                                      clone_Box_BoxedList_int (tail );
                                    }) : ({ /* cicili#Let1193 */
                                      // ----------
                                      { /* cicili#Block1195 */
                                      }
                                      ({ /* cicili#Progn1197 */
                                        BoxedNil_int ();
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let1202 */
                    // ----------
                    { /* cicili#Block1204 */
                    }
                    ({ /* cicili#Progn1206 */
                      clone_Box_BoxedList_int (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1211 */
            // ----------
            { /* cicili#Block1213 */
            }
            ({ /* cicili#Progn1215 */
              clone_Box_BoxedList_int (list );
            });
          }));
      });
    });
}
BoxedList_int insert_BoxedList_int (BoxedList_int llist , int item , BoxedList_int rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1222 */
      __auto_type match1221  = get_Box_BoxedList_int (llist );
      typeof((((match1221 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      { /* cicili#Block1225 */
      }
      ({ /* cicili#Let1227 */
        bool __h_case_result  = (true  &&  (((match1221 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1228 */
              (llistp  =  (((match1221 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1231 */
            ({ /* cicili#Let1235 */
              __auto_type match1234  = get_Box_BoxedList_int (rlist );
              typeof((((match1234 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              { /* cicili#Block1238 */
              }
              ({ /* cicili#Let1240 */
                bool __h_case_result  = (true  &&  (((match1234 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1241 */
                      (rlistp  =  (((match1234 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1244 */
                    ({ /* cicili#Let1248 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      { /* cicili#Block1250 */
                      }
                      ({ /* cicili#Let1252 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1253 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1255 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1258 */
                            BoxedCons_int (head , insert_BoxedList_int (tail , item , rlist ));
                          }) : ({ /* cicili#Let1264 */
                            // ----------
                            { /* cicili#Block1266 */
                            }
                            ({ /* cicili#Progn1268 */
                              BoxedCons_int (item , clone_Box_BoxedList_int (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let1274 */
                    // ----------
                    { /* cicili#Block1276 */
                    }
                    ({ /* cicili#Progn1278 */
                      ({ /* cicili#Let1281 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let1283 */
                          __auto_type nil_item  = BoxedNil_int ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_BoxedList_int (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1290 */
            // ----------
            { /* cicili#Block1292 */
            }
            ({ /* cicili#Progn1294 */
              BoxedCons_int (item , rlist );
            });
          }));
      });
    });
}
BoxedList_int reverse_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  BoxedList_int _reverse (BoxedList_int list , BoxedList_int rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
    return ({ /* cicili#Let1302 */
        __auto_type match1301  = ((&list )-> __h_table -> get )(list );
        typeof((((match1301 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        { /* cicili#Block1305 */
        }
        ({ /* cicili#Let1307 */
          bool __h_case_result  = (true  &&  (((match1301 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1308 */
                (unboxed  =  (((match1301 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1311 */
              ({ /* cicili#Let1315 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                { /* cicili#Block1317 */
                }
                ({ /* cicili#Let1319 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1320 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1322 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1325 */
                      _reverse (tail , BoxedCons_int (head , rlist ));
                    }) : ({ /* cicili#Let1330 */
                      // ----------
                      { /* cicili#Block1332 */
                      }
                      ({ /* cicili#Progn1334 */
                        rlist ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1338 */
              // ----------
              { /* cicili#Block1340 */
              }
              ({ /* cicili#Progn1342 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let1346 */
      __auto_type match1345  = ((&list )-> __h_table -> get )(list );
      typeof((((match1345 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1349 */
      }
      ({ /* cicili#Let1351 */
        bool __h_case_result  = (true  &&  (((match1345 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1352 */
              (unboxed  =  (((match1345 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1355 */
            ({ /* cicili#Let1359 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1361 */
              }
              ({ /* cicili#Let1363 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1364 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn1366 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1369 */
                    _reverse (tail , BoxedCons_int (head , BoxedNil_int ()));
                  }) : ({ /* cicili#Let1375 */
                    // ----------
                    { /* cicili#Block1377 */
                    }
                    ({ /* cicili#Progn1379 */
                      list ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1383 */
            // ----------
            { /* cicili#Block1385 */
            }
            ({ /* cicili#Progn1387 */
              list ;
            });
          }));
      });
    });
}
BoxedList_int append_BoxedList_int (BoxedList_int llist , BoxedList_int rlist ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1393 */
      __auto_type match1392  = ((&llist )-> __h_table -> get )(llist );
      typeof((((match1392 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1396 */
      }
      ({ /* cicili#Let1398 */
        bool __h_case_result  = (true  &&  (((match1392 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1399 */
              (unboxed  =  (((match1392 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1402 */
            ({ /* cicili#Let1406 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1408 */
              }
              ({ /* cicili#Let1410 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1411 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn1413 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1416 */
                    BoxedCons_int (head , append_BoxedList_int (tail , rlist ));
                  }) : ({ /* cicili#Let1422 */
                    // ----------
                    { /* cicili#Block1424 */
                    }
                    ({ /* cicili#Progn1426 */
                      clone_Box_BoxedList_int (rlist );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1431 */
            // ----------
            { /* cicili#Block1433 */
            }
            ({ /* cicili#Progn1435 */
              clone_Box_BoxedList_int (rlist );
            });
          }));
      });
    });
}
BoxedList_int push_BoxedList_int (int item , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return BoxedCons_int (item , clone_Box_BoxedList_int (list ));
}
BoxedList_int take_BoxedList_int (int len , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? BoxedNil_int () : ({ /* cicili#Let1448 */
        __auto_type match1447  = ((&list )-> __h_table -> get )(list );
        typeof((((match1447 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        { /* cicili#Block1451 */
        }
        ({ /* cicili#Let1453 */
          bool __h_case_result  = (true  &&  (((match1447 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1454 */
                (unboxed  =  (((match1447 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1457 */
              ({ /* cicili#Let1461 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                { /* cicili#Block1463 */
                }
                ({ /* cicili#Let1465 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1466 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1468 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1471 */
                      BoxedCons_int (head , take_BoxedList_int ((--len ), tail ));
                    }) : ({ /* cicili#Let1477 */
                      // ----------
                      { /* cicili#Block1479 */
                      }
                      ({ /* cicili#Progn1481 */
                        BoxedNil_int ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1486 */
              // ----------
              { /* cicili#Block1488 */
              }
              ({ /* cicili#Progn1490 */
                BoxedNil_int ();
              });
            }));
        });
      }));
}
BoxedList_int last_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1497 */
      __auto_type match1496  = ((&list )-> __h_table -> get )(list );
      typeof((((match1496 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1500 */
      }
      ({ /* cicili#Let1502 */
        bool __h_case_result  = (true  &&  (((match1496 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1503 */
              (unboxed  =  (((match1496 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1506 */
            ({ /* cicili#Let1510 */
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1512 */
              }
              ({ /* cicili#Let1514 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1515 */
                      (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1518 */
                    ({ /* cicili#Let1522 */
                      __auto_type match1521  = ((&tail )-> __h_table -> get )(tail );
                      typeof((((match1521 . __h_data ). Just ). __h_0_mem )) unboxed ;
                      // ----------
                      { /* cicili#Block1525 */
                      }
                      ({ /* cicili#Let1527 */
                        bool __h_case_result  = (true  &&  (((match1521 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1528 */
                              (unboxed  =  (((match1521 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1531 */
                            ({ /* cicili#Let1535 */
                              // ----------
                              { /* cicili#Block1537 */
                              }
                              ({ /* cicili#Let1539 */
                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn1541 */
                                    clone_Box_BoxedList_int (list );
                                  }) : ({ /* cicili#Let1546 */
                                    // ----------
                                    { /* cicili#Block1548 */
                                    }
                                    ({ /* cicili#Progn1550 */
                                      last_BoxedList_int (tail );
                                    });
                                  }));
                              });
                            });
                          }) : ({ /* cicili#Let1555 */
                            // ----------
                            { /* cicili#Block1557 */
                            }
                            ({ /* cicili#Progn1559 */
                              clone_Box_BoxedList_int (list );
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let1564 */
                    // ----------
                    { /* cicili#Block1566 */
                    }
                    ({ /* cicili#Progn1568 */
                      clone_Box_BoxedList_int (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1573 */
            // ----------
            { /* cicili#Block1575 */
            }
            ({ /* cicili#Progn1577 */
              clone_Box_BoxedList_int (list );
            });
          }));
      });
    });
}
BoxedList_int init_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1584 */
      __auto_type match1583  = ((&list )-> __h_table -> get )(list );
      typeof((((match1583 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1587 */
      }
      ({ /* cicili#Let1589 */
        bool __h_case_result  = (true  &&  (((match1583 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1590 */
              (unboxed  =  (((match1583 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1593 */
            ({ /* cicili#Let1597 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1599 */
              }
              ({ /* cicili#Let1601 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1602 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn1604 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1607 */
                    ({ /* cicili#Let1611 */
                      __auto_type match1610  = ((&tail )-> __h_table -> get )(tail );
                      typeof((((match1610 . __h_data ). Just ). __h_0_mem )) unboxed ;
                      // ----------
                      { /* cicili#Block1614 */
                      }
                      ({ /* cicili#Let1616 */
                        bool __h_case_result  = (true  &&  (((match1610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1617 */
                              (unboxed  =  (((match1610 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1620 */
                            ({ /* cicili#Let1624 */
                              // ----------
                              { /* cicili#Block1626 */
                              }
                              ({ /* cicili#Let1628 */
                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn1630 */
                                    BoxedCons_int (head , init_BoxedList_int (tail ));
                                  }) : ({ /* cicili#Let1636 */
                                    // ----------
                                    { /* cicili#Block1638 */
                                    }
                                    ({ /* cicili#Progn1640 */
                                      tail ;
                                    });
                                  }));
                              });
                            });
                          }) : ({ /* cicili#Let1644 */
                            // ----------
                            { /* cicili#Block1646 */
                            }
                            ({ /* cicili#Progn1648 */
                              tail ;
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let1652 */
                    // ----------
                    { /* cicili#Block1654 */
                    }
                    ({ /* cicili#Progn1656 */
                      list ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1660 */
            // ----------
            { /* cicili#Block1662 */
            }
            ({ /* cicili#Progn1664 */
              list ;
            });
          }));
      });
    });
}
BoxedList_int tail_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return drop_BoxedList_int (1, list );
}
BoxedList_int drop_BoxedList_int (int len , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return (((len  <=  0 )) ? clone_Box_BoxedList_int (list ) : ({ /* cicili#Let1675 */
        __auto_type match1674  = ((&list )-> __h_table -> get )(list );
        typeof((((match1674 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        { /* cicili#Block1678 */
        }
        ({ /* cicili#Let1680 */
          bool __h_case_result  = (true  &&  (((match1674 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1681 */
                (unboxed  =  (((match1674 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1684 */
              ({ /* cicili#Let1688 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                { /* cicili#Block1690 */
                }
                ({ /* cicili#Let1692 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1693 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1696 */
                      drop_BoxedList_int ((--len ), tail );
                    }) : ({ /* cicili#Let1701 */
                      // ----------
                      { /* cicili#Block1703 */
                      }
                      ({ /* cicili#Progn1705 */
                        clone_Box_BoxedList_int (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1710 */
              // ----------
              { /* cicili#Block1712 */
              }
              ({ /* cicili#Progn1714 */
                clone_Box_BoxedList_int (list );
              });
            }));
        });
      }));
}
Maybe_int head_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return nth_BoxedList_int (0, list );
}
BoxedList_int nthcdr_BoxedList_int (int index , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1725 */
      __auto_type match1724  = ((&list )-> __h_table -> get )(list );
      typeof((((match1724 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1728 */
      }
      ({ /* cicili#Let1730 */
        bool __h_case_result  = (true  &&  (((match1724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1731 */
              (unboxed  =  (((match1724 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1734 */
            ({ /* cicili#Let1738 */
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1740 */
              }
              ({ /* cicili#Let1742 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1743 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) &&  (index  >  0 ) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1746 */
                    nthcdr_BoxedList_int ((--index ), tail );
                  }) : ({ /* cicili#Let1751 */
                    // ----------
                    { /* cicili#Block1753 */
                    }
                    ({ /* cicili#Progn1755 */
                      list ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1759 */
            // ----------
            { /* cicili#Block1761 */
            }
            ({ /* cicili#Progn1763 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_BoxedList_int (int index , BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1770 */
      __auto_type match1769  = ((&list )-> __h_table -> get )(list );
      typeof((((match1769 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1773 */
      }
      ({ /* cicili#Let1775 */
        bool __h_case_result  = (true  &&  (((match1769 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1776 */
              (unboxed  =  (((match1769 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1779 */
            ({ /* cicili#Let1783 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1785 */
              }
              ({ /* cicili#Let1787 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1788 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn1790 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1793 */
                    (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_BoxedList_int ((--index ), tail )));
                  }) : ({ /* cicili#Let1802 */
                    // ----------
                    { /* cicili#Block1804 */
                    }
                    ({ /* cicili#Progn1806 */
                      Nothing_int ();
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1811 */
            // ----------
            { /* cicili#Block1813 */
            }
            ({ /* cicili#Progn1815 */
              Nothing_int ();
            });
          }));
      });
    });
}
int hasLen_BoxedList_int (BoxedList_int list , int desired ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1822 */
      __auto_type match1821  = ((&list )-> __h_table -> get )(list );
      typeof((((match1821 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1825 */
      }
      ({ /* cicili#Let1827 */
        bool __h_case_result  = (true  &&  (((match1821 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1828 */
              (unboxed  =  (((match1821 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1831 */
            ({ /* cicili#Let1835 */
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1837 */
              }
              ({ /* cicili#Let1839 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1840 */
                      (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1843 */
                    (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList_int (tail , (--desired )) ));
                  }) : ({ /* cicili#Let1849 */
                    // ----------
                    { /* cicili#Block1851 */
                    }
                    ({ /* cicili#Progn1853 */
                      0;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1857 */
            // ----------
            { /* cicili#Block1859 */
            }
            ({ /* cicili#Progn1861 */
              0;
            });
          }));
      });
    });
}
int len_BoxedList_int (BoxedList_int list ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  return ({ /* cicili#Let1867 */
      __auto_type match1866  = ((&list )-> __h_table -> get )(list );
      typeof((((match1866 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      { /* cicili#Block1870 */
      }
      ({ /* cicili#Let1872 */
        bool __h_case_result  = (true  &&  (((match1866 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1873 */
              (unboxed  =  (((match1866 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1876 */
            ({ /* cicili#Let1880 */
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              { /* cicili#Block1882 */
              }
              ({ /* cicili#Let1884 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1885 */
                      (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1888 */
                    (1 +  len_BoxedList_int (tail ) );
                  }) : ({ /* cicili#Let1893 */
                    // ----------
                    { /* cicili#Block1895 */
                    }
                    ({ /* cicili#Progn1897 */
                      0;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1901 */
            // ----------
            { /* cicili#Block1903 */
            }
            ({ /* cicili#Progn1905 */
              0;
            });
          }));
      });
    });
}
void free_BoxedList_int_x (BoxedList_int_x * this_ptr ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1909 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn1912 */
    });
    { /* cicili#Let1916 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      { /* cicili#Block1918 */
      }
      ({ /* cicili#Let1920 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1921 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1925 */
            { /* cicili#Block1927 */
              ({ /* cicili#Progn1930 */
              });
              free (this );
              free_Box_BoxedList_int ((&tail ));
            }
          }
        else
          { /* cicili#Let1936 */
            // ----------
            { /* cicili#Block1938 */
            }
            ({ /* cicili#Let1940 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1943 */
                  { /* cicili#Block1945 */
                    ({ /* cicili#Progn1948 */
                    });
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
BoxedList_int__H_Table * const get_BoxedList_int__H_Table () {
  static BoxedList_int__H_Table table  = { free_BoxedList_int_x , toArray_BoxedList_int , wrap_BoxedList_int , pure_BoxedList_int , show_BoxedList_int , copy_BoxedList_int , replaceAt_BoxedList_int , deleteAt_BoxedList_int , insertAt_BoxedList_int , replace_BoxedList_int , delete_BoxedList_int , insert_BoxedList_int , reverse_BoxedList_int , append_BoxedList_int , push_BoxedList_int , take_BoxedList_int , last_BoxedList_int , init_BoxedList_int , tail_BoxedList_int , drop_BoxedList_int , head_BoxedList_int , nthcdr_BoxedList_int , nth_BoxedList_int , hasLen_BoxedList_int , len_BoxedList_int };
  return (&table );
}
BoxedList_int BoxedCons_int (int head , BoxedList_int tail ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1957 */
    BoxedList_int_x instance  = malloc (sizeof(class_BoxedList_int));
    // ----------
    (*instance ) = ((class_BoxedList_int){ get_BoxedList_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList_int (__h_stack_push (instance ));
  }
}
BoxedList_int BoxedNil_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1964 */
    BoxedList_int_x instance  = malloc (sizeof(class_BoxedList_int));
    // ----------
    (*instance ) = ((class_BoxedList_int){ get_BoxedList_int__H_Table (), __h___t });
    return new_Box_BoxedList_int (__h_stack_push (instance ));
  }
}
#endif /* __BoxedList_int__H_IMPL__ */ 
#ifndef __Maybe_BoxedList_int__H_IMPL__
#define __Maybe_BoxedList_int__H_IMPL__
void free_Maybe_BoxedList_int (Maybe_BoxedList_int * this ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
}
const Maybe_BoxedList_int__H_Table * const get_Maybe_BoxedList_int__H_Table () {
  static const Maybe_BoxedList_int__H_Table table  = { free_Maybe_BoxedList_int };
  return (&table );
}
Maybe_BoxedList_int Just_BoxedList_int (BoxedList_int value ) {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1982 */
    Maybe_BoxedList_int instance  = ((Maybe_BoxedList_int){ get_Maybe_BoxedList_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_int Nothing_BoxedList_int () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free))) = __h_stack ();
__h_stack_push_separator ();
#endif
  { /* cicili#Let1987 */
    Maybe_BoxedList_int instance  = ((Maybe_BoxedList_int){ get_Maybe_BoxedList_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_int__H_IMPL__ */ 
int main () {
#ifdef __CICILI_HASKELL_H_DECL__
__h_init_haskell ();
__h_stack_push_func ((void *)__func__);
BoxedList_BoxedList___h_StackItem  __h_stack_pin 
__attribute__((__cleanup__(__h_stack_free_main))) = __h_stack ();
__h_stack_push_separator ();
#else
printf ("Cicili Haskell is not included!\n");
exit ();
#endif
  ({ /* cicili#Let2004 */
    __auto_type l00  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2006 */
      __auto_type l00  = BoxedNil_int ();
      // ----------
      ((void)((l00 . __h_table )-> freeData ));
      l00 ;
    });
    __auto_type l01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2010 */
      __auto_type l01  = pure_BoxedList_int (((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7);
      // ----------
      ((void)((l01 . __h_table )-> freeData ));
      l01 ;
    });
    __auto_type l02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2016 */
      __auto_type l02  = head_BoxedList_int (l01 );
      // ----------
      ((void)((l02 . __h_table )-> freeData ));
      l02 ;
    });
    __auto_type l03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2020 */
      __auto_type l03  = nth_BoxedList_int (2, l01 );
      // ----------
      ((void)((l03 . __h_table )-> freeData ));
      l03 ;
    });
    __auto_type l04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2024 */
      __auto_type l04  = nth_BoxedList_int (5, l01 );
      // ----------
      ((void)((l04 . __h_table )-> freeData ));
      l04 ;
    });
    __auto_type l15  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2028 */
      __auto_type l15  = nthcdr_BoxedList_int (4, l01 );
      // ----------
      ((void)((l15 . __h_table )-> freeData ));
      l15 ;
    });
    __auto_type l05  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2032 */
      __auto_type l05  = tail_BoxedList_int (l01 );
      // ----------
      ((void)((l05 . __h_table )-> freeData ));
      l05 ;
    });
    __auto_type l06  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2036 */
      __auto_type l06  = drop_BoxedList_int (3, l01 );
      // ----------
      ((void)((l06 . __h_table )-> freeData ));
      l06 ;
    });
    __auto_type l07  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2040 */
      __auto_type l07  = init_BoxedList_int (l01 );
      // ----------
      ((void)((l07 . __h_table )-> freeData ));
      l07 ;
    });
    __auto_type l08  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2044 */
      __auto_type l08  = last_BoxedList_int (l01 );
      // ----------
      ((void)((l08 . __h_table )-> freeData ));
      l08 ;
    });
    __auto_type l09  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2048 */
      __auto_type l09  = take_BoxedList_int (0, l01 );
      // ----------
      ((void)((l09 . __h_table )-> freeData ));
      l09 ;
    });
    __auto_type l10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2052 */
      __auto_type l10  = take_BoxedList_int (3, l01 );
      // ----------
      ((void)((l10 . __h_table )-> freeData ));
      l10 ;
    });
    __auto_type l11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2056 */
      __auto_type l11  = take_BoxedList_int (10, l01 );
      // ----------
      ((void)((l11 . __h_table )-> freeData ));
      l11 ;
    });
    __auto_type l12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2060 */
      __auto_type l12  = push_BoxedList_int (0, l01 );
      // ----------
      ((void)((l12 . __h_table )-> freeData ));
      l12 ;
    });
    __auto_type l13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2064 */
      __auto_type l13  = append_BoxedList_int (l06 , l01 );
      // ----------
      ((void)((l13 . __h_table )-> freeData ));
      l13 ;
    });
    __auto_type l14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2068 */
      __auto_type l14  = reverse_BoxedList_int (l01 );
      // ----------
      ((void)((l14 . __h_table )-> freeData ));
      l14 ;
    });
    __auto_type l16  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2072 */
      __auto_type l16  = insert_BoxedList_int (l01 , 8, l15 );
      // ----------
      ((void)((l16 . __h_table )-> freeData ));
      l16 ;
    });
    __auto_type l17  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2076 */
      __auto_type l17  = insert_BoxedList_int (l00 , 8, l15 );
      // ----------
      ((void)((l17 . __h_table )-> freeData ));
      l17 ;
    });
    __auto_type l18  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2080 */
      __auto_type l18  = insert_BoxedList_int (l01 , 8, l00 );
      // ----------
      ((void)((l18 . __h_table )-> freeData ));
      l18 ;
    });
    __auto_type l19  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2084 */
      __auto_type l19  = delete_BoxedList_int (l01 , l15 );
      // ----------
      ((void)((l19 . __h_table )-> freeData ));
      l19 ;
    });
    __auto_type l20  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2088 */
      __auto_type l20  = delete_BoxedList_int (l16 , l15 );
      // ----------
      ((void)((l20 . __h_table )-> freeData ));
      l20 ;
    });
    __auto_type l21  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2092 */
      __auto_type l21  = replace_BoxedList_int (l01 , 9, l15 );
      // ----------
      ((void)((l21 . __h_table )-> freeData ));
      l21 ;
    });
    __auto_type l22  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2096 */
      __auto_type l22  = replace_BoxedList_int (l16 , 9, l15 );
      // ----------
      ((void)((l22 . __h_table )-> freeData ));
      l22 ;
    });
    __auto_type l23  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2100 */
      __auto_type l23  = insertAt_BoxedList_int (l01 , 9, 5);
      // ----------
      ((void)((l23 . __h_table )-> freeData ));
      l23 ;
    });
    __auto_type l24  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2104 */
      __auto_type l24  = deleteAt_BoxedList_int (l23 , 5);
      // ----------
      ((void)((l24 . __h_table )-> freeData ));
      l24 ;
    });
    __auto_type l25  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2108 */
      __auto_type l25  = replaceAt_BoxedList_int (l24 , 9, 5);
      // ----------
      ((void)((l25 . __h_table )-> freeData ));
      l25 ;
    });
    // ----------
    fprintf (stdout , "testing list operations over %s\n", "BoxedList_int");
    printf ("l01: ");
    show_BoxedList_int (stdout , l01 );
    putchar ('\n');
    printf ("length of l01: %d\n", len_BoxedList_int (l01 ));
    printf ("has length of l01: %d\n", hasLen_BoxedList_int (l01 , 7));
    { /* cicili#Let2122 */
      typeof((((l02 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2124 */
      }
      ({ /* cicili#Let2126 */
        bool __h_case_result  = (true  &&  (((l02 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2127 */
              (elm  =  (((l02 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2131 */
            printf ("head elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2136 */
            // ----------
            { /* cicili#Block2138 */
            }
            { /* cicili#Block2140 */
              printf ("couldn't find head elem in l01\n");
            }
          }
      });
    }
    { /* cicili#Let2144 */
      typeof((((l03 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2146 */
      }
      ({ /* cicili#Let2148 */
        bool __h_case_result  = (true  &&  (((l03 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2149 */
              (elm  =  (((l03 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2153 */
            printf ("3th elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2158 */
            // ----------
            { /* cicili#Block2160 */
            }
            { /* cicili#Block2162 */
              printf ("couldn't find 3th elem in l01\n");
            }
          }
      });
    }
    { /* cicili#Let2166 */
      typeof((((l04 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2168 */
      }
      ({ /* cicili#Let2170 */
        bool __h_case_result  = (true  &&  (((l04 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2171 */
              (elm  =  (((l04 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2175 */
            printf ("6th elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2180 */
            // ----------
            { /* cicili#Block2182 */
            }
            { /* cicili#Block2184 */
              printf ("couldn't find 6th elem in l01\n");
            }
          }
      });
    }
    printf ("l15: 5th nthcdr of l01: ");
    show_BoxedList_int (stdout , l15 );
    putchar ('\n');
    printf ("tail of l01: ");
    show_BoxedList_int (stdout , l05 );
    putchar ('\n');
    printf ("l06: drop 3 elems from l01: ");
    show_BoxedList_int (stdout , l06 );
    putchar ('\n');
    printf ("init of l01: ");
    show_BoxedList_int (stdout , l07 );
    putchar ('\n');
    printf ("last of l01: ");
    show_BoxedList_int (stdout , l08 );
    putchar ('\n');
    printf ("take 0 from l01: ");
    show_BoxedList_int (stdout , l09 );
    putchar ('\n');
    printf ("take 3 from l01: ");
    show_BoxedList_int (stdout , l10 );
    putchar ('\n');
    printf ("take 10 from l01: ");
    show_BoxedList_int (stdout , l11 );
    putchar ('\n');
    printf ("push 0 to l01: ");
    show_BoxedList_int (stdout , l12 );
    putchar ('\n');
    printf ("append l06 to l01: ");
    show_BoxedList_int (stdout , l13 );
    putchar ('\n');
    printf ("reverse of l01: ");
    show_BoxedList_int (stdout , l14 );
    putchar ('\n');
    printf ("l16: an 8 digit inserted at 5th nthcdr of l01: ");
    show_BoxedList_int (stdout , l16 );
    putchar ('\n');
    printf ("an 8 digit inserted after nil list: ");
    show_BoxedList_int (stdout , l17 );
    putchar ('\n');
    printf ("an 8 digit inserted at nil cursor (push back): ");
    show_BoxedList_int (stdout , l18 );
    putchar ('\n');
    printf ("delete 5 from origin list: ");
    show_BoxedList_int (stdout , l19 );
    putchar ('\n');
    printf ("l20: delete 5 from shared element in other produced list l16: ");
    show_BoxedList_int (stdout , l20 );
    putchar ('\n');
    printf ("replace 5 in origin list with 9: ");
    show_BoxedList_int (stdout , l21 );
    putchar ('\n');
    printf ("replace 5 in shared element in other produced list with 9 l16: ");
    show_BoxedList_int (stdout , l22 );
    putchar ('\n');
    printf ("insert 9 by index: ");
    show_BoxedList_int (stdout , l23 );
    putchar ('\n');
    printf ("delete 6th from shared element in other produced list by index: ");
    show_BoxedList_int (stdout , l24 );
    putchar ('\n');
    printf ("replace 6th in shared element in other produced list with 9 by index: ");
    show_BoxedList_int (stdout , l25 );
    putchar ('\n');
  });
  ({ /* cicili#Let2275 */
    __auto_type l00  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2277 */
      __auto_type l00  = Nil_int ();
      // ----------
      ((void)(l00 -> __h_table -> freeClass ));
      l00 ;
    });
    __auto_type l01  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2281 */
      __auto_type l01  = pure_List_int (((const int[]){ 1, 2, 3, 4, 5, 6, 7}), 7);
      // ----------
      ((void)(l01 -> __h_table -> freeClass ));
      l01 ;
    });
    __auto_type l02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2287 */
      __auto_type l02  = head_List_int (l01 );
      // ----------
      ((void)((l02 . __h_table )-> freeData ));
      l02 ;
    });
    __auto_type l03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2291 */
      __auto_type l03  = nth_List_int (2, l01 );
      // ----------
      ((void)((l03 . __h_table )-> freeData ));
      l03 ;
    });
    __auto_type l04  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let2295 */
      __auto_type l04  = nth_List_int (5, l01 );
      // ----------
      ((void)((l04 . __h_table )-> freeData ));
      l04 ;
    });
    __auto_type l15  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2299 */
      __auto_type l15  = nthcdr_List_int (4, l01 );
      // ----------
      ((void)(l15 -> __h_table -> freeClass ));
      l15 ;
    });
    __auto_type l05  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2303 */
      __auto_type l05  = tail_List_int (l01 );
      // ----------
      ((void)(l05 -> __h_table -> freeClass ));
      l05 ;
    });
    __auto_type l06  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2307 */
      __auto_type l06  = drop_List_int (3, l01 );
      // ----------
      ((void)(l06 -> __h_table -> freeClass ));
      l06 ;
    });
    __auto_type l07  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2311 */
      __auto_type l07  = init_List_int (l01 );
      // ----------
      ((void)(l07 -> __h_table -> freeClass ));
      l07 ;
    });
    __auto_type l08  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2315 */
      __auto_type l08  = last_List_int (l01 );
      // ----------
      ((void)(l08 -> __h_table -> freeClass ));
      l08 ;
    });
    __auto_type l09  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2319 */
      __auto_type l09  = take_List_int (0, l01 );
      // ----------
      ((void)(l09 -> __h_table -> freeClass ));
      l09 ;
    });
    __auto_type l10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2323 */
      __auto_type l10  = take_List_int (3, l01 );
      // ----------
      ((void)(l10 -> __h_table -> freeClass ));
      l10 ;
    });
    __auto_type l11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2327 */
      __auto_type l11  = take_List_int (10, l01 );
      // ----------
      ((void)(l11 -> __h_table -> freeClass ));
      l11 ;
    });
    __auto_type l12  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2331 */
      __auto_type l12  = push_List_int (0, l01 );
      // ----------
      ((void)(l12 -> __h_table -> freeClass ));
      l12 ;
    });
    __auto_type l13  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2335 */
      __auto_type l13  = append_List_int (l06 , l01 );
      // ----------
      ((void)(l13 -> __h_table -> freeClass ));
      l13 ;
    });
    __auto_type l14  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2339 */
      __auto_type l14  = reverse_List_int (l01 );
      // ----------
      ((void)(l14 -> __h_table -> freeClass ));
      l14 ;
    });
    __auto_type l16  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2343 */
      __auto_type l16  = insert_List_int (l01 , 8, l15 );
      // ----------
      ((void)(l16 -> __h_table -> freeClass ));
      l16 ;
    });
    __auto_type l17  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2347 */
      __auto_type l17  = insert_List_int (l00 , 8, l15 );
      // ----------
      ((void)(l17 -> __h_table -> freeClass ));
      l17 ;
    });
    __auto_type l18  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2351 */
      __auto_type l18  = insert_List_int (l01 , 8, l00 );
      // ----------
      ((void)(l18 -> __h_table -> freeClass ));
      l18 ;
    });
    __auto_type l19  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2355 */
      __auto_type l19  = delete_List_int (l01 , l15 );
      // ----------
      ((void)(l19 -> __h_table -> freeClass ));
      l19 ;
    });
    __auto_type l20  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2359 */
      __auto_type l20  = delete_List_int (l16 , nthcdr_List_int (5, l16 ));
      // ----------
      ((void)(l20 -> __h_table -> freeClass ));
      l20 ;
    });
    __auto_type l21  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2364 */
      __auto_type l21  = replace_List_int (l01 , 9, l15 );
      // ----------
      ((void)(l21 -> __h_table -> freeClass ));
      l21 ;
    });
    __auto_type l22  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2368 */
      __auto_type l22  = replace_List_int (l16 , 9, nthcdr_List_int (5, l16 ));
      // ----------
      ((void)(l22 -> __h_table -> freeClass ));
      l22 ;
    });
    __auto_type l23  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2373 */
      __auto_type l23  = insertAt_List_int (l01 , 9, 5);
      // ----------
      ((void)(l23 -> __h_table -> freeClass ));
      l23 ;
    });
    __auto_type l24  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2377 */
      __auto_type l24  = deleteAt_List_int (l23 , 5);
      // ----------
      ((void)(l24 -> __h_table -> freeClass ));
      l24 ;
    });
    __auto_type l25  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let2381 */
      __auto_type l25  = replaceAt_List_int (l24 , 9, 5);
      // ----------
      ((void)(l25 -> __h_table -> freeClass ));
      l25 ;
    });
    // ----------
    fprintf (stdout , "testing list operations over %s\n", "List_int");
    printf ("l01: ");
    show_List_int (stdout , l01 );
    putchar ('\n');
    printf ("length of l01: %d\n", len_List_int (l01 ));
    printf ("has length of l01: %d\n", hasLen_List_int (l01 , 7));
    { /* cicili#Let2395 */
      typeof((((l02 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2397 */
      }
      ({ /* cicili#Let2399 */
        bool __h_case_result  = (true  &&  (((l02 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2400 */
              (elm  =  (((l02 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2404 */
            printf ("head elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2409 */
            // ----------
            { /* cicili#Block2411 */
            }
            { /* cicili#Block2413 */
              printf ("couldn't find head elem in l01\n");
            }
          }
      });
    }
    { /* cicili#Let2417 */
      typeof((((l03 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2419 */
      }
      ({ /* cicili#Let2421 */
        bool __h_case_result  = (true  &&  (((l03 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2422 */
              (elm  =  (((l03 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2426 */
            printf ("3th elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2431 */
            // ----------
            { /* cicili#Block2433 */
            }
            { /* cicili#Block2435 */
              printf ("couldn't find 3th elem in l01\n");
            }
          }
      });
    }
    { /* cicili#Let2439 */
      typeof((((l04 . __h_data ). Just ). __h_0_mem )) elm ;
      // ----------
      { /* cicili#Block2441 */
      }
      ({ /* cicili#Let2443 */
        bool __h_case_result  = (true  &&  (((l04 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2444 */
              (elm  =  (((l04 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2448 */
            printf ("6th elem of l01: %d\n", elm );
          }
        else
          { /* cicili#Let2453 */
            // ----------
            { /* cicili#Block2455 */
            }
            { /* cicili#Block2457 */
              printf ("couldn't find 6th elem in l01\n");
            }
          }
      });
    }
    printf ("l15: 5th nthcdr of l01: ");
    show_List_int (stdout , l15 );
    putchar ('\n');
    printf ("tail of l01: ");
    show_List_int (stdout , l05 );
    putchar ('\n');
    printf ("l06: drop 3 elems from l01: ");
    show_List_int (stdout , l06 );
    putchar ('\n');
    printf ("init of l01: ");
    show_List_int (stdout , l07 );
    putchar ('\n');
    printf ("last of l01: ");
    show_List_int (stdout , l08 );
    putchar ('\n');
    printf ("take 0 from l01: ");
    show_List_int (stdout , l09 );
    putchar ('\n');
    printf ("take 3 from l01: ");
    show_List_int (stdout , l10 );
    putchar ('\n');
    printf ("take 10 from l01: ");
    show_List_int (stdout , l11 );
    putchar ('\n');
    printf ("push 0 to l01: ");
    show_List_int (stdout , l12 );
    putchar ('\n');
    printf ("append l06 to l01: ");
    show_List_int (stdout , l13 );
    putchar ('\n');
    printf ("reverse of l01: ");
    show_List_int (stdout , l14 );
    putchar ('\n');
    printf ("l16: an 8 digit inserted at 5th nthcdr of l01: ");
    show_List_int (stdout , l16 );
    putchar ('\n');
    printf ("an 8 digit inserted after nil list: ");
    show_List_int (stdout , l17 );
    putchar ('\n');
    printf ("an 8 digit inserted at nil cursor (push back): ");
    show_List_int (stdout , l18 );
    putchar ('\n');
    printf ("delete 5 from origin list: ");
    show_List_int (stdout , l19 );
    putchar ('\n');
    printf ("l20: delete 5 from shared element in other produced list l16: ");
    show_List_int (stdout , l20 );
    putchar ('\n');
    printf ("replace 5 in origin list with 9: ");
    show_List_int (stdout , l21 );
    putchar ('\n');
    printf ("replace 5 in shared element in other produced list with 9 l16: ");
    show_List_int (stdout , l22 );
    putchar ('\n');
    printf ("insert 9 by index: ");
    show_List_int (stdout , l23 );
    putchar ('\n');
    printf ("delete 6th from shared element in other produced list by index: ");
    show_List_int (stdout , l24 );
    putchar ('\n');
    printf ("replace 6th in shared element in other produced list with 9 by index: ");
    show_List_int (stdout , l25 );
    putchar ('\n');
  });
}
