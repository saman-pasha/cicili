#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef __Bool__H_DECL__
#define __Bool__H_DECL__
#ifndef __H___h_Bool_ctor_t__
#define __H___h_Bool_ctor_t__
typedef enum __h_Bool_ctor_t {
  __h_False_t = 0,
  __h_True_t = 1
} __h_Bool_ctor_t;
#endif /* __H___h_Bool_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Bool Bool ;
typedef std_data Bool_type_t ;
typedef void (*free_Bool_t) (Bool * this );
typedef struct Bool__H_Table {
  free_Bool_t freeData ;
    int (*show) (FILE * file , Bool value );
    Bool (*or) (Bool lhs , Bool rhs );
    Bool (*and) (Bool lhs , Bool rhs );
} Bool__H_Table;
typedef struct Bool {
  const Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion116 */
    struct { /* ciciliStruct117 */
    } True , _1 ;
    struct { /* ciciliStruct118 */
    } False , _ ;
  } __h_data ;
} Bool;
Bool True ();
Bool False ();
__attribute__((weak)) Bool Default_Bool () {
  return False ();
}
int show_Bool (FILE * file , Bool value );
Bool or_Bool (Bool lhs , Bool rhs );
Bool and_Bool (Bool lhs , Bool rhs );
const Bool__H_Table * const get_Bool__H_Table ();
void free_Bool (Bool * this );
void free_Bool_pointer (Bool ** this );
#endif /* __Bool__H_DECL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (FILE * file , Bool value ) {
  return ({ /* letn149 */
      // ----------
      ;
      ({ /* letn151 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn155 */
            fprintf (file , "%s", "False");
          }) : ({ /* letn159 */
            // ----------
            ;
            ({ /* progn161 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn169 */
      // ----------
      ;
      ({ /* letn171 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn175 */
            True ();
          }) : ({ /* letn179 */
            // ----------
            ;
            ({ /* progn181 */
              ({ /* letn187 */
                // ----------
                ;
                ({ /* letn189 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn193 */
                      True ();
                    }) : ({ /* letn197 */
                      // ----------
                      ;
                      ({ /* progn199 */
                        False ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* letn207 */
      // ----------
      ;
      ({ /* letn209 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn213 */
            False ();
          }) : ({ /* letn217 */
            // ----------
            ;
            ({ /* progn219 */
              ({ /* letn225 */
                // ----------
                ;
                ({ /* letn227 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn231 */
                      False ();
                    }) : ({ /* letn235 */
                      // ----------
                      ;
                      ({ /* progn237 */
                        True ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
void free_Bool (Bool * this ) {
}
__attribute__((weak)) void free_Bool_pointer (Bool ** this ) {
  if (this )
    { /* block246 */
      free_Bool ((*this ));
    }
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool True () {
  { /* let255 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* let259 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_False_t });
    // ----------
    return instance ;
  }
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Maybe_int__H_DECL__
#define __Maybe_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_int Maybe_int ;
typedef std_data Maybe_int_type_t ;
typedef void (*free_Maybe_int_t) (Maybe_int * this );
typedef struct Maybe_int__H_Table {
  free_Maybe_int_t freeData ;
} Maybe_int__H_Table;
typedef struct Maybe_int {
  const Maybe_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion276 */
    struct { /* ciciliStruct277 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct278 */
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
void free_Maybe_int_pointer (Maybe_int ** this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __List_int__H_DECL__
#define __List_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_int class_List_int ;
typedef class_List_int * List_int ;
typedef std_class List_int_type_t ;
typedef void (*free_List_int_t) (List_int * this_ptr );
typedef struct List_int__H_Table {
  free_List_int_t freeClass ;
    int * (*toArray) (List_int list );
    int * (*toArrayFrom) (List_int list , size_t count );
    List_int (*wrap) (const int item );
    List_int (*pure) (const int * buf , size_t len );
    size_t (*show) (FILE * file , List_int list );
    List_int (*copy) (List_int list );
    List_int (*replaceAt) (List_int list , int item , size_t index );
    List_int (*deleteAt) (List_int list , size_t index );
    List_int (*insertAt) (List_int llist , int item , size_t index );
    List_int (*replace) (List_int list , int item , List_int aimed );
    List_int (*delete) (List_int list , List_int aimed );
    List_int (*insert) (List_int llist , int item , List_int rlist );
    List_int (*reverse) (List_int list );
    List_int (*reverseOnto) (List_int list , List_int rlist );
    List_int (*append) (List_int llist , List_int rlist );
    List_int (*push) (int item , List_int list );
    List_int (*take) (size_t len , List_int list );
    List_int (*last) (List_int list );
    List_int (*init) (List_int list );
    size_t (*hasLen) (List_int list , size_t desired );
    size_t (*len) (List_int list );
    List_int (*tail) (List_int list );
    List_int (*drop) (size_t len , List_int list );
    Maybe_int (*head) (List_int list );
    List_int (*nthcdr) (size_t index , List_int list );
    Maybe_int (*nth) (size_t index , List_int list );
} List_int__H_Table;
typedef struct class_List_int {
  const List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion335 */
    struct { /* ciciliStruct336 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct337 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list );
int * toArrayFrom_List_int (List_int list , size_t count );
List_int wrap_List_int (const int item );
List_int pure_List_int (const int * buf , size_t len );
size_t show_List_int (FILE * file , List_int list );
List_int copy_List_int (List_int list );
List_int replaceAt_List_int (List_int list , int item , size_t index );
List_int deleteAt_List_int (List_int list , size_t index );
List_int insertAt_List_int (List_int llist , int item , size_t index );
List_int replace_List_int (List_int list , int item , List_int aimed );
List_int delete_List_int (List_int list , List_int aimed );
List_int insert_List_int (List_int llist , int item , List_int rlist );
List_int reverse_List_int (List_int list );
List_int reverseOnto_List_int (List_int list , List_int rlist );
List_int append_List_int (List_int llist , List_int rlist );
List_int push_List_int (int item , List_int list );
List_int take_List_int (size_t len , List_int list );
List_int last_List_int (List_int list );
List_int init_List_int (List_int list );
size_t hasLen_List_int (List_int list , size_t desired );
size_t len_List_int (List_int list );
List_int tail_List_int (List_int list );
List_int drop_List_int (size_t len , List_int list );
Maybe_int head_List_int (List_int list );
List_int nthcdr_List_int (size_t index , List_int list );
Maybe_int nth_List_int (size_t index , List_int list );
List_int__H_Table * const get_List_int__H_Table ();
void free_List_int (List_int * this_ptr );
void free_List_int_pointer (List_int ** this_ptr );
#endif /* __List_int__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef std_data Maybe_List_int_type_t ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion444 */
    struct { /* ciciliStruct445 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct446 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
void free_Maybe_List_int_pointer (Maybe_List_int ** this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
__attribute__((weak)) void free_Maybe_int_pointer (Maybe_int ** this ) {
  if (this )
    { /* block476 */
      free_Maybe_int ((*this ));
    }
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* let486 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* let491 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list ) {
  return toArrayFrom_List_int (list , 0);
}
int * toArrayFrom_List_int (List_int list , size_t count ) {
  return ({ /* letn505 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn507 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn508 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn510 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn515 */
            ({ /* letn517 */
              int * arr  = toArrayFrom_List_int (tail , (count  +  1 ));
              // ----------
              arr [count ] = head ;
              arr ;
            });
          }) : ({ /* letn522 */
            // ----------
            ;
            ({ /* progn524 */
              ((int *)calloc (count , sizeof(int)));
            });
          }));
      });
    });
}
List_int wrap_List_int (const int item ) {
  return Cons_int (item , Nil_int ());
}
List_int pure_List_int (const int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* letn535 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (FILE * file , List_int list ) {
  return ({ /* letn547 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn549 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn550 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn552 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn557 */
            (({ /* letn563 */
                // ----------
                ;
                ({ /* letn565 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn569 */
                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn578 */
                      // ----------
                      ;
                      ({ /* progn580 */
                        fprintf (file , "%d", head );
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* letn588 */
            // ----------
            ;
            ({ /* progn590 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* letn598 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn600 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn601 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn603 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn608 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* letn614 */
            // ----------
            ;
            ({ /* progn616 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn625 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn627 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn628 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn630 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn635 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn641 */
            // ----------
            ;
            ({ /* progn643 */
              ({ /* letn649 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn651 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn652 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn657 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn663 */
                      // ----------
                      ;
                      ({ /* progn665 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int deleteAt_List_int (List_int list , size_t index ) {
  return ({ /* letn674 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn676 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn677 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn679 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn684 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* letn690 */
            // ----------
            ;
            ({ /* progn692 */
              ({ /* letn698 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn700 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn701 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn706 */
                      copy_List_int (taill );
                    }) : ({ /* letn711 */
                      // ----------
                      ;
                      ({ /* progn713 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insertAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn722 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn724 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn725 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn727 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn732 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn738 */
            // ----------
            ;
            ({ /* progn740 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* letn750 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn752 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn753 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn755 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn760 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* letn766 */
            // ----------
            ;
            ({ /* progn768 */
              ({ /* letn774 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn776 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn777 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn782 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn788 */
                      // ----------
                      ;
                      ({ /* progn790 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int delete_List_int (List_int list , List_int aimed ) {
  return ({ /* letn799 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn801 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn802 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn804 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn809 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* letn815 */
            // ----------
            ;
            ({ /* progn817 */
              ({ /* letn823 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn825 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn826 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn831 */
                      copy_List_int (taill );
                    }) : ({ /* letn836 */
                      // ----------
                      ;
                      ({ /* progn838 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insert_List_int (List_int llist , int item , List_int rlist ) {
  return ({ /* letn847 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn849 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn850 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn852 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn857 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* letn863 */
            // ----------
            ;
            ({ /* progn865 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  return ({ /* letn875 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn877 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn878 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn880 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn885 */
            reverseOnto_List_int (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* letn892 */
            // ----------
            ;
            ({ /* progn894 */
              list ;
            });
          }));
      });
    });
}
List_int reverseOnto_List_int (List_int list , List_int rlist ) {
  return ({ /* letn902 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn904 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn905 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn907 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn912 */
            reverseOnto_List_int (tail , Cons_int (head , rlist ));
          }) : ({ /* letn918 */
            // ----------
            ;
            ({ /* progn920 */
              rlist ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* letn928 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn930 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn931 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn933 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn938 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* letn944 */
            // ----------
            ;
            ({ /* progn946 */
              copy_List_int (rlist );
            });
          }));
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , copy_List_int (list ));
}
List_int take_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? Nil_int () : ({ /* letn961 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn963 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn964 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn966 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn971 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* letn977 */
              // ----------
              ;
              ({ /* progn979 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* letn988 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn990 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn991 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn996 */
            ({ /* letn1002 */
              // ----------
              ;
              ({ /* letn1004 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn1008 */
                    copy_List_int (list );
                  }) : ({ /* letn1013 */
                    // ----------
                    ;
                    ({ /* progn1015 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn1020 */
            // ----------
            ;
            ({ /* progn1022 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* letn1032 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1034 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1035 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1037 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1042 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* letn1048 */
            // ----------
            ;
            ({ /* progn1050 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* letn1059 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1061 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1062 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1067 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* letn1073 */
            // ----------
            ;
            ({ /* progn1075 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* letn1083 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1085 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1086 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1091 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* letn1096 */
            // ----------
            ;
            ({ /* progn1098 */
              0;
            });
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return drop_List_int (1, list );
}
List_int drop_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* letn1111 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1113 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1114 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1119 */
              drop_List_int ((--len ), tail );
            }) : ({ /* letn1124 */
              // ----------
              ;
              ({ /* progn1126 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* letn1136 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn1138 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1139 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1144 */
            Just_int (head );
          }) : ({ /* letn1149 */
            // ----------
            ;
            ({ /* progn1151 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* letn1160 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1162 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1163 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1168 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* letn1173 */
            // ----------
            ;
            ({ /* progn1175 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* letn1184 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1186 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1187 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1189 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1194 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* letn1203 */
            // ----------
            ;
            ({ /* progn1205 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* let1210 */
    List_int this  = (*this_ptr );
    // ----------
    { /* let1214 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1216 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1217 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1224 */
            { /* block1226 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* let1234 */
            // ----------
            ;
            ({ /* letn1236 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block1242 */
                  { /* block1244 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_int_pointer (List_int ** this_ptr ) {
  if (this_ptr )
    { /* block1253 */
      free_List_int ((*this_ptr ));
    }
}
List_int__H_Table * const get_List_int__H_Table () {
  static List_int__H_Table table  = { free_List_int , toArray_List_int , toArrayFrom_List_int , wrap_List_int , pure_List_int , show_List_int , copy_List_int , replaceAt_List_int , deleteAt_List_int , insertAt_List_int , replace_List_int , delete_List_int , insert_List_int , reverse_List_int , reverseOnto_List_int , append_List_int , push_List_int , take_List_int , last_List_int , init_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nthcdr_List_int , nth_List_int };
  return (&table );
}
List_int Cons_int (int head , List_int tail ) {
  { /* let1263 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* let1269 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_int__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
__attribute__((weak)) void free_Maybe_List_int_pointer (Maybe_List_int ** this ) {
  if (this )
    { /* block1284 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let1294 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let1299 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __int_to_int_t__H_DECL__
#define __int_to_int_t__H_DECL__
typedef int (*int_to_int_t) (int value );
#endif /* __int_to_int_t__H_DECL__ */ 
#ifndef __Functor_List_int_int__H_DECL__
#define __Functor_List_int_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Functor_List_int_int Functor_List_int_int ;
typedef std_data Functor_List_int_int_type_t ;
typedef void (*free_Functor_List_int_int_t) (Functor_List_int_int * this );
typedef struct Functor_List_int_int__H_Table {
  free_Functor_List_int_int_t freeData ;
    List_int (*fmap) (int_to_int_t a_b , List_int input );
} Functor_List_int_int__H_Table;
typedef struct Functor_List_int_int {
  const Functor_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1324 */
    struct { /* ciciliStruct1325 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_int_int;
Functor_List_int_int Functor_List_int_int_ctor ();
__attribute__((weak)) Functor_List_int_int Default_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input );
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table ();
void free_Functor_List_int_int (Functor_List_int_int * this );
void free_Functor_List_int_int_pointer (Functor_List_int_int ** this );
#endif /* __Functor_List_int_int__H_DECL__ */ 
Functor_List_int_int get_Functor_List_int_int ();
#ifndef __Functor_List_int_int__H_IMPL__
#define __Functor_List_int_int__H_IMPL__
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* letn1361 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1363 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1364 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1366 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1371 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* letn1378 */
            // ----------
            ;
            ({ /* progn1380 */
              Nil_int ();
            });
          }));
      });
    });
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
__attribute__((weak)) void free_Functor_List_int_int_pointer (Functor_List_int_int ** this ) {
  if (this )
    { /* block1390 */
      free_Functor_List_int_int ((*this ));
    }
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  { /* let1400 */
    Functor_List_int_int instance  = ((Functor_List_int_int){ get_Functor_List_int_int__H_Table (), __h_Functor_t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_int_int__H_IMPL__ */ 
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
typedef Maybe_int (*int_to_Maybe_int_t) (int value );
#ifndef __Monad_Maybe_int_int__H_DECL__
#define __Monad_Maybe_int_int__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Monad_Maybe_int_int Monad_Maybe_int_int ;
typedef std_data Monad_Maybe_int_int_type_t ;
typedef void (*free_Monad_Maybe_int_int_t) (Monad_Maybe_int_int * this );
typedef struct Monad_Maybe_int_int__H_Table {
  free_Monad_Maybe_int_int_t freeData ;
    Maybe_int (*returnB) (int value );
    Maybe_int (*returnA) (int value );
    Maybe_int (*bind) (Maybe_int input , int_to_Maybe_int_t a_mb );
} Monad_Maybe_int_int__H_Table;
typedef struct Monad_Maybe_int_int {
  const Monad_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1433 */
    struct { /* ciciliStruct1434 */
    } Monad , _ ;
  } __h_data ;
} Monad_Maybe_int_int;
Monad_Maybe_int_int Monad_Maybe_int_int_ctor ();
__attribute__((weak)) Monad_Maybe_int_int Default_Monad_Maybe_int_int () {
  return Monad_Maybe_int_int_ctor ();
}
Maybe_int returnB_Monad_Maybe_int_int (int value );
Maybe_int returnA_Monad_Maybe_int_int (int value );
Maybe_int bind_Monad_Maybe_int_int (Maybe_int input , int_to_Maybe_int_t a_mb );
const Monad_Maybe_int_int__H_Table * const get_Monad_Maybe_int_int__H_Table ();
void free_Monad_Maybe_int_int (Monad_Maybe_int_int * this );
void free_Monad_Maybe_int_int_pointer (Monad_Maybe_int_int ** this );
#endif /* __Monad_Maybe_int_int__H_DECL__ */ 
Monad_Maybe_int_int get_Monad_Maybe_int_int ();
#ifndef __Monad_Maybe_int_int__H_IMPL__
#define __Monad_Maybe_int_int__H_IMPL__
Maybe_int returnB_Monad_Maybe_int_int (int value ) {
  return Just_int (value );
}
Maybe_int returnA_Monad_Maybe_int_int (int value ) {
  return Just_int (value );
}
Maybe_int bind_Monad_Maybe_int_int (Maybe_int input , int_to_Maybe_int_t a_mb ) {
  return ({ /* letn1484 */
      typeof((((input . __h_data). Just). __h_0_mem)) value ;
      // ----------
      ;
      ({ /* letn1486 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1487 */
              value  = (((input . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1492 */
            a_mb (value );
          }) : ({ /* letn1496 */
            // ----------
            ;
            ({ /* progn1498 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_Monad_Maybe_int_int (Monad_Maybe_int_int * this ) {
}
__attribute__((weak)) void free_Monad_Maybe_int_int_pointer (Monad_Maybe_int_int ** this ) {
  if (this )
    { /* block1508 */
      free_Monad_Maybe_int_int ((*this ));
    }
}
const Monad_Maybe_int_int__H_Table * const get_Monad_Maybe_int_int__H_Table () {
  static const Monad_Maybe_int_int__H_Table table  = { free_Monad_Maybe_int_int , returnB_Monad_Maybe_int_int , returnA_Monad_Maybe_int_int , bind_Monad_Maybe_int_int };
  return (&table );
}
Monad_Maybe_int_int Monad_Maybe_int_int_ctor () {
  { /* let1518 */
    Monad_Maybe_int_int instance  = ((Monad_Maybe_int_int){ get_Monad_Maybe_int_int__H_Table (), __h_Monad_t });
    // ----------
    return instance ;
  }
}
#endif /* __Monad_Maybe_int_int__H_IMPL__ */ 
Monad_Maybe_int_int get_Monad_Maybe_int_int () {
  return Monad_Maybe_int_int_ctor ();
}
#ifndef __int_to_int_t__H_DECL__
#define __int_to_int_t__H_DECL__
typedef int (*int_to_int_t) (int value );
#endif /* __int_to_int_t__H_DECL__ */ 
#ifndef __Functor_Ap_Maybe_int_int__H_DECL__
#define __Functor_Ap_Maybe_int_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Functor_Ap_Maybe_int_int Functor_Ap_Maybe_int_int ;
typedef std_data Functor_Ap_Maybe_int_int_type_t ;
typedef void (*free_Functor_Ap_Maybe_int_int_t) (Functor_Ap_Maybe_int_int * this );
typedef struct Functor_Ap_Maybe_int_int__H_Table {
  free_Functor_Ap_Maybe_int_int_t freeData ;
    Maybe_int (*fmap) (int_to_int_t a_b , Maybe_int input );
} Functor_Ap_Maybe_int_int__H_Table;
typedef struct Functor_Ap_Maybe_int_int {
  const Functor_Ap_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1549 */
    struct { /* ciciliStruct1550 */
    } Functor , _ ;
  } __h_data ;
} Functor_Ap_Maybe_int_int;
Functor_Ap_Maybe_int_int Functor_Ap_Maybe_int_int_ctor ();
__attribute__((weak)) Functor_Ap_Maybe_int_int Default_Functor_Ap_Maybe_int_int () {
  return Functor_Ap_Maybe_int_int_ctor ();
}
Maybe_int fmap_Functor_Ap_Maybe_int_int (int_to_int_t a_b , Maybe_int input );
const Functor_Ap_Maybe_int_int__H_Table * const get_Functor_Ap_Maybe_int_int__H_Table ();
void free_Functor_Ap_Maybe_int_int (Functor_Ap_Maybe_int_int * this );
void free_Functor_Ap_Maybe_int_int_pointer (Functor_Ap_Maybe_int_int ** this );
#endif /* __Functor_Ap_Maybe_int_int__H_DECL__ */ 
Functor_Ap_Maybe_int_int get_Functor_Ap_Maybe_int_int ();
#ifndef __Maybe_int_to_int_t__H_DECL__
#define __Maybe_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_int_to_int_t Maybe_int_to_int_t ;
typedef std_data Maybe_int_to_int_t_type_t ;
typedef void (*free_Maybe_int_to_int_t_t) (Maybe_int_to_int_t * this );
typedef struct Maybe_int_to_int_t__H_Table {
  free_Maybe_int_to_int_t_t freeData ;
} Maybe_int_to_int_t__H_Table;
typedef struct Maybe_int_to_int_t {
  const Maybe_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1583 */
    struct { /* ciciliStruct1584 */
      int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1585 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int_to_int_t;
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value );
Maybe_int_to_int_t Nothing_int_to_int_t ();
__attribute__((weak)) Maybe_int_to_int_t Default_Maybe_int_to_int_t () {
  return Nothing_int_to_int_t ();
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table ();
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this );
void free_Maybe_int_to_int_t_pointer (Maybe_int_to_int_t ** this );
#endif /* __Maybe_int_to_int_t__H_DECL__ */ 
#ifndef __Applicative_Ap_Maybe_int_int__H_DECL__
#define __Applicative_Ap_Maybe_int_int__H_DECL__
#ifndef __H___h_Applicative_ctor_t__
#define __H___h_Applicative_ctor_t__
typedef enum __h_Applicative_ctor_t {
  __h_Applicative_t = 0
} __h_Applicative_ctor_t;
#endif /* __H___h_Applicative_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Applicative_Ap_Maybe_int_int Applicative_Ap_Maybe_int_int ;
typedef std_data Applicative_Ap_Maybe_int_int_type_t ;
typedef void (*free_Applicative_Ap_Maybe_int_int_t) (Applicative_Ap_Maybe_int_int * this );
typedef struct Applicative_Ap_Maybe_int_int__H_Table {
  free_Applicative_Ap_Maybe_int_int_t freeData ;
    Maybe_int (*ap) (Maybe_int_to_int_t f_a_b , Maybe_int input );
    Maybe_int_to_int_t (*pure) (int_to_int_t a_b );
} Applicative_Ap_Maybe_int_int__H_Table;
typedef struct Applicative_Ap_Maybe_int_int {
  const Applicative_Ap_Maybe_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1621 */
    struct { /* ciciliStruct1622 */
    } Applicative , _ ;
  } __h_data ;
} Applicative_Ap_Maybe_int_int;
Applicative_Ap_Maybe_int_int Applicative_Ap_Maybe_int_int_ctor ();
__attribute__((weak)) Applicative_Ap_Maybe_int_int Default_Applicative_Ap_Maybe_int_int () {
  return Applicative_Ap_Maybe_int_int_ctor ();
}
Maybe_int ap_Applicative_Ap_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input );
Maybe_int_to_int_t pure_Applicative_Ap_Maybe_int_int (int_to_int_t a_b );
const Applicative_Ap_Maybe_int_int__H_Table * const get_Applicative_Ap_Maybe_int_int__H_Table ();
void free_Applicative_Ap_Maybe_int_int (Applicative_Ap_Maybe_int_int * this );
void free_Applicative_Ap_Maybe_int_int_pointer (Applicative_Ap_Maybe_int_int ** this );
#endif /* __Applicative_Ap_Maybe_int_int__H_DECL__ */ 
Applicative_Ap_Maybe_int_int get_Applicative_Ap_Maybe_int_int ();
#ifndef __Functor_Ap_Maybe_int_int__H_IMPL__
#define __Functor_Ap_Maybe_int_int__H_IMPL__
Maybe_int fmap_Functor_Ap_Maybe_int_int (int_to_int_t a_b , Maybe_int input ) {
  return ({ /* letn1664 */
      typeof((((input . __h_data). Just). __h_0_mem)) val ;
      // ----------
      ;
      ({ /* letn1666 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1667 */
              val  = (((input . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1672 */
            Just_int (a_b (val ));
          }) : ({ /* letn1682 */
            // ----------
            ;
            ({ /* progn1684 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_Functor_Ap_Maybe_int_int (Functor_Ap_Maybe_int_int * this ) {
}
__attribute__((weak)) void free_Functor_Ap_Maybe_int_int_pointer (Functor_Ap_Maybe_int_int ** this ) {
  if (this )
    { /* block1694 */
      free_Functor_Ap_Maybe_int_int ((*this ));
    }
}
const Functor_Ap_Maybe_int_int__H_Table * const get_Functor_Ap_Maybe_int_int__H_Table () {
  static const Functor_Ap_Maybe_int_int__H_Table table  = { free_Functor_Ap_Maybe_int_int , fmap_Functor_Ap_Maybe_int_int };
  return (&table );
}
Functor_Ap_Maybe_int_int Functor_Ap_Maybe_int_int_ctor () {
  { /* let1704 */
    Functor_Ap_Maybe_int_int instance  = ((Functor_Ap_Maybe_int_int){ get_Functor_Ap_Maybe_int_int__H_Table (), __h_Functor_t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Ap_Maybe_int_int__H_IMPL__ */ 
Functor_Ap_Maybe_int_int get_Functor_Ap_Maybe_int_int () {
  return Functor_Ap_Maybe_int_int_ctor ();
}
#ifndef __Maybe_int_to_int_t__H_IMPL__
#define __Maybe_int_to_int_t__H_IMPL__
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this ) {
}
__attribute__((weak)) void free_Maybe_int_to_int_t_pointer (Maybe_int_to_int_t ** this ) {
  if (this )
    { /* block1722 */
      free_Maybe_int_to_int_t ((*this ));
    }
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table () {
  static const Maybe_int_to_int_t__H_Table table  = { free_Maybe_int_to_int_t };
  return (&table );
}
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  { /* let1732 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  { /* let1737 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_Ap_Maybe_int_int__H_IMPL__
#define __Applicative_Ap_Maybe_int_int__H_IMPL__
Maybe_int ap_Applicative_Ap_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input ) {
  return ({ /* letn1753 */
      typeof((((f_a_b . __h_data). Just). __h_0_mem)) a_b ;
      // ----------
      ;
      ({ /* letn1755 */
        bool __h_case_result  = (true  &&  (((f_a_b . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1756 */
              a_b  = (((f_a_b . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1761 */
            fmap_Functor_Ap_Maybe_int_int (a_b , input );
          }) : ({ /* letn1766 */
            // ----------
            ;
            ({ /* progn1768 */
              Nothing_int ();
            });
          }));
      });
    });
}
Maybe_int_to_int_t pure_Applicative_Ap_Maybe_int_int (int_to_int_t a_b ) {
  return Just_int_to_int_t (a_b );
}
void free_Applicative_Ap_Maybe_int_int (Applicative_Ap_Maybe_int_int * this ) {
}
__attribute__((weak)) void free_Applicative_Ap_Maybe_int_int_pointer (Applicative_Ap_Maybe_int_int ** this ) {
  if (this )
    { /* block1782 */
      free_Applicative_Ap_Maybe_int_int ((*this ));
    }
}
const Applicative_Ap_Maybe_int_int__H_Table * const get_Applicative_Ap_Maybe_int_int__H_Table () {
  static const Applicative_Ap_Maybe_int_int__H_Table table  = { free_Applicative_Ap_Maybe_int_int , ap_Applicative_Ap_Maybe_int_int , pure_Applicative_Ap_Maybe_int_int };
  return (&table );
}
Applicative_Ap_Maybe_int_int Applicative_Ap_Maybe_int_int_ctor () {
  { /* let1792 */
    Applicative_Ap_Maybe_int_int instance  = ((Applicative_Ap_Maybe_int_int){ get_Applicative_Ap_Maybe_int_int__H_Table (), __h_Applicative_t });
    // ----------
    return instance ;
  }
}
#endif /* __Applicative_Ap_Maybe_int_int__H_IMPL__ */ 
Applicative_Ap_Maybe_int_int get_Applicative_Ap_Maybe_int_int () {
  return Applicative_Ap_Maybe_int_int_ctor ();
}
#ifndef __int_to_int_t__H_DECL__
#define __int_to_int_t__H_DECL__
typedef int (*int_to_int_t) (int value );
#endif /* __int_to_int_t__H_DECL__ */ 
#ifndef __Functor_Ap_List_int_int__H_DECL__
#define __Functor_Ap_List_int_int__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Functor_Ap_List_int_int Functor_Ap_List_int_int ;
typedef std_data Functor_Ap_List_int_int_type_t ;
typedef void (*free_Functor_Ap_List_int_int_t) (Functor_Ap_List_int_int * this );
typedef struct Functor_Ap_List_int_int__H_Table {
  free_Functor_Ap_List_int_int_t freeData ;
    List_int (*fmap) (int_to_int_t a_b , List_int input );
} Functor_Ap_List_int_int__H_Table;
typedef struct Functor_Ap_List_int_int {
  const Functor_Ap_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1823 */
    struct { /* ciciliStruct1824 */
    } Functor , _ ;
  } __h_data ;
} Functor_Ap_List_int_int;
Functor_Ap_List_int_int Functor_Ap_List_int_int_ctor ();
__attribute__((weak)) Functor_Ap_List_int_int Default_Functor_Ap_List_int_int () {
  return Functor_Ap_List_int_int_ctor ();
}
List_int fmap_Functor_Ap_List_int_int (int_to_int_t a_b , List_int input );
const Functor_Ap_List_int_int__H_Table * const get_Functor_Ap_List_int_int__H_Table ();
void free_Functor_Ap_List_int_int (Functor_Ap_List_int_int * this );
void free_Functor_Ap_List_int_int_pointer (Functor_Ap_List_int_int ** this );
#endif /* __Functor_Ap_List_int_int__H_DECL__ */ 
Functor_Ap_List_int_int get_Functor_Ap_List_int_int ();
#ifndef __Maybe_int_to_int_t__H_DECL__
#define __Maybe_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_int_to_int_t Maybe_int_to_int_t ;
typedef std_data Maybe_int_to_int_t_type_t ;
typedef void (*free_Maybe_int_to_int_t_t) (Maybe_int_to_int_t * this );
typedef struct Maybe_int_to_int_t__H_Table {
  free_Maybe_int_to_int_t_t freeData ;
} Maybe_int_to_int_t__H_Table;
typedef struct Maybe_int_to_int_t {
  const Maybe_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1859 */
    struct { /* ciciliStruct1860 */
      int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1861 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_int_to_int_t;
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value );
Maybe_int_to_int_t Nothing_int_to_int_t ();
__attribute__((weak)) Maybe_int_to_int_t Default_Maybe_int_to_int_t () {
  return Nothing_int_to_int_t ();
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table ();
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this );
void free_Maybe_int_to_int_t_pointer (Maybe_int_to_int_t ** this );
#endif /* __Maybe_int_to_int_t__H_DECL__ */ 
#ifndef __List_int_to_int_t__H_DECL__
#define __List_int_to_int_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_int_to_int_t class_List_int_to_int_t ;
typedef class_List_int_to_int_t * List_int_to_int_t ;
typedef std_class List_int_to_int_t_type_t ;
typedef void (*free_List_int_to_int_t_t) (List_int_to_int_t * this_ptr );
typedef struct List_int_to_int_t__H_Table {
  free_List_int_to_int_t_t freeClass ;
    int_to_int_t * (*toArray) (List_int_to_int_t list );
    int_to_int_t * (*toArrayFrom) (List_int_to_int_t list , size_t count );
    List_int_to_int_t (*wrap) (const int_to_int_t item );
    List_int_to_int_t (*pure) (const int_to_int_t * buf , size_t len );
    size_t (*show) (FILE * file , List_int_to_int_t list );
    List_int_to_int_t (*copy) (List_int_to_int_t list );
    List_int_to_int_t (*replaceAt) (List_int_to_int_t list , int_to_int_t item , size_t index );
    List_int_to_int_t (*deleteAt) (List_int_to_int_t list , size_t index );
    List_int_to_int_t (*insertAt) (List_int_to_int_t llist , int_to_int_t item , size_t index );
    List_int_to_int_t (*replace) (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed );
    List_int_to_int_t (*delete) (List_int_to_int_t list , List_int_to_int_t aimed );
    List_int_to_int_t (*insert) (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist );
    List_int_to_int_t (*reverse) (List_int_to_int_t list );
    List_int_to_int_t (*reverseOnto) (List_int_to_int_t list , List_int_to_int_t rlist );
    List_int_to_int_t (*append) (List_int_to_int_t llist , List_int_to_int_t rlist );
    List_int_to_int_t (*push) (int_to_int_t item , List_int_to_int_t list );
    List_int_to_int_t (*take) (size_t len , List_int_to_int_t list );
    List_int_to_int_t (*last) (List_int_to_int_t list );
    List_int_to_int_t (*init) (List_int_to_int_t list );
    size_t (*hasLen) (List_int_to_int_t list , size_t desired );
    size_t (*len) (List_int_to_int_t list );
    List_int_to_int_t (*tail) (List_int_to_int_t list );
    List_int_to_int_t (*drop) (size_t len , List_int_to_int_t list );
    Maybe_int_to_int_t (*head) (List_int_to_int_t list );
    List_int_to_int_t (*nthcdr) (size_t index , List_int_to_int_t list );
    Maybe_int_to_int_t (*nth) (size_t index , List_int_to_int_t list );
} List_int_to_int_t__H_Table;
typedef struct class_List_int_to_int_t {
  const List_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1916 */
    struct { /* ciciliStruct1917 */
      int_to_int_t __h_0_mem ;
      List_int_to_int_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1918 */
    } Nil , _ ;
  } __h_data ;
} class_List_int_to_int_t;
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail );
List_int_to_int_t Nil_int_to_int_t ();
__attribute__((weak)) List_int_to_int_t Default_List_int_to_int_t () {
  return Nil_int_to_int_t ();
}
int_to_int_t * toArray_List_int_to_int_t (List_int_to_int_t list );
int_to_int_t * toArrayFrom_List_int_to_int_t (List_int_to_int_t list , size_t count );
List_int_to_int_t wrap_List_int_to_int_t (const int_to_int_t item );
List_int_to_int_t pure_List_int_to_int_t (const int_to_int_t * buf , size_t len );
size_t show_List_int_to_int_t (FILE * file , List_int_to_int_t list );
List_int_to_int_t copy_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t replaceAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , size_t index );
List_int_to_int_t deleteAt_List_int_to_int_t (List_int_to_int_t list , size_t index );
List_int_to_int_t insertAt_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , size_t index );
List_int_to_int_t replace_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed );
List_int_to_int_t delete_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t aimed );
List_int_to_int_t insert_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist );
List_int_to_int_t reverse_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t reverseOnto_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t rlist );
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist );
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list );
List_int_to_int_t take_List_int_to_int_t (size_t len , List_int_to_int_t list );
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t init_List_int_to_int_t (List_int_to_int_t list );
size_t hasLen_List_int_to_int_t (List_int_to_int_t list , size_t desired );
size_t len_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t drop_List_int_to_int_t (size_t len , List_int_to_int_t list );
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list );
List_int_to_int_t nthcdr_List_int_to_int_t (size_t index , List_int_to_int_t list );
Maybe_int_to_int_t nth_List_int_to_int_t (size_t index , List_int_to_int_t list );
List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table ();
void free_List_int_to_int_t (List_int_to_int_t * this_ptr );
void free_List_int_to_int_t_pointer (List_int_to_int_t ** this_ptr );
#endif /* __List_int_to_int_t__H_DECL__ */ 
#ifndef __Maybe_List_int_to_int_t__H_DECL__
#define __Maybe_List_int_to_int_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_int_to_int_t Maybe_List_int_to_int_t ;
typedef std_data Maybe_List_int_to_int_t_type_t ;
typedef void (*free_Maybe_List_int_to_int_t_t) (Maybe_List_int_to_int_t * this );
typedef struct Maybe_List_int_to_int_t__H_Table {
  free_Maybe_List_int_to_int_t_t freeData ;
} Maybe_List_int_to_int_t__H_Table;
typedef struct Maybe_List_int_to_int_t {
  const Maybe_List_int_to_int_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2025 */
    struct { /* ciciliStruct2026 */
      List_int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2027 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int_to_int_t;
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value );
Maybe_List_int_to_int_t Nothing_List_int_to_int_t ();
__attribute__((weak)) Maybe_List_int_to_int_t Default_Maybe_List_int_to_int_t () {
  return Nothing_List_int_to_int_t ();
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table ();
void free_Maybe_List_int_to_int_t (Maybe_List_int_to_int_t * this );
void free_Maybe_List_int_to_int_t_pointer (Maybe_List_int_to_int_t ** this );
#endif /* __Maybe_List_int_to_int_t__H_DECL__ */ 
#ifndef __Maybe_int__H_DECL__
#define __Maybe_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_int Maybe_int ;
typedef std_data Maybe_int_type_t ;
typedef void (*free_Maybe_int_t) (Maybe_int * this );
typedef struct Maybe_int__H_Table {
  free_Maybe_int_t freeData ;
} Maybe_int__H_Table;
typedef struct Maybe_int {
  const Maybe_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2058 */
    struct { /* ciciliStruct2059 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2060 */
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
void free_Maybe_int_pointer (Maybe_int ** this );
#endif /* __Maybe_int__H_DECL__ */ 
#ifndef __List_int__H_DECL__
#define __List_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_int class_List_int ;
typedef class_List_int * List_int ;
typedef std_class List_int_type_t ;
typedef void (*free_List_int_t) (List_int * this_ptr );
typedef struct List_int__H_Table {
  free_List_int_t freeClass ;
    int * (*toArray) (List_int list );
    int * (*toArrayFrom) (List_int list , size_t count );
    List_int (*wrap) (const int item );
    List_int (*pure) (const int * buf , size_t len );
    size_t (*show) (FILE * file , List_int list );
    List_int (*copy) (List_int list );
    List_int (*replaceAt) (List_int list , int item , size_t index );
    List_int (*deleteAt) (List_int list , size_t index );
    List_int (*insertAt) (List_int llist , int item , size_t index );
    List_int (*replace) (List_int list , int item , List_int aimed );
    List_int (*delete) (List_int list , List_int aimed );
    List_int (*insert) (List_int llist , int item , List_int rlist );
    List_int (*reverse) (List_int list );
    List_int (*reverseOnto) (List_int list , List_int rlist );
    List_int (*append) (List_int llist , List_int rlist );
    List_int (*push) (int item , List_int list );
    List_int (*take) (size_t len , List_int list );
    List_int (*last) (List_int list );
    List_int (*init) (List_int list );
    size_t (*hasLen) (List_int list , size_t desired );
    size_t (*len) (List_int list );
    List_int (*tail) (List_int list );
    List_int (*drop) (size_t len , List_int list );
    Maybe_int (*head) (List_int list );
    List_int (*nthcdr) (size_t index , List_int list );
    Maybe_int (*nth) (size_t index , List_int list );
} List_int__H_Table;
typedef struct class_List_int {
  const List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2115 */
    struct { /* ciciliStruct2116 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2117 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list );
int * toArrayFrom_List_int (List_int list , size_t count );
List_int wrap_List_int (const int item );
List_int pure_List_int (const int * buf , size_t len );
size_t show_List_int (FILE * file , List_int list );
List_int copy_List_int (List_int list );
List_int replaceAt_List_int (List_int list , int item , size_t index );
List_int deleteAt_List_int (List_int list , size_t index );
List_int insertAt_List_int (List_int llist , int item , size_t index );
List_int replace_List_int (List_int list , int item , List_int aimed );
List_int delete_List_int (List_int list , List_int aimed );
List_int insert_List_int (List_int llist , int item , List_int rlist );
List_int reverse_List_int (List_int list );
List_int reverseOnto_List_int (List_int list , List_int rlist );
List_int append_List_int (List_int llist , List_int rlist );
List_int push_List_int (int item , List_int list );
List_int take_List_int (size_t len , List_int list );
List_int last_List_int (List_int list );
List_int init_List_int (List_int list );
size_t hasLen_List_int (List_int list , size_t desired );
size_t len_List_int (List_int list );
List_int tail_List_int (List_int list );
List_int drop_List_int (size_t len , List_int list );
Maybe_int head_List_int (List_int list );
List_int nthcdr_List_int (size_t index , List_int list );
Maybe_int nth_List_int (size_t index , List_int list );
List_int__H_Table * const get_List_int__H_Table ();
void free_List_int (List_int * this_ptr );
void free_List_int_pointer (List_int ** this_ptr );
#endif /* __List_int__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef std_data Maybe_List_int_type_t ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2224 */
    struct { /* ciciliStruct2225 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2226 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
void free_Maybe_List_int_pointer (Maybe_List_int ** this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __Maybe_List_int__H_DECL__
#define __Maybe_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_int Maybe_List_int ;
typedef std_data Maybe_List_int_type_t ;
typedef void (*free_Maybe_List_int_t) (Maybe_List_int * this );
typedef struct Maybe_List_int__H_Table {
  free_Maybe_List_int_t freeData ;
} Maybe_List_int__H_Table;
typedef struct Maybe_List_int {
  const Maybe_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2257 */
    struct { /* ciciliStruct2258 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2259 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Just_List_int (List_int value );
Maybe_List_int Nothing_List_int ();
__attribute__((weak)) Maybe_List_int Default_Maybe_List_int () {
  return Nothing_List_int ();
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table ();
void free_Maybe_List_int (Maybe_List_int * this );
void free_Maybe_List_int_pointer (Maybe_List_int ** this );
#endif /* __Maybe_List_int__H_DECL__ */ 
#ifndef __List_List_int__H_DECL__
#define __List_List_int__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_List_List_int class_List_List_int ;
typedef class_List_List_int * List_List_int ;
typedef std_class List_List_int_type_t ;
typedef void (*free_List_List_int_t) (List_List_int * this_ptr );
typedef struct List_List_int__H_Table {
  free_List_List_int_t freeClass ;
    List_int * (*toArray) (List_List_int list );
    List_int * (*toArrayFrom) (List_List_int list , size_t count );
    List_List_int (*wrap) (const List_int item );
    List_List_int (*pure) (const List_int * buf , size_t len );
    size_t (*show) (FILE * file , List_List_int list );
    List_List_int (*copy) (List_List_int list );
    List_List_int (*replaceAt) (List_List_int list , List_int item , size_t index );
    List_List_int (*deleteAt) (List_List_int list , size_t index );
    List_List_int (*insertAt) (List_List_int llist , List_int item , size_t index );
    List_List_int (*replace) (List_List_int list , List_int item , List_List_int aimed );
    List_List_int (*delete) (List_List_int list , List_List_int aimed );
    List_List_int (*insert) (List_List_int llist , List_int item , List_List_int rlist );
    List_List_int (*reverse) (List_List_int list );
    List_List_int (*reverseOnto) (List_List_int list , List_List_int rlist );
    List_List_int (*append) (List_List_int llist , List_List_int rlist );
    List_List_int (*push) (List_int item , List_List_int list );
    List_List_int (*take) (size_t len , List_List_int list );
    List_List_int (*last) (List_List_int list );
    List_List_int (*init) (List_List_int list );
    size_t (*hasLen) (List_List_int list , size_t desired );
    size_t (*len) (List_List_int list );
    List_List_int (*tail) (List_List_int list );
    List_List_int (*drop) (size_t len , List_List_int list );
    Maybe_List_int (*head) (List_List_int list );
    List_List_int (*nthcdr) (size_t index , List_List_int list );
    Maybe_List_int (*nth) (size_t index , List_List_int list );
} List_List_int__H_Table;
typedef struct class_List_List_int {
  const List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2314 */
    struct { /* ciciliStruct2315 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2316 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_int;
List_List_int Cons_List_int (List_int head , List_List_int tail );
List_List_int Nil_List_int ();
__attribute__((weak)) List_List_int Default_List_List_int () {
  return Nil_List_int ();
}
List_int * toArray_List_List_int (List_List_int list );
List_int * toArrayFrom_List_List_int (List_List_int list , size_t count );
List_List_int wrap_List_List_int (const List_int item );
List_List_int pure_List_List_int (const List_int * buf , size_t len );
size_t show_List_List_int (FILE * file , List_List_int list );
List_List_int copy_List_List_int (List_List_int list );
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index );
List_List_int deleteAt_List_List_int (List_List_int list , size_t index );
List_List_int insertAt_List_List_int (List_List_int llist , List_int item , size_t index );
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed );
List_List_int delete_List_List_int (List_List_int list , List_List_int aimed );
List_List_int insert_List_List_int (List_List_int llist , List_int item , List_List_int rlist );
List_List_int reverse_List_List_int (List_List_int list );
List_List_int reverseOnto_List_List_int (List_List_int list , List_List_int rlist );
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist );
List_List_int push_List_List_int (List_int item , List_List_int list );
List_List_int take_List_List_int (size_t len , List_List_int list );
List_List_int last_List_List_int (List_List_int list );
List_List_int init_List_List_int (List_List_int list );
size_t hasLen_List_List_int (List_List_int list , size_t desired );
size_t len_List_List_int (List_List_int list );
List_List_int tail_List_List_int (List_List_int list );
List_List_int drop_List_List_int (size_t len , List_List_int list );
Maybe_List_int head_List_List_int (List_List_int list );
List_List_int nthcdr_List_List_int (size_t index , List_List_int list );
Maybe_List_int nth_List_List_int (size_t index , List_List_int list );
List_List_int__H_Table * const get_List_List_int__H_Table ();
void free_List_List_int (List_List_int * this_ptr );
void free_List_List_int_pointer (List_List_int ** this_ptr );
#endif /* __List_List_int__H_DECL__ */ 
#ifndef __Maybe_List_List_int__H_DECL__
#define __Maybe_List_List_int__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Maybe_List_List_int Maybe_List_List_int ;
typedef std_data Maybe_List_List_int_type_t ;
typedef void (*free_Maybe_List_List_int_t) (Maybe_List_List_int * this );
typedef struct Maybe_List_List_int__H_Table {
  free_Maybe_List_List_int_t freeData ;
} Maybe_List_List_int__H_Table;
typedef struct Maybe_List_List_int {
  const Maybe_List_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2423 */
    struct { /* ciciliStruct2424 */
      List_List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2425 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_List_int;
Maybe_List_List_int Just_List_List_int (List_List_int value );
Maybe_List_List_int Nothing_List_List_int ();
__attribute__((weak)) Maybe_List_List_int Default_Maybe_List_List_int () {
  return Nothing_List_List_int ();
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table ();
void free_Maybe_List_List_int (Maybe_List_List_int * this );
void free_Maybe_List_List_int_pointer (Maybe_List_List_int ** this );
#endif /* __Maybe_List_List_int__H_DECL__ */ 
#ifndef __folds_List_int__H_DECL__
#define __folds_List_int__H_DECL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable );
#endif /* __folds_List_int__H_DECL__ */ 
typedef List_int (*Monoid_List_int_mappend_t) (List_int lhs , List_int rhs );
typedef List_int (*Monoid_List_int_mconcat_t) (List_List_int l );
#ifndef __Monoid_List_int__H_DECL__
#define __Monoid_List_int__H_DECL__
#ifndef __H___h_Monoid_ctor_t__
#define __H___h_Monoid_ctor_t__
typedef enum __h_Monoid_ctor_t {
  __h_Monoid_t = 0
} __h_Monoid_ctor_t;
#endif /* __H___h_Monoid_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Monoid_List_int Monoid_List_int ;
typedef std_data Monoid_List_int_type_t ;
typedef void (*free_Monoid_List_int_t) (Monoid_List_int * this );
typedef struct Monoid_List_int__H_Table {
  free_Monoid_List_int_t freeData ;
} Monoid_List_int__H_Table;
typedef struct Monoid_List_int {
  const Monoid_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2470 */
    struct { /* ciciliStruct2471 */
      Monoid_List_int_mappend_t __h_0_mem ;
      List_int __h_1_mem ;
      Monoid_List_int_mconcat_t __h_2_mem ;
    } Monoid , _ ;
  } __h_data ;
} Monoid_List_int;
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat );
__attribute__((weak)) Monoid_List_int Default_Monoid_List_int (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return Monoid_List_int_ctor (mappend , mempty , mconcat );
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table ();
void free_Monoid_List_int (Monoid_List_int * this );
void free_Monoid_List_int_pointer (Monoid_List_int ** this );
#endif /* __Monoid_List_int__H_DECL__ */ 
#ifndef __Semigroup_List_int__H_DECL__
#define __Semigroup_List_int__H_DECL__
#ifndef __H___h_Semigroup_ctor_t__
#define __H___h_Semigroup_ctor_t__
typedef enum __h_Semigroup_ctor_t {
  __h_Semigroup_t = 0
} __h_Semigroup_ctor_t;
#endif /* __H___h_Semigroup_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Semigroup_List_int Semigroup_List_int ;
typedef std_data Semigroup_List_int_type_t ;
typedef void (*free_Semigroup_List_int_t) (Semigroup_List_int * this );
typedef struct Semigroup_List_int__H_Table {
  free_Semigroup_List_int_t freeData ;
} Semigroup_List_int__H_Table;
typedef struct Semigroup_List_int {
  const Semigroup_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2496 */
    struct { /* ciciliStruct2497 */
      Monoid_List_int_mappend_t __h_0_mem ;
    } Semigroup , _ ;
  } __h_data ;
} Semigroup_List_int;
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend );
__attribute__((weak)) Semigroup_List_int Default_Semigroup_List_int (Monoid_List_int_mappend_t mappend ) {
  return Semigroup_List_int_ctor (mappend );
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table ();
void free_Semigroup_List_int (Semigroup_List_int * this );
void free_Semigroup_List_int_pointer (Semigroup_List_int ** this );
#endif /* __Semigroup_List_int__H_DECL__ */ 
List_int mempty_List_int ();
List_int mappend_List_int (List_int lhs , List_int rhs );
List_int mconcat_List_int (List_List_int list );
Monoid_List_int get_Monoid_List_int ();
Semigroup_List_int get_Semigroup_List_int ();
#ifndef __Applicative_Ap_List_int_int__H_DECL__
#define __Applicative_Ap_List_int_int__H_DECL__
#ifndef __H___h_Applicative_ctor_t__
#define __H___h_Applicative_ctor_t__
typedef enum __h_Applicative_ctor_t {
  __h_Applicative_t = 0
} __h_Applicative_ctor_t;
#endif /* __H___h_Applicative_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Applicative_Ap_List_int_int Applicative_Ap_List_int_int ;
typedef std_data Applicative_Ap_List_int_int_type_t ;
typedef void (*free_Applicative_Ap_List_int_int_t) (Applicative_Ap_List_int_int * this );
typedef struct Applicative_Ap_List_int_int__H_Table {
  free_Applicative_Ap_List_int_int_t freeData ;
    List_int (*ap) (List_int_to_int_t f_a_b , List_int input );
    List_int_to_int_t (*pure) (int_to_int_t a_b );
} Applicative_Ap_List_int_int__H_Table;
typedef struct Applicative_Ap_List_int_int {
  const Applicative_Ap_List_int_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion2543 */
    struct { /* ciciliStruct2544 */
    } Applicative , _ ;
  } __h_data ;
} Applicative_Ap_List_int_int;
Applicative_Ap_List_int_int Applicative_Ap_List_int_int_ctor ();
__attribute__((weak)) Applicative_Ap_List_int_int Default_Applicative_Ap_List_int_int () {
  return Applicative_Ap_List_int_int_ctor ();
}
List_int ap_Applicative_Ap_List_int_int (List_int_to_int_t f_a_b , List_int input );
List_int_to_int_t pure_Applicative_Ap_List_int_int (int_to_int_t a_b );
const Applicative_Ap_List_int_int__H_Table * const get_Applicative_Ap_List_int_int__H_Table ();
void free_Applicative_Ap_List_int_int (Applicative_Ap_List_int_int * this );
void free_Applicative_Ap_List_int_int_pointer (Applicative_Ap_List_int_int ** this );
#endif /* __Applicative_Ap_List_int_int__H_DECL__ */ 
Applicative_Ap_List_int_int get_Applicative_Ap_List_int_int ();
#ifndef __Functor_Ap_List_int_int__H_IMPL__
#define __Functor_Ap_List_int_int__H_IMPL__
List_int fmap_Functor_Ap_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* letn2586 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2588 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2589 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2591 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2596 */
            Cons_int (a_b (head ), fmap_Functor_Ap_List_int_int (a_b , tail ));
          }) : ({ /* letn2602 */
            // ----------
            ;
            ({ /* progn2604 */
              Nil_int ();
            });
          }));
      });
    });
}
void free_Functor_Ap_List_int_int (Functor_Ap_List_int_int * this ) {
}
__attribute__((weak)) void free_Functor_Ap_List_int_int_pointer (Functor_Ap_List_int_int ** this ) {
  if (this )
    { /* block2614 */
      free_Functor_Ap_List_int_int ((*this ));
    }
}
const Functor_Ap_List_int_int__H_Table * const get_Functor_Ap_List_int_int__H_Table () {
  static const Functor_Ap_List_int_int__H_Table table  = { free_Functor_Ap_List_int_int , fmap_Functor_Ap_List_int_int };
  return (&table );
}
Functor_Ap_List_int_int Functor_Ap_List_int_int_ctor () {
  { /* let2624 */
    Functor_Ap_List_int_int instance  = ((Functor_Ap_List_int_int){ get_Functor_Ap_List_int_int__H_Table (), __h_Functor_t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Ap_List_int_int__H_IMPL__ */ 
Functor_Ap_List_int_int get_Functor_Ap_List_int_int () {
  return Functor_Ap_List_int_int_ctor ();
}
#ifndef __Maybe_int_to_int_t__H_IMPL__
#define __Maybe_int_to_int_t__H_IMPL__
void free_Maybe_int_to_int_t (Maybe_int_to_int_t * this ) {
}
__attribute__((weak)) void free_Maybe_int_to_int_t_pointer (Maybe_int_to_int_t ** this ) {
  if (this )
    { /* block2644 */
      free_Maybe_int_to_int_t ((*this ));
    }
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table () {
  static const Maybe_int_to_int_t__H_Table table  = { free_Maybe_int_to_int_t };
  return (&table );
}
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  { /* let2654 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  { /* let2659 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __List_int_to_int_t__H_IMPL__
#define __List_int_to_int_t__H_IMPL__
int_to_int_t * toArray_List_int_to_int_t (List_int_to_int_t list ) {
  return toArrayFrom_List_int_to_int_t (list , 0);
}
int_to_int_t * toArrayFrom_List_int_to_int_t (List_int_to_int_t list , size_t count ) {
  return ({ /* letn2673 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2675 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2676 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2678 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2683 */
            ({ /* letn2685 */
              int_to_int_t * arr  = toArrayFrom_List_int_to_int_t (tail , (count  +  1 ));
              // ----------
              arr [count ] = head ;
              arr ;
            });
          }) : ({ /* letn2690 */
            // ----------
            ;
            ({ /* progn2692 */
              ((int_to_int_t *)calloc (count , sizeof(int_to_int_t)));
            });
          }));
      });
    });
}
List_int_to_int_t wrap_List_int_to_int_t (const int_to_int_t item ) {
  return Cons_int_to_int_t (item , Nil_int_to_int_t ());
}
List_int_to_int_t pure_List_int_to_int_t (const int_to_int_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int_to_int_t () : ({ /* letn2702 */
        int_to_int_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int_to_int_t () : Cons_int_to_int_t (item , pure_List_int_to_int_t ((++buf ), (--len ))));
      }));
}
size_t show_List_int_to_int_t (FILE * file , List_int_to_int_t list ) {
  return ({ /* letn2714 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2716 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2717 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2719 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2724 */
            (({ /* letn2730 */
                // ----------
                ;
                ({ /* letn2732 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2736 */
                      (fprintf (file , "%p", ((void *)head )) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn2745 */
                      // ----------
                      ;
                      ({ /* progn2747 */
                        fprintf (file , "%p", ((void *)head ));
                      });
                    }));
                });
              }) +  show_List_int_to_int_t (file , tail ) );
          }) : ({ /* letn2755 */
            // ----------
            ;
            ({ /* progn2757 */
              0;
            });
          }));
      });
    });
}
List_int_to_int_t copy_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn2765 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2767 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2768 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2770 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2775 */
            Cons_int_to_int_t (head , copy_List_int_to_int_t (tail ));
          }) : ({ /* letn2781 */
            // ----------
            ;
            ({ /* progn2783 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t replaceAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , size_t index ) {
  return ({ /* letn2792 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2794 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2795 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2797 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2802 */
            Cons_int_to_int_t (head , replaceAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* letn2808 */
            // ----------
            ;
            ({ /* progn2810 */
              ({ /* letn2816 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2818 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2819 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2824 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (taill ));
                    }) : ({ /* letn2830 */
                      // ----------
                      ;
                      ({ /* progn2832 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t deleteAt_List_int_to_int_t (List_int_to_int_t list , size_t index ) {
  return ({ /* letn2841 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2843 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2844 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2846 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2851 */
            Cons_int_to_int_t (head , deleteAt_List_int_to_int_t (tail , (index  -  1 )));
          }) : ({ /* letn2857 */
            // ----------
            ;
            ({ /* progn2859 */
              ({ /* letn2865 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2867 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2868 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2873 */
                      copy_List_int_to_int_t (taill );
                    }) : ({ /* letn2878 */
                      // ----------
                      ;
                      ({ /* progn2880 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t insertAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , size_t index ) {
  return ({ /* letn2889 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2891 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2892 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2894 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2899 */
            Cons_int_to_int_t (head , insertAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* letn2905 */
            // ----------
            ;
            ({ /* progn2907 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (list ));
            });
          }));
      });
    });
}
List_int_to_int_t replace_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed ) {
  return ({ /* letn2917 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2919 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2920 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2922 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2927 */
            Cons_int_to_int_t (head , replace_List_int_to_int_t (tail , item , aimed ));
          }) : ({ /* letn2933 */
            // ----------
            ;
            ({ /* progn2935 */
              ({ /* letn2941 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2943 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2944 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2949 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (taill ));
                    }) : ({ /* letn2955 */
                      // ----------
                      ;
                      ({ /* progn2957 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t delete_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t aimed ) {
  return ({ /* letn2966 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2968 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2969 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2971 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2976 */
            Cons_int_to_int_t (head , delete_List_int_to_int_t (tail , aimed ));
          }) : ({ /* letn2982 */
            // ----------
            ;
            ({ /* progn2984 */
              ({ /* letn2990 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2992 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2993 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2998 */
                      copy_List_int_to_int_t (taill );
                    }) : ({ /* letn3003 */
                      // ----------
                      ;
                      ({ /* progn3005 */
                        Nil_int_to_int_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int_to_int_t insert_List_int_to_int_t (List_int_to_int_t llist , int_to_int_t item , List_int_to_int_t rlist ) {
  return ({ /* letn3014 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3016 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3017 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3019 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3024 */
            Cons_int_to_int_t (head , insert_List_int_to_int_t (tail , item , rlist ));
          }) : ({ /* letn3030 */
            // ----------
            ;
            ({ /* progn3032 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (rlist ));
            });
          }));
      });
    });
}
List_int_to_int_t reverse_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3042 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3044 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3045 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3047 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3052 */
            reverseOnto_List_int_to_int_t (tail , Cons_int_to_int_t (head , Nil_int_to_int_t ()));
          }) : ({ /* letn3059 */
            // ----------
            ;
            ({ /* progn3061 */
              list ;
            });
          }));
      });
    });
}
List_int_to_int_t reverseOnto_List_int_to_int_t (List_int_to_int_t list , List_int_to_int_t rlist ) {
  return ({ /* letn3069 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3071 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3072 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3074 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3079 */
            reverseOnto_List_int_to_int_t (tail , Cons_int_to_int_t (head , rlist ));
          }) : ({ /* letn3085 */
            // ----------
            ;
            ({ /* progn3087 */
              rlist ;
            });
          }));
      });
    });
}
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist ) {
  return ({ /* letn3095 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3097 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3098 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3100 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3105 */
            Cons_int_to_int_t (head , append_List_int_to_int_t (tail , rlist ));
          }) : ({ /* letn3111 */
            // ----------
            ;
            ({ /* progn3113 */
              copy_List_int_to_int_t (rlist );
            });
          }));
      });
    });
}
List_int_to_int_t push_List_int_to_int_t (int_to_int_t item , List_int_to_int_t list ) {
  return Cons_int_to_int_t (item , copy_List_int_to_int_t (list ));
}
List_int_to_int_t take_List_int_to_int_t (size_t len , List_int_to_int_t list ) {
  return (((len  <=  0 )) ? Nil_int_to_int_t () : ({ /* letn3128 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3130 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3131 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3133 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3138 */
              Cons_int_to_int_t (head , take_List_int_to_int_t ((--len ), tail ));
            }) : ({ /* letn3144 */
              // ----------
              ;
              ({ /* progn3146 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3155 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3157 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3158 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3163 */
            ({ /* letn3169 */
              // ----------
              ;
              ({ /* letn3171 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3175 */
                    copy_List_int_to_int_t (list );
                  }) : ({ /* letn3180 */
                    // ----------
                    ;
                    ({ /* progn3182 */
                      last_List_int_to_int_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3187 */
            // ----------
            ;
            ({ /* progn3189 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t init_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3199 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3201 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3202 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3204 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3209 */
            Cons_int_to_int_t (head , init_List_int_to_int_t (tail ));
          }) : ({ /* letn3215 */
            // ----------
            ;
            ({ /* progn3217 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_int_to_int_t (List_int_to_int_t list , size_t desired ) {
  return ({ /* letn3226 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3228 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3229 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3234 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int_to_int_t (tail , (--desired )) ));
          }) : ({ /* letn3240 */
            // ----------
            ;
            ({ /* progn3242 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3250 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3252 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3253 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3258 */
            (1 +  len_List_int_to_int_t (tail ) );
          }) : ({ /* letn3263 */
            // ----------
            ;
            ({ /* progn3265 */
              0;
            });
          }));
      });
    });
}
List_int_to_int_t tail_List_int_to_int_t (List_int_to_int_t list ) {
  return drop_List_int_to_int_t (1, list );
}
List_int_to_int_t drop_List_int_to_int_t (size_t len , List_int_to_int_t list ) {
  return (((len  <=  0 )) ? copy_List_int_to_int_t (list ) : ({ /* letn3278 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3280 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3281 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3286 */
              drop_List_int_to_int_t ((--len ), tail );
            }) : ({ /* letn3291 */
              // ----------
              ;
              ({ /* progn3293 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3303 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn3305 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3306 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3311 */
            Just_int_to_int_t (head );
          }) : ({ /* letn3316 */
            // ----------
            ;
            ({ /* progn3318 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t nthcdr_List_int_to_int_t (size_t index , List_int_to_int_t list ) {
  return ({ /* letn3327 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3329 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3330 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3335 */
            nthcdr_List_int_to_int_t ((--index ), tail );
          }) : ({ /* letn3340 */
            // ----------
            ;
            ({ /* progn3342 */
              list ;
            });
          }));
      });
    });
}
Maybe_int_to_int_t nth_List_int_to_int_t (size_t index , List_int_to_int_t list ) {
  return ({ /* letn3351 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3353 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3354 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3356 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3361 */
            (((index  ==  0 )) ? Just_int_to_int_t (head ) : (((index  <  0 )) ? Nothing_int_to_int_t () : nth_List_int_to_int_t ((--index ), tail )));
          }) : ({ /* letn3370 */
            // ----------
            ;
            ({ /* progn3372 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
void free_List_int_to_int_t (List_int_to_int_t * this_ptr ) {
  { /* let3377 */
    List_int_to_int_t this  = (*this_ptr );
    // ----------
    { /* let3381 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3383 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3384 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block3391 */
            { /* block3393 */
              free (this );
              free_List_int_to_int_t ((&tail ));
            }
          }
        else
          { /* let3401 */
            // ----------
            ;
            ({ /* letn3403 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block3409 */
                  { /* block3411 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_int_to_int_t_pointer (List_int_to_int_t ** this_ptr ) {
  if (this_ptr )
    { /* block3419 */
      free_List_int_to_int_t ((*this_ptr ));
    }
}
List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table () {
  static List_int_to_int_t__H_Table table  = { free_List_int_to_int_t , toArray_List_int_to_int_t , toArrayFrom_List_int_to_int_t , wrap_List_int_to_int_t , pure_List_int_to_int_t , show_List_int_to_int_t , copy_List_int_to_int_t , replaceAt_List_int_to_int_t , deleteAt_List_int_to_int_t , insertAt_List_int_to_int_t , replace_List_int_to_int_t , delete_List_int_to_int_t , insert_List_int_to_int_t , reverse_List_int_to_int_t , reverseOnto_List_int_to_int_t , append_List_int_to_int_t , push_List_int_to_int_t , take_List_int_to_int_t , last_List_int_to_int_t , init_List_int_to_int_t , hasLen_List_int_to_int_t , len_List_int_to_int_t , tail_List_int_to_int_t , drop_List_int_to_int_t , head_List_int_to_int_t , nthcdr_List_int_to_int_t , nth_List_int_to_int_t };
  return (&table );
}
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  { /* let3429 */
    List_int_to_int_t instance  = malloc (sizeof(class_List_int_to_int_t));
    // ----------
    (*instance ) = ((class_List_int_to_int_t){ get_List_int_to_int_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int_to_int_t Nil_int_to_int_t () {
  { /* let3435 */
    List_int_to_int_t instance  = malloc (sizeof(class_List_int_to_int_t));
    // ----------
    (*instance ) = ((class_List_int_to_int_t){ get_List_int_to_int_t__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_int_to_int_t__H_IMPL__ */ 
#ifndef __Maybe_List_int_to_int_t__H_IMPL__
#define __Maybe_List_int_to_int_t__H_IMPL__
void free_Maybe_List_int_to_int_t (Maybe_List_int_to_int_t * this ) {
}
__attribute__((weak)) void free_Maybe_List_int_to_int_t_pointer (Maybe_List_int_to_int_t ** this ) {
  if (this )
    { /* block3450 */
      free_Maybe_List_int_to_int_t ((*this ));
    }
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table () {
  static const Maybe_List_int_to_int_t__H_Table table  = { free_Maybe_List_int_to_int_t };
  return (&table );
}
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value ) {
  { /* let3460 */
    Maybe_List_int_to_int_t instance  = ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int_to_int_t Nothing_List_int_to_int_t () {
  { /* let3465 */
    Maybe_List_int_to_int_t instance  = ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int_to_int_t__H_IMPL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
__attribute__((weak)) void free_Maybe_int_pointer (Maybe_int ** this ) {
  if (this )
    { /* block3481 */
      free_Maybe_int ((*this ));
    }
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* let3491 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* let3496 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list ) {
  return toArrayFrom_List_int (list , 0);
}
int * toArrayFrom_List_int (List_int list , size_t count ) {
  return ({ /* letn3510 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3512 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3513 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3515 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3520 */
            ({ /* letn3522 */
              int * arr  = toArrayFrom_List_int (tail , (count  +  1 ));
              // ----------
              arr [count ] = head ;
              arr ;
            });
          }) : ({ /* letn3527 */
            // ----------
            ;
            ({ /* progn3529 */
              ((int *)calloc (count , sizeof(int)));
            });
          }));
      });
    });
}
List_int wrap_List_int (const int item ) {
  return Cons_int (item , Nil_int ());
}
List_int pure_List_int (const int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* letn3539 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (FILE * file , List_int list ) {
  return ({ /* letn3551 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3553 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3554 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3556 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3561 */
            (({ /* letn3567 */
                // ----------
                ;
                ({ /* letn3569 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3573 */
                      (0 +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn3582 */
                      // ----------
                      ;
                      ({ /* progn3584 */
                        0;
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* letn3592 */
            // ----------
            ;
            ({ /* progn3594 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* letn3602 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3604 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3605 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3607 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3612 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* letn3618 */
            // ----------
            ;
            ({ /* progn3620 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn3629 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3631 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3632 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3634 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3639 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn3645 */
            // ----------
            ;
            ({ /* progn3647 */
              ({ /* letn3653 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3655 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3656 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3661 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn3667 */
                      // ----------
                      ;
                      ({ /* progn3669 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int deleteAt_List_int (List_int list , size_t index ) {
  return ({ /* letn3678 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3680 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3681 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3683 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3688 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* letn3694 */
            // ----------
            ;
            ({ /* progn3696 */
              ({ /* letn3702 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3704 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3705 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3710 */
                      copy_List_int (taill );
                    }) : ({ /* letn3715 */
                      // ----------
                      ;
                      ({ /* progn3717 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insertAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn3726 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3728 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3729 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3731 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3736 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn3742 */
            // ----------
            ;
            ({ /* progn3744 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* letn3754 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3756 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3757 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3759 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3764 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* letn3770 */
            // ----------
            ;
            ({ /* progn3772 */
              ({ /* letn3778 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3780 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3781 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3786 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn3792 */
                      // ----------
                      ;
                      ({ /* progn3794 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int delete_List_int (List_int list , List_int aimed ) {
  return ({ /* letn3803 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3805 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3806 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3808 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3813 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* letn3819 */
            // ----------
            ;
            ({ /* progn3821 */
              ({ /* letn3827 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3829 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3830 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3835 */
                      copy_List_int (taill );
                    }) : ({ /* letn3840 */
                      // ----------
                      ;
                      ({ /* progn3842 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insert_List_int (List_int llist , int item , List_int rlist ) {
  return ({ /* letn3851 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3853 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3854 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3856 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3861 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* letn3867 */
            // ----------
            ;
            ({ /* progn3869 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  return ({ /* letn3879 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3881 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3882 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3884 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3889 */
            reverseOnto_List_int (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* letn3896 */
            // ----------
            ;
            ({ /* progn3898 */
              list ;
            });
          }));
      });
    });
}
List_int reverseOnto_List_int (List_int list , List_int rlist ) {
  return ({ /* letn3906 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3908 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3909 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3911 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3916 */
            reverseOnto_List_int (tail , Cons_int (head , rlist ));
          }) : ({ /* letn3922 */
            // ----------
            ;
            ({ /* progn3924 */
              rlist ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* letn3932 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3934 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3935 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3937 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3942 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* letn3948 */
            // ----------
            ;
            ({ /* progn3950 */
              copy_List_int (rlist );
            });
          }));
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , copy_List_int (list ));
}
List_int take_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? Nil_int () : ({ /* letn3965 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3967 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3968 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3970 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3975 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* letn3981 */
              // ----------
              ;
              ({ /* progn3983 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* letn3992 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3994 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3995 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4000 */
            ({ /* letn4006 */
              // ----------
              ;
              ({ /* letn4008 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4012 */
                    copy_List_int (list );
                  }) : ({ /* letn4017 */
                    // ----------
                    ;
                    ({ /* progn4019 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn4024 */
            // ----------
            ;
            ({ /* progn4026 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* letn4036 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4038 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4039 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4041 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4046 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* letn4052 */
            // ----------
            ;
            ({ /* progn4054 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* letn4063 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4065 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4066 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4071 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* letn4077 */
            // ----------
            ;
            ({ /* progn4079 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* letn4087 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4089 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4090 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4095 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* letn4100 */
            // ----------
            ;
            ({ /* progn4102 */
              0;
            });
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return drop_List_int (1, list );
}
List_int drop_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* letn4115 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4117 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4118 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4123 */
              drop_List_int ((--len ), tail );
            }) : ({ /* letn4128 */
              // ----------
              ;
              ({ /* progn4130 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* letn4140 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn4142 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4143 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4148 */
            Just_int (head );
          }) : ({ /* letn4153 */
            // ----------
            ;
            ({ /* progn4155 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* letn4164 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4166 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4167 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4172 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* letn4177 */
            // ----------
            ;
            ({ /* progn4179 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* letn4188 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4190 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4191 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4193 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4198 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* letn4207 */
            // ----------
            ;
            ({ /* progn4209 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* let4214 */
    List_int this  = (*this_ptr );
    // ----------
    { /* let4218 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4220 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4221 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block4228 */
            { /* block4230 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* let4238 */
            // ----------
            ;
            ({ /* letn4240 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block4246 */
                  { /* block4248 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_int_pointer (List_int ** this_ptr ) {
  if (this_ptr )
    { /* block4256 */
      free_List_int ((*this_ptr ));
    }
}
List_int__H_Table * const get_List_int__H_Table () {
  static List_int__H_Table table  = { free_List_int , toArray_List_int , toArrayFrom_List_int , wrap_List_int , pure_List_int , show_List_int , copy_List_int , replaceAt_List_int , deleteAt_List_int , insertAt_List_int , replace_List_int , delete_List_int , insert_List_int , reverse_List_int , reverseOnto_List_int , append_List_int , push_List_int , take_List_int , last_List_int , init_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nthcdr_List_int , nth_List_int };
  return (&table );
}
List_int Cons_int (int head , List_int tail ) {
  { /* let4266 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* let4272 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_int__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
__attribute__((weak)) void free_Maybe_List_int_pointer (Maybe_List_int ** this ) {
  if (this )
    { /* block4287 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let4297 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let4302 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
__attribute__((weak)) void free_Maybe_List_int_pointer (Maybe_List_int ** this ) {
  if (this )
    { /* block4318 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let4328 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let4333 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
List_int * toArray_List_List_int (List_List_int list ) {
  return toArrayFrom_List_List_int (list , 0);
}
List_int * toArrayFrom_List_List_int (List_List_int list , size_t count ) {
  return ({ /* letn4347 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4349 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4350 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4352 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4357 */
            ({ /* letn4359 */
              List_int * arr  = toArrayFrom_List_List_int (tail , (count  +  1 ));
              // ----------
              arr [count ] = head ;
              arr ;
            });
          }) : ({ /* letn4364 */
            // ----------
            ;
            ({ /* progn4366 */
              ((List_int *)calloc (count , sizeof(List_int)));
            });
          }));
      });
    });
}
List_List_int wrap_List_List_int (const List_int item ) {
  return Cons_List_int (item , Nil_List_int ());
}
List_List_int pure_List_List_int (const List_int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_List_int () : ({ /* letn4376 */
        List_int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_int () : Cons_List_int (item , pure_List_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_List_int (FILE * file , List_List_int list ) {
  return ({ /* letn4388 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4390 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4391 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4393 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4398 */
            (({ /* letn4404 */
                // ----------
                ;
                ({ /* letn4406 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4410 */
                      (show_List_int (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn4420 */
                      // ----------
                      ;
                      ({ /* progn4422 */
                        show_List_int (file , head );
                      });
                    }));
                });
              }) +  show_List_List_int (file , tail ) );
          }) : ({ /* letn4430 */
            // ----------
            ;
            ({ /* progn4432 */
              0;
            });
          }));
      });
    });
}
List_List_int copy_List_List_int (List_List_int list ) {
  return ({ /* letn4440 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4442 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4443 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4445 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4450 */
            Cons_List_int (head , copy_List_List_int (tail ));
          }) : ({ /* letn4456 */
            // ----------
            ;
            ({ /* progn4458 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* letn4467 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4469 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4470 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4472 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4477 */
            Cons_List_int (head , replaceAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn4483 */
            // ----------
            ;
            ({ /* progn4485 */
              ({ /* letn4491 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4493 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4494 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4499 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* letn4505 */
                      // ----------
                      ;
                      ({ /* progn4507 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int deleteAt_List_List_int (List_List_int list , size_t index ) {
  return ({ /* letn4516 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4518 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4519 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4521 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4526 */
            Cons_List_int (head , deleteAt_List_List_int (tail , (index  -  1 )));
          }) : ({ /* letn4532 */
            // ----------
            ;
            ({ /* progn4534 */
              ({ /* letn4540 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4542 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4543 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4548 */
                      copy_List_List_int (taill );
                    }) : ({ /* letn4553 */
                      // ----------
                      ;
                      ({ /* progn4555 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int insertAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* letn4564 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4566 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4567 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4569 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4574 */
            Cons_List_int (head , insertAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn4580 */
            // ----------
            ;
            ({ /* progn4582 */
              Cons_List_int (item , copy_List_List_int (list ));
            });
          }));
      });
    });
}
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed ) {
  return ({ /* letn4592 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4594 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4595 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4597 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4602 */
            Cons_List_int (head , replace_List_List_int (tail , item , aimed ));
          }) : ({ /* letn4608 */
            // ----------
            ;
            ({ /* progn4610 */
              ({ /* letn4616 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4618 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4619 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4624 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* letn4630 */
                      // ----------
                      ;
                      ({ /* progn4632 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int delete_List_List_int (List_List_int list , List_List_int aimed ) {
  return ({ /* letn4641 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4643 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4644 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4646 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4651 */
            Cons_List_int (head , delete_List_List_int (tail , aimed ));
          }) : ({ /* letn4657 */
            // ----------
            ;
            ({ /* progn4659 */
              ({ /* letn4665 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4667 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4668 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4673 */
                      copy_List_List_int (taill );
                    }) : ({ /* letn4678 */
                      // ----------
                      ;
                      ({ /* progn4680 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int insert_List_List_int (List_List_int llist , List_int item , List_List_int rlist ) {
  return ({ /* letn4689 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4691 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4692 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4694 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4699 */
            Cons_List_int (head , insert_List_List_int (tail , item , rlist ));
          }) : ({ /* letn4705 */
            // ----------
            ;
            ({ /* progn4707 */
              Cons_List_int (item , copy_List_List_int (rlist ));
            });
          }));
      });
    });
}
List_List_int reverse_List_List_int (List_List_int list ) {
  return ({ /* letn4717 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4719 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4720 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4722 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4727 */
            reverseOnto_List_List_int (tail , Cons_List_int (head , Nil_List_int ()));
          }) : ({ /* letn4734 */
            // ----------
            ;
            ({ /* progn4736 */
              list ;
            });
          }));
      });
    });
}
List_List_int reverseOnto_List_List_int (List_List_int list , List_List_int rlist ) {
  return ({ /* letn4744 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4746 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4747 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4749 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4754 */
            reverseOnto_List_List_int (tail , Cons_List_int (head , rlist ));
          }) : ({ /* letn4760 */
            // ----------
            ;
            ({ /* progn4762 */
              rlist ;
            });
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* letn4770 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4772 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4773 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4775 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4780 */
            Cons_List_int (head , append_List_List_int (tail , rlist ));
          }) : ({ /* letn4786 */
            // ----------
            ;
            ({ /* progn4788 */
              copy_List_List_int (rlist );
            });
          }));
      });
    });
}
List_List_int push_List_List_int (List_int item , List_List_int list ) {
  return Cons_List_int (item , copy_List_List_int (list ));
}
List_List_int take_List_List_int (size_t len , List_List_int list ) {
  return (((len  <=  0 )) ? Nil_List_int () : ({ /* letn4803 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4805 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4806 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4808 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4813 */
              Cons_List_int (head , take_List_List_int ((--len ), tail ));
            }) : ({ /* letn4819 */
              // ----------
              ;
              ({ /* progn4821 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* letn4830 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4832 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4833 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4838 */
            ({ /* letn4844 */
              // ----------
              ;
              ({ /* letn4846 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4850 */
                    copy_List_List_int (list );
                  }) : ({ /* letn4855 */
                    // ----------
                    ;
                    ({ /* progn4857 */
                      last_List_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn4862 */
            // ----------
            ;
            ({ /* progn4864 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int init_List_List_int (List_List_int list ) {
  return ({ /* letn4874 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4876 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4877 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4879 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4884 */
            Cons_List_int (head , init_List_List_int (tail ));
          }) : ({ /* letn4890 */
            // ----------
            ;
            ({ /* progn4892 */
              Nil_List_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_int (List_List_int list , size_t desired ) {
  return ({ /* letn4901 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4903 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4904 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4909 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_int (tail , (--desired )) ));
          }) : ({ /* letn4915 */
            // ----------
            ;
            ({ /* progn4917 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_int (List_List_int list ) {
  return ({ /* letn4925 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4927 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4928 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4933 */
            (1 +  len_List_List_int (tail ) );
          }) : ({ /* letn4938 */
            // ----------
            ;
            ({ /* progn4940 */
              0;
            });
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return drop_List_List_int (1, list );
}
List_List_int drop_List_List_int (size_t len , List_List_int list ) {
  return (((len  <=  0 )) ? copy_List_List_int (list ) : ({ /* letn4953 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4955 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4956 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4961 */
              drop_List_List_int ((--len ), tail );
            }) : ({ /* letn4966 */
              // ----------
              ;
              ({ /* progn4968 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return ({ /* letn4978 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn4980 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4981 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4986 */
            Just_List_int (head );
          }) : ({ /* letn4991 */
            // ----------
            ;
            ({ /* progn4993 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
List_List_int nthcdr_List_List_int (size_t index , List_List_int list ) {
  return ({ /* letn5002 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5004 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5005 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5010 */
            nthcdr_List_List_int ((--index ), tail );
          }) : ({ /* letn5015 */
            // ----------
            ;
            ({ /* progn5017 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (size_t index , List_List_int list ) {
  return ({ /* letn5026 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5028 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5029 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5031 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5036 */
            (((index  ==  0 )) ? Just_List_int (head ) : (((index  <  0 )) ? Nothing_List_int () : nth_List_List_int ((--index ), tail )));
          }) : ({ /* letn5045 */
            // ----------
            ;
            ({ /* progn5047 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* let5052 */
    List_List_int this  = (*this_ptr );
    // ----------
    { /* let5056 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5058 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn5059 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block5066 */
            { /* block5068 */
              free (this );
              free_List_List_int ((&tail ));
            }
          }
        else
          { /* let5076 */
            // ----------
            ;
            ({ /* letn5078 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block5084 */
                  { /* block5086 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_List_int_pointer (List_List_int ** this_ptr ) {
  if (this_ptr )
    { /* block5094 */
      free_List_List_int ((*this_ptr ));
    }
}
List_List_int__H_Table * const get_List_List_int__H_Table () {
  static List_List_int__H_Table table  = { free_List_List_int , toArray_List_List_int , toArrayFrom_List_List_int , wrap_List_List_int , pure_List_List_int , show_List_List_int , copy_List_List_int , replaceAt_List_List_int , deleteAt_List_List_int , insertAt_List_List_int , replace_List_List_int , delete_List_List_int , insert_List_List_int , reverse_List_List_int , reverseOnto_List_List_int , append_List_List_int , push_List_List_int , take_List_List_int , last_List_List_int , init_List_List_int , hasLen_List_List_int , len_List_List_int , tail_List_List_int , drop_List_List_int , head_List_List_int , nthcdr_List_List_int , nth_List_List_int };
  return (&table );
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* let5104 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int Nil_List_int () {
  { /* let5110 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_List_int__H_IMPL__
#define __Maybe_List_List_int__H_IMPL__
void free_Maybe_List_List_int (Maybe_List_List_int * this ) {
}
__attribute__((weak)) void free_Maybe_List_List_int_pointer (Maybe_List_List_int ** this ) {
  if (this )
    { /* block5125 */
      free_Maybe_List_List_int ((*this ));
    }
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table () {
  static const Maybe_List_List_int__H_Table table  = { free_Maybe_List_List_int };
  return (&table );
}
Maybe_List_List_int Just_List_List_int (List_List_int value ) {
  { /* let5135 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_int Nothing_List_List_int () {
  { /* let5140 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_int__H_IMPL__ */ 
#ifndef __folds_List_int__H_IMPL__
#define __folds_List_int__H_IMPL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* letn5156 */
      typeof((((foldable -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((foldable -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5158 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5159 */
                head  = (((foldable -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5161 */
                tail  = (((foldable -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5166 */
            foldr_List_int (folder , folder (neutral , head ), tail );
          }) : ({ /* letn5171 */
            // ----------
            ;
            ({ /* progn5173 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_List_int__H_IMPL__ */ 
#ifndef __Monoid_List_int__H_IMPL__
#define __Monoid_List_int__H_IMPL__
void free_Monoid_List_int (Monoid_List_int * this ) {
}
__attribute__((weak)) void free_Monoid_List_int_pointer (Monoid_List_int ** this ) {
  if (this )
    { /* block5186 */
      free_Monoid_List_int ((*this ));
    }
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  { /* let5196 */
    Monoid_List_int instance  = ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h_Monoid_t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_List_int__H_IMPL__ */ 
#ifndef __Semigroup_List_int__H_IMPL__
#define __Semigroup_List_int__H_IMPL__
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
__attribute__((weak)) void free_Semigroup_List_int_pointer (Semigroup_List_int ** this ) {
  if (this )
    { /* block5209 */
      free_Semigroup_List_int ((*this ));
    }
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  { /* let5219 */
    Semigroup_List_int instance  = ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h_Semigroup_t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_List_int__H_IMPL__ */ 
List_int mempty_List_int () {
  return Nil_int ();
}
List_int mappend_List_int (List_int lhs , List_int rhs ) {
  return append_List_int (lhs , rhs );
}
List_int mconcatStep_List_int (List_List_int rest , List_int acc ) {
  return ({ /* letn5234 */
      typeof((((rest -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((rest -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5236 */
        bool __h_case_result  = (true  &&  (((rest -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5237 */
                head  = (((rest -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5239 */
                tail  = (((rest -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5244 */
            ({ /* letn5246 */
              List_int next  = mappend_List_int (acc , head );
              // ----------
              free_List_int ((&acc ));
              mconcatStep_List_int (tail , next );
            });
          }) : ({ /* letn5254 */
            // ----------
            ;
            ({ /* progn5256 */
              acc ;
            });
          }));
      });
    });
}
List_int mconcat_List_int (List_List_int list ) {
  return mconcatStep_List_int (list , Nil_int ());
}
Monoid_List_int get_Monoid_List_int () {
  return Monoid_List_int_ctor (mappend_List_int , Nil_int (), mconcat_List_int );
}
Semigroup_List_int get_Semigroup_List_int () {
  return Semigroup_List_int_ctor (mappend_List_int );
}
#ifndef __Applicative_Ap_List_int_int__H_IMPL__
#define __Applicative_Ap_List_int_int__H_IMPL__
List_int ap_Applicative_Ap_List_int_int (List_int_to_int_t f_a_b , List_int input ) {
  return ({ /* letn5286 */
      typeof((((f_a_b -> __h_data). Cons). __h_0_mem)) a_b ;
      typeof((((f_a_b -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5288 */
        bool __h_case_result  = (true  &&  (((f_a_b -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5289 */
                a_b  = (((f_a_b -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5291 */
                tail  = (((f_a_b -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5296 */
            ({ /* letn5298 */
              List_int mapped  = fmap_Functor_Ap_List_int_int (a_b , input );
              List_int rest  = ap_Applicative_Ap_List_int_int (tail , input );
              List_List_int pair  = Cons_List_int (mapped , wrap_List_List_int (rest ));
              List_int result  = mconcat_List_int (pair );
              // ----------
              free_List_List_int ((&pair ));
              free_List_int ((&mapped ));
              free_List_int ((&rest ));
              result ;
            });
          }) : ({ /* letn5310 */
            // ----------
            ;
            ({ /* progn5312 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int_to_int_t pure_Applicative_Ap_List_int_int (int_to_int_t a_b ) {
  return wrap_List_int_to_int_t (a_b );
}
void free_Applicative_Ap_List_int_int (Applicative_Ap_List_int_int * this ) {
}
__attribute__((weak)) void free_Applicative_Ap_List_int_int_pointer (Applicative_Ap_List_int_int ** this ) {
  if (this )
    { /* block5330 */
      free_Applicative_Ap_List_int_int ((*this ));
    }
}
const Applicative_Ap_List_int_int__H_Table * const get_Applicative_Ap_List_int_int__H_Table () {
  static const Applicative_Ap_List_int_int__H_Table table  = { free_Applicative_Ap_List_int_int , ap_Applicative_Ap_List_int_int , pure_Applicative_Ap_List_int_int };
  return (&table );
}
Applicative_Ap_List_int_int Applicative_Ap_List_int_int_ctor () {
  { /* let5340 */
    Applicative_Ap_List_int_int instance  = ((Applicative_Ap_List_int_int){ get_Applicative_Ap_List_int_int__H_Table (), __h_Applicative_t });
    // ----------
    return instance ;
  }
}
#endif /* __Applicative_Ap_List_int_int__H_IMPL__ */ 
Applicative_Ap_List_int_int get_Applicative_Ap_List_int_int () {
  return Applicative_Ap_List_int_int_ctor ();
}
static int bad  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block5350 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block5353 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
int add100 (int v ) {
  return (100 +  v  );
}
int twice (int v ) {
  return (2 *  v  );
}
long sum_list (List_int l ) {
  return ({ /* letn5362 */
      typeof((((l -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((l -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5364 */
        bool __h_case_result  = (true  &&  (((l -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5365 */
                head  = (((l -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5367 */
                tail  = (((l -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5372 */
            (((long)head ) +  sum_list (tail ) );
          }) : ({ /* letn5376 */
            // ----------
            ;
            ({ /* progn5378 */
              0;
            });
          }));
      });
    });
}
int main () {
  ({ /* letn5384 */
    List_int l1  __attribute__((__cleanup__(free_List_int ))) = Cons_int (1, Cons_int (2, Cons_int (3, Cons_int (4, Nil_int ()))));
    // ----------
    bad  += check ("the list adds up before fmap", sum_list (l1 ), 10) ;
    ({ /* letn5395 */
      List_int l2  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (