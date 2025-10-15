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
  ((void (*)(void * this ))(*(*instance )))((*(*instance )));
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
void free_List_Bool (List_Bool this ) {
  { /* cicili#Let952 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block954 */
    ({ /* cicili#Let956 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block959 */
          printf ("%s", ({ /* cicili#Let966 */
            // ----------
            /* cicili#Block968 */
            ({ /* cicili#Let970 */
              bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
              // ----------
              ((__h_case_result ) ? "True" : ({ /* cicili#Let974 */
                // ----------
                /* cicili#Block976 */
                "False";
              }));
            });
          }));
          free_List_Bool (tail );
          free (this );
        }
    });
  }
}
List_Bool Empty_Bool () {
  { /* cicili#Let981 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ free_List_Bool , __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let985 */
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
    { /* cicili#Let994 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1008 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1010 */
    ({ /* cicili#Let1012 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1016 */
        // ----------
        /* cicili#Block1018 */
        Empty_Bool ();
      }));
    });
  });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let1026 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1028 */
    ({ /* cicili#Let1030 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let1037 */
        // ----------
        /* cicili#Block1039 */
        Nothing_Bool ();
      }));
    });
  });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1047 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1049 */
      ({ /* cicili#Let1051 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let1056 */
          // ----------
          /* cicili#Block1058 */
          Empty_Bool ();
        }));
      });
    }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let1065 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1067 */
    ({ /* cicili#Let1069 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let1074 */
        // ----------
        /* cicili#Block1076 */
        0;
      }));
    });
  });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let1082 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1084 */
    ({ /* cicili#Let1086 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let1092 */
        // ----------
        /* cicili#Block1094 */
        0;
      }));
    });
  });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let1100 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1102 */
    ({ /* cicili#Let1104 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1116 */
        // ----------
        /* cicili#Block1118 */
        Empty_Bool ();
      }));
    });
  });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1125 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1127 */
    ({ /* cicili#Let1129 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , append_List_Bool (tail , rlist )) : ({ /* cicili#Let1141 */
        // ----------
        /* cicili#Block1143 */
        rlist ;
      }));
    });
  });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1149 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1151 */
    ({ /* cicili#Let1153 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1156 */
          { /* cicili#Let1160 */
            // ----------
            /* cicili#Block1162 */
            ({ /* cicili#Let1164 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1167 */
                  printf ("%s", ({ /* cicili#Let1174 */
                    // ----------
                    /* cicili#Block1176 */
                    ({ /* cicili#Let1178 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1182 */
                        // ----------
                        /* cicili#Block1184 */
                        "False";
                      }));
                    });
                  }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1189 */
                  // ----------
                  /* cicili#Block1191 */
                  printf ("%s", ({ /* cicili#Let1198 */
                    // ----------
                    /* cicili#Block1200 */
                    ({ /* cicili#Let1202 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1206 */
                        // ----------
                        /* cicili#Block1208 */
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
void free_Maybe_int (Maybe_int * this ) {
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ free_Maybe_int , __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ free_Maybe_int , __h___t , .__h_data._ = { value }});
}
void free_List_int (List_int this ) {
  { /* cicili#Let1231 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1233 */
    ({ /* cicili#Let1235 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1238 */
          printf ("%d", head );
          free_List_int (tail );
          free (this );
        }
    });
  }
}
List_int Empty_int () {
  { /* cicili#Let1246 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ free_List_int , __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1250 */
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
    { /* cicili#Let1259 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1273 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1275 */
    ({ /* cicili#Let1277 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1281 */
        // ----------
        /* cicili#Block1283 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1291 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1293 */
    ({ /* cicili#Let1295 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1302 */
        // ----------
        /* cicili#Block1304 */
        Nothing_int ();
      }));
    });
  });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1312 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1314 */
      ({ /* cicili#Let1316 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1321 */
          // ----------
          /* cicili#Block1323 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1330 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1332 */
    ({ /* cicili#Let1334 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1339 */
        // ----------
        /* cicili#Block1341 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1347 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1349 */
    ({ /* cicili#Let1351 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1357 */
        // ----------
        /* cicili#Block1359 */
        0;
      }));
    });
  });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1365 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1367 */
    ({ /* cicili#Let1369 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1381 */
        // ----------
        /* cicili#Block1383 */
        Empty_int ();
      }));
    });
  });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1390 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1392 */
    ({ /* cicili#Let1394 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let1406 */
        // ----------
        /* cicili#Block1408 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1414 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1416 */
    ({ /* cicili#Let1418 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1421 */
          { /* cicili#Let1425 */
            // ----------
            /* cicili#Block1427 */
            ({ /* cicili#Let1429 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1432 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1440 */
                  // ----------
                  /* cicili#Block1442 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
void free_Maybe_char (Maybe_char * this ) {
}
Maybe_char Nothing_char () {
  return ((Maybe_char){ free_Maybe_char , __h_Nothing_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ free_Maybe_char , __h___t , .__h_data._ = { value }});
}
void free_List_char (List_char this ) {
  { /* cicili#Let1470 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1472 */
    ({ /* cicili#Let1474 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1477 */
          printf ("%c", head );
          free_List_char (tail );
          free (this );
        }
    });
  }
}
List_char Empty_char () {
  { /* cicili#Let1485 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ free_List_char , __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1489 */
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
    { /* cicili#Let1498 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1512 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1514 */
    ({ /* cicili#Let1516 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1520 */
        // ----------
        /* cicili#Block1522 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1530 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1532 */
    ({ /* cicili#Let1534 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1541 */
        // ----------
        /* cicili#Block1543 */
        Nothing_char ();
      }));
    });
  });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1551 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1553 */
      ({ /* cicili#Let1555 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1560 */
          // ----------
          /* cicili#Block1562 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1569 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1571 */
    ({ /* cicili#Let1573 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1578 */
        // ----------
        /* cicili#Block1580 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1586 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1588 */
    ({ /* cicili#Let1590 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1596 */
        // ----------
        /* cicili#Block1598 */
        0;
      }));
    });
  });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1604 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1606 */
    ({ /* cicili#Let1608 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1620 */
        // ----------
        /* cicili#Block1622 */
        Empty_char ();
      }));
    });
  });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1629 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1631 */
    ({ /* cicili#Let1633 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1645 */
        // ----------
        /* cicili#Block1647 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1653 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1655 */
    ({ /* cicili#Let1657 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1660 */
          { /* cicili#Let1664 */
            // ----------
            /* cicili#Block1666 */
            ({ /* cicili#Let1668 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1671 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1679 */
                  // ----------
                  /* cicili#Block1681 */
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
    { /* cicili#Let1693 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1707 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1709 */
    ({ /* cicili#Let1711 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1714 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void free_Range_int (Range_int this ) {
  { /* cicili#Let1728 */
    __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1730 */
    ({ /* cicili#Let1732 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1735 */
          free_Range_int (tail );
          free (this );
        }
    });
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1740 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ free_Range_int , __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1744 */
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
  return ({ /* cicili#Let1762 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1764 */
    ({ /* cicili#Let1766 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1777 */
        // ----------
        /* cicili#Block1779 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1786 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1788 */
    ({ /* cicili#Let1790 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1792 */
        __auto_type ne  = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1797 */
          // ----------
          /* cicili#Block1799 */
          ({ /* cicili#Let1801 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1812 */
              // ----------
              /* cicili#Block1814 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let1824 */
        // ----------
        /* cicili#Block1826 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1833 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1835 */
    ({ /* cicili#Let1837 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1842 */
          // ----------
          /* cicili#Block1844 */
          ({ /* cicili#Let1846 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1849 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1858 */
                // ----------
                /* cicili#Block1860 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
void free_Maybe_List_int (Maybe_List_int * this ) {
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ free_Maybe_List_int , __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ free_Maybe_List_int , __h___t , .__h_data._ = { value }});
}
void free_List_List_int (List_List_int this ) {
  { /* cicili#Let1885 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1887 */
    ({ /* cicili#Let1889 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1892 */
          show_List_int (head );
          free_List_List_int (tail );
          free (this );
        }
    });
  }
}
List_List_int Empty_List_int () {
  { /* cicili#Let1901 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ free_List_List_int , __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let1905 */
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
    { /* cicili#Let1914 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1928 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1930 */
    ({ /* cicili#Let1932 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1936 */
        // ----------
        /* cicili#Block1938 */
        Empty_List_int ();
      }));
    });
  });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let1946 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1948 */
    ({ /* cicili#Let1950 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let1957 */
        // ----------
        /* cicili#Block1959 */
        Nothing_List_int ();
      }));
    });
  });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1967 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1969 */
      ({ /* cicili#Let1971 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let1976 */
          // ----------
          /* cicili#Block1978 */
          Empty_List_int ();
        }));
      });
    }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1985 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1987 */
    ({ /* cicili#Let1989 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let1994 */
        // ----------
        /* cicili#Block1996 */
        0;
      }));
    });
  });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let2002 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2004 */
    ({ /* cicili#Let2006 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let2012 */
        // ----------
        /* cicili#Block2014 */
        0;
      }));
    });
  });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let2020 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2022 */
    ({ /* cicili#Let2024 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let2036 */
        // ----------
        /* cicili#Block2038 */
        Empty_List_int ();
      }));
    });
  });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let2045 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2047 */
    ({ /* cicili#Let2049 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let2061 */
        // ----------
        /* cicili#Block2063 */
        rlist ;
      }));
    });
  });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let2069 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2071 */
    ({ /* cicili#Let2073 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2076 */
          { /* cicili#Let2080 */
            // ----------
            /* cicili#Block2082 */
            ({ /* cicili#Let2084 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2087 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2096 */
                  // ----------
                  /* cicili#Block2098 */
                  show_List_int (head );
                }
            });
          }
          show_List_List_int (tail );
        }
    });
  }
}
void free_Maybe_List_char (Maybe_List_char * this ) {
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ free_Maybe_List_char , __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ free_Maybe_List_char , __h___t , .__h_data._ = { value }});
}
void free_List_List_char (List_List_char this ) {
  { /* cicili#Let2125 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2127 */
    ({ /* cicili#Let2129 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2132 */
          show_List_char (head );
          free_List_List_char (tail );
          free (this );
        }
    });
  }
}
List_List_char Empty_List_char () {
  { /* cicili#Let2141 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ free_List_List_char , __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let2145 */
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
    { /* cicili#Let2154 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2168 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2170 */
    ({ /* cicili#Let2172 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2176 */
        // ----------
        /* cicili#Block2178 */
        Empty_List_char ();
      }));
    });
  });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2186 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2188 */
    ({ /* cicili#Let2190 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2197 */
        // ----------
        /* cicili#Block2199 */
        Nothing_List_char ();
      }));
    });
  });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2207 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2209 */
      ({ /* cicili#Let2211 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2216 */
          // ----------
          /* cicili#Block2218 */
          Empty_List_char ();
        }));
      });
    }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2225 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2227 */
    ({ /* cicili#Let2229 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2234 */
        // ----------
        /* cicili#Block2236 */
        0;
      }));
    });
  });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2242 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2244 */
    ({ /* cicili#Let2246 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2252 */
        // ----------
        /* cicili#Block2254 */
        0;
      }));
    });
  });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2260 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2262 */
    ({ /* cicili#Let2264 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2276 */
        // ----------
        /* cicili#Block2278 */
        Empty_List_char ();
      }));
    });
  });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2285 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2287 */
    ({ /* cicili#Let2289 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let2301 */
        // ----------
        /* cicili#Block2303 */
        rlist ;
      }));
    });
  });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2309 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2311 */
    ({ /* cicili#Let2313 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2316 */
          { /* cicili#Let2320 */
            // ----------
            /* cicili#Block2322 */
            ({ /* cicili#Let2324 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2327 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2336 */
                  // ----------
                  /* cicili#Block2338 */
                  show_List_char (head );
                }
            });
          }
          show_List_List_char (tail );
        }
    });
  }
}
void free_Maybe_String (Maybe_String * this ) {
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ free_Maybe_String , __h_Nothing_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ free_Maybe_String , __h___t , .__h_data._ = { value }});
}
void free_List_String (List_String this ) {
  { /* cicili#Let2365 */
    __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2367 */
    ({ /* cicili#Let2369 */
      bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2372 */
          show_List_char (head );
          free_List_String (tail );
          free (this );
        }
    });
  }
}
List_String Empty_String () {
  { /* cicili#Let2381 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ free_List_String , __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2385 */
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
    { /* cicili#Let2394 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String next_List_String (List_String list ) {
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
        Empty_String ();
      }));
    });
  });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2426 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2428 */
    ({ /* cicili#Let2430 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2437 */
        // ----------
        /* cicili#Block2439 */
        Nothing_String ();
      }));
    });
  });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2447 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2449 */
      ({ /* cicili#Let2451 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2456 */
          // ----------
          /* cicili#Block2458 */
          Empty_String ();
        }));
      });
    }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2465 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2467 */
    ({ /* cicili#Let2469 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2474 */
        // ----------
        /* cicili#Block2476 */
        0;
      }));
    });
  });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2482 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2484 */
    ({ /* cicili#Let2486 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2492 */
        // ----------
        /* cicili#Block2494 */
        0;
      }));
    });
  });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2500 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2502 */
    ({ /* cicili#Let2504 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2516 */
        // ----------
        /* cicili#Block2518 */
        Empty_String ();
      }));
    });
  });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2525 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2527 */
    ({ /* cicili#Let2529 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let2541 */
        // ----------
        /* cicili#Block2543 */
        rlist ;
      }));
    });
  });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2549 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2551 */
    ({ /* cicili#Let2553 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2556 */
          { /* cicili#Let2560 */
            // ----------
            /* cicili#Block2562 */
            ({ /* cicili#Let2564 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2567 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2576 */
                  // ----------
                  /* cicili#Block2578 */
                  show_List_char (head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let2591 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2593 */
    ({ /* cicili#Let2595 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2600 */
        // ----------
        /* cicili#Block2602 */
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
  return ({ /* cicili#Let2695 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2697 */
    ({ /* cicili#Let2699 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2704 */
        // ----------
        /* cicili#Block2706 */
        neutral ;
      }));
    });
  });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let2721 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2723 */
    ({ /* cicili#Let2725 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2730 */
        // ----------
        /* cicili#Block2732 */
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
  return ({ /* cicili#Let2896 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2898 */
    ({ /* cicili#Let2900 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int_Pure (atob , tail )) : ({ /* cicili#Let2909 */
        // ----------
        /* cicili#Block2911 */
        Empty_int ();
      }));
    });
  });
}
List_Bool fmap_List_int_List_Bool_Pure (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let2925 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2927 */
    ({ /* cicili#Let2929 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let2938 */
        // ----------
        /* cicili#Block2940 */
        Empty_Bool ();
      }));
    });
  });
}
List_char fmap_List_char_List_char_Pure (char (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2954 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2956 */
    ({ /* cicili#Let2958 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (atob (head ), fmap_List_char_List_char_Pure (atob , tail )) : ({ /* cicili#Let2967 */
        // ----------
        /* cicili#Block2969 */
        Empty_char ();
      }));
    });
  });
}
List_Bool fmap_List_char_List_Bool_Pure (Bool (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2983 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2985 */
    ({ /* cicili#Let2987 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_char_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let2996 */
        // ----------
        /* cicili#Block2998 */
        Empty_Bool ();
      }));
    });
  });
}
