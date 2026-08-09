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
typedef int (*int_to_int_t) (int value );
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
  union { /* ciciliUnion1309 */
    struct { /* ciciliStruct1310 */
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
  return ({ /* letn1346 */
      typeof((((input -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((input -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1348 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1349 */
                head  = (((input -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1351 */
                tail  = (((input -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1356 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* letn1363 */
            // ----------
            ;
            ({ /* progn1365 */
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
    { /* block1375 */
      free_Functor_List_int_int ((*this ));
    }
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  { /* let1385 */
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
  union { /* ciciliUnion1418 */
    struct { /* ciciliStruct1419 */
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
  return ({ /* letn1469 */
      typeof((((input . __h_data). Just). __h_0_mem)) value ;
      // ----------
      ;
      ({ /* letn1471 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1472 */
              value  = (((input . __h_data). Just). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1477 */
            a_mb (value );
          }) : ({ /* letn1481 */
            // ----------
            ;
            ({ /* progn1483 */
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
    { /* block1493 */
      free_Monad_Maybe_int_int ((*this ));
    }
}
const Monad_Maybe_int_int__H_Table * const get_Monad_Maybe_int_int__H_Table () {
  static const Monad_Maybe_int_int__H_Table table  = { free_Monad_Maybe_int_int , returnB_Monad_Maybe_int_int , returnA_Monad_Maybe_int_int , bind_Monad_Maybe_int_int };
  return (&table );
}
Monad_Maybe_int_int Monad_Maybe_int_int_ctor () {
  { /* let1503 */
    Monad_Maybe_int_int instance  = ((Monad_Maybe_int_int){ get_Monad_Maybe_int_int__H_Table (), __h_Monad_t });
    // ----------
    return instance ;
  }
}
#endif /* __Monad_Maybe_int_int__H_IMPL__ */ 
Monad_Maybe_int_int get_Monad_Maybe_int_int () {
  return Monad_Maybe_int_int_ctor ();
}
static int bad  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block1513 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block1516 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
long sum_list (List_int l ) {
  return ({ /* letn1523 */
      typeof((((l -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((l -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1525 */
        bool __h_case_result  = (true  &&  (((l -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1526 */
                head  = (((l -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1528 */
                tail  = (((l -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1533 */
            (((long)head ) +  sum_list (tail ) );
          }) : ({ /* letn1537 */
            // ----------
            ;
            ({ /* progn1539 */
              0;
            });
          }));
      });
    });
}
int main () {
  ({ /* letn1545 */
    List_int l1  __attribute__((__cleanup__(free_List_int ))) = Cons_int (1, Cons_int (2, Cons_int (3, Cons_int (4, Nil_int ()))));
    // ----------
    bad  += check ("the list adds up before fmap", sum_list (l1 ), 10) ;
    ({ /* letn1556 */
      List_int l2  __attribute__((__cleanup__(free_List_int ))) = fmap_Functor_List_int_int (({ /* progn1560 */
        int __ciciliC_1559 (int __h_value ) {
          return (5 *  __h_value  );
        }
        __ciciliC_1559 ;
      }), l1 );
      // ----------
      bad  += check ("fmap (*5) multiplies every element", sum_list (l2 ), 50) ;
      bad  += check ("and leaves the length alone", ((long)len_List_int (l2 )), 4) ;
    });
  });
  bad  += check ("bind on a Just runs the step", ({ /* letn1574 */
        Maybe_int match1573  = bind_Monad_Maybe_int_int (Just_int (7), ({ /* progn1582 */
          Maybe_int __ciciliC_1581 (int v ) {
            return Just_int ((3 *  v  ));
          }
          __ciciliC_1581 ;
        }));
        typeof((((match1573 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn1588 */
          bool __h_case_result  = (true  &&  (((match1573 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1589 */
                r  = (((match1573 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1594 */
              ((long)r );
            }) : ({ /* letn1598 */
              // ----------
              ;
              ({ /* progn1600 */
                -1;
              });
            }));
        });
      }), 21) ;
  bad  += check ("bind on a Nothing short-circuits", ({ /* letn1607 */
        Maybe_int match1606  = bind_Monad_Maybe_int_int (Nothing_int (), ({ /* progn1614 */
          Maybe_int __ciciliC_1613 (int v ) {
            return Just_int ((3 *  v  ));
          }
          __ciciliC_1613 ;
        }));
        typeof((((match1606 . __h_data). Just). __h_0_mem)) r ;
        // ----------
        ;
        ({ /* letn1619 */
          bool __h_case_result  = (true  &&  (((match1606 . __h_ctor) ==  __h_Just_t  ) &&  ({ /* progn1620 */
                r  = (((match1606 . __h_data). Just). __h_0_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn1625 */
              ((long)r );
            }) : ({ /* letn1629 */
              // ----------
              ;
              ({ /* progn1631 */
                -1;
              });
            }));
        });
      }), -1) ;
  if (bad  ==  0 )
    printf ("haskell-concepts: all ok\n");
  else
    printf ("haskell-concepts: %d FAILED\n", bad );
  return bad ;
}
