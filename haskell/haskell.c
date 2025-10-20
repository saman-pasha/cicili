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
  { /* cicili#Let1152 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1156 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1158 */
      ({ /* cicili#Let1160 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1163 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let1170 */
                // ----------
                /* cicili#Block1172 */
                ({ /* cicili#Let1174 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let1178 */
                      // ----------
                      /* cicili#Block1180 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1186 */
            // ----------
            /* cicili#Block1188 */
            free (this );
          }
      });
    }
  }
}
List_Bool Empty_Bool () {
  { /* cicili#Let1192 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let1196 */
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
    { /* cicili#Let1205 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1219 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1221 */
      ({ /* cicili#Let1223 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1227 */
            // ----------
            /* cicili#Block1229 */
            Empty_Bool ();
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let1237 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1239 */
      ({ /* cicili#Let1241 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let1248 */
            // ----------
            /* cicili#Block1250 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1258 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1260 */
        ({ /* cicili#Let1262 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let1267 */
              // ----------
              /* cicili#Block1269 */
              Empty_Bool ();
            }));
        });
      }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1276 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1278 */
      ({ /* cicili#Let1280 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let1285 */
            // ----------
            /* cicili#Block1287 */
            0;
          }));
      });
    });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let1293 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1295 */
      ({ /* cicili#Let1297 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let1303 */
            // ----------
            /* cicili#Block1305 */
            0;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let1311 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1313 */
      ({ /* cicili#Let1315 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1327 */
            // ----------
            /* cicili#Block1329 */
            Empty_Bool ();
          }));
      });
    });
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1336 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1338 */
      ({ /* cicili#Let1340 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1344 */
            // ----------
            /* cicili#Block1346 */
            ({ /* cicili#Let1348 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let1352 */
                  // ----------
                  /* cicili#Block1354 */
                  last_List_Bool (tail );
                }));
            });
          }) : ({ /* cicili#Let1359 */
            // ----------
            /* cicili#Block1361 */
            list ;
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1366 */
      __auto_type last  = last_List_Bool (llist );
      // ----------
      ({ /* cicili#Let1371 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1373 */
        ({ /* cicili#Let1375 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1377 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let1382 */
              // ----------
              /* cicili#Block1384 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1390 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1392 */
    ({ /* cicili#Let1394 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1397 */
          { /* cicili#Let1401 */
            // ----------
            /* cicili#Block1403 */
            ({ /* cicili#Let1405 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1408 */
                  printf ("%s", ({ /* cicili#Let1415 */
                      // ----------
                      /* cicili#Block1417 */
                      ({ /* cicili#Let1419 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1423 */
                            // ----------
                            /* cicili#Block1425 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1430 */
                  // ----------
                  /* cicili#Block1432 */
                  printf ("%s", ({ /* cicili#Let1439 */
                      // ----------
                      /* cicili#Block1441 */
                      ({ /* cicili#Let1443 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1447 */
                            // ----------
                            /* cicili#Block1449 */
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
  { /* cicili#Let1458 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1462 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1464 */
      ({ /* cicili#Let1466 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1469 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1478 */
            // ----------
            /* cicili#Block1480 */
            free (this );
          }
      });
    }
  }
}
List_int Empty_int () {
  { /* cicili#Let1484 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1488 */
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
    { /* cicili#Let1497 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1511 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1513 */
      ({ /* cicili#Let1515 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1519 */
            // ----------
            /* cicili#Block1521 */
            Empty_int ();
          }));
      });
    });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1529 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1531 */
      ({ /* cicili#Let1533 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1540 */
            // ----------
            /* cicili#Block1542 */
            Nothing_int ();
          }));
      });
    });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1550 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1552 */
        ({ /* cicili#Let1554 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1559 */
              // ----------
              /* cicili#Block1561 */
              Empty_int ();
            }));
        });
      }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1568 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1570 */
      ({ /* cicili#Let1572 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1577 */
            // ----------
            /* cicili#Block1579 */
            0;
          }));
      });
    });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1585 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1587 */
      ({ /* cicili#Let1589 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1595 */
            // ----------
            /* cicili#Block1597 */
            0;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1603 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1605 */
      ({ /* cicili#Let1607 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1619 */
            // ----------
            /* cicili#Block1621 */
            Empty_int ();
          }));
      });
    });
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let1628 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1630 */
      ({ /* cicili#Let1632 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1636 */
            // ----------
            /* cicili#Block1638 */
            ({ /* cicili#Let1640 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let1644 */
                  // ----------
                  /* cicili#Block1646 */
                  last_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let1651 */
            // ----------
            /* cicili#Block1653 */
            list ;
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1658 */
      __auto_type last  = last_List_int (llist );
      // ----------
      ({ /* cicili#Let1663 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1665 */
        ({ /* cicili#Let1667 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1669 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let1674 */
              // ----------
              /* cicili#Block1676 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1682 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1684 */
    ({ /* cicili#Let1686 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1689 */
          { /* cicili#Let1693 */
            // ----------
            /* cicili#Block1695 */
            ({ /* cicili#Let1697 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1700 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1708 */
                  // ----------
                  /* cicili#Block1710 */
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
  { /* cicili#Let1724 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1728 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1730 */
      ({ /* cicili#Let1732 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1735 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let1744 */
            // ----------
            /* cicili#Block1746 */
            free (this );
          }
      });
    }
  }
}
List_char Empty_char () {
  { /* cicili#Let1750 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1754 */
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
    { /* cicili#Let1763 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1777 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1779 */
      ({ /* cicili#Let1781 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1785 */
            // ----------
            /* cicili#Block1787 */
            Empty_char ();
          }));
      });
    });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1795 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1797 */
      ({ /* cicili#Let1799 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1806 */
            // ----------
            /* cicili#Block1808 */
            Nothing_char ();
          }));
      });
    });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1816 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1818 */
        ({ /* cicili#Let1820 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1825 */
              // ----------
              /* cicili#Block1827 */
              Empty_char ();
            }));
        });
      }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1834 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1836 */
      ({ /* cicili#Let1838 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1843 */
            // ----------
            /* cicili#Block1845 */
            0;
          }));
      });
    });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1851 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1853 */
      ({ /* cicili#Let1855 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1861 */
            // ----------
            /* cicili#Block1863 */
            0;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1869 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1871 */
      ({ /* cicili#Let1873 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1885 */
            // ----------
            /* cicili#Block1887 */
            Empty_char ();
          }));
      });
    });
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let1894 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1896 */
      ({ /* cicili#Let1898 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1902 */
            // ----------
            /* cicili#Block1904 */
            ({ /* cicili#Let1906 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let1910 */
                  // ----------
                  /* cicili#Block1912 */
                  last_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let1917 */
            // ----------
            /* cicili#Block1919 */
            list ;
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1924 */
      __auto_type last  = last_List_char (llist );
      // ----------
      ({ /* cicili#Let1929 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1931 */
        ({ /* cicili#Let1933 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1935 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let1940 */
              // ----------
              /* cicili#Block1942 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1948 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1950 */
    ({ /* cicili#Let1952 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1955 */
          { /* cicili#Let1959 */
            // ----------
            /* cicili#Block1961 */
            ({ /* cicili#Let1963 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1966 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1974 */
                  // ----------
                  /* cicili#Block1976 */
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
    { /* cicili#Let1988 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let2002 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2004 */
    ({ /* cicili#Let2006 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn2009 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let2021 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2025 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2027 */
      ({ /* cicili#Let2029 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2032 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2038 */
            // ----------
            /* cicili#Block2040 */
            free (this );
          }
      });
    }
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let2044 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let2048 */
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
  return ({ /* cicili#Let2066 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2068 */
      ({ /* cicili#Let2070 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let2081 */
            // ----------
            /* cicili#Block2083 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let2090 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block2092 */
      ({ /* cicili#Let2094 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2096 */
            __auto_type ne  = next_Range_int (list );
            // ----------
            ({ /* cicili#Let2101 */
              // ----------
              /* cicili#Block2103 */
              ({ /* cicili#Let2105 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let2116 */
                    // ----------
                    /* cicili#Block2118 */
                    __h_Cons_Range_int_ctor (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let2128 */
            // ----------
            /* cicili#Block2130 */
            Empty_Range_int ();
          }));
      });
    });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let2137 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2139 */
    ({ /* cicili#Let2141 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let2146 */
          // ----------
          /* cicili#Block2148 */
          ({ /* cicili#Let2150 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block2153 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let2162 */
                // ----------
                /* cicili#Block2164 */
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
  { /* cicili#Let2223 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2227 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2229 */
      ({ /* cicili#Let2231 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2234 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2244 */
            // ----------
            /* cicili#Block2246 */
            free (this );
          }
      });
    }
  }
}
List_List_int Empty_List_int () {
  { /* cicili#Let2250 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let2254 */
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
    { /* cicili#Let2263 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2277 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2279 */
      ({ /* cicili#Let2281 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2285 */
            // ----------
            /* cicili#Block2287 */
            Empty_List_int ();
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let2295 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2297 */
      ({ /* cicili#Let2299 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let2306 */
            // ----------
            /* cicili#Block2308 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2316 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2318 */
        ({ /* cicili#Let2320 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let2325 */
              // ----------
              /* cicili#Block2327 */
              Empty_List_int ();
            }));
        });
      }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2334 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2336 */
      ({ /* cicili#Let2338 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let2343 */
            // ----------
            /* cicili#Block2345 */
            0;
          }));
      });
    });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let2351 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2353 */
      ({ /* cicili#Let2355 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let2361 */
            // ----------
            /* cicili#Block2363 */
            0;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let2369 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2371 */
      ({ /* cicili#Let2373 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let2385 */
            // ----------
            /* cicili#Block2387 */
            Empty_List_int ();
          }));
      });
    });
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2394 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2396 */
      ({ /* cicili#Let2398 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2402 */
            // ----------
            /* cicili#Block2404 */
            ({ /* cicili#Let2406 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2410 */
                  // ----------
                  /* cicili#Block2412 */
                  last_List_List_int (tail );
                }));
            });
          }) : ({ /* cicili#Let2417 */
            // ----------
            /* cicili#Block2419 */
            list ;
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let2424 */
      __auto_type last  = last_List_List_int (llist );
      // ----------
      ({ /* cicili#Let2429 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2431 */
        ({ /* cicili#Let2433 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2435 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2440 */
              // ----------
              /* cicili#Block2442 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let2448 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2450 */
    ({ /* cicili#Let2452 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2455 */
          { /* cicili#Let2459 */
            // ----------
            /* cicili#Block2461 */
            ({ /* cicili#Let2463 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2466 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2475 */
                  // ----------
                  /* cicili#Block2477 */
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
  { /* cicili#Let2490 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2494 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2496 */
      ({ /* cicili#Let2498 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2501 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2511 */
            // ----------
            /* cicili#Block2513 */
            free (this );
          }
      });
    }
  }
}
List_List_char Empty_List_char () {
  { /* cicili#Let2517 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let2521 */
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
    { /* cicili#Let2530 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2544 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2546 */
      ({ /* cicili#Let2548 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2552 */
            // ----------
            /* cicili#Block2554 */
            Empty_List_char ();
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2562 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2564 */
      ({ /* cicili#Let2566 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2573 */
            // ----------
            /* cicili#Block2575 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2583 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2585 */
        ({ /* cicili#Let2587 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2592 */
              // ----------
              /* cicili#Block2594 */
              Empty_List_char ();
            }));
        });
      }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2601 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2603 */
      ({ /* cicili#Let2605 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2610 */
            // ----------
            /* cicili#Block2612 */
            0;
          }));
      });
    });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2618 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2620 */
      ({ /* cicili#Let2622 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2628 */
            // ----------
            /* cicili#Block2630 */
            0;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2636 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2638 */
      ({ /* cicili#Let2640 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2652 */
            // ----------
            /* cicili#Block2654 */
            Empty_List_char ();
          }));
      });
    });
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2661 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2663 */
      ({ /* cicili#Let2665 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2669 */
            // ----------
            /* cicili#Block2671 */
            ({ /* cicili#Let2673 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2677 */
                  // ----------
                  /* cicili#Block2679 */
                  last_List_List_char (tail );
                }));
            });
          }) : ({ /* cicili#Let2684 */
            // ----------
            /* cicili#Block2686 */
            list ;
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2691 */
      __auto_type last  = last_List_List_char (llist );
      // ----------
      ({ /* cicili#Let2696 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2698 */
        ({ /* cicili#Let2700 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2702 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2707 */
              // ----------
              /* cicili#Block2709 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2715 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2717 */
    ({ /* cicili#Let2719 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2722 */
          { /* cicili#Let2726 */
            // ----------
            /* cicili#Block2728 */
            ({ /* cicili#Let2730 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2733 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2742 */
                  // ----------
                  /* cicili#Block2744 */
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
  { /* cicili#Let2757 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2761 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2763 */
      ({ /* cicili#Let2765 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2768 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2778 */
            // ----------
            /* cicili#Block2780 */
            free (this );
          }
      });
    }
  }
}
List_String Empty_String () {
  { /* cicili#Let2784 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2788 */
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
    { /* cicili#Let2797 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let2811 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2813 */
      ({ /* cicili#Let2815 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2819 */
            // ----------
            /* cicili#Block2821 */
            Empty_String ();
          }));
      });
    });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2829 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2831 */
      ({ /* cicili#Let2833 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2840 */
            // ----------
            /* cicili#Block2842 */
            Nothing_String ();
          }));
      });
    });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2850 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2852 */
        ({ /* cicili#Let2854 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2859 */
              // ----------
              /* cicili#Block2861 */
              Empty_String ();
            }));
        });
      }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2868 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2870 */
      ({ /* cicili#Let2872 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2877 */
            // ----------
            /* cicili#Block2879 */
            0;
          }));
      });
    });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2885 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2887 */
      ({ /* cicili#Let2889 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2895 */
            // ----------
            /* cicili#Block2897 */
            0;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2903 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2905 */
      ({ /* cicili#Let2907 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2919 */
            // ----------
            /* cicili#Block2921 */
            Empty_String ();
          }));
      });
    });
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let2928 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2930 */
      ({ /* cicili#Let2932 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2936 */
            // ----------
            /* cicili#Block2938 */
            ({ /* cicili#Let2940 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2944 */
                  // ----------
                  /* cicili#Block2946 */
                  last_List_String (tail );
                }));
            });
          }) : ({ /* cicili#Let2951 */
            // ----------
            /* cicili#Block2953 */
            list ;
          }));
      });
    });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2958 */
      __auto_type last  = last_List_String (llist );
      // ----------
      ({ /* cicili#Let2963 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2965 */
        ({ /* cicili#Let2967 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2969 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2974 */
              // ----------
              /* cicili#Block2976 */
              rlist ;
            }));
        });
      });
    });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2982 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2984 */
    ({ /* cicili#Let2986 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2989 */
          { /* cicili#Let2993 */
            // ----------
            /* cicili#Block2995 */
            ({ /* cicili#Let2997 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3000 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3009 */
                  // ----------
                  /* cicili#Block3011 */
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
  union { /* ciciliUnion3028 */
    struct { /* ciciliStruct3029 */
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
  { /* cicili#Let3053 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3055 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3059 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3061 */
        ({ /* cicili#Let3063 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3068 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3071 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3073 */
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
  { /* cicili#Let3076 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ free_Rc_List_Bool , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let3085 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3087 */
      ({ /* cicili#Let3089 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let3096 */
            // ----------
            /* cicili#Block3098 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let3107 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3109 */
      ({ /* cicili#Let3111 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3114 */
              (++(*count ));
              ({ /* cicili#Let3116 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3126 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3128 */
                  ({ /* cicili#Let3130 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3135 */
            // ----------
            /* cicili#Block3137 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let3143 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3145 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3156 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3158 */
          ({ /* cicili#Let3160 */
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
  union { /* ciciliUnion3173 */
    struct { /* ciciliStruct3174 */
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
  { /* cicili#Let3198 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3200 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3204 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3206 */
        ({ /* cicili#Let3208 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3213 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3216 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3218 */
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
  { /* cicili#Let3221 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ free_Rc_List_int , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let3230 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3232 */
      ({ /* cicili#Let3234 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let3241 */
            // ----------
            /* cicili#Block3243 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let3252 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3254 */
      ({ /* cicili#Let3256 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3259 */
              (++(*count ));
              ({ /* cicili#Let3261 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3271 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3273 */
                  ({ /* cicili#Let3275 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3280 */
            // ----------
            /* cicili#Block3282 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let3288 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3290 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3301 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3303 */
          ({ /* cicili#Let3305 */
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
  union { /* ciciliUnion3318 */
    struct { /* ciciliStruct3319 */
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
  { /* cicili#Let3343 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3345 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3349 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3351 */
        ({ /* cicili#Let3353 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3358 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3361 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3363 */
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
  { /* cicili#Let3366 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ free_Rc_List_char , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3375 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3377 */
      ({ /* cicili#Let3379 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let3386 */
            // ----------
            /* cicili#Block3388 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3397 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3399 */
      ({ /* cicili#Let3401 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3404 */
              (++(*count ));
              ({ /* cicili#Let3406 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3416 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3418 */
                  ({ /* cicili#Let3420 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3425 */
            // ----------
            /* cicili#Block3427 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let3433 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3435 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3446 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3448 */
          ({ /* cicili#Let3450 */
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
  union { /* ciciliUnion3463 */
    struct { /* ciciliStruct3464 */
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
  { /* cicili#Let3488 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3490 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3494 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3496 */
        ({ /* cicili#Let3498 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3503 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3506 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3508 */
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
  { /* cicili#Let3511 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ free_Rc_String , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let3520 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3522 */
      ({ /* cicili#Let3524 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let3531 */
            // ----------
            /* cicili#Block3533 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let3542 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3544 */
      ({ /* cicili#Let3546 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3549 */
              (++(*count ));
              ({ /* cicili#Let3551 */
                __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3561 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3563 */
                  ({ /* cicili#Let3565 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3570 */
            // ----------
            /* cicili#Block3572 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let3578 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3580 */
        __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3591 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3593 */
          ({ /* cicili#Let3595 */
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
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let3604 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3606 */
      ({ /* cicili#Let3608 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3613 */
            // ----------
            /* cicili#Block3615 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
Monoid_Sum_int __h_m_Sum_int_ctor (Monoid_Sum_int_mappend mappend , int mempty , Monoid_Sum_int_mconcat mconcat ) {
  return ((Monoid_Sum_int){ free_Monoid_Sum_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
Semigroup_Sum_int sg_Sum_int (Monoid_Sum_int_mappend mappend ) {
  return ((Semigroup_Sum_int){ free_Semigroup_Sum_int , __h___t , .__h_data._ = { mappend }});
}
int Monoid_Sum_int_mappend_int_s (int x , int y ) {
  return (x  +  y  );
}
int Monoid_Sum_int_mconcat_int_s (List_int l ) {
  return foldr_int (Monoid_Sum_int_mappend_int_s , 0, l );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return __h_m_Sum_int_ctor (Monoid_Sum_int_mappend_int_s , 0, Monoid_Sum_int_mconcat_int_s );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return sg_Sum_int (Monoid_Sum_int_mappend_int_s );
}
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
Monoid_Product_int __h_m_Product_int_ctor (Monoid_Product_int_mappend mappend , int mempty , Monoid_Product_int_mconcat mconcat ) {
  return ((Monoid_Product_int){ free_Monoid_Product_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
Semigroup_Product_int sg_Product_int (Monoid_Product_int_mappend mappend ) {
  return ((Semigroup_Product_int){ free_Semigroup_Product_int , __h___t , .__h_data._ = { mappend }});
}
int Monoid_Product_int_mappend_int_s (int x , int y ) {
  return (x  *  y  );
}
int Monoid_Product_int_mconcat_int_s (List_int l ) {
  return foldr_int (Monoid_Product_int_mappend_int_s , 1, l );
}
Monoid_Product_int get_Monoid_Product_int () {
  return __h_m_Product_int_ctor (Monoid_Product_int_mappend_int_s , 1, Monoid_Product_int_mconcat_int_s );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return sg_Product_int (Monoid_Product_int_mappend_int_s );
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let3714 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3716 */
      ({ /* cicili#Let3718 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3723 */
            // ----------
            /* cicili#Block3725 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let3740 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3742 */
      ({ /* cicili#Let3744 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3749 */
            // ----------
            /* cicili#Block3751 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_Concat_List_int (Monoid_Concat_List_int * this ) {
}
Monoid_Concat_List_int __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend mappend , List_int mempty , Monoid_Concat_List_int_mconcat mconcat ) {
  return ((Monoid_Concat_List_int){ free_Monoid_Concat_List_int , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_List_int (Semigroup_Concat_List_int * this ) {
}
Semigroup_Concat_List_int sg_Concat_List_int (Monoid_Concat_List_int_mappend mappend ) {
  return ((Semigroup_Concat_List_int){ free_Semigroup_Concat_List_int , __h___t , .__h_data._ = { mappend }});
}
List_int Monoid_Concat_List_int_mappend_List_int_s (List_int x , List_int y ) {
  return append_List_int (x , y );
}
List_int Monoid_Concat_List_int_mconcat_List_int_s (List_List_int l ) {
  return foldr_List_int (Monoid_Concat_List_int_mappend_List_int_s , Empty_int (), l );
}
Monoid_Concat_List_int get_Monoid_Concat_List_int () {
  return __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend_List_int_s , Empty_int (), Monoid_Concat_List_int_mconcat_List_int_s );
}
Semigroup_Concat_List_int get_Semigroup_Concat_List_int () {
  return sg_Concat_List_int (Monoid_Concat_List_int_mappend_List_int_s );
}
void free_Monoid_Concat_List_char (Monoid_Concat_List_char * this ) {
}
Monoid_Concat_List_char __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend mappend , List_char mempty , Monoid_Concat_List_char_mconcat mconcat ) {
  return ((Monoid_Concat_List_char){ free_Monoid_Concat_List_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_List_char (Semigroup_Concat_List_char * this ) {
}
Semigroup_Concat_List_char sg_Concat_List_char (Monoid_Concat_List_char_mappend mappend ) {
  return ((Semigroup_Concat_List_char){ free_Semigroup_Concat_List_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_List_char_mappend_List_char_s (List_char x , List_char y ) {
  return append_List_char (x , y );
}
List_char Monoid_Concat_List_char_mconcat_List_char_s (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_List_char_mappend_List_char_s , Empty_char (), l );
}
Monoid_Concat_List_char get_Monoid_Concat_List_char () {
  return __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend_List_char_s , Empty_char (), Monoid_Concat_List_char_mconcat_List_char_s );
}
Semigroup_Concat_List_char get_Semigroup_Concat_List_char () {
  return sg_Concat_List_char (Monoid_Concat_List_char_mappend_List_char_s );
}
void free_Monoid_Concat_String_char (Monoid_Concat_String_char * this ) {
}
Monoid_Concat_String_char __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend mappend , List_char mempty , Monoid_Concat_String_char_mconcat mconcat ) {
  return ((Monoid_Concat_String_char){ free_Monoid_Concat_String_char , __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Concat_String_char (Semigroup_Concat_String_char * this ) {
}
Semigroup_Concat_String_char sg_Concat_String_char (Monoid_Concat_String_char_mappend mappend ) {
  return ((Semigroup_Concat_String_char){ free_Semigroup_Concat_String_char , __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_String_char_mappend_List_char_s (List_char x , List_char y ) {
  return append_String (x , y );
}
List_char Monoid_Concat_String_char_mconcat_List_char_s (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_String_char_mappend_List_char_s , Empty_char (), l );
}
Monoid_Concat_String_char get_Monoid_Concat_String_char () {
  return __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend_List_char_s , Empty_char (), Monoid_Concat_String_char_mconcat_List_char_s );
}
Semigroup_Concat_String_char get_Semigroup_Concat_String_char () {
  return sg_Concat_String_char (Monoid_Concat_String_char_mappend_List_char_s );
}
List_int fmap_List_int_List_int_Pure (int (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let3927 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3929 */
      ({ /* cicili#Let3931 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int_Pure (atob , tail )) : ({ /* cicili#Let3941 */
            // ----------
            /* cicili#Block3943 */
            Empty_int ();
          }));
      });
    });
}
List_Bool fmap_List_int_List_Bool_Pure (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let3957 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3959 */
      ({ /* cicili#Let3961 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let3971 */
            // ----------
            /* cicili#Block3973 */
            Empty_Bool ();
          }));
      });
    });
}
List_char fmap_List_char_List_char_Pure (char (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let3987 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3989 */
      ({ /* cicili#Let3991 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (atob (head ), fmap_List_char_List_char_Pure (atob , tail )) : ({ /* cicili#Let4001 */
            // ----------
            /* cicili#Block4003 */
            Empty_char ();
          }));
      });
    });
}
List_Bool fmap_List_char_List_Bool_Pure (Bool (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let4017 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block4019 */
      ({ /* cicili#Let4021 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_char_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let4031 */
            // ----------
            /* cicili#Block4033 */
            Empty_Bool ();
          }));
      });
    });
}
