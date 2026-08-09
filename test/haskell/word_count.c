#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
typedef char * cstr_t ;
typedef FILE * cfile_t ;
#ifndef __Maybe_char__H_DECL__
#define __Maybe_char__H_DECL__
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
typedef struct Maybe_char Maybe_char ;
typedef std_data Maybe_char_type_t ;
typedef void (*free_Maybe_char_t) (Maybe_char * this );
typedef struct Maybe_char__H_Table {
  free_Maybe_char_t freeData ;
} Maybe_char__H_Table;
typedef struct Maybe_char {
  const Maybe_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion117 */
    struct { /* ciciliStruct118 */
      char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct119 */
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
#ifndef __List_char__H_DECL__
#define __List_char__H_DECL__
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
typedef struct class_List_char class_List_char ;
typedef class_List_char * List_char ;
typedef std_class List_char_type_t ;
typedef void (*free_List_char_t) (List_char * this_ptr );
typedef struct List_char__H_Table {
  free_List_char_t freeClass ;
    char * (*toArray) (List_char list );
    List_char (*wrap) (const char item );
    List_char (*pure) (const char * buf , size_t len );
    size_t (*show) (FILE * file , List_char list );
    List_char (*copy) (List_char list );
    List_char (*replaceAt) (List_char list , char item , size_t index );
    List_char (*deleteAt) (List_char list , size_t index );
    List_char (*insertAt) (List_char llist , char item , size_t index );
    List_char (*replace) (List_char list , char item , List_char aimed );
    List_char (*delete) (List_char list , List_char aimed );
    List_char (*insert) (List_char llist , char item , List_char rlist );
    List_char (*reverse) (List_char list );
    List_char (*append) (List_char llist , List_char rlist );
    List_char (*push) (char item , List_char list );
    List_char (*take) (size_t len , List_char list );
    List_char (*last) (List_char list );
    List_char (*init) (List_char list );
    size_t (*hasLen) (List_char list , size_t desired );
    size_t (*len) (List_char list );
    List_char (*tail) (List_char list );
    List_char (*drop) (size_t len , List_char list );
    Maybe_char (*head) (List_char list );
    List_char (*nthcdr) (size_t index , List_char list );
    Maybe_char (*nth) (size_t index , List_char list );
} List_char__H_Table;
typedef struct class_List_char {
  const List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion172 */
    struct { /* ciciliStruct173 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct174 */
    } Nil , _ ;
  } __h_data ;
} class_List_char;
List_char Cons_char (char head , List_char tail );
List_char Nil_char ();
__attribute__((weak)) List_char Default_List_char () {
  return Nil_char ();
}
char * toArray_List_char (List_char list );
List_char wrap_List_char (const char item );
List_char pure_List_char (const char * buf , size_t len );
size_t show_List_char (FILE * file , List_char list );
List_char copy_List_char (List_char list );
List_char replaceAt_List_char (List_char list , char item , size_t index );
List_char deleteAt_List_char (List_char list , size_t index );
List_char insertAt_List_char (List_char llist , char item , size_t index );
List_char replace_List_char (List_char list , char item , List_char aimed );
List_char delete_List_char (List_char list , List_char aimed );
List_char insert_List_char (List_char llist , char item , List_char rlist );
List_char reverse_List_char (List_char list );
List_char append_List_char (List_char llist , List_char rlist );
List_char push_List_char (char item , List_char list );
List_char take_List_char (size_t len , List_char list );
List_char last_List_char (List_char list );
List_char init_List_char (List_char list );
size_t hasLen_List_char (List_char list , size_t desired );
size_t len_List_char (List_char list );
List_char tail_List_char (List_char list );
List_char drop_List_char (size_t len , List_char list );
Maybe_char head_List_char (List_char list );
List_char nthcdr_List_char (size_t index , List_char list );
Maybe_char nth_List_char (size_t index , List_char list );
List_char__H_Table * const get_List_char__H_Table ();
void free_List_char (List_char * this_ptr );
#endif /* __List_char__H_DECL__ */ 
#ifndef __Maybe_List_char__H_DECL__
#define __Maybe_List_char__H_DECL__
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
typedef struct Maybe_List_char Maybe_List_char ;
typedef std_data Maybe_List_char_type_t ;
typedef void (*free_Maybe_List_char_t) (Maybe_List_char * this );
typedef struct Maybe_List_char__H_Table {
  free_Maybe_List_char_t freeData ;
} Maybe_List_char__H_Table;
typedef struct Maybe_List_char {
  const Maybe_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion273 */
    struct { /* ciciliStruct274 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct275 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_char;
Maybe_List_char Just_List_char (List_char value );
Maybe_List_char Nothing_List_char ();
__attribute__((weak)) Maybe_List_char Default_Maybe_List_char () {
  return Nothing_List_char ();
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table ();
void free_Maybe_List_char (Maybe_List_char * this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* let305 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* let310 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __List_char__H_IMPL__
#define __List_char__H_IMPL__
char * toArray_List_char (List_char list ) {
  char * array (List_char list , size_t count ) {
    return ({ /* letn322 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn324 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn325 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn327 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn332 */
              ({ /* letn334 */
                char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn338 */
              // ----------
              ;
              ({ /* progn340 */
                ((char *)calloc (count , sizeof(char)));
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_char wrap_List_char (const char item ) {
  return Cons_char (item , Nil_char ());
}
List_char pure_List_char (const char * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_char () : ({ /* letn351 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_char () : Cons_char (item , pure_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_char (FILE * file , List_char list ) {
  return ({ /* letn363 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn365 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn366 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn368 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn373 */
            (({ /* letn379 */
                // ----------
                ;
                ({ /* letn381 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn385 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", "") );
                    }) : ({ /* letn394 */
                      // ----------
                      ;
                      ({ /* progn396 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_List_char (file , tail ) );
          }) : ({ /* letn404 */
            // ----------
            ;
            ({ /* progn406 */
              0;
            });
          }));
      });
    });
}
List_char copy_List_char (List_char list ) {
  return ({ /* letn414 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn416 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn417 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn419 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn424 */
            Cons_char (head , copy_List_char (tail ));
          }) : ({ /* letn430 */
            // ----------
            ;
            ({ /* progn432 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char replaceAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* letn441 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn443 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn444 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn446 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn451 */
            Cons_char (head , replaceAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* letn457 */
            // ----------
            ;
            ({ /* progn459 */
              ({ /* letn465 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn467 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn468 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn473 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* letn479 */
                      // ----------
                      ;
                      ({ /* progn481 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char deleteAt_List_char (List_char list , size_t index ) {
  return ({ /* letn490 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn492 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn493 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn495 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn500 */
            Cons_char (head , deleteAt_List_char (tail , (index  -  1 )));
          }) : ({ /* letn506 */
            // ----------
            ;
            ({ /* progn508 */
              ({ /* letn514 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn516 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn517 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn522 */
                      copy_List_char (taill );
                    }) : ({ /* letn527 */
                      // ----------
                      ;
                      ({ /* progn529 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char insertAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* letn538 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn540 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn541 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn543 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn548 */
            Cons_char (head , insertAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* letn554 */
            // ----------
            ;
            ({ /* progn556 */
              Cons_char (item , copy_List_char (list ));
            });
          }));
      });
    });
}
List_char replace_List_char (List_char list , char item , List_char aimed ) {
  return ({ /* letn566 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn568 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn569 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn571 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn576 */
            Cons_char (head , replace_List_char (tail , item , aimed ));
          }) : ({ /* letn582 */
            // ----------
            ;
            ({ /* progn584 */
              ({ /* letn590 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn592 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn593 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn598 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* letn604 */
                      // ----------
                      ;
                      ({ /* progn606 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char delete_List_char (List_char list , List_char aimed ) {
  return ({ /* letn615 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn617 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn618 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn620 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn625 */
            Cons_char (head , delete_List_char (tail , aimed ));
          }) : ({ /* letn631 */
            // ----------
            ;
            ({ /* progn633 */
              ({ /* letn639 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn641 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn642 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn647 */
                      copy_List_char (taill );
                    }) : ({ /* letn652 */
                      // ----------
                      ;
                      ({ /* progn654 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char insert_List_char (List_char llist , char item , List_char rlist ) {
  return ({ /* letn663 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn665 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn666 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn668 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn673 */
            Cons_char (head , insert_List_char (tail , item , rlist ));
          }) : ({ /* letn679 */
            // ----------
            ;
            ({ /* progn681 */
              Cons_char (item , copy_List_char (rlist ));
            });
          }));
      });
    });
}
List_char reverse_List_char (List_char list ) {
  List_char _reverse (List_char list , List_char rlist ) {
    return ({ /* letn692 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn694 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn695 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn697 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn702 */
              _reverse (tail , Cons_char (head , rlist ));
            }) : ({ /* letn707 */
              // ----------
              ;
              ({ /* progn709 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn715 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn717 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn718 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn720 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn725 */
            _reverse (tail , Cons_char (head , Nil_char ()));
          }) : ({ /* letn731 */
            // ----------
            ;
            ({ /* progn733 */
              list ;
            });
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* letn741 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn743 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn744 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn746 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn751 */
            Cons_char (head , append_List_char (tail , rlist ));
          }) : ({ /* letn757 */
            // ----------
            ;
            ({ /* progn759 */
              copy_List_char (rlist );
            });
          }));
      });
    });
}
List_char push_List_char (char item , List_char list ) {
  return Cons_char (item , copy_List_char (list ));
}
List_char take_List_char (size_t len , List_char list ) {
  return (((len  <=  0 )) ? Nil_char () : ({ /* letn774 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn776 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn777 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn779 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn784 */
              Cons_char (head , take_List_char ((--len ), tail ));
            }) : ({ /* letn790 */
              // ----------
              ;
              ({ /* progn792 */
                Nil_char ();
              });
            }));
        });
      }));
}
List_char last_List_char (List_char list ) {
  return ({ /* letn801 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn803 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn804 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn809 */
            ({ /* letn815 */
              // ----------
              ;
              ({ /* letn817 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn821 */
                    copy_List_char (list );
                  }) : ({ /* letn826 */
                    // ----------
                    ;
                    ({ /* progn828 */
                      last_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn833 */
            // ----------
            ;
            ({ /* progn835 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char init_List_char (List_char list ) {
  return ({ /* letn845 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn847 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn848 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn850 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn855 */
            Cons_char (head , init_List_char (tail ));
          }) : ({ /* letn861 */
            // ----------
            ;
            ({ /* progn863 */
              Nil_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_char (List_char list , size_t desired ) {
  return ({ /* letn872 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn874 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn875 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn880 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_char (tail , (--desired )) ));
          }) : ({ /* letn886 */
            // ----------
            ;
            ({ /* progn888 */
              0;
            });
          }));
      });
    });
}
size_t len_List_char (List_char list ) {
  return ({ /* letn896 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn898 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn899 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn904 */
            (1 +  len_List_char (tail ) );
          }) : ({ /* letn909 */
            // ----------
            ;
            ({ /* progn911 */
              0;
            });
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return drop_List_char (1, list );
}
List_char drop_List_char (size_t len , List_char list ) {
  return (((len  <=  0 )) ? copy_List_char (list ) : ({ /* letn924 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn926 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn927 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn932 */
              drop_List_char ((--len ), tail );
            }) : ({ /* letn937 */
              // ----------
              ;
              ({ /* progn939 */
                Nil_char ();
              });
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return ({ /* letn949 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn951 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn952 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn957 */
            Just_char (head );
          }) : ({ /* letn962 */
            // ----------
            ;
            ({ /* progn964 */
              Nothing_char ();
            });
          }));
      });
    });
}
List_char nthcdr_List_char (size_t index , List_char list ) {
  return ({ /* letn973 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn975 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn976 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn981 */
            nthcdr_List_char ((--index ), tail );
          }) : ({ /* letn986 */
            // ----------
            ;
            ({ /* progn988 */
              list ;
            });
          }));
      });
    });
}
Maybe_char nth_List_char (size_t index , List_char list ) {
  return ({ /* letn997 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn999 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1000 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1002 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1007 */
            (((index  ==  0 )) ? Just_char (head ) : (((index  <  0 )) ? Nothing_char () : nth_List_char ((--index ), tail )));
          }) : ({ /* letn1016 */
            // ----------
            ;
            ({ /* progn1018 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* let1023 */
    List_char this  = (*this_ptr );
    // ----------
    { /* let1027 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1029 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1030 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1037 */
            { /* block1039 */
              free (this );
              free_List_char ((&tail ));
            }
          }
        else
          { /* let1047 */
            // ----------
            ;
            ({ /* letn1049 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block1055 */
                  { /* block1057 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_char__H_Table * const get_List_char__H_Table () {
  static List_char__H_Table table  = { free_List_char , toArray_List_char , wrap_List_char , pure_List_char , show_List_char , copy_List_char , replaceAt_List_char , deleteAt_List_char , insertAt_List_char , replace_List_char , delete_List_char , insert_List_char , reverse_List_char , append_List_char , push_List_char , take_List_char , last_List_char , init_List_char , hasLen_List_char , len_List_char , tail_List_char , drop_List_char , head_List_char , nthcdr_List_char , nth_List_char };
  return (&table );
}
List_char Cons_char (char head , List_char tail ) {
  { /* let1068 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char Nil_char () {
  { /* let1074 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Nil_t });
    return instance ;
  }
}
#endif /* __List_char__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* let1091 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* let1096 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Nothing_t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Either_cstr_t_cfile_t__H_DECL__
#define __Either_cstr_t_cfile_t__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
#ifndef __H_STD_DATA_
#define __H_STD_DATA_
typedef struct std_data std_data ;
#endif /* __H_STD_DATA_ */ 
typedef struct Either_cstr_t_cfile_t Either_cstr_t_cfile_t ;
typedef std_data Either_cstr_t_cfile_t_type_t ;
typedef void (*free_Either_cstr_t_cfile_t_t) (Either_cstr_t_cfile_t * this );
typedef struct Either_cstr_t_cfile_t__H_Table {
  free_Either_cstr_t_cfile_t_t freeData ;
} Either_cstr_t_cfile_t__H_Table;
typedef struct Either_cstr_t_cfile_t {
  const Either_cstr_t_cfile_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1111 */
    struct { /* ciciliStruct1112 */
      cfile_t __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1113 */
      cstr_t __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_cstr_t_cfile_t;
Either_cstr_t_cfile_t Right_cstr_t_cfile_t (cfile_t value );
Either_cstr_t_cfile_t Left_cstr_t_cfile_t (cstr_t error );
__attribute__((weak)) Either_cstr_t_cfile_t Default_Either_cstr_t_cfile_t (cstr_t error ) {
  return Left_cstr_t_cfile_t (error );
}
const Either_cstr_t_cfile_t__H_Table * const get_Either_cstr_t_cfile_t__H_Table ();
void free_Either_cstr_t_cfile_t (Either_cstr_t_cfile_t * this );
#endif /* __Either_cstr_t_cfile_t__H_DECL__ */ 
#ifndef __Either_cstr_t_cfile_t__H_IMPL__
#define __Either_cstr_t_cfile_t__H_IMPL__
void free_Either_cstr_t_cfile_t (Either_cstr_t_cfile_t * this ) {
}
const Either_cstr_t_cfile_t__H_Table * const get_Either_cstr_t_cfile_t__H_Table () {
  static const Either_cstr_t_cfile_t__H_Table table  = { free_Either_cstr_t_cfile_t };
  return (&table );
}
Either_cstr_t_cfile_t Right_cstr_t_cfile_t (cfile_t value ) {
  { /* let1141 */
    Either_cstr_t_cfile_t instance  = ((Either_cstr_t_cfile_t){ get_Either_cstr_t_cfile_t__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_cstr_t_cfile_t Left_cstr_t_cfile_t (cstr_t error ) {
  { /* let1146 */
    Either_cstr_t_cfile_t instance  = ((Either_cstr_t_cfile_t){ get_Either_cstr_t_cfile_t__H_Table (), __h_Left_t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_cstr_t_cfile_t__H_IMPL__ */ 
Either_cstr_t_cfile_t writeTmpFile () {
  { /* let1150 */
    FILE * tmpf  = tmpfile ();
    // ----------
    if (tmpf  ==  NULL  )
      { /* block1155 */
        return Left_cstr_t_cfile_t (strerror (errno ));
      }
    fputs ("Alan Turing\n", tmpf );
    fputs ("John von Neumann\n", tmpf );
    fputs ("Alonzo Church\n", tmpf );
    return Right_cstr_t_cfile_t (tmpf );
  }
}
List_char safeReadFile (FILE * file ) {
  if (file  ==  NULL  )
    { /* block1161 */
      return Nil_char ();
    }
  { /* let1164 */
    int c  = fgetc (file );
    // ----------
    if (c  ==  EOF  )
      { /* block1169 */
        return Nil_char ();
      }
    return Cons_char (((char)c ), safeReadFile (file ));
  }
}
int count_from (List_char text , int in_word ) {
  return ({ /* letn1178 */
      typeof((((text -> __h_data). Cons). __h_0_mem)) ch ;
      typeof((((text -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1180 */
        bool __h_case_result  = (true  &&  (((text -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1181 */
                ch  = (((text -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1183 */
                tail  = (((text -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1188 */
            ((((ch  ==  ' ' ) ||  (ch  ==  '\n' ) )) ? count_from (tail , 0) : (((in_word ) ? 0 : 1) +  count_from (tail , 1) ));
          }) : ({ /* letn1193 */
            // ----------
            ;
            ({ /* progn1195 */
              0;
            });
          }));
      });
    });
}
int count_words (List_char text ) {
  return count_from (text , 0);
}
void file_close (FILE ** file_ptr ) {
  fclose ((*file_ptr ));
}
int main () {
  ({ /* letn1202 */
    Either_cstr_t_cfile_t tmpf  = writeTmpFile ();
    // ----------
    { /* let1206 */
      typeof((((tmpf . __h_data). Left). __h_0_mem)) error ;
      // ----------
      ;
      ({ /* letn1208 */
        bool __h_case_result  = (true  &&  (((tmpf . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn1209 */
              error  = (((tmpf . __h_data). Left). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1216 */
            { /* block1218 */
              fprintf (stderr , "File opening error: %s\n", error );
              return 1;
            }
          }
        else
          { /* let1223 */
            typeof((((tmpf . __h_data). Right). __h_0_mem)) opened ;
            // ----------
            ;
            ({ /* letn1225 */
              bool __h_case_result  = (true  &&  (((tmpf . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn1226 */
                    opened  = (((tmpf . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block1233 */
                  ({ /* letn1236 */
                    typeof((((tmpf . __h_data). Right). __h_0_mem)) file  __attribute__((__cleanup__(file_close ))) = opened ;
                    // ----------
                    rewind (file );
                    ({ /* letn1239 */
                      List_char text  __attribute__((__cleanup__(free_List_char ))) = safeReadFile (file );
                      // ----------
                      printf ("Word count: %d\n", count_words (text ));
                    });
                  });
                }
            });
          }
      });
    }
  });
  return 0;
}
