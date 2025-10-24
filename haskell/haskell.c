#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
void __h_free_data_router (void ** instance ) {
  ((void (*)(void * this ))(*instance ))(instance );
}
void __h_free_class_router (void *** instance ) {
  ((void (*)(void * this ))(*(*instance )))(instance );
}
void free_Bool (Bool * this ) {
}
Bool False () {
  return ((Bool){ free_Bool , __h_False_t });
}
Bool True () {
  return ((Bool){ free_Bool , __h___t });
}
Bool Bool_and (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let1659 */
      // ----------
      /* cicili#Block1661 */
      ({ /* cicili#Let1663 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let1667 */
            // ----------
            /* cicili#Block1669 */
            ({ /* cicili#Let1673 */
              // ----------
              /* cicili#Block1675 */
              ({ /* cicili#Let1677 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let1681 */
                    // ----------
                    /* cicili#Block1683 */
                    True ();
                  }));
              });
            });
          }));
      });
    });
}
Bool Bool_or (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let1688 */
      // ----------
      /* cicili#Block1690 */
      ({ /* cicili#Let1692 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let1696 */
            // ----------
            /* cicili#Block1698 */
            ({ /* cicili#Let1702 */
              // ----------
              /* cicili#Block1704 */
              ({ /* cicili#Let1706 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let1710 */
                    // ----------
                    /* cicili#Block1712 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
void show_Bool (Bool value ) {
  { /* cicili#Let1717 */
    // ----------
    /* cicili#Block1719 */
    ({ /* cicili#Let1721 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let1727 */
          // ----------
          /* cicili#Block1729 */
          printf ("%s", "True");
        }
    });
  }
}
void free_Ordering (Ordering * this ) {
}
Ordering LT () {
  return ((Ordering){ free_Ordering , __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ free_Ordering , __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ free_Ordering , __h___t });
}
void free_Maybe_Bool (Maybe_Bool * this ) {
}
Maybe_Bool Nothing_Bool () {
  return ((Maybe_Bool){ free_Maybe_Bool , __h_Nothing_t });
}
Maybe_Bool Just_Bool (Bool value ) {
  return ((Maybe_Bool){ free_Maybe_Bool , __h___t , .__h_data._ = { value }});
}
void free_Maybe_int (Maybe_int * this ) {
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ free_Maybe_int , __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ free_Maybe_int , __h___t , .__h_data._ = { value }});
}
void free_Maybe_char (Maybe_char * this ) {
}
Maybe_char Nothing_char () {
  return ((Maybe_char){ free_Maybe_char , __h_Nothing_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ free_Maybe_char , __h___t , .__h_data._ = { value }});
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let1783 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1787 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1789 */
      ({ /* cicili#Let1791 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1794 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let1801 */
                // ----------
                /* cicili#Block1803 */
                ({ /* cicili#Let1805 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let1809 */
                      // ----------
                      /* cicili#Block1811 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1817 */
            // ----------
            /* cicili#Block1819 */
            free (this );
          }
      });
    }
  }
}
List_Bool Empty_Bool () {
  { /* cicili#Let1823 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let1827 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let1836 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1850 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1852 */
      ({ /* cicili#Let1854 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1858 */
            // ----------
            /* cicili#Block1860 */
            Empty_Bool ();
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let1868 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1870 */
      ({ /* cicili#Let1872 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let1879 */
            // ----------
            /* cicili#Block1881 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1889 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1891 */
        ({ /* cicili#Let1893 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let1898 */
              // ----------
              /* cicili#Block1900 */
              Empty_Bool ();
            }));
        });
      }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1907 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1909 */
      ({ /* cicili#Let1911 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let1916 */
            // ----------
            /* cicili#Block1918 */
            0;
          }));
      });
    });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let1924 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1926 */
      ({ /* cicili#Let1928 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let1934 */
            // ----------
            /* cicili#Block1936 */
            0;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let1942 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1944 */
      ({ /* cicili#Let1946 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1958 */
            // ----------
            /* cicili#Block1960 */
            Empty_Bool ();
          }));
      });
    });
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1967 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1969 */
      ({ /* cicili#Let1971 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1975 */
            // ----------
            /* cicili#Block1977 */
            ({ /* cicili#Let1979 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let1983 */
                  // ----------
                  /* cicili#Block1985 */
                  last_List_Bool (tail );
                }));
            });
          }) : ({ /* cicili#Let1990 */
            // ----------
            /* cicili#Block1992 */
            list ;
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1997 */
      __auto_type last  = last_List_Bool (llist );
      // ----------
      ({ /* cicili#Let2002 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2004 */
        ({ /* cicili#Let2006 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2008 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2013 */
              // ----------
              /* cicili#Block2015 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let2021 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2023 */
    ({ /* cicili#Let2025 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2028 */
          { /* cicili#Let2032 */
            // ----------
            /* cicili#Block2034 */
            ({ /* cicili#Let2036 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2039 */
                  printf ("%s", ({ /* cicili#Let2046 */
                      // ----------
                      /* cicili#Block2048 */
                      ({ /* cicili#Let2050 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2054 */
                            // ----------
                            /* cicili#Block2056 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2061 */
                  // ----------
                  /* cicili#Block2063 */
                  printf ("%s", ({ /* cicili#Let2070 */
                      // ----------
                      /* cicili#Block2072 */
                      ({ /* cicili#Let2074 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2078 */
                            // ----------
                            /* cicili#Block2080 */
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
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let2089 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2093 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2095 */
      ({ /* cicili#Let2097 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2100 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2109 */
            // ----------
            /* cicili#Block2111 */
            free (this );
          }
      });
    }
  }
}
List_int Empty_int () {
  { /* cicili#Let2115 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let2119 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let2128 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let2142 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2144 */
      ({ /* cicili#Let2146 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2150 */
            // ----------
            /* cicili#Block2152 */
            Empty_int ();
          }));
      });
    });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2160 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2162 */
      ({ /* cicili#Let2164 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let2171 */
            // ----------
            /* cicili#Block2173 */
            Nothing_int ();
          }));
      });
    });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2181 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2183 */
        ({ /* cicili#Let2185 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let2190 */
              // ----------
              /* cicili#Block2192 */
              Empty_int ();
            }));
        });
      }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2199 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2201 */
      ({ /* cicili#Let2203 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let2208 */
            // ----------
            /* cicili#Block2210 */
            0;
          }));
      });
    });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2216 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2218 */
      ({ /* cicili#Let2220 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let2226 */
            // ----------
            /* cicili#Block2228 */
            0;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2234 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2236 */
      ({ /* cicili#Let2238 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let2250 */
            // ----------
            /* cicili#Block2252 */
            Empty_int ();
          }));
      });
    });
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let2259 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2261 */
      ({ /* cicili#Let2263 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2267 */
            // ----------
            /* cicili#Block2269 */
            ({ /* cicili#Let2271 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2275 */
                  // ----------
                  /* cicili#Block2277 */
                  last_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let2282 */
            // ----------
            /* cicili#Block2284 */
            list ;
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let2289 */
      __auto_type last  = last_List_int (llist );
      // ----------
      ({ /* cicili#Let2294 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2296 */
        ({ /* cicili#Let2298 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2300 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2305 */
              // ----------
              /* cicili#Block2307 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_int (List_int list ) {
  { /* cicili#Let2313 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2315 */
    ({ /* cicili#Let2317 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2320 */
          { /* cicili#Let2324 */
            // ----------
            /* cicili#Block2326 */
            ({ /* cicili#Let2328 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2331 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2339 */
                  // ----------
                  /* cicili#Block2341 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let2355 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2359 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2361 */
      ({ /* cicili#Let2363 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2366 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2375 */
            // ----------
            /* cicili#Block2377 */
            free (this );
          }
      });
    }
  }
}
List_char Empty_char () {
  { /* cicili#Let2381 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let2385 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let2394 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let2408 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2410 */
      ({ /* cicili#Let2412 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2416 */
            // ----------
            /* cicili#Block2418 */
            Empty_char ();
          }));
      });
    });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let2426 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2428 */
      ({ /* cicili#Let2430 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let2437 */
            // ----------
            /* cicili#Block2439 */
            Nothing_char ();
          }));
      });
    });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2447 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2449 */
        ({ /* cicili#Let2451 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let2456 */
              // ----------
              /* cicili#Block2458 */
              Empty_char ();
            }));
        });
      }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let2465 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2467 */
      ({ /* cicili#Let2469 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let2474 */
            // ----------
            /* cicili#Block2476 */
            0;
          }));
      });
    });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let2482 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2484 */
      ({ /* cicili#Let2486 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let2492 */
            // ----------
            /* cicili#Block2494 */
            0;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let2500 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2502 */
      ({ /* cicili#Let2504 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let2516 */
            // ----------
            /* cicili#Block2518 */
            Empty_char ();
          }));
      });
    });
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let2525 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2527 */
      ({ /* cicili#Let2529 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2533 */
            // ----------
            /* cicili#Block2535 */
            ({ /* cicili#Let2537 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2541 */
                  // ----------
                  /* cicili#Block2543 */
                  last_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let2548 */
            // ----------
            /* cicili#Block2550 */
            list ;
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let2555 */
      __auto_type last  = last_List_char (llist );
      // ----------
      ({ /* cicili#Let2560 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2562 */
        ({ /* cicili#Let2564 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2566 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2571 */
              // ----------
              /* cicili#Block2573 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_char (List_char list ) {
  { /* cicili#Let2579 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2581 */
    ({ /* cicili#Let2583 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2586 */
          { /* cicili#Let2590 */
            // ----------
            /* cicili#Block2592 */
            ({ /* cicili#Let2594 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2597 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2605 */
                  // ----------
                  /* cicili#Block2607 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
List_char new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let2619 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let2633 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2635 */
    ({ /* cicili#Let2637 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn2640 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let2652 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2656 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2658 */
      ({ /* cicili#Let2660 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2663 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2669 */
            // ----------
            /* cicili#Block2671 */
            free (this );
          }
      });
    }
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let2675 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let2679 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? __h_Cons_Range_int_ctor (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let2697 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2699 */
      ({ /* cicili#Let2701 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let2712 */
            // ----------
            /* cicili#Block2714 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let2721 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2723 */
      ({ /* cicili#Let2725 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2727 */
            __auto_type ne  = next_Range_int (list );
            // ----------
            ({ /* cicili#Let2732 */
              // ----------
              /* cicili#Block2734 */
              ({ /* cicili#Let2736 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let2747 */
                    // ----------
                    /* cicili#Block2749 */
                    __h_Cons_Range_int_ctor (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let2759 */
            // ----------
            /* cicili#Block2761 */
            Empty_Range_int ();
          }));
      });
    });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let2768 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2770 */
    ({ /* cicili#Let2772 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let2777 */
          // ----------
          /* cicili#Block2779 */
          ({ /* cicili#Let2781 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block2784 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let2793 */
                // ----------
                /* cicili#Block2795 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
Maybe_List_Bool Nothing_List_Bool () {
  return ((Maybe_List_Bool){ free_Maybe_List_Bool , __h_Nothing_t });
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  return ((Maybe_List_Bool){ free_Maybe_List_Bool , __h___t , .__h_data._ = { value }});
}
void free_Maybe_List_int (Maybe_List_int * this ) {
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ free_Maybe_List_int , __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ free_Maybe_List_int , __h___t , .__h_data._ = { value }});
}
void free_Maybe_List_char (Maybe_List_char * this ) {
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ free_Maybe_List_char , __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ free_Maybe_List_char , __h___t , .__h_data._ = { value }});
}
void free_Maybe_String (Maybe_String * this ) {
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ free_Maybe_String , __h_Nothing_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ free_Maybe_String , __h___t , .__h_data._ = { value }});
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let2854 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2858 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2860 */
      ({ /* cicili#Let2862 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2865 */
            printf ("destructuring List: %p, ", this );
            show_List_Bool (head );
            putchar ('\n');
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2875 */
            // ----------
            /* cicili#Block2877 */
            free (this );
          }
      });
    }
  }
}
List_List_Bool Empty_List_Bool () {
  { /* cicili#Let2881 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ free_List_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_List_Bool __h_Cons_List_Bool_ctor (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let2885 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ free_List_List_Bool , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_Bool ();
  else
    { /* cicili#Let2894 */
      List_Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_Bool ();
      else
        return __h_Cons_List_Bool_ctor (item , new_List_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let2908 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2910 */
      ({ /* cicili#Let2912 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2916 */
            // ----------
            /* cicili#Block2918 */
            Empty_List_Bool ();
          }));
      });
    });
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let2926 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2928 */
      ({ /* cicili#Let2930 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : nth_List_List_Bool ((--index ), tail )) : ({ /* cicili#Let2937 */
            // ----------
            /* cicili#Block2939 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2947 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2949 */
        ({ /* cicili#Let2951 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_Bool ((--index ), tail ) : ({ /* cicili#Let2956 */
              // ----------
              /* cicili#Block2958 */
              Empty_List_Bool ();
            }));
        });
      }));
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let2965 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2967 */
      ({ /* cicili#Let2969 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_Bool (tail ) ) : ({ /* cicili#Let2974 */
            // ----------
            /* cicili#Block2976 */
            0;
          }));
      });
    });
}
int has_len_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let2982 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2984 */
      ({ /* cicili#Let2986 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let2992 */
            // ----------
            /* cicili#Block2994 */
            0;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3000 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3002 */
      ({ /* cicili#Let3004 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_Bool_ctor (head , take_List_List_Bool ((--len ), tail )) : ({ /* cicili#Let3016 */
            // ----------
            /* cicili#Block3018 */
            Empty_List_Bool ();
          }));
      });
    });
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3025 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3027 */
      ({ /* cicili#Let3029 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3033 */
            // ----------
            /* cicili#Block3035 */
            ({ /* cicili#Let3037 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3041 */
                  // ----------
                  /* cicili#Block3043 */
                  last_List_List_Bool (tail );
                }));
            });
          }) : ({ /* cicili#Let3048 */
            // ----------
            /* cicili#Block3050 */
            list ;
          }));
      });
    });
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let3055 */
      __auto_type last  = last_List_List_Bool (llist );
      // ----------
      ({ /* cicili#Let3060 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3062 */
        ({ /* cicili#Let3064 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3066 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3071 */
              // ----------
              /* cicili#Block3073 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_Bool (List_List_Bool list ) {
  { /* cicili#Let3079 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3081 */
    ({ /* cicili#Let3083 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3086 */
          { /* cicili#Let3090 */
            // ----------
            /* cicili#Block3092 */
            ({ /* cicili#Let3094 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3097 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3106 */
                  // ----------
                  /* cicili#Block3108 */
                  show_List_Bool (head );
                }
            });
          }
          show_List_List_Bool (tail );
        }
    });
  }
}
void free_List_List_int (List_List_int * this_ptr ) {
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
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3142 */
            // ----------
            /* cicili#Block3144 */
            free (this );
          }
      });
    }
  }
}
List_List_int Empty_List_int () {
  { /* cicili#Let3148 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let3152 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let3161 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3175 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3177 */
      ({ /* cicili#Let3179 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3183 */
            // ----------
            /* cicili#Block3185 */
            Empty_List_int ();
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let3193 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3195 */
      ({ /* cicili#Let3197 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let3204 */
            // ----------
            /* cicili#Block3206 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3214 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3216 */
        ({ /* cicili#Let3218 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let3223 */
              // ----------
              /* cicili#Block3225 */
              Empty_List_int ();
            }));
        });
      }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3232 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3234 */
      ({ /* cicili#Let3236 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let3241 */
            // ----------
            /* cicili#Block3243 */
            0;
          }));
      });
    });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let3249 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3251 */
      ({ /* cicili#Let3253 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let3259 */
            // ----------
            /* cicili#Block3261 */
            0;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let3267 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3269 */
      ({ /* cicili#Let3271 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let3283 */
            // ----------
            /* cicili#Block3285 */
            Empty_List_int ();
          }));
      });
    });
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3292 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3294 */
      ({ /* cicili#Let3296 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3300 */
            // ----------
            /* cicili#Block3302 */
            ({ /* cicili#Let3304 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3308 */
                  // ----------
                  /* cicili#Block3310 */
                  last_List_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let3315 */
            // ----------
            /* cicili#Block3317 */
            list ;
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let3322 */
      __auto_type last  = last_List_List_int (llist );
      // ----------
      ({ /* cicili#Let3327 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3329 */
        ({ /* cicili#Let3331 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3333 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3338 */
              // ----------
              /* cicili#Block3340 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let3346 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3348 */
    ({ /* cicili#Let3350 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3353 */
          { /* cicili#Let3357 */
            // ----------
            /* cicili#Block3359 */
            ({ /* cicili#Let3361 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3364 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3373 */
                  // ----------
                  /* cicili#Block3375 */
                  show_List_int (head );
                }
            });
          }
          show_List_List_int (tail );
        }
    });
  }
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let3388 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3392 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3394 */
      ({ /* cicili#Let3396 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3399 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3409 */
            // ----------
            /* cicili#Block3411 */
            free (this );
          }
      });
    }
  }
}
List_List_char Empty_List_char () {
  { /* cicili#Let3415 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let3419 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let3428 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3442 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3444 */
      ({ /* cicili#Let3446 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3450 */
            // ----------
            /* cicili#Block3452 */
            Empty_List_char ();
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let3460 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3462 */
      ({ /* cicili#Let3464 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let3471 */
            // ----------
            /* cicili#Block3473 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3481 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3483 */
        ({ /* cicili#Let3485 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let3490 */
              // ----------
              /* cicili#Block3492 */
              Empty_List_char ();
            }));
        });
      }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3499 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3501 */
      ({ /* cicili#Let3503 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let3508 */
            // ----------
            /* cicili#Block3510 */
            0;
          }));
      });
    });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let3516 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3518 */
      ({ /* cicili#Let3520 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let3526 */
            // ----------
            /* cicili#Block3528 */
            0;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let3534 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3536 */
      ({ /* cicili#Let3538 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let3550 */
            // ----------
            /* cicili#Block3552 */
            Empty_List_char ();
          }));
      });
    });
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3559 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3561 */
      ({ /* cicili#Let3563 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3567 */
            // ----------
            /* cicili#Block3569 */
            ({ /* cicili#Let3571 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3575 */
                  // ----------
                  /* cicili#Block3577 */
                  last_List_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let3582 */
            // ----------
            /* cicili#Block3584 */
            list ;
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let3589 */
      __auto_type last  = last_List_List_char (llist );
      // ----------
      ({ /* cicili#Let3594 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3596 */
        ({ /* cicili#Let3598 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3600 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3605 */
              // ----------
              /* cicili#Block3607 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let3613 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3615 */
    ({ /* cicili#Let3617 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3620 */
          { /* cicili#Let3624 */
            // ----------
            /* cicili#Block3626 */
            ({ /* cicili#Let3628 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3631 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3640 */
                  // ----------
                  /* cicili#Block3642 */
                  show_List_char (head );
                }
            });
          }
          show_List_List_char (tail );
        }
    });
  }
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let3655 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3659 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3661 */
      ({ /* cicili#Let3663 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3666 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3676 */
            // ----------
            /* cicili#Block3678 */
            free (this );
          }
      });
    }
  }
}
List_String Empty_String () {
  { /* cicili#Let3682 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let3686 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let3695 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let3709 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3711 */
      ({ /* cicili#Let3713 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3717 */
            // ----------
            /* cicili#Block3719 */
            Empty_String ();
          }));
      });
    });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let3727 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3729 */
      ({ /* cicili#Let3731 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let3738 */
            // ----------
            /* cicili#Block3740 */
            Nothing_String ();
          }));
      });
    });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3748 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3750 */
        ({ /* cicili#Let3752 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let3757 */
              // ----------
              /* cicili#Block3759 */
              Empty_String ();
            }));
        });
      }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let3766 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3768 */
      ({ /* cicili#Let3770 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let3775 */
            // ----------
            /* cicili#Block3777 */
            0;
          }));
      });
    });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let3783 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3785 */
      ({ /* cicili#Let3787 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let3793 */
            // ----------
            /* cicili#Block3795 */
            0;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let3801 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3803 */
      ({ /* cicili#Let3805 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let3817 */
            // ----------
            /* cicili#Block3819 */
            Empty_String ();
          }));
      });
    });
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let3826 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3828 */
      ({ /* cicili#Let3830 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3834 */
            // ----------
            /* cicili#Block3836 */
            ({ /* cicili#Let3838 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3842 */
                  // ----------
                  /* cicili#Block3844 */
                  last_List_String (tail );
                }));
            });
          }) : ({ /* cicili#Let3849 */
            // ----------
            /* cicili#Block3851 */
            list ;
          }));
      });
    });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let3856 */
      __auto_type last  = last_List_String (llist );
      // ----------
      ({ /* cicili#Let3861 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3863 */
        ({ /* cicili#Let3865 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3867 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3872 */
              // ----------
              /* cicili#Block3874 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_String (List_String list ) {
  { /* cicili#Let3880 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3882 */
    ({ /* cicili#Let3884 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3887 */
          { /* cicili#Let3891 */
            // ----------
            /* cicili#Block3893 */
            ({ /* cicili#Let3895 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3898 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3907 */
                  // ----------
                  /* cicili#Block3909 */
                  show_List_char (head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
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
typedef struct __h_Rc_List_Bool_class_t {
  free_Rc_List_Bool_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion3926 */
    struct { /* ciciliStruct3927 */
      List_Bool __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_Bool * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_Bool_class_t;
Rc_List_Bool __h_Keep_Rc_List_Bool_ctor (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer ));
void free_Rc_List_Bool (Rc_List_Bool * this_ptr );
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
void free_Rc_List_Bool (Rc_List_Bool * this_ptr ) {
  { /* cicili#Let3952 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3954 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3958 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3960 */
        ({ /* cicili#Let3962 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3967 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3970 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3972 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
Rc_List_Bool __h_Keep_Rc_List_Bool_ctor (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer )) {
  { /* cicili#Let3975 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ free_Rc_List_Bool , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let3984 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3986 */
      ({ /* cicili#Let3988 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let3995 */
            // ----------
            /* cicili#Block3997 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4006 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4008 */
      ({ /* cicili#Let4010 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4013 */
              (++(*count ));
              ({ /* cicili#Let4015 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4025 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4027 */
                  ({ /* cicili#Let4029 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4034 */
            // ----------
            /* cicili#Block4036 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4042 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4044 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4055 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4057 */
          ({ /* cicili#Let4059 */
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
typedef struct __h_Rc_List_int_class_t {
  free_Rc_List_int_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion4072 */
    struct { /* ciciliStruct4073 */
      List_int __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_int * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_int_class_t;
Rc_List_int __h_Keep_Rc_List_int_ctor (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer ));
void free_Rc_List_int (Rc_List_int * this_ptr );
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
void free_Rc_List_int (Rc_List_int * this_ptr ) {
  { /* cicili#Let4098 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4100 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4104 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4106 */
        ({ /* cicili#Let4108 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4113 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4116 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4118 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
Rc_List_int __h_Keep_Rc_List_int_ctor (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer )) {
  { /* cicili#Let4121 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ free_Rc_List_int , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4130 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4132 */
      ({ /* cicili#Let4134 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let4141 */
            // ----------
            /* cicili#Block4143 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4152 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4154 */
      ({ /* cicili#Let4156 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4159 */
              (++(*count ));
              ({ /* cicili#Let4161 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4171 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4173 */
                  ({ /* cicili#Let4175 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4180 */
            // ----------
            /* cicili#Block4182 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let4188 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4190 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4201 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4203 */
          ({ /* cicili#Let4205 */
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
typedef struct __h_Rc_List_char_class_t {
  free_Rc_List_char_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion4218 */
    struct { /* ciciliStruct4219 */
      List_char __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_char * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_char_class_t;
Rc_List_char __h_Keep_Rc_List_char_ctor (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer ));
void free_Rc_List_char (Rc_List_char * this_ptr );
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
void free_Rc_List_char (Rc_List_char * this_ptr ) {
  { /* cicili#Let4244 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4246 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4250 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4252 */
        ({ /* cicili#Let4254 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4259 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4262 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4264 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
Rc_List_char __h_Keep_Rc_List_char_ctor (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer )) {
  { /* cicili#Let4267 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ free_Rc_List_char , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4276 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4278 */
      ({ /* cicili#Let4280 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let4287 */
            // ----------
            /* cicili#Block4289 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4298 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4300 */
      ({ /* cicili#Let4302 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4305 */
              (++(*count ));
              ({ /* cicili#Let4307 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4317 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4319 */
                  ({ /* cicili#Let4321 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4326 */
            // ----------
            /* cicili#Block4328 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let4334 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4336 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4347 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4349 */
          ({ /* cicili#Let4351 */
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
typedef struct __h_Rc_String_class_t {
  free_Rc_String_t __h_free_class ;
  char __h_ctor ;
  union { /* ciciliUnion4364 */
    struct { /* ciciliStruct4365 */
      String __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (String * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_String_class_t;
Rc_String __h_Keep_Rc_String_ctor (String pointer , size_t authority , int * count , void (*destructor) (String * pointer ));
void free_Rc_String (Rc_String * this_ptr );
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
void free_Rc_String (Rc_String * this_ptr ) {
  { /* cicili#Let4390 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4392 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4396 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4398 */
        ({ /* cicili#Let4400 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4405 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4408 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4410 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
Rc_String __h_Keep_Rc_String_ctor (String pointer , size_t authority , int * count , void (*destructor) (String * pointer )) {
  { /* cicili#Let4413 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ free_Rc_String , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4422 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4424 */
      ({ /* cicili#Let4426 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let4433 */
            // ----------
            /* cicili#Block4435 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4444 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4446 */
      ({ /* cicili#Let4448 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4451 */
              (++(*count ));
              ({ /* cicili#Let4453 */
                __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4463 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4465 */
                  ({ /* cicili#Let4467 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4472 */
            // ----------
            /* cicili#Block4474 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let4480 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4482 */
        __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4493 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4495 */
          ({ /* cicili#Let4497 */
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
  return ({ /* cicili#Let4506 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4508 */
      ({ /* cicili#Let4510 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4515 */
            // ----------
            /* cicili#Block4517 */
            neutral ;
          }));
      });
    });
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let4527 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4529 */
      ({ /* cicili#Let4531 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4536 */
            // ----------
            /* cicili#Block4538 */
            neutral ;
          }));
      });
    });
}
char foldr_char (char (*folder) (char lhs , char rhs ), char neutral , List_char foldable ) {
  return ({ /* cicili#Let4548 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4550 */
      ({ /* cicili#Let4552 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4557 */
            // ----------
            /* cicili#Block4559 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
Monoid_All_Bool __h_Monoid_All_Bool_ctor_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return ((Monoid_All_Bool){ free_Monoid_All_Bool , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  return ((Semigroup_All_Bool){ free_Semigroup_All_Bool , __h___t , .__h_data._ = { mappend }});
}
Bool Monoid_All_Bool_mappend (Bool lhs , Bool rhs ) {
  return Bool_and (lhs , rhs );
}
Bool Monoid_All_Bool_mconcat (List_Bool list ) {
  return foldr_Bool (Monoid_All_Bool_mappend , True (), list );
}
Monoid_All_Bool get_Monoid_All_Bool () {
  return __h_Monoid_All_Bool_ctor_ctor (Monoid_All_Bool_mappend , True (), Monoid_All_Bool_mconcat );
}
Semigroup_All_Bool get_Semigroup_All_Bool () {
  return Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend );
}
Bool mempty_All_Bool () {
  return True ();
}
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
Monoid_Any_Bool __h_Monoid_Any_Bool_ctor_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return ((Monoid_Any_Bool){ free_Monoid_Any_Bool , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  return ((Semigroup_Any_Bool){ free_Semigroup_Any_Bool , __h___t , .__h_data._ = { mappend }});
}
Bool Monoid_Any_Bool_mappend (Bool lhs , Bool rhs ) {
  return Bool_or (lhs , rhs );
}
Bool Monoid_Any_Bool_mconcat (List_Bool list ) {
  return foldr_Bool (Monoid_Any_Bool_mappend , False (), list );
}
Monoid_Any_Bool get_Monoid_Any_Bool () {
  return __h_Monoid_Any_Bool_ctor_ctor (Monoid_Any_Bool_mappend , False (), Monoid_Any_Bool_mconcat );
}
Semigroup_Any_Bool get_Semigroup_Any_Bool () {
  return Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend );
}
Bool mempty_Any_Bool () {
  return False ();
}
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
Monoid_Sum_int __h_Monoid_Sum_int_ctor_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return ((Monoid_Sum_int){ free_Monoid_Sum_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  return ((Semigroup_Sum_int){ free_Semigroup_Sum_int , __h___t , .__h_data._ = { mappend }});
}
int Monoid_Sum_int_mappend (int lhs , int rhs ) {
  return (lhs  +  rhs  );
}
int Monoid_Sum_int_mconcat (List_int list ) {
  return foldr_int (Monoid_Sum_int_mappend , 0, list );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return __h_Monoid_Sum_int_ctor_ctor (Monoid_Sum_int_mappend , 0, Monoid_Sum_int_mconcat );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend );
}
int mempty_Sum_int () {
  return 0;
}
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
Monoid_Product_int __h_Monoid_Product_int_ctor_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return ((Monoid_Product_int){ free_Monoid_Product_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  return ((Semigroup_Product_int){ free_Semigroup_Product_int , __h___t , .__h_data._ = { mappend }});
}
int Monoid_Product_int_mappend (int lhs , int rhs ) {
  return (lhs  *  rhs  );
}
int Monoid_Product_int_mconcat (List_int list ) {
  return foldr_int (Monoid_Product_int_mappend , 1, list );
}
Monoid_Product_int get_Monoid_Product_int () {
  return __h_Monoid_Product_int_ctor_ctor (Monoid_Product_int_mappend , 1, Monoid_Product_int_mconcat );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return Semigroup_Product_int_ctor (Monoid_Product_int_mappend );
}
int mempty_Product_int () {
  return 1;
}
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let4754 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4756 */
      ({ /* cicili#Let4758 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4763 */
            // ----------
            /* cicili#Block4765 */
            neutral ;
          }));
      });
    });
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let4780 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4782 */
      ({ /* cicili#Let4784 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4789 */
            // ----------
            /* cicili#Block4791 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let4806 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4808 */
      ({ /* cicili#Let4810 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4815 */
            // ----------
            /* cicili#Block4817 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
Monoid_List_Bool __h_Monoid_List_Bool_ctor_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return ((Monoid_List_Bool){ free_Monoid_List_Bool , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  return ((Semigroup_List_Bool){ free_Semigroup_List_Bool , __h___t , .__h_data._ = { mappend }});
}
List_Bool Monoid_List_Bool_mappend (List_Bool lhs , List_Bool rhs ) {
  return append_List_Bool (lhs , rhs );
}
List_Bool Monoid_List_Bool_mconcat (List_List_Bool list ) {
  return foldr_List_Bool (Monoid_List_Bool_mappend , Empty_Bool (), list );
}
Monoid_List_Bool get_Monoid_List_Bool () {
  return __h_Monoid_List_Bool_ctor_ctor (Monoid_List_Bool_mappend , Empty_Bool (), Monoid_List_Bool_mconcat );
}
Semigroup_List_Bool get_Semigroup_List_Bool () {
  return Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend );
}
List_Bool mempty_List_Bool () {
  return Empty_Bool ();
}
void free_Monoid_List_int (Monoid_List_int * this ) {
}
Monoid_List_int __h_Monoid_List_int_ctor_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return ((Monoid_List_int){ free_Monoid_List_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  return ((Semigroup_List_int){ free_Semigroup_List_int , __h___t , .__h_data._ = { mappend }});
}
List_int Monoid_List_int_mappend (List_int lhs , List_int rhs ) {
  return append_List_int (lhs , rhs );
}
List_int Monoid_List_int_mconcat (List_List_int list ) {
  return foldr_List_int (Monoid_List_int_mappend , Empty_int (), list );
}
Monoid_List_int get_Monoid_List_int () {
  return __h_Monoid_List_int_ctor_ctor (Monoid_List_int_mappend , Empty_int (), Monoid_List_int_mconcat );
}
Semigroup_List_int get_Semigroup_List_int () {
  return Semigroup_List_int_ctor (Monoid_List_int_mappend );
}
List_int mempty_List_int () {
  return Empty_int ();
}
void free_Monoid_List_char (Monoid_List_char * this ) {
}
Monoid_List_char __h_Monoid_List_char_ctor_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return ((Monoid_List_char){ free_Monoid_List_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  return ((Semigroup_List_char){ free_Semigroup_List_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_List_char_mappend (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char Monoid_List_char_mconcat (List_List_char list ) {
  return foldr_List_char (Monoid_List_char_mappend , Empty_char (), list );
}
Monoid_List_char get_Monoid_List_char () {
  return __h_Monoid_List_char_ctor_ctor (Monoid_List_char_mappend , Empty_char (), Monoid_List_char_mconcat );
}
Semigroup_List_char get_Semigroup_List_char () {
  return Semigroup_List_char_ctor (Monoid_List_char_mappend );
}
List_char mempty_List_char () {
  return Empty_char ();
}
void free_Monoid_String_char (Monoid_String_char * this ) {
}
Monoid_String_char __h_Monoid_String_char_ctor_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return ((Monoid_String_char){ free_Monoid_String_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_String_char (Semigroup_String_char * this ) {
}
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend ) {
  return ((Semigroup_String_char){ free_Semigroup_String_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_String_char_mappend (List_char lhs , List_char rhs ) {
  return append_String (lhs , rhs );
}
List_char Monoid_String_char_mconcat (List_List_char list ) {
  return foldr_List_char (Monoid_String_char_mappend , Empty_char (), list );
}
Monoid_String_char get_Monoid_String_char () {
  return __h_Monoid_String_char_ctor_ctor (Monoid_String_char_mappend , Empty_char (), Monoid_String_char_mconcat );
}
Semigroup_String_char get_Semigroup_String_char () {
  return Semigroup_String_char_ctor (Monoid_String_char_mappend );
}
List_char mempty_String_char () {
  return Empty_char ();
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
Functor_List_int_int __h_Functor_List_int_int_ctor_ctor (Functor_List_int_int_fmap_t fmap , Functor_List_int_int_a_b_t a_b ) {
  return ((Functor_List_int_int){ free_Functor_List_int_int , __h___t , .__h_data._ = { fmap , a_b }});
}
List_int Functor_List_int_int_fmap (Functor_List_int_int_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5072 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5074 */
      ({ /* cicili#Let5076 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (a_b (head ), Functor_List_int_int_fmap (a_b , tail )) : ({ /* cicili#Let5086 */
            // ----------
            /* cicili#Block5088 */
            Empty_int ();
          }));
      });
    });
}
Functor_List_int_int get_Functor_List_int_int (Functor_List_int_int_a_b_t a_b ) {
  return __h_Functor_List_int_int_ctor_ctor (Functor_List_int_int_fmap , a_b );
}
void free_Functor_List_int_Bool (Functor_List_int_Bool * this ) {
}
Functor_List_int_Bool __h_Functor_List_int_Bool_ctor_ctor (Functor_List_int_Bool_fmap_t fmap , Functor_List_int_Bool_a_b_t a_b ) {
  return ((Functor_List_int_Bool){ free_Functor_List_int_Bool , __h___t , .__h_data._ = { fmap , a_b }});
}
List_Bool Functor_List_int_Bool_fmap (Functor_List_int_Bool_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5121 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5123 */
      ({ /* cicili#Let5125 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_List_int_Bool_fmap (a_b , tail )) : ({ /* cicili#Let5135 */
            // ----------
            /* cicili#Block5137 */
            Empty_Bool ();
          }));
      });
    });
}
Functor_List_int_Bool get_Functor_List_int_Bool (Functor_List_int_Bool_a_b_t a_b ) {
  return __h_Functor_List_int_Bool_ctor_ctor (Functor_List_int_Bool_fmap , a_b );
}
void free_Functor_List_char_char (Functor_List_char_char * this ) {
}
Functor_List_char_char __h_Functor_List_char_char_ctor_ctor (Functor_List_char_char_fmap_t fmap , Functor_List_char_char_a_b_t a_b ) {
  return ((Functor_List_char_char){ free_Functor_List_char_char , __h___t , .__h_data._ = { fmap , a_b }});
}
List_char Functor_List_char_char_fmap (Functor_List_char_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5170 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5172 */
      ({ /* cicili#Let5174 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (a_b (head ), Functor_List_char_char_fmap (a_b , tail )) : ({ /* cicili#Let5184 */
            // ----------
            /* cicili#Block5186 */
            Empty_char ();
          }));
      });
    });
}
Functor_List_char_char get_Functor_List_char_char (Functor_List_char_char_a_b_t a_b ) {
  return __h_Functor_List_char_char_ctor_ctor (Functor_List_char_char_fmap , a_b );
}
void free_Functor_List_char_Bool (Functor_List_char_Bool * this ) {
}
Functor_List_char_Bool __h_Functor_List_char_Bool_ctor_ctor (Functor_List_char_Bool_fmap_t fmap , Functor_List_char_Bool_a_b_t a_b ) {
  return ((Functor_List_char_Bool){ free_Functor_List_char_Bool , __h___t , .__h_data._ = { fmap , a_b }});
}
List_Bool Functor_List_char_Bool_fmap (Functor_List_char_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5219 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5221 */
      ({ /* cicili#Let5223 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_List_char_Bool_fmap (a_b , tail )) : ({ /* cicili#Let5233 */
            // ----------
            /* cicili#Block5235 */
            Empty_Bool ();
          }));
      });
    });
}
Functor_List_char_Bool get_Functor_List_char_Bool (Functor_List_char_Bool_a_b_t a_b ) {
  return __h_Functor_List_char_Bool_ctor_ctor (Functor_List_char_Bool_fmap , a_b );
}
void free_Functor_String_char (Functor_String_char * this ) {
}
Functor_String_char __h_Functor_String_char_ctor_ctor (Functor_String_char_fmap_t fmap , Functor_String_char_a_b_t a_b ) {
  return ((Functor_String_char){ free_Functor_String_char , __h___t , .__h_data._ = { fmap , a_b }});
}
List_char Functor_String_char_fmap (Functor_String_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5268 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5270 */
      ({ /* cicili#Let5272 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (a_b (head ), Functor_String_char_fmap (a_b , tail )) : ({ /* cicili#Let5282 */
            // ----------
            /* cicili#Block5284 */
            Empty_char ();
          }));
      });
    });
}
Functor_String_char get_Functor_String_char (Functor_String_char_a_b_t a_b ) {
  return __h_Functor_String_char_ctor_ctor (Functor_String_char_fmap , a_b );
}
void free_Functor_String_Bool (Functor_String_Bool * this ) {
}
Functor_String_Bool __h_Functor_String_Bool_ctor_ctor (Functor_String_Bool_fmap_t fmap , Functor_String_Bool_a_b_t a_b ) {
  return ((Functor_String_Bool){ free_Functor_String_Bool , __h___t , .__h_data._ = { fmap , a_b }});
}
List_Bool Functor_String_Bool_fmap (Functor_String_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5317 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5319 */
      ({ /* cicili#Let5321 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_String_Bool_fmap (a_b , tail )) : ({ /* cicili#Let5331 */
            // ----------
            /* cicili#Block5333 */
            Empty_Bool ();
          }));
      });
    });
}
Functor_String_Bool get_Functor_String_Bool (Functor_String_Bool_a_b_t a_b ) {
  return __h_Functor_String_Bool_ctor_ctor (Functor_String_Bool_fmap , a_b );
}
