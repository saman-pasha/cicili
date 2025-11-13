#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
void __h_free_data_router (void *** instance ) {
  ((      void (*)(void * this ))(*(*instance )))(instance );
}
void __h_free_class_router (void *** instance ) {
  ((      void (*)(void * this ))(*(*((void ***)(*instance )))))(instance );
}
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
void show_Bool (Bool value ) {
  { /* cicili#Let2353 */
    // ----------
    /* cicili#Block2355 */
    ({ /* cicili#Let2357 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let2363 */
          // ----------
          /* cicili#Block2365 */
          printf ("%s", "True");
        }
    });
  }
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2371 */
      // ----------
      /* cicili#Block2373 */
      ({ /* cicili#Let2375 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let2379 */
            // ----------
            /* cicili#Block2381 */
            ({ /* cicili#Let2385 */
              // ----------
              /* cicili#Block2387 */
              ({ /* cicili#Let2389 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let2393 */
                    // ----------
                    /* cicili#Block2395 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2401 */
      // ----------
      /* cicili#Block2403 */
      ({ /* cicili#Let2405 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let2409 */
            // ----------
            /* cicili#Block2411 */
            ({ /* cicili#Let2415 */
              // ----------
              /* cicili#Block2417 */
              ({ /* cicili#Let2419 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let2423 */
                    // ----------
                    /* cicili#Block2425 */
                    True ();
                  }));
              });
            });
          }));
      });
    });
}
void free_Bool (Bool * this ) {
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool False () {
  return ((Bool){ get_Bool__H_Table (), __h_False_t });
}
Bool True () {
  return ((Bool){ get_Bool__H_Table (), __h___t });
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
void free_Ordering (Ordering * this ) {
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering };
  return (&table );
}
Ordering LT () {
  return ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ get_Ordering__H_Table (), __h___t });
}
#endif /* __Ordering__H_IMPL__ */ 
#ifndef __Maybe_Bool__H_IMPL__
#define __Maybe_Bool__H_IMPL__
void free_Maybe_Bool (Maybe_Bool * this ) {
}
const Maybe_Bool__H_Table * const get_Maybe_Bool__H_Table () {
  static const Maybe_Bool__H_Table table  = { free_Maybe_Bool };
  return (&table );
}
Maybe_Bool Nothing_Bool () {
  return ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h_Nothing_t });
}
Maybe_Bool Just_Bool (Bool value ) {
  return ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_Bool__H_IMPL__ */ 
#ifndef __List_Bool__H_IMPL__
#define __List_Bool__H_IMPL__
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let2478 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2480 */
    ({ /* cicili#Let2482 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2485 */
          { /* cicili#Let2489 */
            // ----------
            /* cicili#Block2491 */
            ({ /* cicili#Let2493 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2496 */
                  printf ("%s", ({ /* cicili#Let2503 */
                      // ----------
                      /* cicili#Block2505 */
                      ({ /* cicili#Let2507 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2511 */
                            // ----------
                            /* cicili#Block2513 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2518 */
                  // ----------
                  /* cicili#Block2520 */
                  printf ("%s", ({ /* cicili#Let2527 */
                      // ----------
                      /* cicili#Block2529 */
                      ({ /* cicili#Let2531 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2535 */
                            // ----------
                            /* cicili#Block2537 */
                            "False";
                          }));
                      });
                    }));
                }
            });
          }
          show_List_Bool (tail );
        }
    });
  }
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let2543 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2548 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2550 */
        ({ /* cicili#Let2552 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2554 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2559 */
              // ----------
              /* cicili#Block2561 */
              rlist ;
            }));
        });
      });
    });
}
List_Bool push_List_Bool (Bool item , List_Bool list ) {
  return Cons_Bool (item , list );
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2570 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2572 */
      ({ /* cicili#Let2574 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2578 */
            // ----------
            /* cicili#Block2580 */
            ({ /* cicili#Let2582 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2586 */
                  // ----------
                  /* cicili#Block2588 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2593 */
            // ----------
            /* cicili#Block2595 */
            list ;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let2601 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2603 */
      ({ /* cicili#Let2605 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2611 */
            // ----------
            /* cicili#Block2613 */
            Empty_Bool ();
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let2620 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2622 */
      ({ /* cicili#Let2624 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2630 */
            // ----------
            /* cicili#Block2632 */
            0;
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2638 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2640 */
      ({ /* cicili#Let2642 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2647 */
            // ----------
            /* cicili#Block2649 */
            0;
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2659 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2661 */
        ({ /* cicili#Let2663 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2668 */
              // ----------
              /* cicili#Block2670 */
              Empty_Bool ();
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let2682 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2684 */
      ({ /* cicili#Let2686 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2693 */
            // ----------
            /* cicili#Block2695 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2702 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2704 */
      ({ /* cicili#Let2706 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2710 */
            // ----------
            /* cicili#Block2712 */
            Empty_Bool ();
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let2717 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2721 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2723 */
      ({ /* cicili#Let2725 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2728 */
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2734 */
            // ----------
            /* cicili#Block2736 */
            free (this );
          }
      });
    }
  }
}
const List_Bool__H_Table * const get_List_Bool__H_Table () {
  static const List_Bool__H_Table table  = { free_List_Bool , show_List_Bool , append_List_Bool , push_List_Bool , last_List_Bool , take_List_Bool , hasLen_List_Bool , len_List_Bool , tail_List_Bool , drop_List_Bool , head_List_Bool , nth_List_Bool , next_List_Bool };
  return (&table );
}
List_Bool Empty_Bool () {
  { /* cicili#Let2745 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let2750 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_Bool__H_IMPL__ */ 
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let2759 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return Cons_Bool (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool new_List_Bool_Wrap (const Bool item ) {
  return Cons_Bool (item , Empty_Bool ());
}
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Nothing_List_Bool () {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Nothing_t });
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
void show_List_int (List_int list ) {
  { /* cicili#Let2812 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2814 */
    ({ /* cicili#Let2816 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2819 */
          { /* cicili#Let2823 */
            // ----------
            /* cicili#Block2825 */
            ({ /* cicili#Let2827 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2830 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2838 */
                  // ----------
                  /* cicili#Block2840 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let2849 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2854 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2856 */
        ({ /* cicili#Let2858 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2860 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2865 */
              // ----------
              /* cicili#Block2867 */
              rlist ;
            }));
        });
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , list );
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let2876 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2878 */
      ({ /* cicili#Let2880 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2884 */
            // ----------
            /* cicili#Block2886 */
            ({ /* cicili#Let2888 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2892 */
                  // ----------
                  /* cicili#Block2894 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2899 */
            // ----------
            /* cicili#Block2901 */
            list ;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2907 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2909 */
      ({ /* cicili#Let2911 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2917 */
            // ----------
            /* cicili#Block2919 */
            Empty_int ();
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2926 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2928 */
      ({ /* cicili#Let2930 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2936 */
            // ----------
            /* cicili#Block2938 */
            0;
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2944 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2946 */
      ({ /* cicili#Let2948 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2953 */
            // ----------
            /* cicili#Block2955 */
            0;
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2965 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2967 */
        ({ /* cicili#Let2969 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2974 */
              // ----------
              /* cicili#Block2976 */
              Empty_int ();
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2988 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2990 */
      ({ /* cicili#Let2992 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2999 */
            // ----------
            /* cicili#Block3001 */
            Nothing_int ();
          }));
      });
    });
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let3008 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3010 */
      ({ /* cicili#Let3012 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3016 */
            // ----------
            /* cicili#Block3018 */
            Empty_int ();
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let3023 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3027 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3029 */
      ({ /* cicili#Let3031 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3034 */
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3040 */
            // ----------
            /* cicili#Block3042 */
            free (this );
          }
      });
    }
  }
}
const List_int__H_Table * const get_List_int__H_Table () {
  static const List_int__H_Table table  = { free_List_int , show_List_int , append_List_int , push_List_int , last_List_int , take_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nth_List_int , next_List_int };
  return (&table );
}
List_int Empty_int () {
  { /* cicili#Let3051 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let3056 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_int__H_IMPL__ */ 
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let3065 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return Cons_int (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int new_List_int_Wrap (const int item ) {
  return Cons_int (item , Empty_int ());
}
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Nothing_char () {
  return ((Maybe_char){ get_Maybe_char__H_Table (), __h_Nothing_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ get_Maybe_char__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __List_char__H_IMPL__
#define __List_char__H_IMPL__
void show_List_char (List_char list ) {
  { /* cicili#Let3120 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3122 */
    ({ /* cicili#Let3124 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3127 */
          { /* cicili#Let3131 */
            // ----------
            /* cicili#Block3133 */
            ({ /* cicili#Let3135 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3138 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3146 */
                  // ----------
                  /* cicili#Block3148 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let3157 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3162 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3164 */
        ({ /* cicili#Let3166 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3168 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3173 */
              // ----------
              /* cicili#Block3175 */
              rlist ;
            }));
        });
      });
    });
}
List_char push_List_char (char item , List_char list ) {
  return Cons_char (item , list );
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let3184 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3186 */
      ({ /* cicili#Let3188 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3192 */
            // ----------
            /* cicili#Block3194 */
            ({ /* cicili#Let3196 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3200 */
                  // ----------
                  /* cicili#Block3202 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3207 */
            // ----------
            /* cicili#Block3209 */
            list ;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let3215 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3217 */
      ({ /* cicili#Let3219 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3225 */
            // ----------
            /* cicili#Block3227 */
            Empty_char ();
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let3234 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3236 */
      ({ /* cicili#Let3238 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3244 */
            // ----------
            /* cicili#Block3246 */
            0;
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let3252 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3254 */
      ({ /* cicili#Let3256 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3261 */
            // ----------
            /* cicili#Block3263 */
            0;
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3273 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3275 */
        ({ /* cicili#Let3277 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3282 */
              // ----------
              /* cicili#Block3284 */
              Empty_char ();
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let3296 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3298 */
      ({ /* cicili#Let3300 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3307 */
            // ----------
            /* cicili#Block3309 */
            Nothing_char ();
          }));
      });
    });
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let3316 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3318 */
      ({ /* cicili#Let3320 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3324 */
            // ----------
            /* cicili#Block3326 */
            Empty_char ();
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let3331 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3335 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3337 */
      ({ /* cicili#Let3339 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3342 */
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3348 */
            // ----------
            /* cicili#Block3350 */
            free (this );
          }
      });
    }
  }
}
const List_char__H_Table * const get_List_char__H_Table () {
  static const List_char__H_Table table  = { free_List_char , show_List_char , append_List_char , push_List_char , last_List_char , take_List_char , hasLen_List_char , len_List_char , tail_List_char , drop_List_char , head_List_char , nth_List_char , next_List_char };
  return (&table );
}
List_char Empty_char () {
  { /* cicili#Let3359 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let3364 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_char__H_IMPL__ */ 
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3373 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return Cons_char (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char new_List_char_Wrap (const char item ) {
  return Cons_char (item , Empty_char ());
}
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
List_char new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3407 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return Cons_char (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let3418 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3420 */
    ({ /* cicili#Let3422 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn3425 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
void show_Range_int (Range_int list ) {
  { /* cicili#Let3439 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3441 */
    ({ /* cicili#Let3443 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let3448 */
          // ----------
          /* cicili#Block3450 */
          ({ /* cicili#Let3452 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3455 */
                printf ("%d", head );
                putchar (' ');
                (list -> __h_table -> show )(tail );
              }
            else
              { /* cicili#Let3464 */
                // ----------
                /* cicili#Block3466 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let3475 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3477 */
      ({ /* cicili#Let3479 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3481 */
            __auto_type ne  = (list -> __h_table -> next )(list );
            // ----------
            ({ /* cicili#Let3486 */
              // ----------
              /* cicili#Block3488 */
              ({ /* cicili#Let3490 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? Cons_Range_int (from , (list -> __h_table -> take )((--len ), ne ), to , step ) : ({ /* cicili#Let3496 */
                    // ----------
                    /* cicili#Block3498 */
                    Cons_Range_int (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let3503 */
            // ----------
            /* cicili#Block3505 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let3512 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3514 */
      ({ /* cicili#Let3516 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? Cons_Range_int ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let3522 */
            // ----------
            /* cicili#Block3524 */
            Empty_Range_int ();
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let3529 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3533 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3535 */
      ({ /* cicili#Let3537 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3540 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3546 */
            // ----------
            /* cicili#Block3548 */
            free (this );
          }
      });
    }
  }
}
const Range_int__H_Table * const get_Range_int__H_Table () {
  static const Range_int__H_Table table  = { free_Range_int , show_Range_int , take_Range_int , next_Range_int };
  return (&table );
}
Range_int Empty_Range_int () {
  { /* cicili#Let3557 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
Range_int Cons_Range_int (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let3562 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
#endif /* __Range_int__H_IMPL__ */ 
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Cons_Range_int (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Nothing_List_Bool () {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Nothing_t });
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __List_List_Bool__H_IMPL__
#define __List_List_Bool__H_IMPL__
void show_List_List_Bool (List_List_Bool list ) {
  { /* cicili#Let3596 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3598 */
    ({ /* cicili#Let3600 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3603 */
          { /* cicili#Let3607 */
            // ----------
            /* cicili#Block3609 */
            ({ /* cicili#Let3611 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3614 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3623 */
                  // ----------
                  /* cicili#Block3625 */
                  show_List_Bool (head );
                }
            });
          }
          show_List_List_Bool (tail );
        }
    });
  }
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let3635 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3640 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3642 */
        ({ /* cicili#Let3644 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3646 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3651 */
              // ----------
              /* cicili#Block3653 */
              rlist ;
            }));
        });
      });
    });
}
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list ) {
  return Cons_List_Bool (item , list );
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3662 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3664 */
      ({ /* cicili#Let3666 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3670 */
            // ----------
            /* cicili#Block3672 */
            ({ /* cicili#Let3674 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3678 */
                  // ----------
                  /* cicili#Block3680 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3685 */
            // ----------
            /* cicili#Block3687 */
            list ;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3693 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3695 */
      ({ /* cicili#Let3697 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3703 */
            // ----------
            /* cicili#Block3705 */
            Empty_List_Bool ();
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let3712 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3714 */
      ({ /* cicili#Let3716 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3722 */
            // ----------
            /* cicili#Block3724 */
            0;
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3730 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3732 */
      ({ /* cicili#Let3734 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3739 */
            // ----------
            /* cicili#Block3741 */
            0;
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3751 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3753 */
        ({ /* cicili#Let3755 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3760 */
              // ----------
              /* cicili#Block3762 */
              Empty_List_Bool ();
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let3774 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3776 */
      ({ /* cicili#Let3778 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3785 */
            // ----------
            /* cicili#Block3787 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3794 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3796 */
      ({ /* cicili#Let3798 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3802 */
            // ----------
            /* cicili#Block3804 */
            Empty_List_Bool ();
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let3809 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3813 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3815 */
      ({ /* cicili#Let3817 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3820 */
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3826 */
            // ----------
            /* cicili#Block3828 */
            free (this );
          }
      });
    }
  }
}
const List_List_Bool__H_Table * const get_List_List_Bool__H_Table () {
  static const List_List_Bool__H_Table table  = { free_List_List_Bool , show_List_List_Bool , append_List_List_Bool , push_List_List_Bool , last_List_List_Bool , take_List_List_Bool , hasLen_List_List_Bool , len_List_List_Bool , tail_List_List_Bool , drop_List_List_Bool , head_List_List_Bool , nth_List_List_Bool , next_List_List_Bool };
  return (&table );
}
List_List_Bool Empty_List_Bool () {
  { /* cicili#Let3837 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let3842 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_Bool__H_IMPL__ */ 
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_Bool ();
  else
    { /* cicili#Let3851 */
      List_Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_Bool ();
      else
        return Cons_List_Bool (item , new_List_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_List_Bool new_List_List_Bool_Wrap (const List_Bool item ) {
  return Cons_List_Bool (item , Empty_List_Bool ());
}
#ifndef __Maybe_List_List_Bool__H_IMPL__
#define __Maybe_List_List_Bool__H_IMPL__
void free_Maybe_List_List_Bool (Maybe_List_List_Bool * this ) {
}
const Maybe_List_List_Bool__H_Table * const get_Maybe_List_List_Bool__H_Table () {
  static const Maybe_List_List_Bool__H_Table table  = { free_Maybe_List_List_Bool };
  return (&table );
}
Maybe_List_List_Bool Nothing_List_List_Bool () {
  return ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h_Nothing_t });
}
Maybe_List_List_Bool Just_List_List_Bool (List_List_Bool value ) {
  return ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let3904 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3906 */
    ({ /* cicili#Let3908 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3911 */
          { /* cicili#Let3915 */
            // ----------
            /* cicili#Block3917 */
            ({ /* cicili#Let3919 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3922 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3931 */
                  // ----------
                  /* cicili#Block3933 */
                  show_List_int (head );
                }
            });
          }
          show_List_List_int (tail );
        }
    });
  }
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let3943 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3948 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3950 */
        ({ /* cicili#Let3952 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3954 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3959 */
              // ----------
              /* cicili#Block3961 */
              rlist ;
            }));
        });
      });
    });
}
List_List_int push_List_List_int (List_int item , List_List_int list ) {
  return Cons_List_int (item , list );
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3970 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3972 */
      ({ /* cicili#Let3974 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3978 */
            // ----------
            /* cicili#Block3980 */
            ({ /* cicili#Let3982 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3986 */
                  // ----------
                  /* cicili#Block3988 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3993 */
            // ----------
            /* cicili#Block3995 */
            list ;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let4001 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4003 */
      ({ /* cicili#Let4005 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4011 */
            // ----------
            /* cicili#Block4013 */
            Empty_List_int ();
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let4020 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4022 */
      ({ /* cicili#Let4024 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4030 */
            // ----------
            /* cicili#Block4032 */
            0;
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let4038 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4040 */
      ({ /* cicili#Let4042 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4047 */
            // ----------
            /* cicili#Block4049 */
            0;
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4059 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4061 */
        ({ /* cicili#Let4063 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4068 */
              // ----------
              /* cicili#Block4070 */
              Empty_List_int ();
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let4082 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4084 */
      ({ /* cicili#Let4086 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4093 */
            // ----------
            /* cicili#Block4095 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let4102 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4104 */
      ({ /* cicili#Let4106 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4110 */
            // ----------
            /* cicili#Block4112 */
            Empty_List_int ();
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let4117 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4121 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4123 */
      ({ /* cicili#Let4125 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4128 */
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4134 */
            // ----------
            /* cicili#Block4136 */
            free (this );
          }
      });
    }
  }
}
const List_List_int__H_Table * const get_List_List_int__H_Table () {
  static const List_List_int__H_Table table  = { free_List_List_int , show_List_List_int , append_List_List_int , push_List_List_int , last_List_List_int , take_List_List_int , hasLen_List_List_int , len_List_List_int , tail_List_List_int , drop_List_List_int , head_List_List_int , nth_List_List_int , next_List_List_int };
  return (&table );
}
List_List_int Empty_List_int () {
  { /* cicili#Let4145 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let4150 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_int__H_IMPL__ */ 
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let4159 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return Cons_List_int (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int new_List_List_int_Wrap (const List_int item ) {
  return Cons_List_int (item , Empty_List_int ());
}
#ifndef __Maybe_List_List_int__H_IMPL__
#define __Maybe_List_List_int__H_IMPL__
void free_Maybe_List_List_int (Maybe_List_List_int * this ) {
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table () {
  static const Maybe_List_List_int__H_Table table  = { free_Maybe_List_List_int };
  return (&table );
}
Maybe_List_List_int Nothing_List_List_int () {
  return ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Nothing_t });
}
Maybe_List_List_int Just_List_List_int (List_List_int value ) {
  return ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __List_List_char__H_IMPL__
#define __List_List_char__H_IMPL__
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let4212 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4214 */
    ({ /* cicili#Let4216 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4219 */
          { /* cicili#Let4223 */
            // ----------
            /* cicili#Block4225 */
            ({ /* cicili#Let4227 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4230 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4239 */
                  // ----------
                  /* cicili#Block4241 */
                  show_List_char (head );
                }
            });
          }
          show_List_List_char (tail );
        }
    });
  }
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let4251 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4256 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4258 */
        ({ /* cicili#Let4260 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4262 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4267 */
              // ----------
              /* cicili#Block4269 */
              rlist ;
            }));
        });
      });
    });
}
List_List_char push_List_List_char (List_char item , List_List_char list ) {
  return Cons_List_char (item , list );
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4278 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4280 */
      ({ /* cicili#Let4282 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4286 */
            // ----------
            /* cicili#Block4288 */
            ({ /* cicili#Let4290 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4294 */
                  // ----------
                  /* cicili#Block4296 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4301 */
            // ----------
            /* cicili#Block4303 */
            list ;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let4309 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4311 */
      ({ /* cicili#Let4313 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4319 */
            // ----------
            /* cicili#Block4321 */
            Empty_List_char ();
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let4328 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4330 */
      ({ /* cicili#Let4332 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4338 */
            // ----------
            /* cicili#Block4340 */
            0;
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4346 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4348 */
      ({ /* cicili#Let4350 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4355 */
            // ----------
            /* cicili#Block4357 */
            0;
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4367 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4369 */
        ({ /* cicili#Let4371 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4376 */
              // ----------
              /* cicili#Block4378 */
              Empty_List_char ();
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let4390 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4392 */
      ({ /* cicili#Let4394 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4401 */
            // ----------
            /* cicili#Block4403 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4410 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4412 */
      ({ /* cicili#Let4414 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4418 */
            // ----------
            /* cicili#Block4420 */
            Empty_List_char ();
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let4425 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4429 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4431 */
      ({ /* cicili#Let4433 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4436 */
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4442 */
            // ----------
            /* cicili#Block4444 */
            free (this );
          }
      });
    }
  }
}
const List_List_char__H_Table * const get_List_List_char__H_Table () {
  static const List_List_char__H_Table table  = { free_List_List_char , show_List_List_char , append_List_List_char , push_List_List_char , last_List_List_char , take_List_List_char , hasLen_List_List_char , len_List_List_char , tail_List_List_char , drop_List_List_char , head_List_List_char , nth_List_List_char , next_List_List_char };
  return (&table );
}
List_List_char Empty_List_char () {
  { /* cicili#Let4453 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let4458 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_char__H_IMPL__ */ 
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let4467 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return Cons_List_char (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char new_List_List_char_Wrap (const List_char item ) {
  return Cons_List_char (item , Empty_List_char ());
}
#ifndef __Maybe_List_List_char__H_IMPL__
#define __Maybe_List_List_char__H_IMPL__
void free_Maybe_List_List_char (Maybe_List_List_char * this ) {
}
const Maybe_List_List_char__H_Table * const get_Maybe_List_List_char__H_Table () {
  static const Maybe_List_List_char__H_Table table  = { free_Maybe_List_List_char };
  return (&table );
}
Maybe_List_List_char Nothing_List_List_char () {
  return ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h_Nothing_t });
}
Maybe_List_List_char Just_List_List_char (List_List_char value ) {
  return ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_List_char__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ get_Maybe_String__H_Table (), __h_Nothing_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ get_Maybe_String__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __List_String__H_IMPL__
#define __List_String__H_IMPL__
void show_List_String (List_String list ) {
  { /* cicili#Let4520 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4522 */
    ({ /* cicili#Let4524 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4527 */
          { /* cicili#Let4531 */
            // ----------
            /* cicili#Block4533 */
            ({ /* cicili#Let4535 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4538 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4547 */
                  // ----------
                  /* cicili#Block4549 */
                  show_List_char (head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let4559 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4564 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4566 */
        ({ /* cicili#Let4568 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4570 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4575 */
              // ----------
              /* cicili#Block4577 */
              rlist ;
            }));
        });
      });
    });
}
List_String push_List_String (String item , List_String list ) {
  return Cons_String (item , list );
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let4586 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4588 */
      ({ /* cicili#Let4590 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4594 */
            // ----------
            /* cicili#Block4596 */
            ({ /* cicili#Let4598 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4602 */
                  // ----------
                  /* cicili#Block4604 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4609 */
            // ----------
            /* cicili#Block4611 */
            list ;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let4617 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4619 */
      ({ /* cicili#Let4621 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4627 */
            // ----------
            /* cicili#Block4629 */
            Empty_String ();
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let4636 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4638 */
      ({ /* cicili#Let4640 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4646 */
            // ----------
            /* cicili#Block4648 */
            0;
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let4654 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4656 */
      ({ /* cicili#Let4658 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4663 */
            // ----------
            /* cicili#Block4665 */
            0;
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4675 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4677 */
        ({ /* cicili#Let4679 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4684 */
              // ----------
              /* cicili#Block4686 */
              Empty_String ();
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let4698 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4700 */
      ({ /* cicili#Let4702 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4709 */
            // ----------
            /* cicili#Block4711 */
            Nothing_String ();
          }));
      });
    });
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let4718 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4720 */
      ({ /* cicili#Let4722 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4726 */
            // ----------
            /* cicili#Block4728 */
            Empty_String ();
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let4733 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4737 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4739 */
      ({ /* cicili#Let4741 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4744 */
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4750 */
            // ----------
            /* cicili#Block4752 */
            free (this );
          }
      });
    }
  }
}
const List_String__H_Table * const get_List_String__H_Table () {
  static const List_String__H_Table table  = { free_List_String , show_List_String , append_List_String , push_List_String , last_List_String , take_List_String , hasLen_List_String , len_List_String , tail_List_String , drop_List_String , head_List_String , nth_List_String , next_List_String };
  return (&table );
}
List_String Empty_String () {
  { /* cicili#Let4761 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let4766 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_String__H_IMPL__ */ 
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let4775 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return Cons_String (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String new_List_String_Wrap (const String item ) {
  return Cons_String (item , Empty_String ());
}
#ifndef __Maybe_List_String__H_IMPL__
#define __Maybe_List_String__H_IMPL__
void free_Maybe_List_String (Maybe_List_String * this ) {
}
const Maybe_List_String__H_Table * const get_Maybe_List_String__H_Table () {
  static const Maybe_List_String__H_Table table  = { free_Maybe_List_String };
  return (&table );
}
Maybe_List_String Nothing_List_String () {
  return ((Maybe_List_String){ get_Maybe_List_String__H_Table (), __h_Nothing_t });
}
Maybe_List_String Just_List_String (List_String value ) {
  return ((Maybe_List_String){ get_Maybe_List_String__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Maybe_List_String__H_IMPL__ */ 
#ifndef __Rc_List_Bool__H_DECL__
#define __Rc_List_Bool__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_Bool_class_t __h_Rc_List_Bool_class_t ;
typedef __h_Rc_List_Bool_class_t * Rc_List_Bool ;
typedef void (*free_Rc_List_Bool_t) (Rc_List_Bool * this_ptr );
typedef struct Rc_List_Bool__H_Table {
  free_Rc_List_Bool_t freeClass ;
} Rc_List_Bool__H_Table;
typedef struct __h_Rc_List_Bool_class_t {
  const Rc_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4815 */
    struct { /* ciciliStruct4816 */
      List_Bool __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
            void (*__h_3_mem) (List_Bool * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_Bool_class_t;
Rc_List_Bool Keep_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer ));
__attribute__((weak)) Rc_List_Bool Default_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer )) {
  return Keep_Rc_List_Bool (pointer , authority , count , destructor );
}
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table ();
void free_Rc_List_Bool (Rc_List_Bool * this_ptr );
#endif /* __Rc_List_Bool__H_DECL__ */ 
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
#ifndef __Rc_List_Bool__H_IMPL__
#define __Rc_List_Bool__H_IMPL__
void free_Rc_List_Bool (Rc_List_Bool * this_ptr ) {
  { /* cicili#Let4847 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4849 */
      { /* cicili#Let4853 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4855 */
        ({ /* cicili#Let4857 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4862 */
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4865 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4867 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table () {
  static const Rc_List_Bool__H_Table table  = { free_Rc_List_Bool };
  return (&table );
}
Rc_List_Bool Keep_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer )) {
  { /* cicili#Let4876 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ get_Rc_List_Bool__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_Bool__H_IMPL__ */ 
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4885 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4887 */
      ({ /* cicili#Let4889 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let4896 */
            // ----------
            /* cicili#Block4898 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4907 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4909 */
      ({ /* cicili#Let4911 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4914 */
              (++(*count ));
              ({ /* cicili#Let4916 */
                __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4921 */
            // ----------
            /* cicili#Block4923 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4929 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4931 */
        __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        cloned_rc ;
      });
    });
}
#ifndef __Rc_List_int__H_DECL__
#define __Rc_List_int__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_int_class_t __h_Rc_List_int_class_t ;
typedef __h_Rc_List_int_class_t * Rc_List_int ;
typedef void (*free_Rc_List_int_t) (Rc_List_int * this_ptr );
typedef struct Rc_List_int__H_Table {
  free_Rc_List_int_t freeClass ;
} Rc_List_int__H_Table;
typedef struct __h_Rc_List_int_class_t {
  const Rc_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4947 */
    struct { /* ciciliStruct4948 */
      List_int __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
            void (*__h_3_mem) (List_int * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_int_class_t;
Rc_List_int Keep_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer ));
__attribute__((weak)) Rc_List_int Default_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer )) {
  return Keep_Rc_List_int (pointer , authority , count , destructor );
}
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table ();
void free_Rc_List_int (Rc_List_int * this_ptr );
#endif /* __Rc_List_int__H_DECL__ */ 
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
#ifndef __Rc_List_int__H_IMPL__
#define __Rc_List_int__H_IMPL__
void free_Rc_List_int (Rc_List_int * this_ptr ) {
  { /* cicili#Let4979 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4981 */
      { /* cicili#Let4985 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4987 */
        ({ /* cicili#Let4989 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4994 */
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4997 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4999 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table () {
  static const Rc_List_int__H_Table table  = { free_Rc_List_int };
  return (&table );
}
Rc_List_int Keep_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer )) {
  { /* cicili#Let5008 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ get_Rc_List_int__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_int__H_IMPL__ */ 
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let5017 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5019 */
      ({ /* cicili#Let5021 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let5028 */
            // ----------
            /* cicili#Block5030 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let5039 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5041 */
      ({ /* cicili#Let5043 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5046 */
              (++(*count ));
              ({ /* cicili#Let5048 */
                __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5053 */
            // ----------
            /* cicili#Block5055 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let5061 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5063 */
        __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        cloned_rc ;
      });
    });
}
#ifndef __Rc_List_char__H_DECL__
#define __Rc_List_char__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_char_class_t __h_Rc_List_char_class_t ;
typedef __h_Rc_List_char_class_t * Rc_List_char ;
typedef void (*free_Rc_List_char_t) (Rc_List_char * this_ptr );
typedef struct Rc_List_char__H_Table {
  free_Rc_List_char_t freeClass ;
} Rc_List_char__H_Table;
typedef struct __h_Rc_List_char_class_t {
  const Rc_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion5079 */
    struct { /* ciciliStruct5080 */
      List_char __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
            void (*__h_3_mem) (List_char * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_char_class_t;
Rc_List_char Keep_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer ));
__attribute__((weak)) Rc_List_char Default_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer )) {
  return Keep_Rc_List_char (pointer , authority , count , destructor );
}
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table ();
void free_Rc_List_char (Rc_List_char * this_ptr );
#endif /* __Rc_List_char__H_DECL__ */ 
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
#ifndef __Rc_List_char__H_IMPL__
#define __Rc_List_char__H_IMPL__
void free_Rc_List_char (Rc_List_char * this_ptr ) {
  { /* cicili#Let5111 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn5113 */
      { /* cicili#Let5117 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block5119 */
        ({ /* cicili#Let5121 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block5126 */
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn5129 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn5131 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table () {
  static const Rc_List_char__H_Table table  = { free_Rc_List_char };
  return (&table );
}
Rc_List_char Keep_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer )) {
  { /* cicili#Let5140 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ get_Rc_List_char__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let5149 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5151 */
      ({ /* cicili#Let5153 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let5160 */
            // ----------
            /* cicili#Block5162 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let5171 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5173 */
      ({ /* cicili#Let5175 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5178 */
              (++(*count ));
              ({ /* cicili#Let5180 */
                __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5185 */
            // ----------
            /* cicili#Block5187 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let5193 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5195 */
        __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        cloned_rc ;
      });
    });
}
#ifndef __Rc_String__H_DECL__
#define __Rc_String__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_String_class_t __h_Rc_String_class_t ;
typedef __h_Rc_String_class_t * Rc_String ;
typedef void (*free_Rc_String_t) (Rc_String * this_ptr );
typedef struct Rc_String__H_Table {
  free_Rc_String_t freeClass ;
} Rc_String__H_Table;
typedef struct __h_Rc_String_class_t {
  const Rc_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion5211 */
    struct { /* ciciliStruct5212 */
      String __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
            void (*__h_3_mem) (String * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_String_class_t;
Rc_String Keep_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer ));
__attribute__((weak)) Rc_String Default_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer )) {
  return Keep_Rc_String (pointer , authority , count , destructor );
}
const Rc_String__H_Table * const get_Rc_String__H_Table ();
void free_Rc_String (Rc_String * this_ptr );
#endif /* __Rc_String__H_DECL__ */ 
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
#ifndef __Rc_String__H_IMPL__
#define __Rc_String__H_IMPL__
void free_Rc_String (Rc_String * this_ptr ) {
  { /* cicili#Let5243 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn5245 */
      { /* cicili#Let5249 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block5251 */
        ({ /* cicili#Let5253 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block5258 */
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn5261 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn5263 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_String__H_Table * const get_Rc_String__H_Table () {
  static const Rc_String__H_Table table  = { free_Rc_String };
  return (&table );
}
Rc_String Keep_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer )) {
  { /* cicili#Let5272 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ get_Rc_String__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_String__H_IMPL__ */ 
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5281 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5283 */
      ({ /* cicili#Let5285 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let5292 */
            // ----------
            /* cicili#Block5294 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5303 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5305 */
      ({ /* cicili#Let5307 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5310 */
              (++(*count ));
              ({ /* cicili#Let5312 */
                __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5317 */
            // ----------
            /* cicili#Block5319 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let5325 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5327 */
        __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        cloned_rc ;
      });
    });
}
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5340 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5342 */
      ({ /* cicili#Let5344 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5349 */
            // ----------
            /* cicili#Block5351 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_All_Bool__H_IMPL__
#define __Monoid_All_Bool__H_IMPL__
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table () {
  static const Monoid_All_Bool__H_Table table  = { free_Monoid_All_Bool };
  return (&table );
}
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return ((Monoid_All_Bool){ get_Monoid_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_All_Bool__H_IMPL__ */ 
#ifndef __Semigroup_All_Bool__H_IMPL__
#define __Semigroup_All_Bool__H_IMPL__
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table () {
  static const Semigroup_All_Bool__H_Table table  = { free_Semigroup_All_Bool };
  return (&table );
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  return ((Semigroup_All_Bool){ get_Semigroup_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_All_Bool__H_IMPL__ */ 
Bool mempty_All_Bool () {
  return True ();
}
Bool mappend_All_Bool (Bool lhs , Bool rhs ) {
  return and_Bool (lhs , rhs );
}
Bool mconcat_All_Bool (List_Bool list ) {
  return foldr_Bool (mappend_All_Bool , True (), list );
}
Monoid_All_Bool get_Monoid_All_Bool () {
  return Monoid_All_Bool_ctor (mappend_All_Bool , True (), mconcat_All_Bool );
}
Semigroup_All_Bool get_Semigroup_All_Bool () {
  return Semigroup_All_Bool_ctor (mappend_All_Bool );
}
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5414 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5416 */
      ({ /* cicili#Let5418 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5423 */
            // ----------
            /* cicili#Block5425 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_Any_Bool__H_IMPL__
#define __Monoid_Any_Bool__H_IMPL__
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table () {
  static const Monoid_Any_Bool__H_Table table  = { free_Monoid_Any_Bool };
  return (&table );
}
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return ((Monoid_Any_Bool){ get_Monoid_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Any_Bool__H_IMPL__ */ 
#ifndef __Semigroup_Any_Bool__H_IMPL__
#define __Semigroup_Any_Bool__H_IMPL__
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table () {
  static const Semigroup_Any_Bool__H_Table table  = { free_Semigroup_Any_Bool };
  return (&table );
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  return ((Semigroup_Any_Bool){ get_Semigroup_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Any_Bool__H_IMPL__ */ 
Bool mempty_Any_Bool () {
  return False ();
}
Bool mappend_Any_Bool (Bool lhs , Bool rhs ) {
  return or_Bool (lhs , rhs );
}
Bool mconcat_Any_Bool (List_Bool list ) {
  return foldr_Bool (mappend_Any_Bool , False (), list );
}
Monoid_Any_Bool get_Monoid_Any_Bool () {
  return Monoid_Any_Bool_ctor (mappend_Any_Bool , False (), mconcat_Any_Bool );
}
Semigroup_Any_Bool get_Semigroup_Any_Bool () {
  return Semigroup_Any_Bool_ctor (mappend_Any_Bool );
}
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let5488 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5490 */
      ({ /* cicili#Let5492 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5497 */
            // ----------
            /* cicili#Block5499 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Sum_int__H_IMPL__
#define __Monoid_Sum_int__H_IMPL__
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table () {
  static const Monoid_Sum_int__H_Table table  = { free_Monoid_Sum_int };
  return (&table );
}
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return ((Monoid_Sum_int){ get_Monoid_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Sum_int__H_IMPL__ */ 
#ifndef __Semigroup_Sum_int__H_IMPL__
#define __Semigroup_Sum_int__H_IMPL__
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table () {
  static const Semigroup_Sum_int__H_Table table  = { free_Semigroup_Sum_int };
  return (&table );
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  return ((Semigroup_Sum_int){ get_Semigroup_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Sum_int__H_IMPL__ */ 
int mempty_Sum_int () {
  return 0;
}
int mappend_Sum_int (int lhs , int rhs ) {
  return (lhs  +  rhs  );
}
int mconcat_Sum_int (List_int list ) {
  return foldr_int (mappend_Sum_int , 0, list );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return Monoid_Sum_int_ctor (mappend_Sum_int , 0, mconcat_Sum_int );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return Semigroup_Sum_int_ctor (mappend_Sum_int );
}
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let5562 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5564 */
      ({ /* cicili#Let5566 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5571 */
            // ----------
            /* cicili#Block5573 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Product_int__H_IMPL__
#define __Monoid_Product_int__H_IMPL__
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table () {
  static const Monoid_Product_int__H_Table table  = { free_Monoid_Product_int };
  return (&table );
}
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return ((Monoid_Product_int){ get_Monoid_Product_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Product_int__H_IMPL__ */ 
#ifndef __Semigroup_Product_int__H_IMPL__
#define __Semigroup_Product_int__H_IMPL__
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table () {
  static const Semigroup_Product_int__H_Table table  = { free_Semigroup_Product_int };
  return (&table );
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  return ((Semigroup_Product_int){ get_Semigroup_Product_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Product_int__H_IMPL__ */ 
int mempty_Product_int () {
  return 1;
}
int mappend_Product_int (int lhs , int rhs ) {
  return (lhs  *  rhs  );
}
int mconcat_Product_int (List_int list ) {
  return foldr_int (mappend_Product_int , 1, list );
}
Monoid_Product_int get_Monoid_Product_int () {
  return Monoid_Product_int_ctor (mappend_Product_int , 1, mconcat_Product_int );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return Semigroup_Product_int_ctor (mappend_Product_int );
}
#ifndef __folds_List_Bool__H_IMPL__
#define __folds_List_Bool__H_IMPL__
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let5637 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5639 */
      ({ /* cicili#Let5641 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5646 */
            // ----------
            /* cicili#Block5648 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_Bool__H_IMPL__ */ 
#ifndef __Monoid_List_Bool__H_IMPL__
#define __Monoid_List_Bool__H_IMPL__
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table () {
  static const Monoid_List_Bool__H_Table table  = { free_Monoid_List_Bool };
  return (&table );
}
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return ((Monoid_List_Bool){ get_Monoid_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_Bool__H_IMPL__ */ 
#ifndef __Semigroup_List_Bool__H_IMPL__
#define __Semigroup_List_Bool__H_IMPL__
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table () {
  static const Semigroup_List_Bool__H_Table table  = { free_Semigroup_List_Bool };
  return (&table );
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  return ((Semigroup_List_Bool){ get_Semigroup_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_Bool__H_IMPL__ */ 
List_Bool mempty_List_Bool () {
  return Empty_Bool ();
}
List_Bool mappend_List_Bool (List_Bool lhs , List_Bool rhs ) {
  return append_List_Bool (lhs , rhs );
}
List_Bool mconcat_List_Bool (List_List_Bool list ) {
  return foldr_List_Bool (mappend_List_Bool , Empty_Bool (), list );
}
Monoid_List_Bool get_Monoid_List_Bool () {
  return Monoid_List_Bool_ctor (mappend_List_Bool , Empty_Bool (), mconcat_List_Bool );
}
Semigroup_List_Bool get_Semigroup_List_Bool () {
  return Semigroup_List_Bool_ctor (mappend_List_Bool );
}
#ifndef __folds_List_int__H_IMPL__
#define __folds_List_int__H_IMPL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let5727 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5729 */
      ({ /* cicili#Let5731 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5736 */
            // ----------
            /* cicili#Block5738 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_int__H_IMPL__ */ 
#ifndef __Monoid_List_int__H_IMPL__
#define __Monoid_List_int__H_IMPL__
void free_Monoid_List_int (Monoid_List_int * this ) {
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_int__H_IMPL__ */ 
#ifndef __Semigroup_List_int__H_IMPL__
#define __Semigroup_List_int__H_IMPL__
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  return ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_int__H_IMPL__ */ 
List_int mempty_List_int () {
  return Empty_int ();
}
List_int mappend_List_int (List_int lhs , List_int rhs ) {
  return append_List_int (lhs , rhs );
}
List_int mconcat_List_int (List_List_int list ) {
  return foldr_List_int (mappend_List_int , Empty_int (), list );
}
Monoid_List_int get_Monoid_List_int () {
  return Monoid_List_int_ctor (mappend_List_int , Empty_int (), mconcat_List_int );
}
Semigroup_List_int get_Semigroup_List_int () {
  return Semigroup_List_int_ctor (mappend_List_int );
}
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5817 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5819 */
      ({ /* cicili#Let5821 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5826 */
            // ----------
            /* cicili#Block5828 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_List_char__H_IMPL__
#define __Monoid_List_char__H_IMPL__
void free_Monoid_List_char (Monoid_List_char * this ) {
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table () {
  static const Monoid_List_char__H_Table table  = { free_Monoid_List_char };
  return (&table );
}
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return ((Monoid_List_char){ get_Monoid_List_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_char__H_IMPL__ */ 
#ifndef __Semigroup_List_char__H_IMPL__
#define __Semigroup_List_char__H_IMPL__
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table () {
  static const Semigroup_List_char__H_Table table  = { free_Semigroup_List_char };
  return (&table );
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  return ((Semigroup_List_char){ get_Semigroup_List_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_char__H_IMPL__ */ 
List_char mempty_List_char () {
  return Empty_char ();
}
List_char mappend_List_char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_List_char (List_List_char list ) {
  return foldr_List_char (mappend_List_char , Empty_char (), list );
}
Monoid_List_char get_Monoid_List_char () {
  return Monoid_List_char_ctor (mappend_List_char , Empty_char (), mconcat_List_char );
}
Semigroup_List_char get_Semigroup_List_char () {
  return Semigroup_List_char_ctor (mappend_List_char );
}
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5907 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5909 */
      ({ /* cicili#Let5911 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5916 */
            // ----------
            /* cicili#Block5918 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_String_char__H_IMPL__
#define __Monoid_String_char__H_IMPL__
void free_Monoid_String_char (Monoid_String_char * this ) {
}
const Monoid_String_char__H_Table * const get_Monoid_String_char__H_Table () {
  static const Monoid_String_char__H_Table table  = { free_Monoid_String_char };
  return (&table );
}
Monoid_String_char Monoid_String_char_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return ((Monoid_String_char){ get_Monoid_String_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_String_char__H_IMPL__ */ 
#ifndef __Semigroup_String_char__H_IMPL__
#define __Semigroup_String_char__H_IMPL__
void free_Semigroup_String_char (Semigroup_String_char * this ) {
}
const Semigroup_String_char__H_Table * const get_Semigroup_String_char__H_Table () {
  static const Semigroup_String_char__H_Table table  = { free_Semigroup_String_char };
  return (&table );
}
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend ) {
  return ((Semigroup_String_char){ get_Semigroup_String_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_String_char__H_IMPL__ */ 
List_char mempty_String_char () {
  return Empty_char ();
}
List_char mappend_String_char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_String_char (List_List_char list ) {
  return foldr_List_char (mappend_String_char , Empty_char (), list );
}
Monoid_String_char get_Monoid_String_char () {
  return Monoid_String_char_ctor (mappend_String_char , Empty_char (), mconcat_String_char );
}
Semigroup_String_char get_Semigroup_String_char () {
  return Semigroup_String_char_ctor (mappend_String_char );
}
#ifndef __Functor_List_int_int__H_IMPL__
#define __Functor_List_int_int__H_IMPL__
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* cicili#Let5998 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block6000 */
      ({ /* cicili#Let6002 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail )) : ({ /* cicili#Let6009 */
            // ----------
            /* cicili#Block6011 */
            Empty_int ();
          }));
      });
    });
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  return ((Functor_List_int_int){ get_Functor_List_int_int__H_Table (), __h___t });
}
#endif /* __Functor_List_int_int__H_IMPL__ */ 
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
#ifndef __Functor_List_int_Bool__H_IMPL__
#define __Functor_List_int_Bool__H_IMPL__
List_Bool fmap_Functor_List_int_Bool (int_to_Bool_t a_b , List_int input ) {
  return ({ /* cicili#Let6041 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block6043 */
      ({ /* cicili#Let6045 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail )) : ({ /* cicili#Let6052 */
            // ----------
            /* cicili#Block6054 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_List_int_Bool (Functor_List_int_Bool * this ) {
}
const Functor_List_int_Bool__H_Table * const get_Functor_List_int_Bool__H_Table () {
  static const Functor_List_int_Bool__H_Table table  = { free_Functor_List_int_Bool , fmap_Functor_List_int_Bool };
  return (&table );
}
Functor_List_int_Bool Functor_List_int_Bool_ctor () {
  return ((Functor_List_int_Bool){ get_Functor_List_int_Bool__H_Table (), __h___t });
}
#endif /* __Functor_List_int_Bool__H_IMPL__ */ 
Functor_List_int_Bool get_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
#ifndef __Functor_List_char_char__H_IMPL__
#define __Functor_List_char_char__H_IMPL__
List_char fmap_Functor_List_char_char (char_to_char_t a_b , List_char input ) {
  return ({ /* cicili#Let6084 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block6086 */
      ({ /* cicili#Let6088 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail )) : ({ /* cicili#Let6095 */
            // ----------
            /* cicili#Block6097 */
            Empty_char ();
          }));
      });
    });
}
void free_Functor_List_char_char (Functor_List_char_char * this ) {
}
const Functor_List_char_char__H_Table * const get_Functor_List_char_char__H_Table () {
  static const Functor_List_char_char__H_Table table  = { free_Functor_List_char_char , fmap_Functor_List_char_char };
  return (&table );
}
Functor_List_char_char Functor_List_char_char_ctor () {
  return ((Functor_List_char_char){ get_Functor_List_char_char__H_Table (), __h___t });
}
#endif /* __Functor_List_char_char__H_IMPL__ */ 
Functor_List_char_char get_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
#ifndef __Functor_List_char_Bool__H_IMPL__
#define __Functor_List_char_Bool__H_IMPL__
List_Bool fmap_Functor_List_char_Bool (char_to_Bool_t a_b , List_char input ) {
  return ({ /* cicili#Let6127 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block6129 */
      ({ /* cicili#Let6131 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail )) : ({ /* cicili#Let6138 */
            // ----------
            /* cicili#Block6140 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_List_char_Bool (Functor_List_char_Bool * this ) {
}
const Functor_List_char_Bool__H_Table * const get_Functor_List_char_Bool__H_Table () {
  static const Functor_List_char_Bool__H_Table table  = { free_Functor_List_char_Bool , fmap_Functor_List_char_Bool };
  return (&table );
}
Functor_List_char_Bool Functor_List_char_Bool_ctor () {
  return ((Functor_List_char_Bool){ get_Functor_List_char_Bool__H_Table (), __h___t });
}
#endif /* __Functor_List_char_Bool__H_IMPL__ */ 
Functor_List_char_Bool get_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
#ifndef __Functor_Maybe_int_int__H_IMPL__
#define __Functor_Maybe_int_int__H_IMPL__
Maybe_int fmap_Functor_Maybe_int_int (int_to_int_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let6170 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6172 */
      ({ /* cicili#Let6174 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let6184 */
            // ----------
            /* cicili#Block6186 */
            Nothing_int ();
          }));
      });
    });
}
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
const Functor_Maybe_int_int__H_Table * const get_Functor_Maybe_int_int__H_Table () {
  static const Functor_Maybe_int_int__H_Table table  = { free_Functor_Maybe_int_int , fmap_Functor_Maybe_int_int };
  return (&table );
}
Functor_Maybe_int_int Functor_Maybe_int_int_ctor () {
  return ((Functor_Maybe_int_int){ get_Functor_Maybe_int_int__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_int_int__H_IMPL__ */ 
Functor_Maybe_int_int get_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
}
#ifndef __Functor_Maybe_int_Bool__H_IMPL__
#define __Functor_Maybe_int_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_int_Bool (int_to_Bool_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let6216 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6218 */
      ({ /* cicili#Let6220 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6230 */
            // ----------
            /* cicili#Block6232 */
            Nothing_Bool ();
          }));
      });
    });
}
void free_Functor_Maybe_int_Bool (Functor_Maybe_int_Bool * this ) {
}
const Functor_Maybe_int_Bool__H_Table * const get_Functor_Maybe_int_Bool__H_Table () {
  static const Functor_Maybe_int_Bool__H_Table table  = { free_Functor_Maybe_int_Bool , fmap_Functor_Maybe_int_Bool };
  return (&table );
}
Functor_Maybe_int_Bool Functor_Maybe_int_Bool_ctor () {
  return ((Functor_Maybe_int_Bool){ get_Functor_Maybe_int_Bool__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_int_Bool__H_IMPL__ */ 
Functor_Maybe_int_Bool get_Functor_Maybe_int_Bool () {
  return Functor_Maybe_int_Bool_ctor ();
}
#ifndef __Functor_Maybe_char_char__H_IMPL__
#define __Functor_Maybe_char_char__H_IMPL__
Maybe_char fmap_Functor_Maybe_char_char (char_to_char_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let6262 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6264 */
      ({ /* cicili#Let6266 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_char (a_b (val )) : ({ /* cicili#Let6276 */
            // ----------
            /* cicili#Block6278 */
            Nothing_char ();
          }));
      });
    });
}
void free_Functor_Maybe_char_char (Functor_Maybe_char_char * this ) {
}
const Functor_Maybe_char_char__H_Table * const get_Functor_Maybe_char_char__H_Table () {
  static const Functor_Maybe_char_char__H_Table table  = { free_Functor_Maybe_char_char , fmap_Functor_Maybe_char_char };
  return (&table );
}
Functor_Maybe_char_char Functor_Maybe_char_char_ctor () {
  return ((Functor_Maybe_char_char){ get_Functor_Maybe_char_char__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_char_char__H_IMPL__ */ 
Functor_Maybe_char_char get_Functor_Maybe_char_char () {
  return Functor_Maybe_char_char_ctor ();
}
#ifndef __Functor_Maybe_char_Bool__H_IMPL__
#define __Functor_Maybe_char_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_char_Bool (char_to_Bool_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let6308 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6310 */
      ({ /* cicili#Let6312 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6322 */
            // ----------
            /* cicili#Block6324 */
            Nothing_Bool ();
          }));
      });
    });
}
void free_Functor_Maybe_char_Bool (Functor_Maybe_char_Bool * this ) {
}
const Functor_Maybe_char_Bool__H_Table * const get_Functor_Maybe_char_Bool__H_Table () {
  static const Functor_Maybe_char_Bool__H_Table table  = { free_Functor_Maybe_char_Bool , fmap_Functor_Maybe_char_Bool };
  return (&table );
}
Functor_Maybe_char_Bool Functor_Maybe_char_Bool_ctor () {
  return ((Functor_Maybe_char_Bool){ get_Functor_Maybe_char_Bool__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_char_Bool__H_IMPL__ */ 
Functor_Maybe_char_Bool get_Functor_Maybe_char_Bool () {
  return Functor_Maybe_char_Bool_ctor ();
}
