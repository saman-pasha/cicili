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
  { /* cicili#Let2157 */
    // ----------
    /* cicili#Block2159 */
    ({ /* cicili#Let2161 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let2167 */
          // ----------
          /* cicili#Block2169 */
          printf ("%s", "True");
        }
    });
  }
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2175 */
      // ----------
      /* cicili#Block2177 */
      ({ /* cicili#Let2179 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let2183 */
            // ----------
            /* cicili#Block2185 */
            ({ /* cicili#Let2189 */
              // ----------
              /* cicili#Block2191 */
              ({ /* cicili#Let2193 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let2197 */
                    // ----------
                    /* cicili#Block2199 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2205 */
      // ----------
      /* cicili#Block2207 */
      ({ /* cicili#Let2209 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let2213 */
            // ----------
            /* cicili#Block2215 */
            ({ /* cicili#Let2219 */
              // ----------
              /* cicili#Block2221 */
              ({ /* cicili#Let2223 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let2227 */
                    // ----------
                    /* cicili#Block2229 */
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
  { /* cicili#Let2282 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2284 */
    ({ /* cicili#Let2286 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2289 */
          { /* cicili#Let2293 */
            // ----------
            /* cicili#Block2295 */
            ({ /* cicili#Let2297 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2300 */
                  printf ("%s", ({ /* cicili#Let2307 */
                      // ----------
                      /* cicili#Block2309 */
                      ({ /* cicili#Let2311 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2315 */
                            // ----------
                            /* cicili#Block2317 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2322 */
                  // ----------
                  /* cicili#Block2324 */
                  printf ("%s", ({ /* cicili#Let2331 */
                      // ----------
                      /* cicili#Block2333 */
                      ({ /* cicili#Let2335 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2339 */
                            // ----------
                            /* cicili#Block2341 */
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
  return ({ /* cicili#Let2347 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2352 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2354 */
        ({ /* cicili#Let2356 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2358 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2363 */
              // ----------
              /* cicili#Block2365 */
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
  return ({ /* cicili#Let2374 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2376 */
      ({ /* cicili#Let2378 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2382 */
            // ----------
            /* cicili#Block2384 */
            ({ /* cicili#Let2386 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2390 */
                  // ----------
                  /* cicili#Block2392 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2397 */
            // ----------
            /* cicili#Block2399 */
            list ;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let2405 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2407 */
      ({ /* cicili#Let2409 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2415 */
            // ----------
            /* cicili#Block2417 */
            Empty_Bool ();
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let2424 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2426 */
      ({ /* cicili#Let2428 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2434 */
            // ----------
            /* cicili#Block2436 */
            0;
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2442 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2444 */
      ({ /* cicili#Let2446 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2451 */
            // ----------
            /* cicili#Block2453 */
            0;
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2463 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2465 */
        ({ /* cicili#Let2467 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2472 */
              // ----------
              /* cicili#Block2474 */
              Empty_Bool ();
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let2486 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2488 */
      ({ /* cicili#Let2490 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2497 */
            // ----------
            /* cicili#Block2499 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2506 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2508 */
      ({ /* cicili#Let2510 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2514 */
            // ----------
            /* cicili#Block2516 */
            Empty_Bool ();
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let2521 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2525 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2527 */
      ({ /* cicili#Let2529 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2532 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let2539 */
                // ----------
                /* cicili#Block2541 */
                ({ /* cicili#Let2543 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let2547 */
                      // ----------
                      /* cicili#Block2549 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2555 */
            // ----------
            /* cicili#Block2557 */
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
  { /* cicili#Let2566 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let2571 */
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
    { /* cicili#Let2580 */
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
  { /* cicili#Let2616 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2618 */
    ({ /* cicili#Let2620 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2623 */
          { /* cicili#Let2627 */
            // ----------
            /* cicili#Block2629 */
            ({ /* cicili#Let2631 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2634 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2642 */
                  // ----------
                  /* cicili#Block2644 */
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
  return ({ /* cicili#Let2653 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2658 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2660 */
        ({ /* cicili#Let2662 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2664 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2669 */
              // ----------
              /* cicili#Block2671 */
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
  return ({ /* cicili#Let2680 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2682 */
      ({ /* cicili#Let2684 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2688 */
            // ----------
            /* cicili#Block2690 */
            ({ /* cicili#Let2692 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2696 */
                  // ----------
                  /* cicili#Block2698 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2703 */
            // ----------
            /* cicili#Block2705 */
            list ;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2711 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2713 */
      ({ /* cicili#Let2715 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2721 */
            // ----------
            /* cicili#Block2723 */
            Empty_int ();
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2730 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2732 */
      ({ /* cicili#Let2734 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2740 */
            // ----------
            /* cicili#Block2742 */
            0;
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2748 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2750 */
      ({ /* cicili#Let2752 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2757 */
            // ----------
            /* cicili#Block2759 */
            0;
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2769 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2771 */
        ({ /* cicili#Let2773 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2778 */
              // ----------
              /* cicili#Block2780 */
              Empty_int ();
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2792 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2794 */
      ({ /* cicili#Let2796 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2803 */
            // ----------
            /* cicili#Block2805 */
            Nothing_int ();
          }));
      });
    });
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let2812 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2814 */
      ({ /* cicili#Let2816 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2820 */
            // ----------
            /* cicili#Block2822 */
            Empty_int ();
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let2827 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2831 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2833 */
      ({ /* cicili#Let2835 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2838 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2847 */
            // ----------
            /* cicili#Block2849 */
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
  { /* cicili#Let2858 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let2863 */
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
    { /* cicili#Let2872 */
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
  { /* cicili#Let2910 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2912 */
    ({ /* cicili#Let2914 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2917 */
          { /* cicili#Let2921 */
            // ----------
            /* cicili#Block2923 */
            ({ /* cicili#Let2925 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2928 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2936 */
                  // ----------
                  /* cicili#Block2938 */
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
  return ({ /* cicili#Let2947 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2952 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2954 */
        ({ /* cicili#Let2956 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2958 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2963 */
              // ----------
              /* cicili#Block2965 */
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
  return ({ /* cicili#Let2974 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2976 */
      ({ /* cicili#Let2978 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2982 */
            // ----------
            /* cicili#Block2984 */
            ({ /* cicili#Let2986 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2990 */
                  // ----------
                  /* cicili#Block2992 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2997 */
            // ----------
            /* cicili#Block2999 */
            list ;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let3005 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3007 */
      ({ /* cicili#Let3009 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3015 */
            // ----------
            /* cicili#Block3017 */
            Empty_char ();
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let3024 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3026 */
      ({ /* cicili#Let3028 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3034 */
            // ----------
            /* cicili#Block3036 */
            0;
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let3042 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3044 */
      ({ /* cicili#Let3046 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3051 */
            // ----------
            /* cicili#Block3053 */
            0;
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3063 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3065 */
        ({ /* cicili#Let3067 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3072 */
              // ----------
              /* cicili#Block3074 */
              Empty_char ();
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let3086 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3088 */
      ({ /* cicili#Let3090 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3097 */
            // ----------
            /* cicili#Block3099 */
            Nothing_char ();
          }));
      });
    });
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let3106 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3108 */
      ({ /* cicili#Let3110 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3114 */
            // ----------
            /* cicili#Block3116 */
            Empty_char ();
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let3121 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3125 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3127 */
      ({ /* cicili#Let3129 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3132 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3141 */
            // ----------
            /* cicili#Block3143 */
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
  { /* cicili#Let3152 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let3157 */
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
    { /* cicili#Let3166 */
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
List_char new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3183 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return Cons_char (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let3194 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3196 */
    ({ /* cicili#Let3198 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn3201 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
void show_Range_int (Range_int list ) {
  { /* cicili#Let3215 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3217 */
    ({ /* cicili#Let3219 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let3224 */
          // ----------
          /* cicili#Block3226 */
          ({ /* cicili#Let3228 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3231 */
                printf ("%d", head );
                putchar (' ');
                (list -> __h_table -> show )(tail );
              }
            else
              { /* cicili#Let3240 */
                // ----------
                /* cicili#Block3242 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let3251 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3253 */
      ({ /* cicili#Let3255 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3257 */
            __auto_type ne  = (list -> __h_table -> next )(list );
            // ----------
            ({ /* cicili#Let3262 */
              // ----------
              /* cicili#Block3264 */
              ({ /* cicili#Let3266 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? Cons_Range_int (from , (list -> __h_table -> take )((--len ), ne ), to , step ) : ({ /* cicili#Let3272 */
                    // ----------
                    /* cicili#Block3274 */
                    Cons_Range_int (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let3279 */
            // ----------
            /* cicili#Block3281 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let3288 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3290 */
      ({ /* cicili#Let3292 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? Cons_Range_int ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let3298 */
            // ----------
            /* cicili#Block3300 */
            Empty_Range_int ();
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let3305 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3309 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3311 */
      ({ /* cicili#Let3313 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3316 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3322 */
            // ----------
            /* cicili#Block3324 */
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
  { /* cicili#Let3333 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
Range_int Cons_Range_int (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let3338 */
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
  { /* cicili#Let3372 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3374 */
    ({ /* cicili#Let3376 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3379 */
          { /* cicili#Let3383 */
            // ----------
            /* cicili#Block3385 */
            ({ /* cicili#Let3387 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3390 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3399 */
                  // ----------
                  /* cicili#Block3401 */
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
  return ({ /* cicili#Let3411 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3416 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3418 */
        ({ /* cicili#Let3420 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3422 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3427 */
              // ----------
              /* cicili#Block3429 */
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
  return ({ /* cicili#Let3438 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3440 */
      ({ /* cicili#Let3442 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3446 */
            // ----------
            /* cicili#Block3448 */
            ({ /* cicili#Let3450 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3454 */
                  // ----------
                  /* cicili#Block3456 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3461 */
            // ----------
            /* cicili#Block3463 */
            list ;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3469 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3471 */
      ({ /* cicili#Let3473 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3479 */
            // ----------
            /* cicili#Block3481 */
            Empty_List_Bool ();
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let3488 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3490 */
      ({ /* cicili#Let3492 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3498 */
            // ----------
            /* cicili#Block3500 */
            0;
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3506 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3508 */
      ({ /* cicili#Let3510 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3515 */
            // ----------
            /* cicili#Block3517 */
            0;
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3527 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3529 */
        ({ /* cicili#Let3531 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3536 */
              // ----------
              /* cicili#Block3538 */
              Empty_List_Bool ();
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let3550 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3552 */
      ({ /* cicili#Let3554 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3561 */
            // ----------
            /* cicili#Block3563 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3570 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3572 */
      ({ /* cicili#Let3574 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3578 */
            // ----------
            /* cicili#Block3580 */
            Empty_List_Bool ();
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let3585 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3589 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3591 */
      ({ /* cicili#Let3593 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3596 */
            printf ("destructuring List: %p, ", this );
            show_List_Bool (head );
            putchar ('\n');
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3606 */
            // ----------
            /* cicili#Block3608 */
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
  { /* cicili#Let3617 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let3622 */
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
    { /* cicili#Let3631 */
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
  { /* cicili#Let3667 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3669 */
    ({ /* cicili#Let3671 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3674 */
          { /* cicili#Let3678 */
            // ----------
            /* cicili#Block3680 */
            ({ /* cicili#Let3682 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3685 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3694 */
                  // ----------
                  /* cicili#Block3696 */
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
  return ({ /* cicili#Let3706 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3711 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3713 */
        ({ /* cicili#Let3715 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3717 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3722 */
              // ----------
              /* cicili#Block3724 */
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
  return ({ /* cicili#Let3733 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3735 */
      ({ /* cicili#Let3737 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3741 */
            // ----------
            /* cicili#Block3743 */
            ({ /* cicili#Let3745 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3749 */
                  // ----------
                  /* cicili#Block3751 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3756 */
            // ----------
            /* cicili#Block3758 */
            list ;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let3764 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3766 */
      ({ /* cicili#Let3768 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3774 */
            // ----------
            /* cicili#Block3776 */
            Empty_List_int ();
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let3783 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3785 */
      ({ /* cicili#Let3787 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3793 */
            // ----------
            /* cicili#Block3795 */
            0;
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3801 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3803 */
      ({ /* cicili#Let3805 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3810 */
            // ----------
            /* cicili#Block3812 */
            0;
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3822 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3824 */
        ({ /* cicili#Let3826 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3831 */
              // ----------
              /* cicili#Block3833 */
              Empty_List_int ();
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let3845 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3847 */
      ({ /* cicili#Let3849 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3856 */
            // ----------
            /* cicili#Block3858 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3865 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3867 */
      ({ /* cicili#Let3869 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3873 */
            // ----------
            /* cicili#Block3875 */
            Empty_List_int ();
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let3880 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3884 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3886 */
      ({ /* cicili#Let3888 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3891 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3901 */
            // ----------
            /* cicili#Block3903 */
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
  { /* cicili#Let3912 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let3917 */
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
    { /* cicili#Let3926 */
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
  { /* cicili#Let3962 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3964 */
    ({ /* cicili#Let3966 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3969 */
          { /* cicili#Let3973 */
            // ----------
            /* cicili#Block3975 */
            ({ /* cicili#Let3977 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3980 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3989 */
                  // ----------
                  /* cicili#Block3991 */
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
  return ({ /* cicili#Let4001 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4006 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4008 */
        ({ /* cicili#Let4010 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4012 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4017 */
              // ----------
              /* cicili#Block4019 */
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
  return ({ /* cicili#Let4028 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4030 */
      ({ /* cicili#Let4032 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4036 */
            // ----------
            /* cicili#Block4038 */
            ({ /* cicili#Let4040 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4044 */
                  // ----------
                  /* cicili#Block4046 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4051 */
            // ----------
            /* cicili#Block4053 */
            list ;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let4059 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4061 */
      ({ /* cicili#Let4063 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4069 */
            // ----------
            /* cicili#Block4071 */
            Empty_List_char ();
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let4078 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4080 */
      ({ /* cicili#Let4082 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4088 */
            // ----------
            /* cicili#Block4090 */
            0;
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4096 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4098 */
      ({ /* cicili#Let4100 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4105 */
            // ----------
            /* cicili#Block4107 */
            0;
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4117 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4119 */
        ({ /* cicili#Let4121 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4126 */
              // ----------
              /* cicili#Block4128 */
              Empty_List_char ();
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let4140 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4142 */
      ({ /* cicili#Let4144 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4151 */
            // ----------
            /* cicili#Block4153 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4160 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4162 */
      ({ /* cicili#Let4164 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4168 */
            // ----------
            /* cicili#Block4170 */
            Empty_List_char ();
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let4175 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4179 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4181 */
      ({ /* cicili#Let4183 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4186 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4196 */
            // ----------
            /* cicili#Block4198 */
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
  { /* cicili#Let4207 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let4212 */
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
    { /* cicili#Let4221 */
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
  { /* cicili#Let4257 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4259 */
    ({ /* cicili#Let4261 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4264 */
          { /* cicili#Let4268 */
            // ----------
            /* cicili#Block4270 */
            ({ /* cicili#Let4272 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4275 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4284 */
                  // ----------
                  /* cicili#Block4286 */
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
  return ({ /* cicili#Let4296 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4301 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4303 */
        ({ /* cicili#Let4305 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4307 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4312 */
              // ----------
              /* cicili#Block4314 */
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
  return ({ /* cicili#Let4323 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4325 */
      ({ /* cicili#Let4327 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4331 */
            // ----------
            /* cicili#Block4333 */
            ({ /* cicili#Let4335 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4339 */
                  // ----------
                  /* cicili#Block4341 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4346 */
            // ----------
            /* cicili#Block4348 */
            list ;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let4354 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4356 */
      ({ /* cicili#Let4358 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4364 */
            // ----------
            /* cicili#Block4366 */
            Empty_String ();
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let4373 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4375 */
      ({ /* cicili#Let4377 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4383 */
            // ----------
            /* cicili#Block4385 */
            0;
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let4391 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4393 */
      ({ /* cicili#Let4395 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4400 */
            // ----------
            /* cicili#Block4402 */
            0;
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return (list -> __h_table -> drop )(1, list );
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4412 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4414 */
        ({ /* cicili#Let4416 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4421 */
              // ----------
              /* cicili#Block4423 */
              Empty_String ();
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let4435 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4437 */
      ({ /* cicili#Let4439 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4446 */
            // ----------
            /* cicili#Block4448 */
            Nothing_String ();
          }));
      });
    });
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let4455 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4457 */
      ({ /* cicili#Let4459 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4463 */
            // ----------
            /* cicili#Block4465 */
            Empty_String ();
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let4470 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4474 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4476 */
      ({ /* cicili#Let4478 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4481 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4491 */
            // ----------
            /* cicili#Block4493 */
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
  { /* cicili#Let4502 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let4507 */
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
    { /* cicili#Let4516 */
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
  union { /* ciciliUnion4539 */
    struct { /* ciciliStruct4540 */
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
  { /* cicili#Let4571 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4573 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4577 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4579 */
        ({ /* cicili#Let4581 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4586 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4589 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4591 */
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
  { /* cicili#Let4600 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ get_Rc_List_Bool__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_Bool__H_IMPL__ */ 
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4609 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4611 */
      ({ /* cicili#Let4613 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let4620 */
            // ----------
            /* cicili#Block4622 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4631 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4633 */
      ({ /* cicili#Let4635 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4638 */
              (++(*count ));
              ({ /* cicili#Let4640 */
                __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4645 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4647 */
                  ({ /* cicili#Let4649 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4654 */
            // ----------
            /* cicili#Block4656 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4662 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4664 */
        __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4670 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4672 */
          ({ /* cicili#Let4674 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
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
  union { /* ciciliUnion4689 */
    struct { /* ciciliStruct4690 */
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
  { /* cicili#Let4721 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4723 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4727 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4729 */
        ({ /* cicili#Let4731 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4736 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4739 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4741 */
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
  { /* cicili#Let4750 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ get_Rc_List_int__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_int__H_IMPL__ */ 
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4759 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4761 */
      ({ /* cicili#Let4763 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let4770 */
            // ----------
            /* cicili#Block4772 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4781 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4783 */
      ({ /* cicili#Let4785 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4788 */
              (++(*count ));
              ({ /* cicili#Let4790 */
                __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4795 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4797 */
                  ({ /* cicili#Let4799 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4804 */
            // ----------
            /* cicili#Block4806 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let4812 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4814 */
        __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4820 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4822 */
          ({ /* cicili#Let4824 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
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
  union { /* ciciliUnion4839 */
    struct { /* ciciliStruct4840 */
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
  { /* cicili#Let4871 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4873 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4877 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4879 */
        ({ /* cicili#Let4881 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4886 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4889 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4891 */
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
  { /* cicili#Let4900 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ get_Rc_List_char__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4909 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4911 */
      ({ /* cicili#Let4913 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let4920 */
            // ----------
            /* cicili#Block4922 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4931 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4933 */
      ({ /* cicili#Let4935 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4938 */
              (++(*count ));
              ({ /* cicili#Let4940 */
                __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4945 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4947 */
                  ({ /* cicili#Let4949 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4954 */
            // ----------
            /* cicili#Block4956 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let4962 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4964 */
        __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4970 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4972 */
          ({ /* cicili#Let4974 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
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
  union { /* ciciliUnion4989 */
    struct { /* ciciliStruct4990 */
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
  { /* cicili#Let5021 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn5023 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let5027 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block5029 */
        ({ /* cicili#Let5031 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block5036 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn5039 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn5041 */
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
  { /* cicili#Let5050 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ get_Rc_String__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_String__H_IMPL__ */ 
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5059 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5061 */
      ({ /* cicili#Let5063 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let5070 */
            // ----------
            /* cicili#Block5072 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5081 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5083 */
      ({ /* cicili#Let5085 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5088 */
              (++(*count ));
              ({ /* cicili#Let5090 */
                __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let5095 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block5097 */
                  ({ /* cicili#Let5099 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5104 */
            // ----------
            /* cicili#Block5106 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let5112 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5114 */
        __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let5120 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block5122 */
          ({ /* cicili#Let5124 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
        cloned_rc ;
      });
    });
}
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5136 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5138 */
      ({ /* cicili#Let5140 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5145 */
            // ----------
            /* cicili#Block5147 */
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
  return ({ /* cicili#Let5210 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5212 */
      ({ /* cicili#Let5214 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5219 */
            // ----------
            /* cicili#Block5221 */
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
  return ({ /* cicili#Let5284 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5286 */
      ({ /* cicili#Let5288 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5293 */
            // ----------
            /* cicili#Block5295 */
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
  return ({ /* cicili#Let5358 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5360 */
      ({ /* cicili#Let5362 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5367 */
            // ----------
            /* cicili#Block5369 */
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
  return ({ /* cicili#Let5433 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5435 */
      ({ /* cicili#Let5437 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5442 */
            // ----------
            /* cicili#Block5444 */
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
  return ({ /* cicili#Let5523 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5525 */
      ({ /* cicili#Let5527 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5532 */
            // ----------
            /* cicili#Block5534 */
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
  return ({ /* cicili#Let5613 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5615 */
      ({ /* cicili#Let5617 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5622 */
            // ----------
            /* cicili#Block5624 */
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
  return ({ /* cicili#Let5703 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5705 */
      ({ /* cicili#Let5707 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5712 */
            // ----------
            /* cicili#Block5714 */
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
  return ({ /* cicili#Let5794 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5796 */
      ({ /* cicili#Let5798 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail )) : ({ /* cicili#Let5805 */
            // ----------
            /* cicili#Block5807 */
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
  return ({ /* cicili#Let5837 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5839 */
      ({ /* cicili#Let5841 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail )) : ({ /* cicili#Let5848 */
            // ----------
            /* cicili#Block5850 */
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
  return ({ /* cicili#Let5880 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5882 */
      ({ /* cicili#Let5884 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail )) : ({ /* cicili#Let5891 */
            // ----------
            /* cicili#Block5893 */
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
  return ({ /* cicili#Let5923 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5925 */
      ({ /* cicili#Let5927 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail )) : ({ /* cicili#Let5934 */
            // ----------
            /* cicili#Block5936 */
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
  return ({ /* cicili#Let5966 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block5968 */
      ({ /* cicili#Let5970 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let5980 */
            // ----------
            /* cicili#Block5982 */
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
  return ({ /* cicili#Let6012 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6014 */
      ({ /* cicili#Let6016 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6026 */
            // ----------
            /* cicili#Block6028 */
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
  return ({ /* cicili#Let6058 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6060 */
      ({ /* cicili#Let6062 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_char (a_b (val )) : ({ /* cicili#Let6072 */
            // ----------
            /* cicili#Block6074 */
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
  return ({ /* cicili#Let6104 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6106 */
      ({ /* cicili#Let6108 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6118 */
            // ----------
            /* cicili#Block6120 */
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
