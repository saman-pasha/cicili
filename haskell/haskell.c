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
  { /* cicili#Let1140 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1144 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1146 */
      ({ /* cicili#Let1148 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1151 */
            printf ("destructuring List: %p\n", this );
            free_List_Bool ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_Bool Empty_Bool () {
  { /* cicili#Let1156 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let1160 */
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
    { /* cicili#Let1169 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1183 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1185 */
      ({ /* cicili#Let1187 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1191 */
            // ----------
            /* cicili#Block1193 */
            Empty_Bool ();
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let1201 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1203 */
      ({ /* cicili#Let1205 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let1212 */
            // ----------
            /* cicili#Block1214 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1222 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1224 */
        ({ /* cicili#Let1226 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let1231 */
              // ----------
              /* cicili#Block1233 */
              Empty_Bool ();
            }));
        });
      }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1240 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1242 */
      ({ /* cicili#Let1244 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let1249 */
            // ----------
            /* cicili#Block1251 */
            0;
          }));
      });
    });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let1257 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1259 */
      ({ /* cicili#Let1261 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let1267 */
            // ----------
            /* cicili#Block1269 */
            0;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let1275 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1277 */
      ({ /* cicili#Let1279 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1291 */
            // ----------
            /* cicili#Block1293 */
            Empty_Bool ();
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1300 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1302 */
      ({ /* cicili#Let1304 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (head , append_List_Bool (tail , rlist )) : ({ /* cicili#Let1316 */
            // ----------
            /* cicili#Block1318 */
            rlist ;
          }));
      });
    });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1324 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1326 */
    ({ /* cicili#Let1328 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1331 */
          { /* cicili#Let1335 */
            // ----------
            /* cicili#Block1337 */
            ({ /* cicili#Let1339 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1342 */
                  printf ("%s", ({ /* cicili#Let1349 */
                      // ----------
                      /* cicili#Block1351 */
                      ({ /* cicili#Let1353 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1357 */
                            // ----------
                            /* cicili#Block1359 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1364 */
                  // ----------
                  /* cicili#Block1366 */
                  printf ("%s", ({ /* cicili#Let1373 */
                      // ----------
                      /* cicili#Block1375 */
                      ({ /* cicili#Let1377 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let1381 */
                            // ----------
                            /* cicili#Block1383 */
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
  { /* cicili#Let1392 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1396 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1398 */
      ({ /* cicili#Let1400 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1403 */
            printf ("destructuring List: %p\n", this );
            free_List_int ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_int Empty_int () {
  { /* cicili#Let1408 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1412 */
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
    { /* cicili#Let1421 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1435 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1437 */
      ({ /* cicili#Let1439 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1443 */
            // ----------
            /* cicili#Block1445 */
            Empty_int ();
          }));
      });
    });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1453 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1455 */
      ({ /* cicili#Let1457 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1464 */
            // ----------
            /* cicili#Block1466 */
            Nothing_int ();
          }));
      });
    });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1474 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1476 */
        ({ /* cicili#Let1478 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1483 */
              // ----------
              /* cicili#Block1485 */
              Empty_int ();
            }));
        });
      }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1492 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1494 */
      ({ /* cicili#Let1496 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1501 */
            // ----------
            /* cicili#Block1503 */
            0;
          }));
      });
    });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1509 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1511 */
      ({ /* cicili#Let1513 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1519 */
            // ----------
            /* cicili#Block1521 */
            0;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1527 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1529 */
      ({ /* cicili#Let1531 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1543 */
            // ----------
            /* cicili#Block1545 */
            Empty_int ();
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1552 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1554 */
      ({ /* cicili#Let1556 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let1568 */
            // ----------
            /* cicili#Block1570 */
            rlist ;
          }));
      });
    });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1576 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1578 */
    ({ /* cicili#Let1580 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1583 */
          { /* cicili#Let1587 */
            // ----------
            /* cicili#Block1589 */
            ({ /* cicili#Let1591 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1594 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1602 */
                  // ----------
                  /* cicili#Block1604 */
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
  { /* cicili#Let1618 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1622 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1624 */
      ({ /* cicili#Let1626 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1629 */
            printf ("destructuring List: %p\n", this );
            free_List_char ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_char Empty_char () {
  { /* cicili#Let1634 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1638 */
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
    { /* cicili#Let1647 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1661 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1663 */
      ({ /* cicili#Let1665 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let1669 */
            // ----------
            /* cicili#Block1671 */
            Empty_char ();
          }));
      });
    });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1679 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1681 */
      ({ /* cicili#Let1683 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1690 */
            // ----------
            /* cicili#Block1692 */
            Nothing_char ();
          }));
      });
    });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1700 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block1702 */
        ({ /* cicili#Let1704 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1709 */
              // ----------
              /* cicili#Block1711 */
              Empty_char ();
            }));
        });
      }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1718 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1720 */
      ({ /* cicili#Let1722 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1727 */
            // ----------
            /* cicili#Block1729 */
            0;
          }));
      });
    });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1735 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1737 */
      ({ /* cicili#Let1739 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1745 */
            // ----------
            /* cicili#Block1747 */
            0;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1753 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1755 */
      ({ /* cicili#Let1757 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1769 */
            // ----------
            /* cicili#Block1771 */
            Empty_char ();
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1778 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1780 */
      ({ /* cicili#Let1782 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1794 */
            // ----------
            /* cicili#Block1796 */
            rlist ;
          }));
      });
    });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1802 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1804 */
    ({ /* cicili#Let1806 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1809 */
          { /* cicili#Let1813 */
            // ----------
            /* cicili#Block1815 */
            ({ /* cicili#Let1817 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1820 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1828 */
                  // ----------
                  /* cicili#Block1830 */
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
    { /* cicili#Let1842 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1856 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1858 */
    ({ /* cicili#Let1860 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1863 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let1875 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1879 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block1881 */
      ({ /* cicili#Let1883 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1886 */
            free_Range_int ((&tail ));
            free (this );
          }
      });
    }
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1891 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1895 */
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
  return ({ /* cicili#Let1913 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block1915 */
      ({ /* cicili#Let1917 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1928 */
            // ----------
            /* cicili#Block1930 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1937 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block1939 */
      ({ /* cicili#Let1941 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let1943 */
            __auto_type ne  = next_Range_int (list );
            // ----------
            ({ /* cicili#Let1948 */
              // ----------
              /* cicili#Block1950 */
              ({ /* cicili#Let1952 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1963 */
                    // ----------
                    /* cicili#Block1965 */
                    __h_Cons_Range_int_ctor (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let1975 */
            // ----------
            /* cicili#Block1977 */
            Empty_Range_int ();
          }));
      });
    });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1984 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1986 */
    ({ /* cicili#Let1988 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1993 */
          // ----------
          /* cicili#Block1995 */
          ({ /* cicili#Let1997 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block2000 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let2009 */
                // ----------
                /* cicili#Block2011 */
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
  { /* cicili#Let2070 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2074 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2076 */
      ({ /* cicili#Let2078 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2081 */
            printf ("destructuring List: %p\n", this );
            free_List_List_int ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_List_int Empty_List_int () {
  { /* cicili#Let2086 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let2090 */
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
    { /* cicili#Let2099 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2113 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2115 */
      ({ /* cicili#Let2117 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2121 */
            // ----------
            /* cicili#Block2123 */
            Empty_List_int ();
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let2131 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2133 */
      ({ /* cicili#Let2135 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let2142 */
            // ----------
            /* cicili#Block2144 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2152 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2154 */
        ({ /* cicili#Let2156 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let2161 */
              // ----------
              /* cicili#Block2163 */
              Empty_List_int ();
            }));
        });
      }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let2170 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2172 */
      ({ /* cicili#Let2174 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let2179 */
            // ----------
            /* cicili#Block2181 */
            0;
          }));
      });
    });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let2187 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2189 */
      ({ /* cicili#Let2191 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let2197 */
            // ----------
            /* cicili#Block2199 */
            0;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let2205 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2207 */
      ({ /* cicili#Let2209 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let2221 */
            // ----------
            /* cicili#Block2223 */
            Empty_List_int ();
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let2230 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2232 */
      ({ /* cicili#Let2234 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let2246 */
            // ----------
            /* cicili#Block2248 */
            rlist ;
          }));
      });
    });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let2254 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2256 */
    ({ /* cicili#Let2258 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2261 */
          { /* cicili#Let2265 */
            // ----------
            /* cicili#Block2267 */
            ({ /* cicili#Let2269 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2272 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2281 */
                  // ----------
                  /* cicili#Block2283 */
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
  { /* cicili#Let2296 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2300 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2302 */
      ({ /* cicili#Let2304 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2307 */
            printf ("destructuring List: %p\n", this );
            free_List_List_char ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_List_char Empty_List_char () {
  { /* cicili#Let2312 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let2316 */
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
    { /* cicili#Let2325 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2339 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2341 */
      ({ /* cicili#Let2343 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2347 */
            // ----------
            /* cicili#Block2349 */
            Empty_List_char ();
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2357 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2359 */
      ({ /* cicili#Let2361 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2368 */
            // ----------
            /* cicili#Block2370 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2378 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2380 */
        ({ /* cicili#Let2382 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2387 */
              // ----------
              /* cicili#Block2389 */
              Empty_List_char ();
            }));
        });
      }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2396 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2398 */
      ({ /* cicili#Let2400 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2405 */
            // ----------
            /* cicili#Block2407 */
            0;
          }));
      });
    });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2413 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2415 */
      ({ /* cicili#Let2417 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2423 */
            // ----------
            /* cicili#Block2425 */
            0;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2431 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2433 */
      ({ /* cicili#Let2435 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2447 */
            // ----------
            /* cicili#Block2449 */
            Empty_List_char ();
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2456 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2458 */
      ({ /* cicili#Let2460 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let2472 */
            // ----------
            /* cicili#Block2474 */
            rlist ;
          }));
      });
    });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2480 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2482 */
    ({ /* cicili#Let2484 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2487 */
          { /* cicili#Let2491 */
            // ----------
            /* cicili#Block2493 */
            ({ /* cicili#Let2495 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2498 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2507 */
                  // ----------
                  /* cicili#Block2509 */
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
  { /* cicili#Let2522 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2526 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2528 */
      ({ /* cicili#Let2530 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2533 */
            printf ("destructuring List: %p\n", this );
            free_List_String ((&tail ));
            free (this );
          }
      });
    }
  }
}
List_String Empty_String () {
  { /* cicili#Let2538 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2542 */
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
    { /* cicili#Let2551 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let2565 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2567 */
      ({ /* cicili#Let2569 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2573 */
            // ----------
            /* cicili#Block2575 */
            Empty_String ();
          }));
      });
    });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2583 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2585 */
      ({ /* cicili#Let2587 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2594 */
            // ----------
            /* cicili#Block2596 */
            Nothing_String ();
          }));
      });
    });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2604 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2606 */
        ({ /* cicili#Let2608 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2613 */
              // ----------
              /* cicili#Block2615 */
              Empty_String ();
            }));
        });
      }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2622 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2624 */
      ({ /* cicili#Let2626 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2631 */
            // ----------
            /* cicili#Block2633 */
            0;
          }));
      });
    });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2639 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2641 */
      ({ /* cicili#Let2643 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2649 */
            // ----------
            /* cicili#Block2651 */
            0;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2657 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2659 */
      ({ /* cicili#Let2661 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2673 */
            // ----------
            /* cicili#Block2675 */
            Empty_String ();
          }));
      });
    });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2682 */
      __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2684 */
      ({ /* cicili#Let2686 */
        bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let2698 */
            // ----------
            /* cicili#Block2700 */
            rlist ;
          }));
      });
    });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2706 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2708 */
    ({ /* cicili#Let2710 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2713 */
          { /* cicili#Let2717 */
            // ----------
            /* cicili#Block2719 */
            ({ /* cicili#Let2721 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2724 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2733 */
                  // ----------
                  /* cicili#Block2735 */
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
  union { /* ciciliUnion2752 */
    struct { /* ciciliStruct2753 */
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
  { /* cicili#Let2777 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn2779 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let2783 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block2785 */
        ({ /* cicili#Let2787 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block2792 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn2795 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn2797 */
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
  { /* cicili#Let2800 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ free_Rc_List_Bool , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let2809 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block2811 */
      ({ /* cicili#Let2813 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let2820 */
            // ----------
            /* cicili#Block2822 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let2831 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block2833 */
      ({ /* cicili#Let2835 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn2838 */
              (++(*count ));
              ({ /* cicili#Let2840 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let2850 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block2852 */
                  ({ /* cicili#Let2854 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let2859 */
            // ----------
            /* cicili#Block2861 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let2867 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let2869 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_Bool_ctor (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let2880 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block2882 */
          ({ /* cicili#Let2884 */
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
  union { /* ciciliUnion2897 */
    struct { /* ciciliStruct2898 */
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
  { /* cicili#Let2922 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn2924 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let2928 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block2930 */
        ({ /* cicili#Let2932 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block2937 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn2940 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn2942 */
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
  { /* cicili#Let2945 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ free_Rc_List_int , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let2954 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block2956 */
      ({ /* cicili#Let2958 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let2965 */
            // ----------
            /* cicili#Block2967 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let2976 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block2978 */
      ({ /* cicili#Let2980 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn2983 */
              (++(*count ));
              ({ /* cicili#Let2985 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let2995 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block2997 */
                  ({ /* cicili#Let2999 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3004 */
            // ----------
            /* cicili#Block3006 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let3012 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3014 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_int_ctor (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3025 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3027 */
          ({ /* cicili#Let3029 */
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
  union { /* ciciliUnion3042 */
    struct { /* ciciliStruct3043 */
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
  { /* cicili#Let3067 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3069 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3073 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3075 */
        ({ /* cicili#Let3077 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3082 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3085 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3087 */
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
  { /* cicili#Let3090 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ free_Rc_List_char , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3099 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3101 */
      ({ /* cicili#Let3103 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let3110 */
            // ----------
            /* cicili#Block3112 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let3121 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3123 */
      ({ /* cicili#Let3125 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3128 */
              (++(*count ));
              ({ /* cicili#Let3130 */
                __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3140 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3142 */
                  ({ /* cicili#Let3144 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3149 */
            // ----------
            /* cicili#Block3151 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let3157 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3159 */
        __auto_type cloned_rc  = __h_Keep_Rc_List_char_ctor (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3170 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3172 */
          ({ /* cicili#Let3174 */
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
  union { /* ciciliUnion3187 */
    struct { /* ciciliStruct3188 */
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
  { /* cicili#Let3212 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn3214 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let3218 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block3220 */
        ({ /* cicili#Let3222 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block3227 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn3230 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn3232 */
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
  { /* cicili#Let3235 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ free_Rc_String , __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let3244 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3246 */
      ({ /* cicili#Let3248 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let3255 */
            // ----------
            /* cicili#Block3257 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let3266 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block3268 */
      ({ /* cicili#Let3270 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn3273 */
              (++(*count ));
              ({ /* cicili#Let3275 */
                __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let3285 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block3287 */
                  ({ /* cicili#Let3289 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let3294 */
            // ----------
            /* cicili#Block3296 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let3302 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let3304 */
        __auto_type cloned_rc  = __h_Keep_Rc_String_ctor (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let3315 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block3317 */
          ({ /* cicili#Let3319 */
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
  return ({ /* cicili#Let3328 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3330 */
      ({ /* cicili#Let3332 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3337 */
            // ----------
            /* cicili#Block3339 */
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
  return ({ /* cicili#Let3438 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3440 */
      ({ /* cicili#Let3442 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3447 */
            // ----------
            /* cicili#Block3449 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let3464 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3466 */
      ({ /* cicili#Let3468 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let3473 */
            // ----------
            /* cicili#Block3475 */
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
  return ({ /* cicili#Let3651 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3653 */
      ({ /* cicili#Let3655 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int_Pure (atob , tail )) : ({ /* cicili#Let3664 */
            // ----------
            /* cicili#Block3666 */
            Empty_int ();
          }));
      });
    });
}
List_Bool fmap_List_int_List_Bool_Pure (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let3680 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3682 */
      ({ /* cicili#Let3684 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let3693 */
            // ----------
            /* cicili#Block3695 */
            Empty_Bool ();
          }));
      });
    });
}
List_char fmap_List_char_List_char_Pure (char (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let3709 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3711 */
      ({ /* cicili#Let3713 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_char_ctor (atob (head ), fmap_List_char_List_char_Pure (atob , tail )) : ({ /* cicili#Let3722 */
            // ----------
            /* cicili#Block3724 */
            Empty_char ();
          }));
      });
    });
}
List_Bool fmap_List_char_List_Bool_Pure (Bool (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let3738 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block3740 */
      ({ /* cicili#Let3742 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_char_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let3751 */
            // ----------
            /* cicili#Block3753 */
            Empty_Bool ();
          }));
      });
    });
}
