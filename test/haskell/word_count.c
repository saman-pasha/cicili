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
void free_Maybe_char_pointer (Maybe_char ** this );
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
  union { /* ciciliUnion174 */
    struct { /* ciciliStruct175 */
      char __h_0_mem ;
      List_char __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct176 */
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
void free_List_char_pointer (List_char ** this_ptr );
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
  union { /* ciciliUnion277 */
    struct { /* ciciliStruct278 */
      List_char __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct279 */
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
void free_Maybe_List_char_pointer (Maybe_List_char ** this );
#endif /* __Maybe_List_char__H_DECL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
__attribute__((weak)) void free_Maybe_char_pointer (Maybe_char ** this ) {
  if (this )
    { /* block309 */
      free_Maybe_char ((*this ));
    }
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* let319 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* let324 */
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
    return ({ /* letn336 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn338 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn339 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn341 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn346 */
              ({ /* letn348 */
                char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* letn352 */
              // ----------
              ;
              ({ /* progn354 */
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
  return (((buf  ==  NULL  )) ? Nil_char () : ({ /* letn365 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_char () : Cons_char (item , pure_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_char (FILE * file , List_char list ) {
  return ({ /* letn377 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn379 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn380 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn382 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn387 */
            (({ /* letn393 */
                // ----------
                ;
                ({ /* letn395 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn399 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", "") );
                    }) : ({ /* letn408 */
                      // ----------
                      ;
                      ({ /* progn410 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_List_char (file , tail ) );
          }) : ({ /* letn418 */
            // ----------
            ;
            ({ /* progn420 */
              0;
            });
          }));
      });
    });
}
List_char copy_List_char (List_char list ) {
  return ({ /* letn428 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn430 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn431 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn433 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn438 */
            Cons_char (head , copy_List_char (tail ));
          }) : ({ /* letn444 */
            // ----------
            ;
            ({ /* progn446 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char replaceAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* letn455 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn457 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn458 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn460 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn465 */
            Cons_char (head , replaceAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* letn471 */
            // ----------
            ;
            ({ /* progn473 */
              ({ /* letn479 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn481 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn482 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn487 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* letn493 */
                      // ----------
                      ;
                      ({ /* progn495 */
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
  return ({ /* letn504 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn506 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn507 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn509 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn514 */
            Cons_char (head , deleteAt_List_char (tail , (index  -  1 )));
          }) : ({ /* letn520 */
            // ----------
            ;
            ({ /* progn522 */
              ({ /* letn528 */
                typeof((((list -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn530 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn531 */
                        taill  = (((list -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn536 */
                      copy_List_char (taill );
                    }) : ({ /* letn541 */
                      // ----------
                      ;
                      ({ /* progn543 */
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
  return ({ /* letn552 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn554 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn555 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn557 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn562 */
            Cons_char (head , insertAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* letn568 */
            // ----------
            ;
            ({ /* progn570 */
              Cons_char (item , copy_List_char (list ));
            });
          }));
      });
    });
}
List_char replace_List_char (List_char list , char item , List_char aimed ) {
  return ({ /* letn580 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn582 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn583 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn585 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn590 */
            Cons_char (head , replace_List_char (tail , item , aimed ));
          }) : ({ /* letn596 */
            // ----------
            ;
            ({ /* progn598 */
              ({ /* letn604 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn606 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn607 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn612 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* letn618 */
                      // ----------
                      ;
                      ({ /* progn620 */
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
  return ({ /* letn629 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn631 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn632 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn634 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn639 */
            Cons_char (head , delete_List_char (tail , aimed ));
          }) : ({ /* letn645 */
            // ----------
            ;
            ({ /* progn647 */
              ({ /* letn653 */
                typeof((((aimed -> __h_data). Cons). __h_1_mem)) taill ;
                // ----------
                ;
                ({ /* letn655 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn656 */
                        taill  = (((aimed -> __h_data). Cons). __h_1_mem) ;
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn661 */
                      copy_List_char (taill );
                    }) : ({ /* letn666 */
                      // ----------
                      ;
                      ({ /* progn668 */
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
  return ({ /* letn677 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn679 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn680 */
                  head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn682 */
                  tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn687 */
            Cons_char (head , insert_List_char (tail , item , rlist ));
          }) : ({ /* letn693 */
            // ----------
            ;
            ({ /* progn695 */
              Cons_char (item , copy_List_char (rlist ));
            });
          }));
      });
    });
}
List_char reverse_List_char (List_char list ) {
  List_char _reverse (List_char list , List_char rlist ) {
    return ({ /* letn706 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn708 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn709 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn711 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn716 */
              _reverse (tail , Cons_char (head , rlist ));
            }) : ({ /* letn721 */
              // ----------
              ;
              ({ /* progn723 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* letn729 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn731 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn732 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn734 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn739 */
            _reverse (tail , Cons_char (head , Nil_char ()));
          }) : ({ /* letn745 */
            // ----------
            ;
            ({ /* progn747 */
              list ;
            });
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* letn755 */
      typeof((((llist -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((llist -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn757 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn758 */
                head  = (((llist -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn760 */
                tail  = (((llist -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn765 */
            Cons_char (head , append_List_char (tail , rlist ));
          }) : ({ /* letn771 */
            // ----------
            ;
            ({ /* progn773 */
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
  return (((len  <=  0 )) ? Nil_char () : ({ /* letn788 */
        typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn790 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn791 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn793 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn798 */
              Cons_char (head , take_List_char ((--len ), tail ));
            }) : ({ /* letn804 */
              // ----------
              ;
              ({ /* progn806 */
                Nil_char ();
              });
            }));
        });
      }));
}
List_char last_List_char (List_char list ) {
  return ({ /* letn815 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn817 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn818 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn823 */
            ({ /* letn829 */
              // ----------
              ;
              ({ /* letn831 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* progn835 */
                    copy_List_char (list );
                  }) : ({ /* letn840 */
                    // ----------
                    ;
                    ({ /* progn842 */
                      last_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* letn847 */
            // ----------
            ;
            ({ /* progn849 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char init_List_char (List_char list ) {
  return ({ /* letn859 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn861 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ((({ /* progn862 */
                  head  = (((list -> __h_data). Cons). __h_0_mem) ;
                  true ;
                }) &&  ({ /* progn864 */
                  tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn869 */
            Cons_char (head , init_List_char (tail ));
          }) : ({ /* letn875 */
            // ----------
            ;
            ({ /* progn877 */
              Nil_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_char (List_char list , size_t desired ) {
  return ({ /* letn886 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn888 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn889 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn894 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_char (tail , (--desired )) ));
          }) : ({ /* letn900 */
            // ----------
            ;
            ({ /* progn902 */
              0;
            });
          }));
      });
    });
}
size_t len_List_char (List_char list ) {
  return ({ /* letn910 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn912 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn913 */
              tail  = (((list -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn918 */
            (1 +  len_List_char (tail ) );
          }) : ({ /* letn923 */
            // ----------
            ;
            ({ /* progn925 */
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
  return (((len  <=  0 )) ? copy_List_char (list ) : ({ /* letn938 */
        typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
        // ----------
        ;
        ({ /* letn940 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn941 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* progn946 */
              drop_List_char ((--len ), tail );
            }) : ({ /* letn951 */
              // ----------
              ;
              ({ /* progn953 */
                Nil_char ();
              });
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return ({ /* letn963 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      // ----------
      ;
      ({ /* letn965 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn966 */
              head  = (((list -> __h_data). Cons). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn971 */
            Just_char (head );
          }) : ({ /* letn976 */
            // ----------
            ;
            ({ /* progn978 */
              Nothing_char ();
            });
          }));
      });
    });
}
List_char nthcdr_List_char (size_t index , List_char list ) {
  return ({ /* letn987 */
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn989 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn990 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn995 */
            nthcdr_List_char ((--index ), tail );
          }) : ({ /* letn1000 */
            // ----------
            ;
            ({ /* progn1002 */
              list ;
            });
          }));
      });
    });
}
Maybe_char nth_List_char (size_t index , List_char list ) {
  return ({ /* letn1011 */
      typeof((((list -> __h_data). Cons). __h_0_mem)) head ;
      typeof((((list -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1013 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1014 */
                head  = (((list -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1016 */
                tail  = (((list -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1021 */
            (((index  ==  0 )) ? Just_char (head ) : (((index  <  0 )) ? Nothing_char () : nth_List_char ((--index ), tail )));
          }) : ({ /* letn1030 */
            // ----------
            ;
            ({ /* progn1032 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* let1037 */
    List_char this  = (*this_ptr );
    // ----------
    { /* let1041 */
      typeof((((this -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1043 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_Cons_t  ) &&  ({ /* progn1044 */
              tail  = (((this -> __h_data). Cons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1051 */
            { /* block1053 */
              free (this );
              free_List_char ((&tail ));
            }
          }
        else
          { /* let1061 */
            // ----------
            ;
            ({ /* letn1063 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block1069 */
                  { /* block1071 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_List_char_pointer (List_char ** this_ptr ) {
  if (this_ptr )
    { /* block1080 */
      free_List_char ((*this_ptr ));
    }
}
List_char__H_Table * const get_List_char__H_Table () {
  static List_char__H_Table table  = { free_List_char , toArray_List_char , wrap_List_char , pure_List_char , show_List_char , copy_List_char , replaceAt_List_char , deleteAt_List_char , insertAt_List_char , replace_List_char , delete_List_char , insert_List_char , reverse_List_char , append_List_char , push_List_char , take_List_char , last_List_char , init_List_char , hasLen_List_char , len_List_char , tail_List_char , drop_List_char , head_List_char , nthcdr_List_char , nth_List_char };
  return (&table );
}
List_char Cons_char (char head , List_char tail ) {
  { /* let1090 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char Nil_char () {
  { /* let1096 */
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
__attribute__((weak)) void free_Maybe_List_char_pointer (Maybe_List_char ** this ) {
  if (this )
    { /* block1111 */
      free_Maybe_List_char ((*this ));
    }
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* let1121 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* let1126 */
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
  union { /* ciciliUnion1141 */
    struct { /* ciciliStruct1142 */
      cfile_t __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1143 */
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
void free_Either_cstr_t_cfile_t_pointer (Either_cstr_t_cfile_t ** this );
#endif /* __Either_cstr_t_cfile_t__H_DECL__ */ 
#ifndef __Either_cstr_t_cfile_t__H_IMPL__
#define __Either_cstr_t_cfile_t__H_IMPL__
void free_Either_cstr_t_cfile_t (Either_cstr_t_cfile_t * this ) {
}
__attribute__((weak)) void free_Either_cstr_t_cfile_t_pointer (Either_cstr_t_cfile_t ** this ) {
  if (this )
    { /* block1171 */
      free_Either_cstr_t_cfile_t ((*this ));
    }
}
const Either_cstr_t_cfile_t__H_Table * const get_Either_cstr_t_cfile_t__H_Table () {
  static const Either_cstr_t_cfile_t__H_Table table  = { free_Either_cstr_t_cfile_t };
  return (&table );
}
Either_cstr_t_cfile_t Right_cstr_t_cfile_t (cfile_t value ) {
  { /* let1181 */
    Either_cstr_t_cfile_t instance  = ((Either_cstr_t_cfile_t){ get_Either_cstr_t_cfile_t__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_cstr_t_cfile_t Left_cstr_t_cfile_t (cstr_t error ) {
  { /* let1186 */
    Either_cstr_t_cfile_t instance  = ((Either_cstr_t_cfile_t){ get_Either_cstr_t_cfile_t__H_Table (), __h_Left_t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_cstr_t_cfile_t__H_IMPL__ */ 
Either_cstr_t_cfile_t writeTmpFile () {
  { /* let1190 */
    FILE * tmpf  = tmpfile ();
    // ----------
    if (tmpf  ==  NULL  )
      { /* block1195 */
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
    { /* block1201 */
      return Nil_char ();
    }
  { /* let1204 */
    int c  = fgetc (file );
    // ----------
    if (c  ==  EOF  )
      { /* block1209 */
        return Nil_char ();
      }
    return Cons_char (((char)c ), safeReadFile (file ));
  }
}
int count_from (List_char text , int in_word ) {
  return ({ /* letn1218 */
      typeof((((text -> __h_data). Cons). __h_0_mem)) ch ;
      typeof((((text -> __h_data). Cons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn1220 */
        bool __h_case_result  = (true  &&  (((text -> __h_ctor) ==  __h_Cons_t  ) &&  (({ /* progn1221 */
                ch  = (((text -> __h_data). Cons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn1223 */
                tail  = (((text -> __h_data). Cons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn1228 */
            ((((ch  ==  ' ' ) ||  (ch  ==  '\n' ) )) ? count_from (tail , 0) : (((in_word ) ? 0 : 1) +  count_from (tail , 1) ));
          }) : ({ /* letn1233 */
            // ----------
            ;
            ({ /* progn1235 */
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
  ({ /* letn1242 */
    Either_cstr_t_cfile_t tmpf  = writeTmpFile ();
    // ----------
    { /* let1246 */
      typeof((((tmpf . __h_data). Left). __h_0_mem)) error ;
      // ----------
      ;
      ({ /* letn1248 */
        bool __h_case_result  = (true  &&  (((tmpf . __h_ctor) ==  __h_Left_t  ) &&  ({ /* progn1249 */
              error  = (((tmpf . __h_data). Left). __h_0_mem) ;
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* block1256 */
            { /* block1258 */
              fprintf (stderr , "File opening error: %s\n", error );
              return 1;
            }
          }
        else
          { /* let1263 */
            typeof((((tmpf . __h_data). Right). __h_0_mem)) opened ;
            // ----------
            ;
            ({ /* letn1265 */
              bool __h_case_result  = (true  &&  (((tmpf . __h_ctor) ==  __h_Right_t  ) &&  ({ /* progn1266 */
                    opened  = (((tmpf . __h_data). Right). __h_0_mem) ;
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* block1273 */
                  ({ /* letn1276 */
                    typeof((((tmpf . __h_data). Right). __h_0_mem)) file  __attribute__((__cleanup__(file_close ))) = opened ;
                    // ----------
                    rewind (file );
                    ({ /* letn1279 */
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
