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
  return ({ /* cicili#Let1483 */
      // ----------
      /* cicili#Block1485 */
      ({ /* cicili#Let1487 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let1491 */
            // ----------
            /* cicili#Block1493 */
            ({ /* cicili#Let1497 */
              // ----------
              /* cicili#Block1499 */
              ({ /* cicili#Let1501 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let1505 */
                    // ----------
                    /* cicili#Block1507 */
                    True ();
                  }));
              });
            });
          }));
      });
    });
}
Bool Bool_or (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let1512 */
      // ----------
      /* cicili#Block1514 */
      ({ /* cicili#Let1516 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let1520 */
            // ----------
            /* cicili#Block1522 */
            ({ /* cicili#Let1526 */
              // ----------
              /* cicili#Block1528 */
              ({ /* cicili#Let1530 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let1534 */
                    // ----------
                    /* cicili#Block1536 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
void show_Bool (Bool value ) {
  { /* cicili#Let1541 */
    // ----------
    /* cicili#Block1543 */
    ({ /* cicili#Let1545 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let1551 */
          // ----------
          /* cicili#Block1553 */
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
  { /* cicili#Let1607 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1611 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1613 */
      ({ /* cicili#Let1615 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1618 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let1625 */
                // ----------
                /* cicili#Block1627 */
                ({ /* cicili#Let1629 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let1633 */
                      // ----------
                      /* cicili#Block1635 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1641 */
            // ----------
            /* cicili#Block1643 */
            free (this );
          }
      });
    }
  }
}
List_Bool Empty_Bool () {
  { /* cicili#Let1647 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let1651 */
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
    { /* cicili#Let1660 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1674 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1676 */
      ({ /* cicili#Let1678 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1682 */
            // ----------
            /* cicili#Block1684 */
            Empty_Bool ();
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let1692 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1694 */
      ({ /* cicili#Let1696 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let1703 */
            // ----------
            /* cicili#Block1705 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1713 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1715 */
        ({ /* cicili#Let1717 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let1722 */
              // ----------
              /* cicili#Block1724 */
              Empty_Bool ();
            }));
        });
      }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1731 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1733 */
      ({ /* cicili#Let1735 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let1740 */
            // ----------
            /* cicili#Block1742 */
            0;
          }));
      });
    });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let1748 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1750 */
      ({ /* cicili#Let1752 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let1758 */
            // ----------
            /* cicili#Block1760 */
            0;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let1766 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1768 */
      ({ /* cicili#Let1770 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1782 */
            // ----------
            /* cicili#Block1784 */
            Empty_Bool ();
          }));
      });
    });
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1791 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1793 */
      ({ /* cicili#Let1795 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1799 */
            // ----------
            /* cicili#Block1801 */
            ({ /* cicili#Let1803 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let1807 */
                  // ----------
                  /* cicili#Block1809 */
                  last_List_Bool (tail );
                }));
            });
          }) : ({ /* cicili#Let1814 */
            // ----------
            /* cicili#Block1816 */
            list ;
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1821 */
      __auto_type last  = last_List_Bool (llist );
      // ----------
      ({ /* cicili#Let1826 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1828 */
        ({ /* cicili#Let1830 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1832 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let1837 */
              // ----------
              /* cicili#Block1839 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1845 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1847 */
    ({ /* cicili#Let1849 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1852 */
          { /* cicili#Let1856 */
            // ----------
            /* cicili#Block1858 */
            ({ /* cicili#Let1860 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1863 */
                  printf ("%s", ({ /* cicili#Let1870 */
                      // ----------
                      /* cicili#Block1872 */
                      ({ /* cicili#Let1874 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1878 */
                            // ----------
                            /* cicili#Block1880 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1885 */
                  // ----------
                  /* cicili#Block1887 */
                  printf ("%s", ({ /* cicili#Let1894 */
                      // ----------
                      /* cicili#Block1896 */
                      ({ /* cicili#Let1898 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1902 */
                            // ----------
                            /* cicili#Block1904 */
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
  { /* cicili#Let1913 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1917 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1919 */
      ({ /* cicili#Let1921 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1924 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1933 */
            // ----------
            /* cicili#Block1935 */
            free (this );
          }
      });
    }
  }
}
List_int Empty_int () {
  { /* cicili#Let1939 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1943 */
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
    { /* cicili#Let1952 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1966 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1968 */
      ({ /* cicili#Let1970 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1974 */
            // ----------
            /* cicili#Block1976 */
            Empty_int ();
          }));
      });
    });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1984 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1986 */
      ({ /* cicili#Let1988 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1995 */
            // ----------
            /* cicili#Block1997 */
            Nothing_int ();
          }));
      });
    });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2005 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2007 */
        ({ /* cicili#Let2009 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let2014 */
              // ----------
              /* cicili#Block2016 */
              Empty_int ();
            }));
        });
      }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2023 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2025 */
      ({ /* cicili#Let2027 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let2032 */
            // ----------
            /* cicili#Block2034 */
            0;
          }));
      });
    });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2040 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2042 */
      ({ /* cicili#Let2044 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let2050 */
            // ----------
            /* cicili#Block2052 */
            0;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2058 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2060 */
      ({ /* cicili#Let2062 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let2074 */
            // ----------
            /* cicili#Block2076 */
            Empty_int ();
          }));
      });
    });
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let2083 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2085 */
      ({ /* cicili#Let2087 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2091 */
            // ----------
            /* cicili#Block2093 */
            ({ /* cicili#Let2095 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2099 */
                  // ----------
                  /* cicili#Block2101 */
                  last_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let2106 */
            // ----------
            /* cicili#Block2108 */
            list ;
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let2113 */
      __auto_type last  = last_List_int (llist );
      // ----------
      ({ /* cicili#Let2118 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2120 */
        ({ /* cicili#Let2122 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2124 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2129 */
              // ----------
              /* cicili#Block2131 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_int (List_int list ) {
  { /* cicili#Let2137 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2139 */
    ({ /* cicili#Let2141 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2144 */
          { /* cicili#Let2148 */
            // ----------
            /* cicili#Block2150 */
            ({ /* cicili#Let2152 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2155 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2163 */
                  // ----------
                  /* cicili#Block2165 */
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
  { /* cicili#Let2179 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2183 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2185 */
      ({ /* cicili#Let2187 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2190 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2199 */
            // ----------
            /* cicili#Block2201 */
            free (this );
          }
      });
    }
  }
}
List_char Empty_char () {
  { /* cicili#Let2205 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let2209 */
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
    { /* cicili#Let2218 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let2232 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2234 */
      ({ /* cicili#Let2236 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2240 */
            // ----------
            /* cicili#Block2242 */
            Empty_char ();
          }));
      });
    });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let2250 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2252 */
      ({ /* cicili#Let2254 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let2261 */
            // ----------
            /* cicili#Block2263 */
            Nothing_char ();
          }));
      });
    });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2271 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2273 */
        ({ /* cicili#Let2275 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let2280 */
              // ----------
              /* cicili#Block2282 */
              Empty_char ();
            }));
        });
      }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let2289 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2291 */
      ({ /* cicili#Let2293 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let2298 */
            // ----------
            /* cicili#Block2300 */
            0;
          }));
      });
    });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let2306 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2308 */
      ({ /* cicili#Let2310 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let2316 */
            // ----------
            /* cicili#Block2318 */
            0;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let2324 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2326 */
      ({ /* cicili#Let2328 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let2340 */
            // ----------
            /* cicili#Block2342 */
            Empty_char ();
          }));
      });
    });
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let2349 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2351 */
      ({ /* cicili#Let2353 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2357 */
            // ----------
            /* cicili#Block2359 */
            ({ /* cicili#Let2361 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2365 */
                  // ----------
                  /* cicili#Block2367 */
                  last_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let2372 */
            // ----------
            /* cicili#Block2374 */
            list ;
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let2379 */
      __auto_type last  = last_List_char (llist );
      // ----------
      ({ /* cicili#Let2384 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2386 */
        ({ /* cicili#Let2388 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2390 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2395 */
              // ----------
              /* cicili#Block2397 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_char (List_char list ) {
  { /* cicili#Let2403 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2405 */
    ({ /* cicili#Let2407 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2410 */
          { /* cicili#Let2414 */
            // ----------
            /* cicili#Block2416 */
            ({ /* cicili#Let2418 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2421 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2429 */
                  // ----------
                  /* cicili#Block2431 */
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
    { /* cicili#Let2443 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let2457 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2459 */
    ({ /* cicili#Let2461 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn2464 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let2476 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2480 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2482 */
      ({ /* cicili#Let2484 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2487 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2493 */
            // ----------
            /* cicili#Block2495 */
            free (this );
          }
      });
    }
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let2499 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let2503 */
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
  return ({ /* cicili#Let2521 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2523 */
      ({ /* cicili#Let2525 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let2536 */
            // ----------
            /* cicili#Block2538 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let2545 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2547 */
      ({ /* cicili#Let2549 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2551 */
            __auto_type ne  = next_Range_int (list );
            // ----------
            ({ /* cicili#Let2556 */
              // ----------
              /* cicili#Block2558 */
              ({ /* cicili#Let2560 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let2571 */
                    // ----------
                    /* cicili#Block2573 */
                    __h_Cons_Range_int_ctor (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let2583 */
            // ----------
            /* cicili#Block2585 */
            Empty_Range_int ();
          }));
      });
    });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let2592 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2594 */
    ({ /* cicili#Let2596 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let2601 */
          // ----------
          /* cicili#Block2603 */
          ({ /* cicili#Let2605 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block2608 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let2617 */
                // ----------
                /* cicili#Block2619 */
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
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let2678 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2682 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2684 */
      ({ /* cicili#Let2686 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2689 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2699 */
            // ----------
            /* cicili#Block2701 */
            free (this );
          }
      });
    }
  }
}
List_List_int Empty_List_int () {
  { /* cicili#Let2705 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let2709 */
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
    { /* cicili#Let2718 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2732 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2734 */
      ({ /* cicili#Let2736 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2740 */
            // ----------
            /* cicili#Block2742 */
            Empty_List_int ();
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let2750 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2752 */
      ({ /* cicili#Let2754 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let2761 */
            // ----------
            /* cicili#Block2763 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2771 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2773 */
        ({ /* cicili#Let2775 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let2780 */
              // ----------
              /* cicili#Block2782 */
              Empty_List_int ();
            }));
        });
      }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2789 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2791 */
      ({ /* cicili#Let2793 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let2798 */
            // ----------
            /* cicili#Block2800 */
            0;
          }));
      });
    });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let2806 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2808 */
      ({ /* cicili#Let2810 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let2816 */
            // ----------
            /* cicili#Block2818 */
            0;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let2824 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2826 */
      ({ /* cicili#Let2828 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let2840 */
            // ----------
            /* cicili#Block2842 */
            Empty_List_int ();
          }));
      });
    });
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2849 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2851 */
      ({ /* cicili#Let2853 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2857 */
            // ----------
            /* cicili#Block2859 */
            ({ /* cicili#Let2861 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2865 */
                  // ----------
                  /* cicili#Block2867 */
                  last_List_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let2872 */
            // ----------
            /* cicili#Block2874 */
            list ;
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let2879 */
      __auto_type last  = last_List_List_int (llist );
      // ----------
      ({ /* cicili#Let2884 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2886 */
        ({ /* cicili#Let2888 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2890 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2895 */
              // ----------
              /* cicili#Block2897 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let2903 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2905 */
    ({ /* cicili#Let2907 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2910 */
          { /* cicili#Let2914 */
            // ----------
            /* cicili#Block2916 */
            ({ /* cicili#Let2918 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2921 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2930 */
                  // ----------
                  /* cicili#Block2932 */
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
  { /* cicili#Let2945 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2949 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2951 */
      ({ /* cicili#Let2953 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2956 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2966 */
            // ----------
            /* cicili#Block2968 */
            free (this );
          }
      });
    }
  }
}
List_List_char Empty_List_char () {
  { /* cicili#Let2972 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let2976 */
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
    { /* cicili#Let2985 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2999 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3001 */
      ({ /* cicili#Let3003 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3007 */
            // ----------
            /* cicili#Block3009 */
            Empty_List_char ();
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let3017 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3019 */
      ({ /* cicili#Let3021 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let3028 */
            // ----------
            /* cicili#Block3030 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3038 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3040 */
        ({ /* cicili#Let3042 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let3047 */
              // ----------
              /* cicili#Block3049 */
              Empty_List_char ();
            }));
        });
      }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3056 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3058 */
      ({ /* cicili#Let3060 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let3065 */
            // ----------
            /* cicili#Block3067 */
            0;
          }));
      });
    });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let3073 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3075 */
      ({ /* cicili#Let3077 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let3083 */
            // ----------
            /* cicili#Block3085 */
            0;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let3091 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3093 */
      ({ /* cicili#Let3095 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let3107 */
            // ----------
            /* cicili#Block3109 */
            Empty_List_char ();
          }));
      });
    });
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3116 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3118 */
      ({ /* cicili#Let3120 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3124 */
            // ----------
            /* cicili#Block3126 */
            ({ /* cicili#Let3128 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3132 */
                  // ----------
                  /* cicili#Block3134 */
                  last_List_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let3139 */
            // ----------
            /* cicili#Block3141 */
            list ;
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let3146 */
      __auto_type last  = last_List_List_char (llist );
      // ----------
      ({ /* cicili#Let3151 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3153 */
        ({ /* cicili#Let3155 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3157 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3162 */
              // ----------
              /* cicili#Block3164 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let3170 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3172 */
    ({ /* cicili#Let3174 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3177 */
          { /* cicili#Let3181 */
            // ----------
            /* cicili#Block3183 */
            ({ /* cicili#Let3185 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3188 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3197 */
                  // ----------
                  /* cicili#Block3199 */
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
  { /* cicili#Let3212 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3216 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3218 */
      ({ /* cicili#Let3220 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3223 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3233 */
            // ----------
            /* cicili#Block3235 */
            free (this );
          }
      });
    }
  }
}
List_String Empty_String () {
  { /* cicili#Let3239 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let3243 */
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
    { /* cicili#Let3252 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let3266 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3268 */
      ({ /* cicili#Let3270 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3274 */
            // ----------
            /* cicili#Block3276 */
            Empty_String ();
          }));
      });
    });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let3284 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3286 */
      ({ /* cicili#Let3288 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let3295 */
            // ----------
            /* cicili#Block3297 */
            Nothing_String ();
          }));
      });
    });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3305 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3307 */
        ({ /* cicili#Let3309 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let3314 */
              // ----------
              /* cicili#Block3316 */
              Empty_String ();
            }));
        });
      }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let3323 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3325 */
      ({ /* cicili#Let3327 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let3332 */
            // ----------
            /* cicili#Block3334 */
            0;
          }));
      });
    });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let3340 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3342 */
      ({ /* cicili#Let3344 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let3350 */
            // ----------
            /* cicili#Block3352 */
            0;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let3358 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3360 */
      ({ /* cicili#Let3362 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let3374 */
            // ----------
            /* cicili#Block3376 */
            Empty_String ();
          }));
      });
    });
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let3383 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3385 */
      ({ /* cicili#Let3387 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3391 */
            // ----------
            /* cicili#Block3393 */
            ({ /* cicili#Let3395 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3399 */
                  // ----------
                  /* cicili#Block3401 */
                  last_List_String (tail );
                }));
            });
          }) : ({ /* cicili#Let3406 */
            // ----------
            /* cicili#Block3408 */
            list ;
          }));
      });
    });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let3413 */
      __auto_type last  = last_List_String (llist );
      // ----------
      ({ /* cicili#Let3418 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3420 */
        ({ /* cicili#Let3422 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3424 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3429 */
              // ----------
              /* cicili#Block3431 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_String (List_String list ) {
  { /* cicili#Let3437 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3439 */
    ({ /* cicili#Let3441 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3444 */
          { /* cicili#Let3448 */
            // ----------
            /* cicili#Block3450 */
            ({ /* cicili#Let3452 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3455 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3464 */
                  // ----------
                  /* cicili#Block3466 */
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
  union { /* ciciliUnion3483 */
    struct { /* ciciliStruct3484 */
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
  { /* cicili#Let3509 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3511 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3515 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3517 */
        ({ /* cicili#Let3519 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3524 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3527 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3529 */
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
  { /* cicili#Let3532 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ free_Rc_List_Bool , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let3541 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3543 */
      ({ /* cicili#Let3545 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let3552 */
            // ----------
            /* cicili#Block3554 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let3563 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3565 */
      ({ /* cicili#Let3567 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3570 */
              (++(*count ));
              ({ /* cicili#Let3572 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3582 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3584 */
                  ({ /* cicili#Let3586 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3591 */
            // ----------
            /* cicili#Block3593 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let3599 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3601 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3612 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3614 */
          ({ /* cicili#Let3616 */
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
  union { /* ciciliUnion3629 */
    struct { /* ciciliStruct3630 */
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
  { /* cicili#Let3655 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3657 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3661 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3663 */
        ({ /* cicili#Let3665 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3670 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3673 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3675 */
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
  { /* cicili#Let3678 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ free_Rc_List_int , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let3687 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3689 */
      ({ /* cicili#Let3691 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let3698 */
            // ----------
            /* cicili#Block3700 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let3709 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3711 */
      ({ /* cicili#Let3713 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3716 */
              (++(*count ));
              ({ /* cicili#Let3718 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3728 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3730 */
                  ({ /* cicili#Let3732 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3737 */
            // ----------
            /* cicili#Block3739 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let3745 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3747 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3758 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3760 */
          ({ /* cicili#Let3762 */
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
  union { /* ciciliUnion3775 */
    struct { /* ciciliStruct3776 */
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
  { /* cicili#Let3801 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3803 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3807 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3809 */
        ({ /* cicili#Let3811 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3816 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3819 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3821 */
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
  { /* cicili#Let3824 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ free_Rc_List_char , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3833 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3835 */
      ({ /* cicili#Let3837 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let3844 */
            // ----------
            /* cicili#Block3846 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3855 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3857 */
      ({ /* cicili#Let3859 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3862 */
              (++(*count ));
              ({ /* cicili#Let3864 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3874 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3876 */
                  ({ /* cicili#Let3878 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3883 */
            // ----------
            /* cicili#Block3885 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let3891 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3893 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3904 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3906 */
          ({ /* cicili#Let3908 */
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
  union { /* ciciliUnion3921 */
    struct { /* ciciliStruct3922 */
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
  { /* cicili#Let3947 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3949 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3953 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3955 */
        ({ /* cicili#Let3957 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3962 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3965 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3967 */
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
  { /* cicili#Let3970 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ free_Rc_String , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let3979 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3981 */
      ({ /* cicili#Let3983 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let3990 */
            // ----------
            /* cicili#Block3992 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4001 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4003 */
      ({ /* cicili#Let4005 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4008 */
              (++(*count ));
              ({ /* cicili#Let4010 */
                __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4020 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4022 */
                  ({ /* cicili#Let4024 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4029 */
            // ----------
            /* cicili#Block4031 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let4037 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4039 */
        __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4050 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4052 */
          ({ /* cicili#Let4054 */
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
  return ({ /* cicili#Let4063 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4065 */
      ({ /* cicili#Let4067 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4072 */
            // ----------
            /* cicili#Block4074 */
            neutral ;
          }));
      });
    });
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let4084 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4086 */
      ({ /* cicili#Let4088 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4093 */
            // ----------
            /* cicili#Block4095 */
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
Bool Monoid_All_Bool_mappend (Bool x , Bool y ) {
  return Bool_and (x , y );
}
Bool Monoid_All_Bool_mconcat (List_Bool l ) {
  return foldr_Bool (Monoid_All_Bool_mappend , True (), l );
}
Monoid_All_Bool get_Monoid_All_Bool () {
  return __h_Monoid_All_Bool_ctor_ctor (Monoid_All_Bool_mappend , True (), Monoid_All_Bool_mconcat );
}
Semigroup_All_Bool get_Semigroup_All_Bool () {
  return Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend );
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
Bool Monoid_Any_Bool_mappend (Bool x , Bool y ) {
  return Bool_or (x , y );
}
Bool Monoid_Any_Bool_mconcat (List_Bool l ) {
  return foldr_Bool (Monoid_Any_Bool_mappend , False (), l );
}
Monoid_Any_Bool get_Monoid_Any_Bool () {
  return __h_Monoid_Any_Bool_ctor_ctor (Monoid_Any_Bool_mappend , False (), Monoid_Any_Bool_mconcat );
}
Semigroup_Any_Bool get_Semigroup_Any_Bool () {
  return Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend );
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
int Monoid_Sum_int_mappend (int x , int y ) {
  return (x  +  y  );
}
int Monoid_Sum_int_mconcat (List_int l ) {
  return foldr_int (Monoid_Sum_int_mappend , 0, l );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return __h_Monoid_Sum_int_ctor_ctor (Monoid_Sum_int_mappend , 0, Monoid_Sum_int_mconcat );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend );
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
int Monoid_Product_int_mappend (int x , int y ) {
  return (x  *  y  );
}
int Monoid_Product_int_mconcat (List_int l ) {
  return foldr_int (Monoid_Product_int_mappend , 1, l );
}
Monoid_Product_int get_Monoid_Product_int () {
  return __h_Monoid_Product_int_ctor_ctor (Monoid_Product_int_mappend , 1, Monoid_Product_int_mconcat );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return Semigroup_Product_int_ctor (Monoid_Product_int_mappend );
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let4282 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4284 */
      ({ /* cicili#Let4286 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4291 */
            // ----------
            /* cicili#Block4293 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let4308 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4310 */
      ({ /* cicili#Let4312 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let4317 */
            // ----------
            /* cicili#Block4319 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_Concat_List_int (Monoid_Concat_List_int * this ) {
}
Monoid_Concat_List_int __h_Monoid_Concat_List_int_ctor_ctor (Monoid_Concat_List_int_mappend_t mappend , List_int mempty , Monoid_Concat_List_int_mconcat_t mconcat ) {
  return ((Monoid_Concat_List_int){ free_Monoid_Concat_List_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_List_int (Semigroup_Concat_List_int * this ) {
}
Semigroup_Concat_List_int Semigroup_Concat_List_int_ctor (Monoid_Concat_List_int_mappend_t mappend ) {
  return ((Semigroup_Concat_List_int){ free_Semigroup_Concat_List_int , __h___t , .__h_data._ = { mappend }});
}
List_int Monoid_Concat_List_int_mappend (List_int x , List_int y ) {
  return append_List_int (x , y );
}
List_int Monoid_Concat_List_int_mconcat (List_List_int l ) {
  return foldr_List_int (Monoid_Concat_List_int_mappend , Empty_int (), l );
}
Monoid_Concat_List_int get_Monoid_Concat_List_int () {
  return __h_Monoid_Concat_List_int_ctor_ctor (Monoid_Concat_List_int_mappend , Empty_int (), Monoid_Concat_List_int_mconcat );
}
Semigroup_Concat_List_int get_Semigroup_Concat_List_int () {
  return Semigroup_Concat_List_int_ctor (Monoid_Concat_List_int_mappend );
}
void free_Monoid_Concat_List_char (Monoid_Concat_List_char * this ) {
}
Monoid_Concat_List_char __h_Monoid_Concat_List_char_ctor_ctor (Monoid_Concat_List_char_mappend_t mappend , List_char mempty , Monoid_Concat_List_char_mconcat_t mconcat ) {
  return ((Monoid_Concat_List_char){ free_Monoid_Concat_List_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_List_char (Semigroup_Concat_List_char * this ) {
}
Semigroup_Concat_List_char Semigroup_Concat_List_char_ctor (Monoid_Concat_List_char_mappend_t mappend ) {
  return ((Semigroup_Concat_List_char){ free_Semigroup_Concat_List_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_List_char_mappend (List_char x , List_char y ) {
  return append_List_char (x , y );
}
List_char Monoid_Concat_List_char_mconcat (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_List_char_mappend , Empty_char (), l );
}
Monoid_Concat_List_char get_Monoid_Concat_List_char () {
  return __h_Monoid_Concat_List_char_ctor_ctor (Monoid_Concat_List_char_mappend , Empty_char (), Monoid_Concat_List_char_mconcat );
}
Semigroup_Concat_List_char get_Semigroup_Concat_List_char () {
  return Semigroup_Concat_List_char_ctor (Monoid_Concat_List_char_mappend );
}
void free_Monoid_Concat_String_char (Monoid_Concat_String_char * this ) {
}
Monoid_Concat_String_char __h_Monoid_Concat_String_char_ctor_ctor (Monoid_Concat_String_char_mappend_t mappend , List_char mempty , Monoid_Concat_String_char_mconcat_t mconcat ) {
  return ((Monoid_Concat_String_char){ free_Monoid_Concat_String_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_String_char (Semigroup_Concat_String_char * this ) {
}
Semigroup_Concat_String_char Semigroup_Concat_String_char_ctor (Monoid_Concat_String_char_mappend_t mappend ) {
  return ((Semigroup_Concat_String_char){ free_Semigroup_Concat_String_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_String_char_mappend (List_char x , List_char y ) {
  return append_String (x , y );
}
List_char Monoid_Concat_String_char_mconcat (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_String_char_mappend , Empty_char (), l );
}
Monoid_Concat_String_char get_Monoid_Concat_String_char () {
  return __h_Monoid_Concat_String_char_ctor_ctor (Monoid_Concat_String_char_mappend , Empty_char (), Monoid_Concat_String_char_mconcat );
}
Semigroup_Concat_String_char get_Semigroup_Concat_String_char () {
  return Semigroup_Concat_String_char_ctor (Monoid_Concat_String_char_mappend );
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
Functor_List_int_int __h_Functor_List_int_int_ctor_ctor (Functor_List_int_int_fmap_t fmap , Functor_List_int_int_a_b_t a_b ) {
  return ((Functor_List_int_int){ free_Functor_List_int_int , __h___t , .__h_data._ = { fmap , a_b }});
}
List_int Functor_List_int_int_fmap (Functor_List_int_int_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let4505 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4507 */
      ({ /* cicili#Let4509 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (a_b (head ), Functor_List_int_int_fmap (a_b , tail )) : ({ /* cicili#Let4519 */
            // ----------
            /* cicili#Block4521 */
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
  return ({ /* cicili#Let4554 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4556 */
      ({ /* cicili#Let4558 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_List_int_Bool_fmap (a_b , tail )) : ({ /* cicili#Let4568 */
            // ----------
            /* cicili#Block4570 */
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
  return ({ /* cicili#Let4603 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4605 */
      ({ /* cicili#Let4607 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (a_b (head ), Functor_List_char_char_fmap (a_b , tail )) : ({ /* cicili#Let4617 */
            // ----------
            /* cicili#Block4619 */
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
  return ({ /* cicili#Let4652 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4654 */
      ({ /* cicili#Let4656 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_List_char_Bool_fmap (a_b , tail )) : ({ /* cicili#Let4666 */
            // ----------
            /* cicili#Block4668 */
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
  return ({ /* cicili#Let4701 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4703 */
      ({ /* cicili#Let4705 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (a_b (head ), Functor_String_char_fmap (a_b , tail )) : ({ /* cicili#Let4715 */
            // ----------
            /* cicili#Block4717 */
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
  return ({ /* cicili#Let4750 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4752 */
      ({ /* cicili#Let4754 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (a_b (head ), Functor_String_Bool_fmap (a_b , tail )) : ({ /* cicili#Let4764 */
            // ----------
            /* cicili#Block4766 */
            Empty_Bool ();
          }));
      });
    });
}
Functor_String_Bool get_Functor_String_Bool (Functor_String_Bool_a_b_t a_b ) {
  return __h_Functor_String_Bool_ctor_ctor (Functor_String_Bool_fmap , a_b );
}
