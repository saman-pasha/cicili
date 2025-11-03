#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
void __h_free_data_router (void *** instance ) {
  ((void (*)(void * this ))(*(*instance )))(instance );
}
void __h_free_class_router (void *** instance ) {
  ((void (*)(void * this ))(*(*((void ***)(*instance )))))(instance );
}
void show_Bool (Bool value ) {
  { /* cicili#Let1968 */
    // ----------
    /* cicili#Block1970 */
    ({ /* cicili#Let1972 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let1978 */
          // ----------
          /* cicili#Block1980 */
          printf ("%s", "True");
        }
    });
  }
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let1986 */
      // ----------
      /* cicili#Block1988 */
      ({ /* cicili#Let1990 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let1994 */
            // ----------
            /* cicili#Block1996 */
            ({ /* cicili#Let2000 */
              // ----------
              /* cicili#Block2002 */
              ({ /* cicili#Let2004 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let2008 */
                    // ----------
                    /* cicili#Block2010 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2016 */
      // ----------
      /* cicili#Block2018 */
      ({ /* cicili#Let2020 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let2024 */
            // ----------
            /* cicili#Block2026 */
            ({ /* cicili#Let2030 */
              // ----------
              /* cicili#Block2032 */
              ({ /* cicili#Let2034 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let2038 */
                    // ----------
                    /* cicili#Block2040 */
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
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let2127 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2129 */
    ({ /* cicili#Let2131 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2134 */
          { /* cicili#Let2138 */
            // ----------
            /* cicili#Block2140 */
            ({ /* cicili#Let2142 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2145 */
                  printf ("%s", ({ /* cicili#Let2152 */
                      // ----------
                      /* cicili#Block2154 */
                      ({ /* cicili#Let2156 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2160 */
                            // ----------
                            /* cicili#Block2162 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2167 */
                  // ----------
                  /* cicili#Block2169 */
                  printf ("%s", ({ /* cicili#Let2176 */
                      // ----------
                      /* cicili#Block2178 */
                      ({ /* cicili#Let2180 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2184 */
                            // ----------
                            /* cicili#Block2186 */
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
  return ({ /* cicili#Let2192 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2197 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2199 */
        ({ /* cicili#Let2201 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2203 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2208 */
              // ----------
              /* cicili#Block2210 */
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
  return ({ /* cicili#Let2219 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2221 */
      ({ /* cicili#Let2223 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2227 */
            // ----------
            /* cicili#Block2229 */
            ({ /* cicili#Let2231 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2235 */
                  // ----------
                  /* cicili#Block2237 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2242 */
            // ----------
            /* cicili#Block2244 */
            list ;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let2250 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2252 */
      ({ /* cicili#Let2254 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2260 */
            // ----------
            /* cicili#Block2262 */
            Empty_Bool ();
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let2269 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2271 */
      ({ /* cicili#Let2273 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2279 */
            // ----------
            /* cicili#Block2281 */
            0;
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2287 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2289 */
      ({ /* cicili#Let2291 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2296 */
            // ----------
            /* cicili#Block2298 */
            0;
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2308 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2310 */
        ({ /* cicili#Let2312 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2317 */
              // ----------
              /* cicili#Block2319 */
              Empty_Bool ();
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let2331 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2333 */
      ({ /* cicili#Let2335 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2342 */
            // ----------
            /* cicili#Block2344 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2351 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2353 */
      ({ /* cicili#Let2355 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2359 */
            // ----------
            /* cicili#Block2361 */
            Empty_Bool ();
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let2366 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2370 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2372 */
      ({ /* cicili#Let2374 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2377 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let2384 */
                // ----------
                /* cicili#Block2386 */
                ({ /* cicili#Let2388 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let2392 */
                      // ----------
                      /* cicili#Block2394 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2400 */
            // ----------
            /* cicili#Block2402 */
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
  { /* cicili#Let2411 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let2416 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let2425 */
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
void show_List_int (List_int list ) {
  { /* cicili#Let2444 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2446 */
    ({ /* cicili#Let2448 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2451 */
          { /* cicili#Let2455 */
            // ----------
            /* cicili#Block2457 */
            ({ /* cicili#Let2459 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2462 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2470 */
                  // ----------
                  /* cicili#Block2472 */
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
  return ({ /* cicili#Let2481 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2486 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2488 */
        ({ /* cicili#Let2490 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2492 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2497 */
              // ----------
              /* cicili#Block2499 */
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
  return ({ /* cicili#Let2508 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2510 */
      ({ /* cicili#Let2512 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2516 */
            // ----------
            /* cicili#Block2518 */
            ({ /* cicili#Let2520 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2524 */
                  // ----------
                  /* cicili#Block2526 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2531 */
            // ----------
            /* cicili#Block2533 */
            list ;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2539 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2541 */
      ({ /* cicili#Let2543 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2549 */
            // ----------
            /* cicili#Block2551 */
            Empty_int ();
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2558 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2560 */
      ({ /* cicili#Let2562 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2568 */
            // ----------
            /* cicili#Block2570 */
            0;
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2576 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2578 */
      ({ /* cicili#Let2580 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2585 */
            // ----------
            /* cicili#Block2587 */
            0;
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2597 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2599 */
        ({ /* cicili#Let2601 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2606 */
              // ----------
              /* cicili#Block2608 */
              Empty_int ();
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2620 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2622 */
      ({ /* cicili#Let2624 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2631 */
            // ----------
            /* cicili#Block2633 */
            Nothing_int ();
          }));
      });
    });
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let2640 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2642 */
      ({ /* cicili#Let2644 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2648 */
            // ----------
            /* cicili#Block2650 */
            Empty_int ();
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let2655 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2659 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2661 */
      ({ /* cicili#Let2663 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2666 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2675 */
            // ----------
            /* cicili#Block2677 */
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
  { /* cicili#Let2686 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let2691 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let2700 */
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
void show_List_char (List_char list ) {
  { /* cicili#Let2721 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2723 */
    ({ /* cicili#Let2725 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2728 */
          { /* cicili#Let2732 */
            // ----------
            /* cicili#Block2734 */
            ({ /* cicili#Let2736 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2739 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2747 */
                  // ----------
                  /* cicili#Block2749 */
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
  return ({ /* cicili#Let2758 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2763 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2765 */
        ({ /* cicili#Let2767 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2769 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2774 */
              // ----------
              /* cicili#Block2776 */
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
  return ({ /* cicili#Let2785 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2787 */
      ({ /* cicili#Let2789 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2793 */
            // ----------
            /* cicili#Block2795 */
            ({ /* cicili#Let2797 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2801 */
                  // ----------
                  /* cicili#Block2803 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2808 */
            // ----------
            /* cicili#Block2810 */
            list ;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let2816 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2818 */
      ({ /* cicili#Let2820 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2826 */
            // ----------
            /* cicili#Block2828 */
            Empty_char ();
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let2835 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2837 */
      ({ /* cicili#Let2839 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2845 */
            // ----------
            /* cicili#Block2847 */
            0;
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let2853 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2855 */
      ({ /* cicili#Let2857 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2862 */
            // ----------
            /* cicili#Block2864 */
            0;
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2874 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2876 */
        ({ /* cicili#Let2878 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2883 */
              // ----------
              /* cicili#Block2885 */
              Empty_char ();
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let2897 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2899 */
      ({ /* cicili#Let2901 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2908 */
            // ----------
            /* cicili#Block2910 */
            Nothing_char ();
          }));
      });
    });
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let2917 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2919 */
      ({ /* cicili#Let2921 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2925 */
            // ----------
            /* cicili#Block2927 */
            Empty_char ();
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let2932 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2936 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2938 */
      ({ /* cicili#Let2940 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2943 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2952 */
            // ----------
            /* cicili#Block2954 */
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
  { /* cicili#Let2963 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let2968 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let2977 */
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
    { /* cicili#Let2994 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return Cons_char (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let3005 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3007 */
    ({ /* cicili#Let3009 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn3012 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let3026 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3028 */
    ({ /* cicili#Let3030 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let3035 */
          // ----------
          /* cicili#Block3037 */
          ({ /* cicili#Let3039 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3042 */
                printf ("%d", head );
                putchar (' ');
                (list -> __h_table -> show )(tail );
              }
            else
              { /* cicili#Let3051 */
                // ----------
                /* cicili#Block3053 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let3062 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3064 */
      ({ /* cicili#Let3066 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3068 */
            __auto_type ne  = (list -> __h_table -> next )(list );
            // ----------
            ({ /* cicili#Let3073 */
              // ----------
              /* cicili#Block3075 */
              ({ /* cicili#Let3077 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? Cons_Range_int (from , (list -> __h_table -> take )((--len ), ne ), to , step ) : ({ /* cicili#Let3083 */
                    // ----------
                    /* cicili#Block3085 */
                    Cons_Range_int (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let3090 */
            // ----------
            /* cicili#Block3092 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let3099 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3101 */
      ({ /* cicili#Let3103 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? Cons_Range_int ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let3109 */
            // ----------
            /* cicili#Block3111 */
            Empty_Range_int ();
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let3116 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3120 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3122 */
      ({ /* cicili#Let3124 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3127 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3133 */
            // ----------
            /* cicili#Block3135 */
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
  { /* cicili#Let3144 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
Range_int Cons_Range_int (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let3149 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Cons_Range_int (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
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
void show_List_List_Bool (List_List_Bool list ) {
  { /* cicili#Let3234 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3236 */
    ({ /* cicili#Let3238 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3241 */
          { /* cicili#Let3245 */
            // ----------
            /* cicili#Block3247 */
            ({ /* cicili#Let3249 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3252 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3261 */
                  // ----------
                  /* cicili#Block3263 */
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
  return ({ /* cicili#Let3273 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3278 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3280 */
        ({ /* cicili#Let3282 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3284 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3289 */
              // ----------
              /* cicili#Block3291 */
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
  return ({ /* cicili#Let3300 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3302 */
      ({ /* cicili#Let3304 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3308 */
            // ----------
            /* cicili#Block3310 */
            ({ /* cicili#Let3312 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3316 */
                  // ----------
                  /* cicili#Block3318 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3323 */
            // ----------
            /* cicili#Block3325 */
            list ;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3331 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3333 */
      ({ /* cicili#Let3335 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3341 */
            // ----------
            /* cicili#Block3343 */
            Empty_List_Bool ();
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let3350 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3352 */
      ({ /* cicili#Let3354 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3360 */
            // ----------
            /* cicili#Block3362 */
            0;
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3368 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3370 */
      ({ /* cicili#Let3372 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3377 */
            // ----------
            /* cicili#Block3379 */
            0;
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3389 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3391 */
        ({ /* cicili#Let3393 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3398 */
              // ----------
              /* cicili#Block3400 */
              Empty_List_Bool ();
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let3412 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3414 */
      ({ /* cicili#Let3416 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3423 */
            // ----------
            /* cicili#Block3425 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3432 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3434 */
      ({ /* cicili#Let3436 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3440 */
            // ----------
            /* cicili#Block3442 */
            Empty_List_Bool ();
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let3447 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3451 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3453 */
      ({ /* cicili#Let3455 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3458 */
            printf ("destructuring List: %p, ", this );
            show_List_Bool (head );
            putchar ('\n');
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3468 */
            // ----------
            /* cicili#Block3470 */
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
  { /* cicili#Let3479 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let3484 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_Bool ();
  else
    { /* cicili#Let3493 */
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
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let3512 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3514 */
    ({ /* cicili#Let3516 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3519 */
          { /* cicili#Let3523 */
            // ----------
            /* cicili#Block3525 */
            ({ /* cicili#Let3527 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3530 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3539 */
                  // ----------
                  /* cicili#Block3541 */
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
  return ({ /* cicili#Let3551 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3556 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3558 */
        ({ /* cicili#Let3560 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3562 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3567 */
              // ----------
              /* cicili#Block3569 */
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
  return ({ /* cicili#Let3578 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3580 */
      ({ /* cicili#Let3582 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3586 */
            // ----------
            /* cicili#Block3588 */
            ({ /* cicili#Let3590 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3594 */
                  // ----------
                  /* cicili#Block3596 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3601 */
            // ----------
            /* cicili#Block3603 */
            list ;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let3609 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3611 */
      ({ /* cicili#Let3613 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3619 */
            // ----------
            /* cicili#Block3621 */
            Empty_List_int ();
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let3628 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3630 */
      ({ /* cicili#Let3632 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3638 */
            // ----------
            /* cicili#Block3640 */
            0;
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3646 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3648 */
      ({ /* cicili#Let3650 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3655 */
            // ----------
            /* cicili#Block3657 */
            0;
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3667 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3669 */
        ({ /* cicili#Let3671 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3676 */
              // ----------
              /* cicili#Block3678 */
              Empty_List_int ();
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let3690 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3692 */
      ({ /* cicili#Let3694 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3701 */
            // ----------
            /* cicili#Block3703 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3710 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3712 */
      ({ /* cicili#Let3714 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3718 */
            // ----------
            /* cicili#Block3720 */
            Empty_List_int ();
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let3725 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3729 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3731 */
      ({ /* cicili#Let3733 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3736 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3746 */
            // ----------
            /* cicili#Block3748 */
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
  { /* cicili#Let3757 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let3762 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let3771 */
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
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let3790 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3792 */
    ({ /* cicili#Let3794 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3797 */
          { /* cicili#Let3801 */
            // ----------
            /* cicili#Block3803 */
            ({ /* cicili#Let3805 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3808 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3817 */
                  // ----------
                  /* cicili#Block3819 */
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
  return ({ /* cicili#Let3829 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3834 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3836 */
        ({ /* cicili#Let3838 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3840 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3845 */
              // ----------
              /* cicili#Block3847 */
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
  return ({ /* cicili#Let3856 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3858 */
      ({ /* cicili#Let3860 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3864 */
            // ----------
            /* cicili#Block3866 */
            ({ /* cicili#Let3868 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3872 */
                  // ----------
                  /* cicili#Block3874 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3879 */
            // ----------
            /* cicili#Block3881 */
            list ;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let3887 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3889 */
      ({ /* cicili#Let3891 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3897 */
            // ----------
            /* cicili#Block3899 */
            Empty_List_char ();
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let3906 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3908 */
      ({ /* cicili#Let3910 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3916 */
            // ----------
            /* cicili#Block3918 */
            0;
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3924 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3926 */
      ({ /* cicili#Let3928 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3933 */
            // ----------
            /* cicili#Block3935 */
            0;
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3945 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3947 */
        ({ /* cicili#Let3949 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3954 */
              // ----------
              /* cicili#Block3956 */
              Empty_List_char ();
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let3968 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3970 */
      ({ /* cicili#Let3972 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3979 */
            // ----------
            /* cicili#Block3981 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3988 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3990 */
      ({ /* cicili#Let3992 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3996 */
            // ----------
            /* cicili#Block3998 */
            Empty_List_char ();
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let4003 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4007 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4009 */
      ({ /* cicili#Let4011 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4014 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4024 */
            // ----------
            /* cicili#Block4026 */
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
  { /* cicili#Let4035 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let4040 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let4049 */
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
void show_List_String (List_String list ) {
  { /* cicili#Let4068 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4070 */
    ({ /* cicili#Let4072 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4075 */
          { /* cicili#Let4079 */
            // ----------
            /* cicili#Block4081 */
            ({ /* cicili#Let4083 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4086 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4095 */
                  // ----------
                  /* cicili#Block4097 */
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
  return ({ /* cicili#Let4107 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4112 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4114 */
        ({ /* cicili#Let4116 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4118 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4123 */
              // ----------
              /* cicili#Block4125 */
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
  return ({ /* cicili#Let4134 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4136 */
      ({ /* cicili#Let4138 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4142 */
            // ----------
            /* cicili#Block4144 */
            ({ /* cicili#Let4146 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4150 */
                  // ----------
                  /* cicili#Block4152 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4157 */
            // ----------
            /* cicili#Block4159 */
            list ;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let4165 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4167 */
      ({ /* cicili#Let4169 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4175 */
            // ----------
            /* cicili#Block4177 */
            Empty_String ();
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let4184 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4186 */
      ({ /* cicili#Let4188 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4194 */
            // ----------
            /* cicili#Block4196 */
            0;
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let4202 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4204 */
      ({ /* cicili#Let4206 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4211 */
            // ----------
            /* cicili#Block4213 */
            0;
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4223 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4225 */
        ({ /* cicili#Let4227 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4232 */
              // ----------
              /* cicili#Block4234 */
              Empty_String ();
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let4246 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4248 */
      ({ /* cicili#Let4250 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4257 */
            // ----------
            /* cicili#Block4259 */
            Nothing_String ();
          }));
      });
    });
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let4266 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4268 */
      ({ /* cicili#Let4270 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4274 */
            // ----------
            /* cicili#Block4276 */
            Empty_String ();
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let4281 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4285 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4287 */
      ({ /* cicili#Let4289 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4292 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4302 */
            // ----------
            /* cicili#Block4304 */
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
  { /* cicili#Let4313 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let4318 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let4327 */
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
  union { /* ciciliUnion4350 */
    struct { /* ciciliStruct4351 */
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
void free_Rc_List_Bool (Rc_List_Bool * this_ptr );
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
void free_Rc_List_Bool (Rc_List_Bool * this_ptr ) {
  { /* cicili#Let4379 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4381 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4385 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4387 */
        ({ /* cicili#Let4389 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4394 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4397 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4399 */
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
  { /* cicili#Let4408 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ get_Rc_List_Bool__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4417 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4419 */
      ({ /* cicili#Let4421 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let4428 */
            // ----------
            /* cicili#Block4430 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4439 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4441 */
      ({ /* cicili#Let4443 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4446 */
              (++(*count ));
              ({ /* cicili#Let4448 */
                __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4453 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4455 */
                  ({ /* cicili#Let4457 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4462 */
            // ----------
            /* cicili#Block4464 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4470 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4472 */
        __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4478 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4480 */
          ({ /* cicili#Let4482 */
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
  union { /* ciciliUnion4497 */
    struct { /* ciciliStruct4498 */
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
void free_Rc_List_int (Rc_List_int * this_ptr );
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
void free_Rc_List_int (Rc_List_int * this_ptr ) {
  { /* cicili#Let4526 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4528 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4532 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4534 */
        ({ /* cicili#Let4536 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4541 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4544 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4546 */
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
  { /* cicili#Let4555 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ get_Rc_List_int__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4564 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4566 */
      ({ /* cicili#Let4568 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let4575 */
            // ----------
            /* cicili#Block4577 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4586 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4588 */
      ({ /* cicili#Let4590 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4593 */
              (++(*count ));
              ({ /* cicili#Let4595 */
                __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4600 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4602 */
                  ({ /* cicili#Let4604 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4609 */
            // ----------
            /* cicili#Block4611 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let4617 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4619 */
        __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4625 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4627 */
          ({ /* cicili#Let4629 */
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
  union { /* ciciliUnion4644 */
    struct { /* ciciliStruct4645 */
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
void free_Rc_List_char (Rc_List_char * this_ptr );
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
void free_Rc_List_char (Rc_List_char * this_ptr ) {
  { /* cicili#Let4673 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4675 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4679 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4681 */
        ({ /* cicili#Let4683 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4688 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4691 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4693 */
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
  { /* cicili#Let4702 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ get_Rc_List_char__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4711 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4713 */
      ({ /* cicili#Let4715 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let4722 */
            // ----------
            /* cicili#Block4724 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4733 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4735 */
      ({ /* cicili#Let4737 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4740 */
              (++(*count ));
              ({ /* cicili#Let4742 */
                __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4747 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4749 */
                  ({ /* cicili#Let4751 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4756 */
            // ----------
            /* cicili#Block4758 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let4764 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4766 */
        __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4772 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4774 */
          ({ /* cicili#Let4776 */
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
  union { /* ciciliUnion4791 */
    struct { /* ciciliStruct4792 */
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
void free_Rc_String (Rc_String * this_ptr );
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
void free_Rc_String (Rc_String * this_ptr ) {
  { /* cicili#Let4820 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4822 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4826 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4828 */
        ({ /* cicili#Let4830 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4835 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4838 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4840 */
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
  { /* cicili#Let4849 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ get_Rc_String__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4858 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4860 */
      ({ /* cicili#Let4862 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let4869 */
            // ----------
            /* cicili#Block4871 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4880 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4882 */
      ({ /* cicili#Let4884 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4887 */
              (++(*count ));
              ({ /* cicili#Let4889 */
                __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4894 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4896 */
                  ({ /* cicili#Let4898 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4903 */
            // ----------
            /* cicili#Block4905 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let4911 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4913 */
        __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4919 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4921 */
          ({ /* cicili#Let4923 */
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
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let4932 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4934 */
      ({ /* cicili#Let4936 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4941 */
            // ----------
            /* cicili#Block4943 */
            neutral ;
          }));
      });
    });
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let4953 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4955 */
      ({ /* cicili#Let4957 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4962 */
            // ----------
            /* cicili#Block4964 */
            neutral ;
          }));
      });
    });
}
char foldr_char (char (*folder) (char lhs , char rhs ), char neutral , List_char foldable ) {
  return ({ /* cicili#Let4974 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4976 */
      ({ /* cicili#Let4978 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4983 */
            // ----------
            /* cicili#Block4985 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table () {
  static const Monoid_All_Bool__H_Table table  = { free_Monoid_All_Bool };
  return (&table );
}
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return ((Monoid_All_Bool){ get_Monoid_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table () {
  static const Semigroup_All_Bool__H_Table table  = { free_Semigroup_All_Bool };
  return (&table );
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  return ((Semigroup_All_Bool){ get_Semigroup_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table () {
  static const Monoid_Any_Bool__H_Table table  = { free_Monoid_Any_Bool };
  return (&table );
}
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return ((Monoid_Any_Bool){ get_Monoid_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table () {
  static const Semigroup_Any_Bool__H_Table table  = { free_Semigroup_Any_Bool };
  return (&table );
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  return ((Semigroup_Any_Bool){ get_Semigroup_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table () {
  static const Monoid_Sum_int__H_Table table  = { free_Monoid_Sum_int };
  return (&table );
}
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return ((Monoid_Sum_int){ get_Monoid_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table () {
  static const Semigroup_Sum_int__H_Table table  = { free_Semigroup_Sum_int };
  return (&table );
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  return ((Semigroup_Sum_int){ get_Semigroup_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table () {
  static const Monoid_Product_int__H_Table table  = { free_Monoid_Product_int };
  return (&table );
}
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return ((Monoid_Product_int){ get_Monoid_Product_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table () {
  static const Semigroup_Product_int__H_Table table  = { free_Semigroup_Product_int };
  return (&table );
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  return ((Semigroup_Product_int){ get_Semigroup_Product_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let5204 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5206 */
      ({ /* cicili#Let5208 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5213 */
            // ----------
            /* cicili#Block5215 */
            neutral ;
          }));
      });
    });
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let5230 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5232 */
      ({ /* cicili#Let5234 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5239 */
            // ----------
            /* cicili#Block5241 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5256 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5258 */
      ({ /* cicili#Let5260 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5265 */
            // ----------
            /* cicili#Block5267 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table () {
  static const Monoid_List_Bool__H_Table table  = { free_Monoid_List_Bool };
  return (&table );
}
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return ((Monoid_List_Bool){ get_Monoid_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table () {
  static const Semigroup_List_Bool__H_Table table  = { free_Semigroup_List_Bool };
  return (&table );
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  return ((Semigroup_List_Bool){ get_Semigroup_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_List_int (Monoid_List_int * this ) {
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  return ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_List_char (Monoid_List_char * this ) {
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table () {
  static const Monoid_List_char__H_Table table  = { free_Monoid_List_char };
  return (&table );
}
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return ((Monoid_List_char){ get_Monoid_List_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table () {
  static const Semigroup_List_char__H_Table table  = { free_Semigroup_List_char };
  return (&table );
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  return ((Semigroup_List_char){ get_Semigroup_List_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
void free_Monoid_String_char (Monoid_String_char * this ) {
}
const Monoid_String_char__H_Table * const get_Monoid_String_char__H_Table () {
  static const Monoid_String_char__H_Table table  = { free_Monoid_String_char };
  return (&table );
}
Monoid_String_char Monoid_String_char_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return ((Monoid_String_char){ get_Monoid_String_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_String_char (Semigroup_String_char * this ) {
}
const Semigroup_String_char__H_Table * const get_Semigroup_String_char__H_Table () {
  static const Semigroup_String_char__H_Table table  = { free_Semigroup_String_char };
  return (&table );
}
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend ) {
  return ((Semigroup_String_char){ get_Semigroup_String_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
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
List_int fmap_Functor_List_int_int (Functor_List_int_int_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5538 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5540 */
      ({ /* cicili#Let5542 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail )) : ({ /* cicili#Let5549 */
            // ----------
            /* cicili#Block5551 */
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
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
List_Bool fmap_Functor_List_int_Bool (Functor_List_int_Bool_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5581 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5583 */
      ({ /* cicili#Let5585 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail )) : ({ /* cicili#Let5592 */
            // ----------
            /* cicili#Block5594 */
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
Functor_List_int_Bool get_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
List_char fmap_Functor_List_char_char (Functor_List_char_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5624 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5626 */
      ({ /* cicili#Let5628 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail )) : ({ /* cicili#Let5635 */
            // ----------
            /* cicili#Block5637 */
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
Functor_List_char_char get_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
List_Bool fmap_Functor_List_char_Bool (Functor_List_char_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5667 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5669 */
      ({ /* cicili#Let5671 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail )) : ({ /* cicili#Let5678 */
            // ----------
            /* cicili#Block5680 */
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
Functor_List_char_Bool get_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
List_char fmap_Functor_String_char (Functor_String_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5710 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5712 */
      ({ /* cicili#Let5714 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_String_char (a_b , tail )) : ({ /* cicili#Let5721 */
            // ----------
            /* cicili#Block5723 */
            Empty_char ();
          }));
      });
    });
}
void free_Functor_String_char (Functor_String_char * this ) {
}
const Functor_String_char__H_Table * const get_Functor_String_char__H_Table () {
  static const Functor_String_char__H_Table table  = { free_Functor_String_char , fmap_Functor_String_char };
  return (&table );
}
Functor_String_char Functor_String_char_ctor () {
  return ((Functor_String_char){ get_Functor_String_char__H_Table (), __h___t });
}
Functor_String_char get_Functor_String_char () {
  return Functor_String_char_ctor ();
}
List_Bool fmap_Functor_String_Bool (Functor_String_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5753 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5755 */
      ({ /* cicili#Let5757 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_String_Bool (a_b , tail )) : ({ /* cicili#Let5764 */
            // ----------
            /* cicili#Block5766 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_String_Bool (Functor_String_Bool * this ) {
}
const Functor_String_Bool__H_Table * const get_Functor_String_Bool__H_Table () {
  static const Functor_String_Bool__H_Table table  = { free_Functor_String_Bool , fmap_Functor_String_Bool };
  return (&table );
}
Functor_String_Bool Functor_String_Bool_ctor () {
  return ((Functor_String_Bool){ get_Functor_String_Bool__H_Table (), __h___t });
}
Functor_String_Bool get_Functor_String_Bool () {
  return Functor_String_Bool_ctor ();
}
