#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
#ifndef __IntPtr__H_DECL__
#define __IntPtr__H_DECL__
#ifndef __H___h_Ptr_ctor_t__
#define __H___h_Ptr_ctor_t__
typedef enum __h_Ptr_ctor_t {
  __h_Ptr_t = 0
} __h_Ptr_ctor_t;
#endif /* __H___h_Ptr_ctor_t__ */ 
typedef struct class_IntPtr class_IntPtr ;
typedef class_IntPtr * IntPtr ;
typedef void (*free_IntPtr_t) (IntPtr * this_ptr );
typedef struct IntPtr__H_Table {
  free_IntPtr_t freeClass ;
} IntPtr__H_Table;
typedef struct class_IntPtr {
  const IntPtr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion110 */
    struct { /* ciciliStruct111 */
      int * __h_0_mem ;
    } Ptr , _ ;
  } __h_data ;
} class_IntPtr;
IntPtr make_IntPtr (int * pointer );
__attribute__((weak)) IntPtr Default_IntPtr (int * pointer ) {
  return make_IntPtr (pointer );
}
IntPtr__H_Table * const get_IntPtr__H_Table ();
void free_IntPtr (IntPtr * this_ptr );
#endif /* __IntPtr__H_DECL__ */ 
#ifndef __IntPtr__H_IMPL__
#define __IntPtr__H_IMPL__
void free_IntPtr (IntPtr * this_ptr ) {
  { /* cicili#Let127 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let131 */
      typeof((((this -> __h_data ). Ptr ). __h_0_mem )) pointer ;
      // ----------
      
      ({ /* cicili#Let135 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn136 */
              (pointer  =  (((this -> __h_data ). Ptr ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block140 */
            printf ("free IntPtr class: %p\n", pointer );
          }
      });
    }
  }
}
IntPtr__H_Table * const get_IntPtr__H_Table () {
  static IntPtr__H_Table table  = { free_IntPtr };
  return (&table );
}
IntPtr make_IntPtr (int * pointer ) {
  { /* cicili#Let149 */
    IntPtr instance  = malloc (sizeof(class_IntPtr));
    // ----------
    (*instance ) = ((class_IntPtr){ get_IntPtr__H_Table (), __h___t , .__h_data._ = { pointer }});
    return instance ;
  }
}
#endif /* __IntPtr__H_IMPL__ */ 
#ifndef __Maybe_IntPtr__H_DECL__
#define __Maybe_IntPtr__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_IntPtr Maybe_IntPtr ;
typedef void (*free_Maybe_IntPtr_t) (Maybe_IntPtr * this );
typedef struct Maybe_IntPtr__H_Table {
  free_Maybe_IntPtr_t freeData ;
} Maybe_IntPtr__H_Table;
typedef struct Maybe_IntPtr {
  const Maybe_IntPtr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion165 */
    struct { /* ciciliStruct166 */
    } Nothing , _0 ;
    struct { /* ciciliStruct167 */
      IntPtr __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_IntPtr;
Maybe_IntPtr Nothing_IntPtr ();
Maybe_IntPtr Just_IntPtr (IntPtr value );
__attribute__((weak)) Maybe_IntPtr Default_Maybe_IntPtr (IntPtr value ) {
  return Just_IntPtr (value );
}
const Maybe_IntPtr__H_Table * const get_Maybe_IntPtr__H_Table ();
void free_Maybe_IntPtr (Maybe_IntPtr * this );
#endif /* __Maybe_IntPtr__H_DECL__ */ 
#ifndef __Cell_IntPtr__H_DECL__
#define __Cell_IntPtr__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Cell_IntPtr Cell_IntPtr ;
typedef void (*free_Cell_IntPtr_t) (Cell_IntPtr * this );
typedef struct Cell_IntPtr__H_Table {
  free_Cell_IntPtr_t freeData ;
    Cell_IntPtr (*new) (IntPtr pointer );
    Maybe_IntPtr (*take) (Cell_IntPtr * this );
    Maybe_IntPtr (*get) (Cell_IntPtr rc );
} Cell_IntPtr__H_Table;
typedef struct Cell_IntPtr {
  const Cell_IntPtr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion199 */
    struct { /* ciciliStruct200 */
      IntPtr * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _0 ;
    struct { /* ciciliStruct201 */
    } Dead , _ ;
  } __h_data ;
} Cell_IntPtr;
Cell_IntPtr __h_Alive_IntPtr (IntPtr * pointer , size_t address );
Cell_IntPtr Dead_IntPtr ();
__attribute__((weak)) Cell_IntPtr Default_Cell_IntPtr () {
  return Dead_IntPtr ();
}
Cell_IntPtr new_Cell_IntPtr (IntPtr pointer );
Maybe_IntPtr take_Cell_IntPtr (Cell_IntPtr * this );
Maybe_IntPtr get_Cell_IntPtr (Cell_IntPtr rc );
const Cell_IntPtr__H_Table * const get_Cell_IntPtr__H_Table ();
void free_Cell_IntPtr (Cell_IntPtr * this );
#endif /* __Cell_IntPtr__H_DECL__ */ 
#ifndef __Maybe_IntPtr__H_IMPL__
#define __Maybe_IntPtr__H_IMPL__
void free_Maybe_IntPtr (Maybe_IntPtr * this ) {
}
const Maybe_IntPtr__H_Table * const get_Maybe_IntPtr__H_Table () {
  static const Maybe_IntPtr__H_Table table  = { free_Maybe_IntPtr };
  return (&table );
}
Maybe_IntPtr Nothing_IntPtr () {
  return ((Maybe_IntPtr){ get_Maybe_IntPtr__H_Table (), __h_Nothing_t });
}
Maybe_IntPtr Just_IntPtr (IntPtr value ) {
  return ((Maybe_IntPtr){ get_Maybe_IntPtr__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_IntPtr__H_IMPL__ */ 
#ifndef __Cell_IntPtr__H_IMPL__
#define __Cell_IntPtr__H_IMPL__
Cell_IntPtr new_Cell_IntPtr (IntPtr pointer ) {
  return ({ /* cicili#Let254 */
      __auto_type holder  = ((IntPtr *)malloc (sizeof(IntPtr *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_IntPtr (holder , ((size_t)pointer ));
    });
}
Maybe_IntPtr take_Cell_IntPtr (Cell_IntPtr * this ) {
  return ({ /* cicili#Let262 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let266 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn267 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn269 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn272 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let276 */
                __auto_type result  = Just_IntPtr ((*pointer ));
                // ----------
                ({ /* cicili#Progn280 */
                });
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_IntPtr ();
                result ;
              }) : Nothing_IntPtr ());
          }) : ({ /* cicili#Let286 */
            // ----------
            
            ({ /* cicili#Progn290 */
              Nothing_IntPtr ();
            });
          }));
      });
    });
}
Maybe_IntPtr get_Cell_IntPtr (Cell_IntPtr life ) {
  return ({ /* cicili#Let299 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let303 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn304 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn306 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn309 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_IntPtr ((*pointer )) : Nothing_IntPtr ());
          }) : ({ /* cicili#Let316 */
            // ----------
            
            ({ /* cicili#Progn320 */
              Nothing_IntPtr ();
            });
          }));
      });
    });
}
void free_Cell_IntPtr (Cell_IntPtr * this ) {
  ({ /* cicili#Progn327 */
  });
  { /* cicili#Let331 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let335 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn336 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn338 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block342 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block346 */
              ({ /* cicili#Progn349 */
              });
              free_IntPtr (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_IntPtr ();
            }
        }
      else
        { /* cicili#Let356 */
          // ----------
          
          ({ /* cicili#Let360 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block363 */
                ({ /* cicili#Progn366 */
                });
              }
          });
        }
    });
  }
}
const Cell_IntPtr__H_Table * const get_Cell_IntPtr__H_Table () {
  static const Cell_IntPtr__H_Table table  = { free_Cell_IntPtr , new_Cell_IntPtr , take_Cell_IntPtr , get_Cell_IntPtr };
  return (&table );
}
Cell_IntPtr __h_Alive_IntPtr (IntPtr * pointer , size_t address ) {
  return ((Cell_IntPtr){ get_Cell_IntPtr__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
}
Cell_IntPtr Dead_IntPtr () {
  return ((Cell_IntPtr){ get_Cell_IntPtr__H_Table (), __h___t });
}
#endif /* __Cell_IntPtr__H_IMPL__ */ 
#ifndef __Maybe_IntPtr__H_DECL__
#define __Maybe_IntPtr__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Just_t = 0,
  __h_Nothing_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_IntPtr Maybe_IntPtr ;
typedef void (*free_Maybe_IntPtr_t) (Maybe_IntPtr * this );
typedef struct Maybe_IntPtr__H_Table {
  free_Maybe_IntPtr_t freeData ;
} Maybe_IntPtr__H_Table;
typedef struct Maybe_IntPtr {
  const Maybe_IntPtr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion392 */
    struct { /* ciciliStruct393 */
    } Nothing , _0 ;
    struct { /* ciciliStruct394 */
      IntPtr __h_0_mem ;
    } Just , _ ;
  } __h_data ;
} Maybe_IntPtr;
Maybe_IntPtr Nothing_IntPtr ();
Maybe_IntPtr Just_IntPtr (IntPtr value );
__attribute__((weak)) Maybe_IntPtr Default_Maybe_IntPtr (IntPtr value ) {
  return Just_IntPtr (value );
}
const Maybe_IntPtr__H_Table * const get_Maybe_IntPtr__H_Table ();
void free_Maybe_IntPtr (Maybe_IntPtr * this );
#endif /* __Maybe_IntPtr__H_DECL__ */ 
#ifndef __Rc_IntPtr__H_DECL__
#define __Rc_IntPtr__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_IntPtr Rc_IntPtr ;
typedef void (*free_Rc_IntPtr_t) (Rc_IntPtr * this );
typedef struct Rc_IntPtr__H_Table {
  free_Rc_IntPtr_t freeData ;
    Rc_IntPtr (*new) (IntPtr pointer );
    Rc_IntPtr (*clone) (Rc_IntPtr rc );
    Maybe_IntPtr (*take) (Rc_IntPtr * this );
    Maybe_IntPtr (*get) (Rc_IntPtr rc );
} Rc_IntPtr__H_Table;
typedef struct Rc_IntPtr {
  const Rc_IntPtr__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion429 */
    struct { /* ciciliStruct430 */
      IntPtr * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _0 ;
    struct { /* ciciliStruct431 */
    } Gone , _ ;
  } __h_data ;
} Rc_IntPtr;
Rc_IntPtr __h_Hold_IntPtr (IntPtr * pointer , int * count , size_t address );
Rc_IntPtr Gone_IntPtr ();
__attribute__((weak)) Rc_IntPtr Default_Rc_IntPtr () {
  return Gone_IntPtr ();
}
Rc_IntPtr new_Rc_IntPtr (IntPtr pointer );
Rc_IntPtr clone_Rc_IntPtr (Rc_IntPtr rc );
Maybe_IntPtr take_Rc_IntPtr (Rc_IntPtr * this );
Maybe_IntPtr get_Rc_IntPtr (Rc_IntPtr rc );
const Rc_IntPtr__H_Table * const get_Rc_IntPtr__H_Table ();
void free_Rc_IntPtr (Rc_IntPtr * this );
#endif /* __Rc_IntPtr__H_DECL__ */ 
#ifndef __Maybe_IntPtr__H_IMPL__
#define __Maybe_IntPtr__H_IMPL__
void free_Maybe_IntPtr (Maybe_IntPtr * this ) {
}
const Maybe_IntPtr__H_Table * const get_Maybe_IntPtr__H_Table () {
  static const Maybe_IntPtr__H_Table table  = { free_Maybe_IntPtr };
  return (&table );
}
Maybe_IntPtr Nothing_IntPtr () {
  return ((Maybe_IntPtr){ get_Maybe_IntPtr__H_Table (), __h_Nothing_t });
}
Maybe_IntPtr Just_IntPtr (IntPtr value ) {
  return ((Maybe_IntPtr){ get_Maybe_IntPtr__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_IntPtr__H_IMPL__ */ 
#ifndef __Rc_IntPtr__H_IMPL__
#define __Rc_IntPtr__H_IMPL__
Rc_IntPtr new_Rc_IntPtr (IntPtr pointer ) {
  return ({ /* cicili#Let489 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((IntPtr *)malloc (sizeof(IntPtr *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_IntPtr (holder , count , ((size_t)pointer ));
    });
}
Rc_IntPtr clone_Rc_IntPtr (Rc_IntPtr rc ) {
  return ({ /* cicili#Let497 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let501 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn502 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn504 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn506 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn509 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn512 */
                (++(*count ));
                __h_Hold_IntPtr (pointer , count , address );
              }) : rc );
          }) : ({ /* cicili#Let517 */
            // ----------
            
            ({ /* cicili#Progn521 */
              rc ;
            });
          }));
      });
    });
}
Maybe_IntPtr take_Rc_IntPtr (Rc_IntPtr * this ) {
  return ({ /* cicili#Let529 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let533 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn534 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn536 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn538 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn541 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let545 */
                __auto_type result  = Just_IntPtr ((*pointer ));
                // ----------
                ({ /* cicili#Progn549 */
                });
                if ((*count ) ==  1 )
                  { /* cicili#Block552 */
                    free (count );
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_IntPtr ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_IntPtr ());
          }) : ({ /* cicili#Let559 */
            // ----------
            
            ({ /* cicili#Progn563 */
              Nothing_IntPtr ();
            });
          }));
      });
    });
}
Maybe_IntPtr get_Rc_IntPtr (Rc_IntPtr rc ) {
  return ({ /* cicili#Let572 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let576 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn577 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn579 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn581 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn584 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_IntPtr ((*pointer )) : Nothing_IntPtr ());
          }) : ({ /* cicili#Let591 */
            // ----------
            
            ({ /* cicili#Progn595 */
              Nothing_IntPtr ();
            });
          }));
      });
    });
}
void free_Rc_IntPtr (Rc_IntPtr * this ) {
  ({ /* cicili#Progn602 */
  });
  { /* cicili#Let606 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let610 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn611 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn613 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn615 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block619 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block623 */
              ({ /* cicili#Progn626 */
              });
              if ((*count ) ==  1 )
                { /* cicili#Block629 */
                  free_IntPtr (pointer );
                  free (count );
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_IntPtr ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let637 */
          // ----------
          
          ({ /* cicili#Let641 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block644 */
                ({ /* cicili#Progn647 */
                });
              }
          });
        }
    });
  }
}
const Rc_IntPtr__H_Table * const get_Rc_IntPtr__H_Table () {
  static const Rc_IntPtr__H_Table table  = { free_Rc_IntPtr , new_Rc_IntPtr , clone_Rc_IntPtr , take_Rc_IntPtr , get_Rc_IntPtr };
  return (&table );
}
Rc_IntPtr __h_Hold_IntPtr (IntPtr * pointer , int * count , size_t address ) {
  return ((Rc_IntPtr){ get_Rc_IntPtr__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
}
Rc_IntPtr Gone_IntPtr () {
  return ((Rc_IntPtr){ get_Rc_IntPtr__H_Table (), __h___t });
}
#endif /* __Rc_IntPtr__H_IMPL__ */ 
int main () {
  { /* cicili#Let662 */
    int i1  = 10;
    IntPtr intPtr1  = make_IntPtr (&i1 );
    // ----------
    ({ /* cicili#Let666 */
      __auto_type life1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let668 */
        __auto_type tmp_obj  = new_Cell_IntPtr (intPtr1 );
        // ----------
        ((void)((tmp_obj . __h_table )-> freeData ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let675 */
        typeof((((life1 . __h_data ). Alive ). __h_0_mem )) __h_match673_0_arg ;
        typeof(((((*__h_match673_0_arg )-> __h_data ). Ptr ). __h_0_mem )) ptr ;
        // ----------
        
        ({ /* cicili#Let679 */
          bool __h_case_result  = (true  &&  (((life1 . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn680 */
                  (__h_match673_0_arg  =  (((life1 . __h_data ). Alive ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  ((((*__h_match673_0_arg )-> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn682 */
                      (ptr  =  ((((*__h_match673_0_arg )-> __h_data ). Ptr ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block686 */
              printf ("life1: Alive: %d\n", *ptr );
            }
          else
            { /* cicili#Let691 */
              // ----------
              
              ({ /* cicili#Let695 */
                bool __h_case_result  = (true  &&  ((life1 . __h_ctor ) ==  __h_Dead_t  ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block698 */
                    printf ("life1: Dead\n");
                  }
              });
            }
        });
      }
      ({ /* cicili#Let701 */
        __auto_type life2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let703 */
          __auto_type tmp_obj  = life1 ;
          // ----------
          ((void)((tmp_obj . __h_table )-> freeData ));
          tmp_obj ;
        });
        // ----------
        { /* cicili#Let709 */
          typeof((((life2 . __h_data ). Alive ). __h_0_mem )) __h_match707_0_arg ;
          typeof(((((*__h_match707_0_arg )-> __h_data ). Ptr ). __h_0_mem )) ptr ;
          // ----------
          
          ({ /* cicili#Let713 */
            bool __h_case_result  = (true  &&  (((life2 . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn714 */
                    (__h_match707_0_arg  =  (((life2 . __h_data ). Alive ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((((*__h_match707_0_arg )-> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn716 */
                        (ptr  =  ((((*__h_match707_0_arg )-> __h_data ). Ptr ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block720 */
                printf ("life2: Alive: %d\n", *ptr );
              }
            else
              { /* cicili#Let725 */
                // ----------
                
                ({ /* cicili#Let729 */
                  bool __h_case_result  = (true  &&  ((life2 . __h_ctor ) ==  __h_Dead_t  ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block732 */
                      printf ("life2: Dead\n");
                    }
                });
              }
          });
        }
        free_Cell_IntPtr (&life2 );
        { /* cicili#Let738 */
          __auto_type match736  = get_Cell_IntPtr (life2 );
          typeof((((match736 . __h_data ). Just ). __h_0_mem )) __h_match736_0_arg ;
          typeof((((__h_match736_0_arg -> __h_data ). Ptr ). __h_0_mem )) ptr ;
          // ----------
          
          ({ /* cicili#Let743 */
            bool __h_case_result  = (true  &&  (((match736 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn744 */
                    (__h_match736_0_arg  =  (((match736 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match736_0_arg -> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn746 */
                        (ptr  =  (((__h_match736_0_arg -> __h_data ). Ptr ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block750 */
                printf ("life2 again: Alive: %d\n", *ptr );
              }
            else
              { /* cicili#Let755 */
                // ----------
                
                { /* cicili#Block759 */
                  printf ("life2 again: Dead\n");
                }
              }
          });
        }
      });
      printf ("after first letin-2\n");
      { /* cicili#Let764 */
        __auto_type match762  = take_Cell_IntPtr (&life1 );
        typeof((((match762 . __h_data ). Just ). __h_0_mem )) intPtr ;
        typeof((((intPtr -> __h_data ). Ptr ). __h_0_mem )) ptr ;
        // ----------
        
        ({ /* cicili#Let769 */
          bool __h_case_result  = (true  &&  (((match762 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn770 */
                  (intPtr  =  (((match762 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((intPtr -> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn772 */
                      (ptr  =  (((intPtr -> __h_data ). Ptr ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block776 */
              ({ /* cicili#Progn778 */
                printf ("life1 again: Alive: %d\n", *ptr );
                free_IntPtr (&intPtr );
              });
            }
          else
            { /* cicili#Let784 */
              // ----------
              
              ({ /* cicili#Let788 */
                bool __h_case_result  = (true  &&  ((match762 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block791 */
                    printf ("life1 again: Dead\n");
                  }
              });
            }
        });
      }
    });
  }
  printf ("after first let\n");
  { /* cicili#Let793 */
    int i2  = 20;
    IntPtr intPtr2  = make_IntPtr (&i2 );
    // ----------
    ({ /* cicili#Let797 */
      __auto_type life1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let799 */
        __auto_type tmp_obj  = new_Rc_IntPtr (intPtr2 );
        // ----------
        ((void)((tmp_obj . __h_table )-> freeData ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let806 */
        typeof((((life1 . __h_data ). Hold ). __h_0_mem )) __h_match804_0_arg ;
        typeof(((((*__h_match804_0_arg )-> __h_data ). Ptr ). __h_0_mem )) ptr ;
        // ----------
        
        ({ /* cicili#Let810 */
          bool __h_case_result  = (true  &&  (((life1 . __h_ctor ) ==  __h_Hold_t  ) &&  (({ /* cicili#Progn811 */
                  (__h_match804_0_arg  =  (((life1 . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  ((((*__h_match804_0_arg )-> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn813 */
                      (ptr  =  ((((*__h_match804_0_arg )-> __h_data ). Ptr ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block817 */
              printf ("life1: Hold: %d\n", *ptr );
            }
          else
            { /* cicili#Let822 */
              // ----------
              
              ({ /* cicili#Let826 */
                bool __h_case_result  = (true  &&  ((life1 . __h_ctor ) ==  __h_Gone_t  ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block829 */
                    printf ("life1: Gone\n");
                  }
              });
            }
        });
      }
      ({ /* cicili#Let832 */
        __auto_type life2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let834 */
          __auto_type tmp_obj  = clone_Rc_IntPtr (life1 );
          // ----------
          ((void)((tmp_obj . __h_table )-> freeData ));
          tmp_obj ;
        });
        // ----------
        { /* cicili#Let841 */
          typeof((((life2 . __h_data ). Hold ). __h_0_mem )) __h_match839_0_arg ;
          typeof(((((*__h_match839_0_arg )-> __h_data ). Ptr ). __h_0_mem )) ptr ;
          // ----------
          
          ({ /* cicili#Let845 */
            bool __h_case_result  = (true  &&  (((life2 . __h_ctor ) ==  __h_Hold_t  ) &&  (({ /* cicili#Progn846 */
                    (__h_match839_0_arg  =  (((life2 . __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ((((*__h_match839_0_arg )-> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn848 */
                        (ptr  =  ((((*__h_match839_0_arg )-> __h_data ). Ptr ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block852 */
                printf ("life2: Hold: %d\n", *ptr );
              }
            else
              { /* cicili#Let857 */
                // ----------
                
                ({ /* cicili#Let861 */
                  bool __h_case_result  = (true  &&  ((life2 . __h_ctor ) ==  __h_Gone_t  ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block864 */
                      printf ("life2: Gone\n");
                    }
                });
              }
          });
        }
        { /* cicili#Let869 */
          __auto_type match867  = get_Rc_IntPtr (life2 );
          typeof((((match867 . __h_data ). Just ). __h_0_mem )) __h_match867_0_arg ;
          typeof((((__h_match867_0_arg -> __h_data ). Ptr ). __h_0_mem )) ptr ;
          // ----------
          
          ({ /* cicili#Let874 */
            bool __h_case_result  = (true  &&  (((match867 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn875 */
                    (__h_match867_0_arg  =  (((match867 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match867_0_arg -> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn877 */
                        (ptr  =  (((__h_match867_0_arg -> __h_data ). Ptr ). __h_0_mem ) );
                        true ;
                      }) ) ) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block881 */
                printf ("life2 again: Alive: %d\n", *ptr );
              }
            else
              { /* cicili#Let886 */
                // ----------
                
                { /* cicili#Block890 */
                  printf ("life2 again: Dead\n");
                }
              }
          });
        }
      });
      printf ("after second letin-2\n");
      { /* cicili#Let895 */
        __auto_type match893  = take_Rc_IntPtr (&life1 );
        typeof((((match893 . __h_data ). Just ). __h_0_mem )) intPtr ;
        typeof((((intPtr -> __h_data ). Ptr ). __h_0_mem )) ptr ;
        // ----------
        
        ({ /* cicili#Let900 */
          bool __h_case_result  = (true  &&  (((match893 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn901 */
                  (intPtr  =  (((match893 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((intPtr -> __h_ctor ) ==  __h_Ptr_t  ) &&  ({ /* cicili#Progn903 */
                      (ptr  =  (((intPtr -> __h_data ). Ptr ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block907 */
              ({ /* cicili#Progn909 */
                printf ("life1 again: Alive: %d\n", *ptr );
                free_IntPtr (&intPtr );
              });
            }
          else
            { /* cicili#Let915 */
              // ----------
              
              ({ /* cicili#Let919 */
                bool __h_case_result  = (true  &&  ((match893 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block922 */
                    printf ("life1 again: Dead\n");
                  }
              });
            }
        });
      }
    });
  }
  printf ("after second let\n");
  return 0;
}
