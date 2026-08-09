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
  union { /* ciciliUnion333 */
    struct { /* ciciliStruct334 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct335 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list );
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
  union { /* ciciliUnion436 */
    struct { /* ciciliStruct437 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct438 */
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
    { /* block468 */
      free_Maybe_int ((*this ));
    }
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* let478 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* let483 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list ) {
  int * array (List_int list , size_t count ) {
    return ({ /* letn495 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn497 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn498 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn500 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn505 */
              ({ /* letn507 */
                int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn511 */
              // ----------
              ;
              ({ /* progn513 */
                ((int *)calloc (count , sizeof(int)));
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_int wrap_List_int (const int item ) {
  return Cons_int (item , Nil_int ());
}
List_int pure_List_int (const int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* letn524 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (FILE * file , List_int list ) {
  return ({ /* letn536 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn538 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn539 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn541 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn546 */
            (({ /* letn552 */
                // ----------
                ;
                ({ /* letn554 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn558 */
                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn567 */
                      // ----------
                      ;
                      ({ /* progn569 */
                        fprintf (file , "%d", head );
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* letn577 */
            // ----------
            ;
            ({ /* progn579 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* letn587 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn589 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn590 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn592 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn597 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* letn603 */
            // ----------
            ;
            ({ /* progn605 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn614 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn616 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn617 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn619 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn624 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn630 */
            // ----------
            ;
            ({ /* progn632 */
              ({ /* letn638 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn640 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn641 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn646 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn652 */
                      // ----------
                      ;
                      ({ /* progn654 */
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
  return ({ /* letn663 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn665 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn666 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn668 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn673 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* letn679 */
            // ----------
            ;
            ({ /* progn681 */
              ({ /* letn687 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn689 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn690 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn695 */
                      copy_List_int (taill );
                    }) : ({ /* letn700 */
                      // ----------
                      ;
                      ({ /* progn702 */
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
  return ({ /* letn711 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn713 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn714 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn716 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn721 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn727 */
            // ----------
            ;
            ({ /* progn729 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* letn739 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn741 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn742 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn744 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn749 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* letn755 */
            // ----------
            ;
            ({ /* progn757 */
              ({ /* letn763 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn765 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn766 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn771 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn777 */
                      // ----------
                      ;
                      ({ /* progn779 */
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
  return ({ /* letn788 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn790 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn791 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn793 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn798 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* letn804 */
            // ----------
            ;
            ({ /* progn806 */
              ({ /* letn812 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn814 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn815 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn820 */
                      copy_List_int (taill );
                    }) : ({ /* letn825 */
                      // ----------
                      ;
                      ({ /* progn827 */
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
  return ({ /* letn836 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn838 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn839 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn841 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn846 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* letn852 */
            // ----------
            ;
            ({ /* progn854 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  List_int _reverse (List_int list , List_int rlist ) {
    return ({ /* letn865 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn867 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn868 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn870 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn875 */
              _reverse (tail , Cons_int (head , rlist ));
            }) : ({ /* letn880 */
              // ----------
              ;
              ({ /* progn882 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn888 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn890 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn891 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn893 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn898 */
            _reverse (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* letn904 */
            // ----------
            ;
            ({ /* progn906 */
              list ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* letn914 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn916 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn917 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn919 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn924 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* letn930 */
            // ----------
            ;
            ({ /* progn932 */
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
  return (((len  <=  0 )) ? Nil_int () : ({ /* letn947 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn949 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn950 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn952 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn957 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* letn963 */
              // ----------
              ;
              ({ /* progn965 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* letn974 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn976 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn977 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn982 */
            ({ /* letn988 */
              // ----------
              ;
              ({ /* letn990 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn994 */
                    copy_List_int (list );
                  }) : ({ /* letn999 */
                    // ----------
                    ;
                    ({ /* progn1001 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn1006 */
            // ----------
            ;
            ({ /* progn1008 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* letn1018 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1020 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn1021 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn1023 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1028 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* letn1034 */
            // ----------
            ;
            ({ /* progn1036 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* letn1045 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1047 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1048 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1053 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* letn1059 */
            // ----------
            ;
            ({ /* progn1061 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* letn1069 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1071 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1072 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1077 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* letn1082 */
            // ----------
            ;
            ({ /* progn1084 */
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
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* letn1097 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn1099 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1100 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1105 */
              drop_List_int ((--len ), tail );
            }) : ({ /* letn1110 */
              // ----------
              ;
              ({ /* progn1112 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* letn1122 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn1124 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1125 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1130 */
            Just_int (head );
          }) : ({ /* letn1135 */
            // ----------
            ;
            ({ /* progn1137 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* letn1146 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1148 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1149 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1154 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* letn1159 */
            // ----------
            ;
            ({ /* progn1161 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* letn1170 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1172 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1173 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1175 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1180 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* letn1189 */
            // ----------
            ;
            ({ /* progn1191 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* let1196 */
    List_int this  = (*this_ptr );
    // ----------
    { /* let1200 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1202 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1203 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1210 */
            { /* block1212 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* let1220 */
            // ----------
            ;
            ({ /* letn1222 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block1228 */
                  { /* block1230 */
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
    { /* block1239 */
      free_List_int ((*this_ptr ));
    }
}
List_int__H_Table * const get_List_int__H_Table () {
  static List_int__H_Table table  = { free_List_int , toArray_List_int , wrap_List_int , pure_List_int , show_List_int , copy_List_int , replaceAt_List_int , deleteAt_List_int , insertAt_List_int , replace_List_int , delete_List_int , insert_List_int , reverse_List_int , append_List_int , push_List_int , take_List_int , last_List_int , init_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nthcdr_List_int , nth_List_int };
  return (&table );
}
List_int Cons_int (int head , List_int tail ) {
  { /* let1249 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* let1255 */
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
    { /* block1270 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let1280 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let1285 */
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
  union { /* ciciliUnion1310 */
    struct { /* ciciliStruct1311 */
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
  return ({ /* letn1347 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1349 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1350 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1352 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1357 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* letn1364 */
            // ----------
            ;
            ({ /* progn1366 */
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
    { /* block1376 */
      free_Functor_List_int_int ((*this ));
    }
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  { /* let1386 */
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
  union { /* ciciliUnion1419 */
    struct { /* ciciliStruct1420 */
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
  return ({ /* letn1470 */
      typeof((((input . __h_data). Just). __h_0_mem)) value ;
      // ----------
      ;
      ({ /* letn1472 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1473 */
              value  = (((input . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1478 */
            a_mb (value );
          }) : ({ /* letn1482 */
            // ----------
            ;
            ({ /* progn1484 */
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
    { /* block1494 */
      free_Monad_Maybe_int_int ((*this ));
    }
}
const Monad_Maybe_int_int__H_Table * const get_Monad_Maybe_int_int__H_Table () {
  static const Monad_Maybe_int_int__H_Table table  = { free_Monad_Maybe_int_int , returnB_Monad_Maybe_int_int , returnA_Monad_Maybe_int_int , bind_Monad_Maybe_int_int };
  return (&table );
}
Monad_Maybe_int_int Monad_Maybe_int_int_ctor () {
  { /* let1504 */
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
  union { /* ciciliUnion1535 */
    struct { /* ciciliStruct1536 */
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
  union { /* ciciliUnion1569 */
    struct { /* ciciliStruct1570 */
      int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1571 */
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
  union { /* ciciliUnion1607 */
    struct { /* ciciliStruct1608 */
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
  return ({ /* letn1650 */
      typeof((((input . __h_data). Just). __h_0_mem)) val ;
      // ----------
      ;
      ({ /* letn1652 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1653 */
              val  = (((input . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1658 */
            Just_int (a_b (val ));
          }) : ({ /* letn1668 */
            // ----------
            ;
            ({ /* progn1670 */
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
    { /* block1680 */
      free_Functor_Ap_Maybe_int_int ((*this ));
    }
}
const Functor_Ap_Maybe_int_int__H_Table * const get_Functor_Ap_Maybe_int_int__H_Table () {
  static const Functor_Ap_Maybe_int_int__H_Table table  = { free_Functor_Ap_Maybe_int_int , fmap_Functor_Ap_Maybe_int_int };
  return (&table );
}
Functor_Ap_Maybe_int_int Functor_Ap_Maybe_int_int_ctor () {
  { /* let1690 */
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
    { /* block1708 */
      free_Maybe_int_to_int_t ((*this ));
    }
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table () {
  static const Maybe_int_to_int_t__H_Table table  = { free_Maybe_int_to_int_t };
  return (&table );
}
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  { /* let1718 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  { /* let1723 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __Applicative_Ap_Maybe_int_int__H_IMPL__
#define __Applicative_Ap_Maybe_int_int__H_IMPL__
Maybe_int ap_Applicative_Ap_Maybe_int_int (Maybe_int_to_int_t f_a_b , Maybe_int input ) {
  return ({ /* letn1739 */
      typeof((((f_a_b . __h_data). Just). __h_0_mem)) a_b ;
      // ----------
      ;
      ({ /* letn1741 */
        bool __h_case_result  = (true  &&  (((f_a_b . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1742 */
              a_b  = (((f_a_b . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1747 */
            fmap_Functor_Ap_Maybe_int_int (a_b , input );
          }) : ({ /* letn1752 */
            // ----------
            ;
            ({ /* progn1754 */
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
    { /* block1768 */
      free_Applicative_Ap_Maybe_int_int ((*this ));
    }
}
const Applicative_Ap_Maybe_int_int__H_Table * const get_Applicative_Ap_Maybe_int_int__H_Table () {
  static const Applicative_Ap_Maybe_int_int__H_Table table  = { free_Applicative_Ap_Maybe_int_int , ap_Applicative_Ap_Maybe_int_int , pure_Applicative_Ap_Maybe_int_int };
  return (&table );
}
Applicative_Ap_Maybe_int_int Applicative_Ap_Maybe_int_int_ctor () {
  { /* let1778 */
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
  union { /* ciciliUnion1809 */
    struct { /* ciciliStruct1810 */
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
  union { /* ciciliUnion1845 */
    struct { /* ciciliStruct1846 */
      int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1847 */
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
  union { /* ciciliUnion1900 */
    struct { /* ciciliStruct1901 */
      int_to_int_t __h_0_mem ;
      List_int_to_int_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1902 */
    } Nil , _ ;
  } __h_data ;
} class_List_int_to_int_t;
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail );
List_int_to_int_t Nil_int_to_int_t ();
__attribute__((weak)) List_int_to_int_t Default_List_int_to_int_t () {
  return Nil_int_to_int_t ();
}
int_to_int_t * toArray_List_int_to_int_t (List_int_to_int_t list );
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
  union { /* ciciliUnion2003 */
    struct { /* ciciliStruct2004 */
      List_int_to_int_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2005 */
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
  union { /* ciciliUnion2036 */
    struct { /* ciciliStruct2037 */
      int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2038 */
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
  union { /* ciciliUnion2091 */
    struct { /* ciciliStruct2092 */
      int __h_0_mem ;
      List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2093 */
    } Nil , _ ;
  } __h_data ;
} class_List_int;
List_int Cons_int (int head , List_int tail );
List_int Nil_int ();
__attribute__((weak)) List_int Default_List_int () {
  return Nil_int ();
}
int * toArray_List_int (List_int list );
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
  union { /* ciciliUnion2194 */
    struct { /* ciciliStruct2195 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2196 */
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
  union { /* ciciliUnion2227 */
    struct { /* ciciliStruct2228 */
      List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2229 */
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
  union { /* ciciliUnion2282 */
    struct { /* ciciliStruct2283 */
      List_int __h_0_mem ;
      List_List_int __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct2284 */
    } Nil , _ ;
  } __h_data ;
} class_List_List_int;
List_List_int Cons_List_int (List_int head , List_List_int tail );
List_List_int Nil_List_int ();
__attribute__((weak)) List_List_int Default_List_List_int () {
  return Nil_List_int ();
}
List_int * toArray_List_List_int (List_List_int list );
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
  union { /* ciciliUnion2385 */
    struct { /* ciciliStruct2386 */
      List_List_int __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct2387 */
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
  union { /* ciciliUnion2432 */
    struct { /* ciciliStruct2433 */
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
  union { /* ciciliUnion2458 */
    struct { /* ciciliStruct2459 */
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
  union { /* ciciliUnion2505 */
    struct { /* ciciliStruct2506 */
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
  return ({ /* letn2548 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2550 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2551 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2553 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2558 */
            Cons_int (a_b (head ), fmap_Functor_Ap_List_int_int (a_b , tail ));
          }) : ({ /* letn2564 */
            // ----------
            ;
            ({ /* progn2566 */
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
    { /* block2576 */
      free_Functor_Ap_List_int_int ((*this ));
    }
}
const Functor_Ap_List_int_int__H_Table * const get_Functor_Ap_List_int_int__H_Table () {
  static const Functor_Ap_List_int_int__H_Table table  = { free_Functor_Ap_List_int_int , fmap_Functor_Ap_List_int_int };
  return (&table );
}
Functor_Ap_List_int_int Functor_Ap_List_int_int_ctor () {
  { /* let2586 */
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
    { /* block2606 */
      free_Maybe_int_to_int_t ((*this ));
    }
}
const Maybe_int_to_int_t__H_Table * const get_Maybe_int_to_int_t__H_Table () {
  static const Maybe_int_to_int_t__H_Table table  = { free_Maybe_int_to_int_t };
  return (&table );
}
Maybe_int_to_int_t Just_int_to_int_t (int_to_int_t value ) {
  { /* let2616 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int_to_int_t Nothing_int_to_int_t () {
  { /* let2621 */
    Maybe_int_to_int_t instance  = ((Maybe_int_to_int_t){ get_Maybe_int_to_int_t__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int_to_int_t__H_IMPL__ */ 
#ifndef __List_int_to_int_t__H_IMPL__
#define __List_int_to_int_t__H_IMPL__
int_to_int_t * toArray_List_int_to_int_t (List_int_to_int_t list ) {
  int_to_int_t * array (List_int_to_int_t list , size_t count ) {
    return ({ /* letn2633 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn2635 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2636 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2638 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn2643 */
              ({ /* letn2645 */
                int_to_int_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn2649 */
              // ----------
              ;
              ({ /* progn2651 */
                ((int_to_int_t *)calloc (count , sizeof(int_to_int_t)));
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_int_to_int_t wrap_List_int_to_int_t (const int_to_int_t item ) {
  return Cons_int_to_int_t (item , Nil_int_to_int_t ());
}
List_int_to_int_t pure_List_int_to_int_t (const int_to_int_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int_to_int_t () : ({ /* letn2661 */
        int_to_int_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int_to_int_t () : Cons_int_to_int_t (item , pure_List_int_to_int_t ((++buf ), (--len ))));
      }));
}
size_t show_List_int_to_int_t (FILE * file , List_int_to_int_t list ) {
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
            (({ /* letn2689 */
                // ----------
                ;
                ({ /* letn2691 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2695 */
                      (fprintf (file , "%p", ((void *)head )) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn2704 */
                      // ----------
                      ;
                      ({ /* progn2706 */
                        fprintf (file , "%p", ((void *)head ));
                      });
                    }));
                });
              }) +  show_List_int_to_int_t (file , tail ) );
          }) : ({ /* letn2714 */
            // ----------
            ;
            ({ /* progn2716 */
              0;
            });
          }));
      });
    });
}
List_int_to_int_t copy_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn2724 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2726 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn2727 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn2729 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2734 */
            Cons_int_to_int_t (head , copy_List_int_to_int_t (tail ));
          }) : ({ /* letn2740 */
            // ----------
            ;
            ({ /* progn2742 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t replaceAt_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , size_t index ) {
  return ({ /* letn2751 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2753 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2754 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2756 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2761 */
            Cons_int_to_int_t (head , replaceAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* letn2767 */
            // ----------
            ;
            ({ /* progn2769 */
              ({ /* letn2775 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2777 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2778 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2783 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (taill ));
                    }) : ({ /* letn2789 */
                      // ----------
                      ;
                      ({ /* progn2791 */
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
  return ({ /* letn2800 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2802 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2803 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2805 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2810 */
            Cons_int_to_int_t (head , deleteAt_List_int_to_int_t (tail , (index  -  1 )));
          }) : ({ /* letn2816 */
            // ----------
            ;
            ({ /* progn2818 */
              ({ /* letn2824 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2826 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2827 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2832 */
                      copy_List_int_to_int_t (taill );
                    }) : ({ /* letn2837 */
                      // ----------
                      ;
                      ({ /* progn2839 */
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
  return ({ /* letn2848 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2850 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2851 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2853 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2858 */
            Cons_int_to_int_t (head , insertAt_List_int_to_int_t (tail , item , (index  -  1 )));
          }) : ({ /* letn2864 */
            // ----------
            ;
            ({ /* progn2866 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (list ));
            });
          }));
      });
    });
}
List_int_to_int_t replace_List_int_to_int_t (List_int_to_int_t list , int_to_int_t item , List_int_to_int_t aimed ) {
  return ({ /* letn2876 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2878 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2879 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2881 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2886 */
            Cons_int_to_int_t (head , replace_List_int_to_int_t (tail , item , aimed ));
          }) : ({ /* letn2892 */
            // ----------
            ;
            ({ /* progn2894 */
              ({ /* letn2900 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2902 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2903 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2908 */
                      Cons_int_to_int_t (item , copy_List_int_to_int_t (taill ));
                    }) : ({ /* letn2914 */
                      // ----------
                      ;
                      ({ /* progn2916 */
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
  return ({ /* letn2925 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2927 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2928 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2930 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2935 */
            Cons_int_to_int_t (head , delete_List_int_to_int_t (tail , aimed ));
          }) : ({ /* letn2941 */
            // ----------
            ;
            ({ /* progn2943 */
              ({ /* letn2949 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn2951 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn2952 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn2957 */
                      copy_List_int_to_int_t (taill );
                    }) : ({ /* letn2962 */
                      // ----------
                      ;
                      ({ /* progn2964 */
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
  return ({ /* letn2973 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn2975 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn2976 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn2978 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn2983 */
            Cons_int_to_int_t (head , insert_List_int_to_int_t (tail , item , rlist ));
          }) : ({ /* letn2989 */
            // ----------
            ;
            ({ /* progn2991 */
              Cons_int_to_int_t (item , copy_List_int_to_int_t (rlist ));
            });
          }));
      });
    });
}
List_int_to_int_t reverse_List_int_to_int_t (List_int_to_int_t list ) {
  List_int_to_int_t _reverse (List_int_to_int_t list , List_int_to_int_t rlist ) {
    return ({ /* letn3002 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3004 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3005 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3007 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3012 */
              _reverse (tail , Cons_int_to_int_t (head , rlist ));
            }) : ({ /* letn3017 */
              // ----------
              ;
              ({ /* progn3019 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn3025 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3027 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3028 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3030 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3035 */
            _reverse (tail , Cons_int_to_int_t (head , Nil_int_to_int_t ()));
          }) : ({ /* letn3041 */
            // ----------
            ;
            ({ /* progn3043 */
              list ;
            });
          }));
      });
    });
}
List_int_to_int_t append_List_int_to_int_t (List_int_to_int_t llist , List_int_to_int_t rlist ) {
  return ({ /* letn3051 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3053 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3054 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3056 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3061 */
            Cons_int_to_int_t (head , append_List_int_to_int_t (tail , rlist ));
          }) : ({ /* letn3067 */
            // ----------
            ;
            ({ /* progn3069 */
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
  return (((len  <=  0 )) ? Nil_int_to_int_t () : ({ /* letn3084 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3086 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3087 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3089 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3094 */
              Cons_int_to_int_t (head , take_List_int_to_int_t ((--len ), tail ));
            }) : ({ /* letn3100 */
              // ----------
              ;
              ({ /* progn3102 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
List_int_to_int_t last_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3111 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3113 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3114 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3119 */
            ({ /* letn3125 */
              // ----------
              ;
              ({ /* letn3127 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3131 */
                    copy_List_int_to_int_t (list );
                  }) : ({ /* letn3136 */
                    // ----------
                    ;
                    ({ /* progn3138 */
                      last_List_int_to_int_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3143 */
            // ----------
            ;
            ({ /* progn3145 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t init_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3155 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3157 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3158 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3160 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3165 */
            Cons_int_to_int_t (head , init_List_int_to_int_t (tail ));
          }) : ({ /* letn3171 */
            // ----------
            ;
            ({ /* progn3173 */
              Nil_int_to_int_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_int_to_int_t (List_int_to_int_t list , size_t desired ) {
  return ({ /* letn3182 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3184 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3185 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3190 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int_to_int_t (tail , (--desired )) ));
          }) : ({ /* letn3196 */
            // ----------
            ;
            ({ /* progn3198 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3206 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3208 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3209 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3214 */
            (1 +  len_List_int_to_int_t (tail ) );
          }) : ({ /* letn3219 */
            // ----------
            ;
            ({ /* progn3221 */
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
  return (((len  <=  0 )) ? copy_List_int_to_int_t (list ) : ({ /* letn3234 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3236 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3237 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3242 */
              drop_List_int_to_int_t ((--len ), tail );
            }) : ({ /* letn3247 */
              // ----------
              ;
              ({ /* progn3249 */
                Nil_int_to_int_t ();
              });
            }));
        });
      }));
}
Maybe_int_to_int_t head_List_int_to_int_t (List_int_to_int_t list ) {
  return ({ /* letn3259 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn3261 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3262 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3267 */
            Just_int_to_int_t (head );
          }) : ({ /* letn3272 */
            // ----------
            ;
            ({ /* progn3274 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
List_int_to_int_t nthcdr_List_int_to_int_t (size_t index , List_int_to_int_t list ) {
  return ({ /* letn3283 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3285 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3286 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3291 */
            nthcdr_List_int_to_int_t ((--index ), tail );
          }) : ({ /* letn3296 */
            // ----------
            ;
            ({ /* progn3298 */
              list ;
            });
          }));
      });
    });
}
Maybe_int_to_int_t nth_List_int_to_int_t (size_t index , List_int_to_int_t list ) {
  return ({ /* letn3307 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3309 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3310 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3312 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3317 */
            (((index  ==  0 )) ? Just_int_to_int_t (head ) : (((index  <  0 )) ? Nothing_int_to_int_t () : nth_List_int_to_int_t ((--index ), tail )));
          }) : ({ /* letn3326 */
            // ----------
            ;
            ({ /* progn3328 */
              Nothing_int_to_int_t ();
            });
          }));
      });
    });
}
void free_List_int_to_int_t (List_int_to_int_t * this_ptr ) {
  { /* let3333 */
    List_int_to_int_t this  = (*this_ptr );
    // ----------
    { /* let3337 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3339 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3340 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block3347 */
            { /* block3349 */
              free (this );
              free_List_int_to_int_t ((&tail ));
            }
          }
        else
          { /* let3357 */
            // ----------
            ;
            ({ /* letn3359 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block3365 */
                  { /* block3367 */
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
    { /* block3375 */
      free_List_int_to_int_t ((*this_ptr ));
    }
}
List_int_to_int_t__H_Table * const get_List_int_to_int_t__H_Table () {
  static List_int_to_int_t__H_Table table  = { free_List_int_to_int_t , toArray_List_int_to_int_t , wrap_List_int_to_int_t , pure_List_int_to_int_t , show_List_int_to_int_t , copy_List_int_to_int_t , replaceAt_List_int_to_int_t , deleteAt_List_int_to_int_t , insertAt_List_int_to_int_t , replace_List_int_to_int_t , delete_List_int_to_int_t , insert_List_int_to_int_t , reverse_List_int_to_int_t , append_List_int_to_int_t , push_List_int_to_int_t , take_List_int_to_int_t , last_List_int_to_int_t , init_List_int_to_int_t , hasLen_List_int_to_int_t , len_List_int_to_int_t , tail_List_int_to_int_t , drop_List_int_to_int_t , head_List_int_to_int_t , nthcdr_List_int_to_int_t , nth_List_int_to_int_t };
  return (&table );
}
List_int_to_int_t Cons_int_to_int_t (int_to_int_t head , List_int_to_int_t tail ) {
  { /* let3385 */
    List_int_to_int_t instance  = malloc (sizeof(class_List_int_to_int_t));
    // ----------
    (*instance ) = ((class_List_int_to_int_t){ get_List_int_to_int_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int_to_int_t Nil_int_to_int_t () {
  { /* let3391 */
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
    { /* block3406 */
      free_Maybe_List_int_to_int_t ((*this ));
    }
}
const Maybe_List_int_to_int_t__H_Table * const get_Maybe_List_int_to_int_t__H_Table () {
  static const Maybe_List_int_to_int_t__H_Table table  = { free_Maybe_List_int_to_int_t };
  return (&table );
}
Maybe_List_int_to_int_t Just_List_int_to_int_t (List_int_to_int_t value ) {
  { /* let3416 */
    Maybe_List_int_to_int_t instance  = ((Maybe_List_int_to_int_t){ get_Maybe_List_int_to_int_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int_to_int_t Nothing_List_int_to_int_t () {
  { /* let3421 */
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
    { /* block3437 */
      free_Maybe_int ((*this ));
    }
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* let3447 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* let3452 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list ) {
  int * array (List_int list , size_t count ) {
    return ({ /* letn3464 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3466 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3467 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3469 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3474 */
              ({ /* letn3476 */
                int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn3480 */
              // ----------
              ;
              ({ /* progn3482 */
                ((int *)calloc (count , sizeof(int)));
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_int wrap_List_int (const int item ) {
  return Cons_int (item , Nil_int ());
}
List_int pure_List_int (const int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* letn3492 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (FILE * file , List_int list ) {
  return ({ /* letn3504 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3506 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3507 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3509 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3514 */
            (({ /* letn3520 */
                // ----------
                ;
                ({ /* letn3522 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3526 */
                      (0 +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn3535 */
                      // ----------
                      ;
                      ({ /* progn3537 */
                        0;
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* letn3545 */
            // ----------
            ;
            ({ /* progn3547 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* letn3555 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3557 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3558 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3560 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3565 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* letn3571 */
            // ----------
            ;
            ({ /* progn3573 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* letn3582 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3584 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3585 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3587 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3592 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn3598 */
            // ----------
            ;
            ({ /* progn3600 */
              ({ /* letn3606 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3608 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3609 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3614 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn3620 */
                      // ----------
                      ;
                      ({ /* progn3622 */
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
  return ({ /* letn3631 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3633 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3634 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3636 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3641 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* letn3647 */
            // ----------
            ;
            ({ /* progn3649 */
              ({ /* letn3655 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3657 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3658 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3663 */
                      copy_List_int (taill );
                    }) : ({ /* letn3668 */
                      // ----------
                      ;
                      ({ /* progn3670 */
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
  return ({ /* letn3679 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3681 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3682 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3684 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3689 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn3695 */
            // ----------
            ;
            ({ /* progn3697 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* letn3707 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3709 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3710 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3712 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3717 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* letn3723 */
            // ----------
            ;
            ({ /* progn3725 */
              ({ /* letn3731 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3733 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3734 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3739 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* letn3745 */
                      // ----------
                      ;
                      ({ /* progn3747 */
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
  return ({ /* letn3756 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3758 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3759 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3761 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3766 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* letn3772 */
            // ----------
            ;
            ({ /* progn3774 */
              ({ /* letn3780 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn3782 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3783 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn3788 */
                      copy_List_int (taill );
                    }) : ({ /* letn3793 */
                      // ----------
                      ;
                      ({ /* progn3795 */
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
  return ({ /* letn3804 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3806 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3807 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3809 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3814 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* letn3820 */
            // ----------
            ;
            ({ /* progn3822 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  List_int _reverse (List_int list , List_int rlist ) {
    return ({ /* letn3833 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3835 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3836 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3838 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3843 */
              _reverse (tail , Cons_int (head , rlist ));
            }) : ({ /* letn3848 */
              // ----------
              ;
              ({ /* progn3850 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn3856 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3858 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3859 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3861 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3866 */
            _reverse (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* letn3872 */
            // ----------
            ;
            ({ /* progn3874 */
              list ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* letn3882 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3884 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3885 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn3887 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3892 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* letn3898 */
            // ----------
            ;
            ({ /* progn3900 */
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
  return (((len  <=  0 )) ? Nil_int () : ({ /* letn3915 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn3917 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn3918 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3920 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn3925 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* letn3931 */
              // ----------
              ;
              ({ /* progn3933 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* letn3942 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3944 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn3945 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3950 */
            ({ /* letn3956 */
              // ----------
              ;
              ({ /* letn3958 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn3962 */
                    copy_List_int (list );
                  }) : ({ /* letn3967 */
                    // ----------
                    ;
                    ({ /* progn3969 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn3974 */
            // ----------
            ;
            ({ /* progn3976 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* letn3986 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn3988 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn3989 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn3991 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn3996 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* letn4002 */
            // ----------
            ;
            ({ /* progn4004 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* letn4013 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4015 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4016 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4021 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* letn4027 */
            // ----------
            ;
            ({ /* progn4029 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* letn4037 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4039 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4040 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4045 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* letn4050 */
            // ----------
            ;
            ({ /* progn4052 */
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
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* letn4065 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4067 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4068 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4073 */
              drop_List_int ((--len ), tail );
            }) : ({ /* letn4078 */
              // ----------
              ;
              ({ /* progn4080 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* letn4090 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn4092 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4093 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4098 */
            Just_int (head );
          }) : ({ /* letn4103 */
            // ----------
            ;
            ({ /* progn4105 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* letn4114 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4116 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4117 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4122 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* letn4127 */
            // ----------
            ;
            ({ /* progn4129 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* letn4138 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4140 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4141 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4143 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4148 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* letn4157 */
            // ----------
            ;
            ({ /* progn4159 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* let4164 */
    List_int this  = (*this_ptr );
    // ----------
    { /* let4168 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4170 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4171 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block4178 */
            { /* block4180 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* let4188 */
            // ----------
            ;
            ({ /* letn4190 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block4196 */
                  { /* block4198 */
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
    { /* block4206 */
      free_List_int ((*this_ptr ));
    }
}
List_int__H_Table * const get_List_int__H_Table () {
  static List_int__H_Table table  = { free_List_int , toArray_List_int , wrap_List_int , pure_List_int , show_List_int , copy_List_int , replaceAt_List_int , deleteAt_List_int , insertAt_List_int , replace_List_int , delete_List_int , insert_List_int , reverse_List_int , append_List_int , push_List_int , take_List_int , last_List_int , init_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nthcdr_List_int , nth_List_int };
  return (&table );
}
List_int Cons_int (int head , List_int tail ) {
  { /* let4216 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* let4222 */
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
    { /* block4237 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let4247 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let4252 */
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
    { /* block4268 */
      free_Maybe_List_int ((*this ));
    }
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* let4278 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* let4283 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
List_int * toArray_List_List_int (List_List_int list ) {
  List_int * array (List_List_int list , size_t count ) {
    return ({ /* letn4295 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4297 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4298 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4300 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4305 */
              ({ /* letn4307 */
                List_int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn4311 */
              // ----------
              ;
              ({ /* progn4313 */
                ((List_int *)calloc (count , sizeof(List_int)));
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_List_int wrap_List_List_int (const List_int item ) {
  return Cons_List_int (item , Nil_List_int ());
}
List_List_int pure_List_List_int (const List_int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_List_int () : ({ /* letn4323 */
        List_int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_int () : Cons_List_int (item , pure_List_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_List_int (FILE * file , List_List_int list ) {
  return ({ /* letn4335 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4337 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4338 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4340 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4345 */
            (({ /* letn4351 */
                // ----------
                ;
                ({ /* letn4353 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4357 */
                      (show_List_int (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* letn4367 */
                      // ----------
                      ;
                      ({ /* progn4369 */
                        show_List_int (file , head );
                      });
                    }));
                });
              }) +  show_List_List_int (file , tail ) );
          }) : ({ /* letn4377 */
            // ----------
            ;
            ({ /* progn4379 */
              0;
            });
          }));
      });
    });
}
List_List_int copy_List_List_int (List_List_int list ) {
  return ({ /* letn4387 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4389 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4390 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4392 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4397 */
            Cons_List_int (head , copy_List_List_int (tail ));
          }) : ({ /* letn4403 */
            // ----------
            ;
            ({ /* progn4405 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* letn4414 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4416 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4417 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4419 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4424 */
            Cons_List_int (head , replaceAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn4430 */
            // ----------
            ;
            ({ /* progn4432 */
              ({ /* letn4438 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4440 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4441 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4446 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* letn4452 */
                      // ----------
                      ;
                      ({ /* progn4454 */
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
  return ({ /* letn4463 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4465 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4466 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4468 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4473 */
            Cons_List_int (head , deleteAt_List_List_int (tail , (index  -  1 )));
          }) : ({ /* letn4479 */
            // ----------
            ;
            ({ /* progn4481 */
              ({ /* letn4487 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4489 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4490 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4495 */
                      copy_List_List_int (taill );
                    }) : ({ /* letn4500 */
                      // ----------
                      ;
                      ({ /* progn4502 */
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
  return ({ /* letn4511 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4513 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4514 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4516 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4521 */
            Cons_List_int (head , insertAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* letn4527 */
            // ----------
            ;
            ({ /* progn4529 */
              Cons_List_int (item , copy_List_List_int (list ));
            });
          }));
      });
    });
}
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed ) {
  return ({ /* letn4539 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4541 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4542 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4544 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4549 */
            Cons_List_int (head , replace_List_List_int (tail , item , aimed ));
          }) : ({ /* letn4555 */
            // ----------
            ;
            ({ /* progn4557 */
              ({ /* letn4563 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4565 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4566 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4571 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* letn4577 */
                      // ----------
                      ;
                      ({ /* progn4579 */
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
  return ({ /* letn4588 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4590 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4591 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4593 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4598 */
            Cons_List_int (head , delete_List_List_int (tail , aimed ));
          }) : ({ /* letn4604 */
            // ----------
            ;
            ({ /* progn4606 */
              ({ /* letn4612 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn4614 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4615 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn4620 */
                      copy_List_List_int (taill );
                    }) : ({ /* letn4625 */
                      // ----------
                      ;
                      ({ /* progn4627 */
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
  return ({ /* letn4636 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4638 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4639 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4641 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4646 */
            Cons_List_int (head , insert_List_List_int (tail , item , rlist ));
          }) : ({ /* letn4652 */
            // ----------
            ;
            ({ /* progn4654 */
              Cons_List_int (item , copy_List_List_int (rlist ));
            });
          }));
      });
    });
}
List_List_int reverse_List_List_int (List_List_int list ) {
  List_List_int _reverse (List_List_int list , List_List_int rlist ) {
    return ({ /* letn4665 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4667 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4668 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4670 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4675 */
              _reverse (tail , Cons_List_int (head , rlist ));
            }) : ({ /* letn4680 */
              // ----------
              ;
              ({ /* progn4682 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn4688 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4690 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4691 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4693 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4698 */
            _reverse (tail , Cons_List_int (head , Nil_List_int ()));
          }) : ({ /* letn4704 */
            // ----------
            ;
            ({ /* progn4706 */
              list ;
            });
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* letn4714 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4716 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4717 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4719 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4724 */
            Cons_List_int (head , append_List_List_int (tail , rlist ));
          }) : ({ /* letn4730 */
            // ----------
            ;
            ({ /* progn4732 */
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
  return (((len  <=  0 )) ? Nil_List_int () : ({ /* letn4747 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4749 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4750 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4752 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4757 */
              Cons_List_int (head , take_List_List_int ((--len ), tail ));
            }) : ({ /* letn4763 */
              // ----------
              ;
              ({ /* progn4765 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* letn4774 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4776 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4777 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4782 */
            ({ /* letn4788 */
              // ----------
              ;
              ({ /* letn4790 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn4794 */
                    copy_List_List_int (list );
                  }) : ({ /* letn4799 */
                    // ----------
                    ;
                    ({ /* progn4801 */
                      last_List_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn4806 */
            // ----------
            ;
            ({ /* progn4808 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int init_List_List_int (List_List_int list ) {
  return ({ /* letn4818 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4820 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn4821 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn4823 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4828 */
            Cons_List_int (head , init_List_List_int (tail ));
          }) : ({ /* letn4834 */
            // ----------
            ;
            ({ /* progn4836 */
              Nil_List_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_int (List_List_int list , size_t desired ) {
  return ({ /* letn4845 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4847 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4848 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4853 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_int (tail , (--desired )) ));
          }) : ({ /* letn4859 */
            // ----------
            ;
            ({ /* progn4861 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_int (List_List_int list ) {
  return ({ /* letn4869 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4871 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4872 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4877 */
            (1 +  len_List_List_int (tail ) );
          }) : ({ /* letn4882 */
            // ----------
            ;
            ({ /* progn4884 */
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
  return (((len  <=  0 )) ? copy_List_List_int (list ) : ({ /* letn4897 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn4899 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4900 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn4905 */
              drop_List_List_int ((--len ), tail );
            }) : ({ /* letn4910 */
              // ----------
              ;
              ({ /* progn4912 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return ({ /* letn4922 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn4924 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn4925 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4930 */
            Just_List_int (head );
          }) : ({ /* letn4935 */
            // ----------
            ;
            ({ /* progn4937 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
List_List_int nthcdr_List_List_int (size_t index , List_List_int list ) {
  return ({ /* letn4946 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4948 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4949 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4954 */
            nthcdr_List_List_int ((--index ), tail );
          }) : ({ /* letn4959 */
            // ----------
            ;
            ({ /* progn4961 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (size_t index , List_List_int list ) {
  return ({ /* letn4970 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn4972 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn4973 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn4975 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn4980 */
            (((index  ==  0 )) ? Just_List_int (head ) : (((index  <  0 )) ? Nothing_List_int () : nth_List_List_int ((--index ), tail )));
          }) : ({ /* letn4989 */
            // ----------
            ;
            ({ /* progn4991 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* let4996 */
    List_List_int this  = (*this_ptr );
    // ----------
    { /* let5000 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5002 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn5003 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block5010 */
            { /* block5012 */
              free (this );
              free_List_List_int ((&tail ));
            }
          }
        else
          { /* let5020 */
            // ----------
            ;
            ({ /* letn5022 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block5028 */
                  { /* block5030 */
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
    { /* block5038 */
      free_List_List_int ((*this_ptr ));
    }
}
List_List_int__H_Table * const get_List_List_int__H_Table () {
  static List_List_int__H_Table table  = { free_List_List_int , toArray_List_List_int , wrap_List_List_int , pure_List_List_int , show_List_List_int , copy_List_List_int , replaceAt_List_List_int , deleteAt_List_List_int , insertAt_List_List_int , replace_List_List_int , delete_List_List_int , insert_List_List_int , reverse_List_List_int , append_List_List_int , push_List_List_int , take_List_List_int , last_List_List_int , init_List_List_int , hasLen_List_List_int , len_List_List_int , tail_List_List_int , drop_List_List_int , head_List_List_int , nthcdr_List_List_int , nth_List_List_int };
  return (&table );
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* let5048 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int Nil_List_int () {
  { /* let5054 */
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
    { /* block5069 */
      free_Maybe_List_List_int ((*this ));
    }
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table () {
  static const Maybe_List_List_int__H_Table table  = { free_Maybe_List_List_int };
  return (&table );
}
Maybe_List_List_int Just_List_List_int (List_List_int value ) {
  { /* let5079 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_int Nothing_List_List_int () {
  { /* let5084 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_int__H_IMPL__ */ 
#ifndef __folds_List_int__H_IMPL__
#define __folds_List_int__H_IMPL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* letn5100 */
      typeof((((foldable -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((foldable -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5102 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5103 */
                head  = (((foldable -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5105 */
                tail  = (((foldable -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5110 */
            foldr_List_int (folder , folder (neutral , head ), tail );
          }) : ({ /* letn5115 */
            // ----------
            ;
            ({ /* progn5117 */
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
    { /* block5130 */
      free_Monoid_List_int ((*this ));
    }
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  { /* let5140 */
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
    { /* block5153 */
      free_Semigroup_List_int ((*this ));
    }
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  { /* let5163 */
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
List_int mconcat_List_int (List_List_int list ) {
  return foldr_List_int (mappend_List_int , Nil_int (), list );
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
  return ({ /* letn5200 */
      typeof((((f_a_b -> __h_data). Cons). __h_0_mem)) a_b ;
      typeof((((f_a_b -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5202 */
        bool __h_case_result  = (true  &&  (((f_a_b -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5203 */
                a_b  = (((f_a_b -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5205 */
                tail  = (((f_a_b -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5210 */
            mconcat_List_int (Cons_List_int (fmap_Functor_Ap_List_int_int (a_b , input ), wrap_List_List_int (ap_Applicative_Ap_List_int_int (tail , input ))));
          }) : ({ /* letn5219 */
            // ----------
            ;
            ({ /* progn5221 */
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
    { /* block5239 */
      free_Applicative_Ap_List_int_int ((*this ));
    }
}
const Applicative_Ap_List_int_int__H_Table * const get_Applicative_Ap_List_int_int__H_Table () {
  static const Applicative_Ap_List_int_int__H_Table table  = { free_Applicative_Ap_List_int_int , ap_Applicative_Ap_List_int_int , pure_Applicative_Ap_List_int_int };
  return (&table );
}
Applicative_Ap_List_int_int Applicative_Ap_List_int_int_ctor () {
  { /* let5249 */
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
    { /* block5259 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block5262 */
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
  return ({ /* letn5271 */
      typeof((((l -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((l -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn5273 */
        bool __h_case_result  = (true  &&  (((l -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn5274 */
                head  = (((l -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn5276 */
                tail  = (((l -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn5281 */
            (((long)head ) +  sum_list (tail ) );
          }) : ({ /* letn5285 */
            // ----------
            ;
            ({ /* progn5287 */
              0;
            });
          }));
      });
    });
}
int main () {
  ({ /* letn5293 */
    List_int l1  __attribute__((__cleanup__(free_List_int ))) = Cons_int (1, Cons_int (2, Cons_int (3, Cons_int (4, Nil_int ()))));
    // ----------
    bad  += check ("the list adds up before fmap", sum_list (l1 ), 10) ;
    ({ /* letn5304 */
      List_int l2  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (({ /* progn5308 */
        int __ciciliC_5307 (int __h_value ) {
          return (5 *  __h_value  );
        }
        __ciciliC_5307 ;
      }), l1 );
      // ----------
      bad  += check ("fmap (*5) multiplies every element", sum_list (l2 ), 50) ;
      bad  += check ("and leaves the length alone", ((long)len_List_int (l2 )), 4) ;
    });
  });
  bad  += check ("bind on a Just runs the step", ({ /* letn5322 */
        Maybe_int match5321  = bind_Monad_Maybe_int_int (Just_int (7), ({ /* progn5330 */
          Maybe_int __ciciliC_5329 (int v ) {
            return Just_int ((3 *  v  ));
          }
          __ciciliC_5329 ;
        }));
        typeof((((match5321 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn5336 */
          bool __h_case_result  = (true  &&  (((match5321 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5337 */
                r  = (((match5321 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5342 */
              ((long)r );
            }) : ({ /* letn5346 */
              // ----------
              ;
              ({ /* progn5348 */
                -1;
              });
            }));
        });
      }), 21) ;
  bad  += check ("bind on a Nothing short-circuits", ({ /* letn5355 */
        Maybe_int match5354  = bind_Monad_Maybe_int_int (Nothing_int (), ({ /* progn5362 */
          Maybe_int __ciciliC_5361 (int v ) {
            return Just_int ((3 *  v  ));
          }
          __ciciliC_5361 ;
        }));
        typeof((((match5354 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn5367 */
          bool __h_case_result  = (true  &&  (((match5354 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5368 */
                r  = (((match5354 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5373 */
              ((long)r );
            }) : ({ /* letn5377 */
              // ----------
              ;
              ({ /* progn5379 */
                -1;
              });
            }));
        });
      }), -1) ;
  bad  += check ("ap of a Just function over a Just", ({ /* letn5386 */
        Maybe_int match5385  = ap_Applicative_Ap_Maybe_int_int (Just_int_to_int_t (add100 ), Just_int (5));
        typeof((((match5385 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn5394 */
          bool __h_case_result  = (true  &&  (((match5385 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5395 */
                r  = (((match5385 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5400 */
              ((long)r );
            }) : ({ /* letn5404 */
              // ----------
              ;
              ({ /* progn5406 */
                -1;
              });
            }));
        });
      }), 105) ;
  bad  += check ("ap of a Nothing function is nothing", ({ /* letn5413 */
        Maybe_int match5412  = ap_Applicative_Ap_Maybe_int_int (Nothing_int_to_int_t (), Just_int (5));
        typeof((((match5412 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn5420 */
          bool __h_case_result  = (true  &&  (((match5412 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn5421 */
                r  = (((match5412 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn5426 */
              ((long)r );
            }) : ({ /* letn5430 */
              // ----------
              ;
              ({ /* progn5432 */
                -1;
              });
            }));
        });
      }), -1) ;
  ({ /* letn5435 */
    List_int_to_int_t fs  __attribute__((__cleanup__(free_List_int_to_int_t ))) = Cons_int_to_int_t (add100 , Cons_int_to_int_t (twice , Nil_int_to_int_t ()));
    // ----------
    ({ /* letn5443 */
      List_int xs  __attribute__((__cleanup__(free_List_int ))) = Cons_int (1, Cons_int (2, Nil_int ()));
      // ----------
      ({ /* letn5449 */
        List_int rs  __attribute__((__cleanup__(free_List_int ))) = ap_Applicative_Ap_List_int_int (fs , xs );
        // ----------
        bad  += check ("ap pairs every function with every value", ((long)len_List_int (rs )), 4) ;
        bad  += check ("and the four results add up", sum_list (rs ), 209) ;
      });
    });
  });
  if (bad  ==  0 )
    printf ("haskell-concepts: all ok\n");
  else
    printf ("haskell-concepts: %d FAILED\n", bad );
  return bad ;
}
